#include "PGLZoneGraphSettingsNode.h"
#include "PCGParamData.h"
#include "PCGContext.h"
#include "PCGComponent.h"
#include "Metadata/PCGMetadata.h"
#include "ZoneGraphSettings.h"

#define LOCTEXT_NAMESPACE "PGLZoneGraphSettingsNode"




TArray<FPCGPinProperties> UPGLZoneGraphSettingsNode::InputPinProperties() const
{
    // This node does not have input pins
    return TArray<FPCGPinProperties>();
}

TArray<FPCGPinProperties> UPGLZoneGraphSettingsNode::OutputPinProperties() const
{
    TArray<FPCGPinProperties> Pins;
    

        Pins.Emplace(TEXT("LaneProfiles"), EPCGDataType::Param);
        Pins.Emplace(TEXT("Tags"), EPCGDataType::Param);
    

    return Pins;
}


FPCGElementPtr UPGLZoneGraphSettingsNode::CreateElement() const
{
    return MakeShared<FPGLZoneGraphSettingsElement>();
}

#undef LOCTEXT_NAMESPACE

// Element implementation
   bool FPGLZoneGraphSettingsElement::ExecuteInternal(FPCGContext* Context)  const
    {
        TRACE_CPUPROFILER_EVENT_SCOPE(FPGLZoneGraphSettingsElement::Execute);

        check(Context);
        const UPGLZoneGraphSettingsNode* Settings = Context->GetInputSettings<UPGLZoneGraphSettingsNode>();
        check(Settings);

        const UZoneGraphSettings* ZoneGraphSettings = GetDefault<UZoneGraphSettings>();
        check(ZoneGraphSettings);


            const TArray<FZoneLaneProfile>& LaneProfiles = ZoneGraphSettings->GetLaneProfiles();
        // Create and populate PCGParamData with lane profiles
        UPCGParamData* LaneProfileData = NewObject<UPCGParamData>();
        UPCGMetadata* Metadata = LaneProfileData->MutableMetadata();

        // Create attributes for Name and TotalWidth
        FPCGMetadataAttribute<FName>* LaneProfileName = LaneProfileData->Metadata->CreateAttribute<FName>(TEXT("LaneProfileName"), FName(),true,true);
        FPCGMetadataAttribute<float>* LaneWidth = Metadata->CreateAttribute<float>(TEXT("LaneProfileWidth"), 0.0f,true,true);
        FPCGMetadataAttribute<FString>* LaneProfileID = Metadata->CreateAttribute<FString>(TEXT("LaneProfileID"), "None", false, true);

        // Add entries for each lane profile
        for (const FZoneLaneProfile& LaneProfile : LaneProfiles)
        {
        // Calculate total width of lanes in the profile
        float TotalWidth = 0.0f;
        for (const FZoneLaneDesc& Lane : LaneProfile.Lanes)
        {
            TotalWidth += Lane.Width;
        }

        // Add metadata entry
            const PCGMetadataEntryKey EntryKey = Metadata->AddEntry();
            LaneProfileName->SetValue(EntryKey, LaneProfile.Name);
            LaneWidth->SetValue(EntryKey, TotalWidth);
            LaneProfileID->SetValue(EntryKey, LaneProfile.ID.ToString());
        }

    TArray<FZoneGraphTagInfo> Tags;
    ZoneGraphSettings->GetValidTagInfos(Tags);

    // Create and populate PCGParamData with tags
    UPCGParamData* TagData = NewObject<UPCGParamData>();
    UPCGMetadata* Metadata1 = TagData->MutableMetadata();

    // Create attribute for Tag Name
    FPCGMetadataAttribute<FName>* TagNameAttribute = Metadata1->CreateAttribute<FName>(TEXT("TagName"), FName(),true,true);

    // Add entries for each tag
    for (const FZoneGraphTagInfo& TagInfo : Tags)
    {
        if (!TagInfo.IsValid())
        {
            continue;
        }

        // Add metadata entry for valid tags
        const PCGMetadataEntryKey EntryKey = Metadata1->AddEntry();
        TagNameAttribute->SetValue(EntryKey, TagInfo.Name);
    }

    FPCGTaggedData& TaggedData = Context->OutputData.TaggedData.Emplace_GetRef();
    TaggedData.Data = LaneProfileData;
    TaggedData.Pin = "LaneProfiles";

    FPCGTaggedData& TaggedData1 = Context->OutputData.TaggedData.Emplace_GetRef();
    TaggedData1.Data = TagData;
    TaggedData1.Pin = "Tags";



        return true;
    }

