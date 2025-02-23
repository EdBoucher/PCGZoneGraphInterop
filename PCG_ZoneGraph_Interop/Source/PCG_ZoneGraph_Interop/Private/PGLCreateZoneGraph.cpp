#include "PGLCreateZoneGraph.h"

#include "PCGCommon.h"
#include "PCGComponent.h"
#include "PCGContext.h"
#include "PCGManagedResource.h"
#include "PCGPin.h"
#include "ZoneGraphSettings.h"
#include "Data/PCGPointData.h"
#include "Data/PCGSplineData.h"
#include "Helpers/PCGActorHelpers.h"
#include "Helpers/PCGHelpers.h"
#include "Metadata/PCGMetadata.h"
#include "Metadata/PCGMetadataAttributeTpl.h"

#include "Components/SplineComponent.h"
#include "ZoneShapeComponent.h"
#include "Engine/World.h"
#include "Math/UnitConversion.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PGLCreateZoneGraph)

#define LOCTEXT_NAMESPACE "PGLCreateZoneGraph"

UPGLCreateZoneGraphSettings::UPGLCreateZoneGraphSettings(const FObjectInitializer& ObjectInitializer)
    : UPCGSettings(ObjectInitializer)
{
    if (PCGHelpers::IsNewObjectAndNotDefault(this))
    {
        AttachOptions = EPCGAttachOptions::InFolder;
    }
}

TArray<FPCGPinProperties> UPGLCreateZoneGraphSettings::OutputPinProperties() const
{
    TArray<FPCGPinProperties> PinProperties;
    PinProperties.Emplace(PCGPinConstants::DefaultOutputLabel, EPCGDataType::Spline);

    return PinProperties;
}

FPCGElementPtr UPGLCreateZoneGraphSettings::CreateElement() const
{
    return MakeShared<FPGLCreateZoneGraphElement>();
}

bool FPGLCreateZoneGraphElement::ExecuteInternal(FPCGContext* Context) const
{
    TRACE_CPUPROFILER_EVENT_SCOPE(FPGLCreateZoneGraphElement::Execute);

    const UPGLCreateZoneGraphSettings* Settings = Context->GetInputSettings<UPGLCreateZoneGraphSettings>();
    check(Settings);

    TArray<FPCGTaggedData> Inputs = Context->InputData.GetInputs();
    TArray<FPCGTaggedData>& Outputs = Context->OutputData.TaggedData;
    

    TArray<FString> TagsToAddArray;

    for (const FPCGTaggedData& Input : Inputs)
    {
        const UPCGSpatialData* SpatialData = Cast<UPCGSpatialData>(Input.Data);

        for (const FString& Tag : Input.Tags)
        {
            TagsToAddArray.Add(Tag);
        }

        if (!SpatialData)
        {
            PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidInputData", "Invalid input data"));
            continue;
        }

        AActor* TargetActor = Settings->TargetActor.Get() ? Settings->TargetActor.Get() : Context->GetTargetActor(nullptr);
        if (!TargetActor)
        {
            PCGE_LOG(Error, GraphAndLog, LOCTEXT("InvalidTargetActor", "Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."));
            continue;
        }

        const UPCGPointData* PointData = SpatialData->ToPointData(Context);

        if (!PointData)
        {
            PCGE_LOG(Error, GraphAndLog, LOCTEXT("UnableToGetPointData", "Unable to get point data from input"));
            continue;
        }

        const FPCGMetadataAttribute<FVector>* ArriveTangentAttribute = nullptr;
        const FPCGMetadataAttribute<FVector>* LeaveTangentAttribute = nullptr;

        if (Settings->bApplyCustomTangents)
        {
            const UPCGMetadata* PointMetadata = PointData->ConstMetadata();
            check(PointMetadata);

            FName LocalArriveTangentName = ((Settings->ArriveTangentAttribute == NAME_None) ? PointMetadata->GetLatestAttributeNameOrNone() : Settings->ArriveTangentAttribute);
            FName LocalLeaveTangentName = ((Settings->LeaveTangentAttribute == NAME_None) ? PointMetadata->GetLatestAttributeNameOrNone() : Settings->LeaveTangentAttribute);

            const FText AttributeMissingOrNotVector = LOCTEXT("AttributeMissingOrNotVector", "Attribute '{0}' does not exist or is not a vector");

            const FPCGMetadataAttributeBase* ArriveTangentBaseAttribute = PointMetadata->GetConstAttribute(LocalArriveTangentName);
            if (!ArriveTangentBaseAttribute || ArriveTangentBaseAttribute->GetTypeId() != PCG::Private::MetadataTypes<FVector>::Id)
            {
                PCGE_LOG(Error, GraphAndLog, FText::Format(AttributeMissingOrNotVector, FText::FromString(LocalArriveTangentName.ToString())));
                continue;
            }

            const FPCGMetadataAttributeBase* LeaveTangentBaseAttribute = PointMetadata->GetConstAttribute(LocalLeaveTangentName);
            if (!LeaveTangentBaseAttribute || LeaveTangentBaseAttribute->GetTypeId() != PCG::Private::MetadataTypes<FVector>::Id)
            {
                PCGE_LOG(Error, GraphAndLog, FText::Format(AttributeMissingOrNotVector, FText::FromString(LocalLeaveTangentName.ToString())));
                continue;
            }

            ArriveTangentAttribute = static_cast<const FPCGMetadataAttribute<FVector>*>(ArriveTangentBaseAttribute);
            LeaveTangentAttribute = static_cast<const FPCGMetadataAttribute<FVector>*>(LeaveTangentBaseAttribute);
        }

        
            // Map PCGPoints to ZoneShapePoints and set the Points property on the component
            TArray<FZoneShapePoint> ZoneShapePoints;
            const TArray<FPCGPoint>& Points = PointData->GetPoints();
            const FTransform& ActorTransform = TargetActor->GetTransform();
            for (const FPCGPoint& Point : Points)
            {
                FZoneShapePoint ZonePoint;
                ZonePoint.Position = ActorTransform.InverseTransformPosition(Point.Transform.GetLocation()); // Transform to actor's local space
                ZoneShapePoints.Add(ZonePoint);
            }

            if (ZoneShapePoints.Num() <= 1)
            {
                PCGE_LOG(Error, GraphAndLog, LOCTEXT("NotEnoughPoints", "ZoneShapeComponent requires at least two points."));
                continue;
            }

            // Code to create and register a ZoneGraph component
            UZoneShapeComponent* ZoneGraphComponent = NewObject<UZoneShapeComponent>(TargetActor);
            ZoneGraphComponent->GetMutablePoints().Empty();
            ZoneGraphComponent->GetMutablePoints().Append(ZoneShapePoints); // Update points
            ZoneGraphComponent->RegisterComponent();
            TargetActor->AddInstanceComponent(ZoneGraphComponent);
            ZoneGraphComponent->AttachToComponent(TargetActor->GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);

            TConstArrayView<FZoneGraphTagInfo> AllTags = GetDefault<UZoneGraphSettings>()->GetTagInfos();
            TArray<FZoneLaneProfile> ZoneGraphLanes = GetDefault<UZoneGraphSettings>()->GetLaneProfiles();
        

            // Add tags to the component and to the ZoneShapeTags
            for (const FString& Tag : TagsToAddArray)
            {
                if (!Tag.IsEmpty())
                {
                    ZoneGraphComponent->ComponentTags.Add(*Tag);
                    for (const FZoneGraphTagInfo& TagInfos : AllTags)
                    {
                        if (TagInfos.Name == Tag)
                        {
                
                            ZoneGraphComponent->GetMutableTags().Add(TagInfos.Tag);
                        }
                    for (const FZoneLaneProfile& Lanes : ZoneGraphLanes)
                    {
                        if (Lanes.Name == Tag)
                        {
                            ZoneGraphComponent->SetCommonLaneProfile(Lanes);
                        }
                    }

                    }
                    
                }
            }

            // Add the ZoneGraphComponent to the managed resources
            UPCGManagedComponent* ManagedComponent = NewObject<UPCGManagedComponent>(Context->SourceComponent.Get());
            ManagedComponent->GeneratedComponent = ZoneGraphComponent;
            Context->SourceComponent->AddToManagedResources(ManagedComponent);

            
            UPCGSplineData* SplineData = NewObject<UPCGSplineData>();
            const FTransform SplineActorTransform = TargetActor->GetTransform();
            TArray<FSplinePoint> SplinePoints;
            SplinePoints.Reserve(Points.Num());
            
            ESplinePointType::Type PointType = ESplinePointType::Curve;
            if (Settings->bLinear)
            {
                PointType = ESplinePointType::Linear;
            }
            else if (Settings->bApplyCustomTangents)
            {
                PointType = ESplinePointType::CurveCustomTangent;
            }
            
            for (int32 PointIndex = 0; PointIndex < Points.Num(); ++PointIndex)
            {
                const FPCGPoint& Point = Points[PointIndex];
                const FTransform& PointTransform = Point.Transform;
                
                const FVector LocalPosition = PointTransform.GetLocation() - SplineActorTransform.GetLocation();

                SplinePoints.Emplace(static_cast<float>(PointIndex),
                    LocalPosition,
                    ArriveTangentAttribute ? ArriveTangentAttribute->GetValueFromItemKey(Point.MetadataEntry) : FVector::ZeroVector,
                    LeaveTangentAttribute ? LeaveTangentAttribute->GetValueFromItemKey(Point.MetadataEntry) : FVector::ZeroVector,
                    PointTransform.GetRotation().Rotator(),
                    PointTransform.GetScale3D(),
                    PointType);
            }
            SplineData->Initialize(SplinePoints, Settings->bClosedLoop, FTransform(SplineActorTransform.GetLocation()));
            FPCGTaggedData& Output = Outputs.Add_GetRef(Input);
            Output.Data = SplineData;
        
        ZoneGraphComponent->UpdateShape();
    TagsToAddArray.Empty();
    }

    Context->OutputData.TaggedData.Append(Context->InputData.GetAllSettings());

    return true;
}

#undef LOCTEXT_NAMESPACE
