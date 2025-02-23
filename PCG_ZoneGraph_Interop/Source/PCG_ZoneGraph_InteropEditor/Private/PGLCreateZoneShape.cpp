#include "PGLCreateZoneShape.h"
#include "PCGParamData.h"
#include "Data/PCGPointData.h"
#include "Metadata/PCGMetadata.h"
#include "PCGPin.h"
#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGCommon.h"
#include "PCGManagedResource.h"
#include "ZoneGraphSettings.h"
#include "Data/PCGSplineData.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/PCGMetadataAttributeTpl.h"
#include "ZoneShapeComponent.h"
#include "ZoneShapeBlueprintFunctionLibrary.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"


#define LOCTEXT_NAMESPACE "PGLCreateZoneShapeNode"

void SetPolygonPointLaneProfile(FZoneShapePoint& Point, UZoneShapeComponent* Polygon, FZoneLaneProfile LaneProfile)
{
    Point.Type = FZoneShapePointType::LaneProfile;
    const FZoneLaneProfileRef LaneProfileRef = LaneProfile;
    const int32 ProfileIndex = Polygon->AddUniquePerPointLaneProfile(LaneProfileRef);
    if (ProfileIndex != INDEX_NONE)
    {
        Point.LaneProfile = (uint8)ProfileIndex;
    }
}


FText UPGLCreateZoneShapeNode::GetNodeTooltipText() const
{
    return LOCTEXT("CreateZoneShapeTooltip", "Creates an n-gon zone shape based on the number of points in the input data and spawns actors for each.");
}



TArray<FPCGPinProperties> UPGLCreateZoneShapeNode::InputPinProperties() const
{
    TArray<FPCGPinProperties> Pins;

    // Define input pin properties for input data points
    Pins.Emplace(TEXT("Points"), EPCGDataType::Point);

    return Pins;
}

TArray<FPCGPinProperties> UPGLCreateZoneShapeNode::OutputPinProperties() const
{
    TArray<FPCGPinProperties> Pins;

    // This node outputs spatial data for the created n-gon shape
    Pins.Emplace(TEXT("ZoneShape"), EPCGDataType::Point);

    return Pins;
}

EPCGDataType UPGLCreateZoneShapeNode::GetCurrentPinTypes(const UPCGPin* InPin) const
{
    check(InPin);

    if (InPin->IsOutputPin())
    {
        return EPCGDataType::Spatial;
    }

    return InPin->Properties.AllowedTypes;
}


FPCGElementPtr UPGLCreateZoneShapeNode::CreateElement() const
{
    return MakeShared<FPGLCreateZoneShapeElement>();
}

#undef LOCTEXT_NAMESPACE

// Element implementation

bool FPGLCreateZoneShapeElement::ExecuteInternal(FPCGContext* Context) const 
    {
        TRACE_CPUPROFILER_EVENT_SCOPE(FPGLCreateZoneShapeElement::Execute);


        const UPGLCreateZoneShapeNode* Settings = Context->GetInputSettings<UPGLCreateZoneShapeNode>();
    



        // Retrieve input data points
    TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();

    UPCGPointData* OutputPointData = NewObject<UPCGPointData>();


        // Process each input point
        for (const FPCGTaggedData& Input : Inputs)
        {
            AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);
            if (!TargetActor)
            {
               
                continue;
            }

            const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Input.Data);
            const UPCGPointData* PointData = SpatialData->ToPointData(Context);
            OutputPointData->InitializeFromData(SpatialData);

            
            if (!PointData || PointData->GetPoints().Num() < 3) // Assuming at least 3 points are needed for a polygon
            {
                UE_LOG(LogTemp, Warning, TEXT("Invalid input data or not enough points, skipping this input."));
                continue;  // Invalid input data or not enough points, skip this input
            }

            const FTransform& ActorTransform = TargetActor->GetTransform();
            UWorld* World = Context->SourceComponent->GetWorld();
            if (World)
            {
               
                  // Replace with the actual actor class for your zone shape
                UZoneShapeComponent* IntersectionShapeComponent = NewObject<UZoneShapeComponent>(TargetActor);
                
                
                IntersectionShapeComponent->SetShapeType(FZoneShapeType::Polygon);
                

                TArray<FZoneShapePoint>& IntersectionShapePoints = IntersectionShapeComponent->GetMutablePoints();
                IntersectionShapePoints.Empty();
                FZoneShapePoint ZoneShapePoint;
                const TArray<FPCGPoint>& Points = PointData->GetPoints();
                FPCGPoint ZeroPoint = Points.Last();


                const UPCGMetadata* PointMetadata = PointData->ConstMetadata();

                const FPCGMetadataAttribute<FTransform>* IntersectionTransformAttribute = nullptr;

                const FPCGMetadataAttributeBase* CrossingTransformBaseAttribute = PointMetadata->GetConstAttribute(Settings->CrossingTransformAttributeName);
                IntersectionTransformAttribute = static_cast<const FPCGMetadataAttribute<FTransform>*>(CrossingTransformBaseAttribute);

                if (!IntersectionTransformAttribute)
                {
                    UE_LOG(LogTemp, Warning, TEXT("Attribute '%s' is not of type FTransform or does not exist, skipping this input."), *Settings->CrossingTransformAttributeName.ToString());
                    continue;  // Skip processing this input if the attribute is not of type FTransform
                }
                
                
                const FPCGMetadataAttribute<FName>* LaneProfileAttribute = nullptr;
                const FPCGMetadataAttribute<FString>* GUIDAttribute = nullptr;
                const FPCGMetadataAttribute<float>* LaneWidthAttribute = nullptr;

                FName LocalLaneProfileName = "LaneProfile";
                FName LocalGuidName = "LaneProfileID";
                FName LocalWidthName = "LaneProfileWidth";

                const FPCGMetadataAttributeBase* LaneProfileBaseAttribute = PointMetadata->GetConstAttribute(LocalLaneProfileName);
                const FPCGMetadataAttributeBase* LaneGUIDBaseAttribute = PointMetadata->GetConstAttribute(LocalGuidName);
                const FPCGMetadataAttributeBase* LaneWidthBaseAttribute = PointMetadata->GetConstAttribute(LocalWidthName);

                LaneProfileAttribute = static_cast<const FPCGMetadataAttribute<FName>*>(LaneProfileBaseAttribute);
                GUIDAttribute = static_cast<const FPCGMetadataAttribute<FString>*>(LaneGUIDBaseAttribute);
                LaneWidthAttribute = static_cast<const FPCGMetadataAttribute<float>*>(LaneWidthBaseAttribute);

                FTransform CrossingLocation = IntersectionTransformAttribute->GetValueFromItemKey(ZeroPoint.MetadataEntry);
                float LaneWidth = LaneWidthAttribute->GetValueFromItemKey(ZeroPoint.MetadataEntry);

                TArray<FVector> Vertices;
                for (const FPCGPoint& Point : Points)
                {
                    // Retrieve LaneWidth attribute

                    check(PointMetadata);
                    
                    FVector PointLocation = Point.Transform.GetLocation();
                    
                    FVector AwayDirection = (CrossingLocation.GetLocation() - PointLocation ).GetSafeNormal();

                    // Create a rotation that faces away from the IntersectionShapeActor
                    FRotator AwayRotation = AwayDirection.Rotation();

                     if (AwayRotation.Yaw > 0)
                     {
                         ZoneShapePoint.bReverseLaneProfile = true;
                     }
                    

                    FName LaneProfileName = LaneProfileAttribute ? LaneProfileAttribute->GetValueFromItemKey(Point.MetadataEntry) : "LaneProfile";
                    FString LaneProfileID = GUIDAttribute ? GUIDAttribute->GetValueFromItemKey(Point.MetadataEntry) : "LaneProfileID";

                    FGuid LaneProfileGuid;
                    if (!FGuid::Parse(LaneProfileID, LaneProfileGuid))
                    {
                        UE_LOG(LogTemp, Warning, TEXT("Failed to parse LaneProfileID from string: %s"), *LaneProfileID);
                        continue; // Skip if the GUID parsing fails
                    }

                    FZoneLaneProfile ZoneLaneProfile;
                    ZoneLaneProfile.Name = LaneProfileName;
                    ZoneLaneProfile.ID = LaneProfileGuid;
                    

                    ZoneShapePoint.Position = ActorTransform.InverseTransformPosition(Point.Transform.GetLocation());
                    ZoneShapePoint.Rotation = AwayRotation;
                    

                    SetPolygonPointLaneProfile(ZoneShapePoint,IntersectionShapeComponent,ZoneLaneProfile);
                    
                    IntersectionShapePoints.Add(ZoneShapePoint);
                    
                    float HalfWidth = LaneWidth / 2.0f;
                    

                    // Calculate left and right points from the original point's location and normal
                    FVector Location = Point.Transform.GetLocation();
                    FVector Normal = Point.Transform.GetRotation().GetForwardVector();  // Assume normal is the forward vector

                    FVector LeftPoint = Location - (Normal ^ FVector::UpVector) * HalfWidth;
                    FVector RightPoint = Location + (Normal ^ FVector::UpVector) * HalfWidth;

                    // Create the vertices array for the n-gon shape
                    
                    Vertices.Add(LeftPoint);
                    Vertices.Add(RightPoint);
                    
                }

                for (const FVector& Vertex : Vertices)
                {
                    FPCGPoint NewPoint; // Copy existing point data
                    NewPoint.Transform.SetLocation(Vertex);
                    OutputPointData->GetMutablePoints().Add(NewPoint);
                }

                UZoneShapeBlueprintFunctionLibrary::PGLSortPCGPointsCounterclockwise(OutputPointData->GetMutablePoints());
                IntersectionShapeComponent->RegisterComponent();
                TargetActor->AddInstanceComponent(IntersectionShapeComponent);
                UZoneShapeBlueprintFunctionLibrary::PGLSortPolygonPointsCounterclockwise(IntersectionShapeComponent);
                IntersectionShapeComponent->AttachToComponent(TargetActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
                UPCGManagedComponent* ManagedComponent = NewObject<UPCGManagedComponent>(Context->SourceComponent.Get());
                ManagedComponent->GeneratedComponent = IntersectionShapeComponent;
                Context->SourceComponent->AddToManagedResources(ManagedComponent);

                IntersectionShapeComponent->UpdateShape();
            }
        }

        // Create and populate PCGParamData with the n-gon shape

    FPCGTaggedData& OutputData = Context->OutputData.TaggedData.Emplace_GetRef();
    OutputData.Data = OutputPointData;
        // Output the created Zone Shape

        return true;
    
};
