// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_ZoneGraph_Interop/Public/ZoneGraphToPoints.h"
#include "PCG/Public/Elements/PCGActorSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphToPoints() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UScriptStruct* Z_Construct_UScriptStruct_FPCGActorSelectorSettings();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPCGZoneGraphToPointsSettings();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPCGZoneGraphToPointsSettings_NoRegister();
PCG_ZONEGRAPH_INTEROP_API UEnum* Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode();
UPackage* Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop();
// End Cross Module References

// Begin Enum EPCGGetZoneGraphToPointsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode;
static UEnum* EPCGGetZoneGraphToPointsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode, (UObject*)Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop(), TEXT("EPCGGetZoneGraphToPointsMode"));
	}
	return Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROP_API UEnum* StaticEnum<EPCGGetZoneGraphToPointsMode>()
{
	return EPCGGetZoneGraphToPointsMode_StaticEnum();
}
struct Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "GetDataFromPCGComponent.Name", "EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponent" },
		{ "GetDataFromPCGComponentOrParseComponents.Name", "EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponentOrParseComponents" },
		{ "GetDataFromProperty.Name", "EPCGGetZoneGraphToPointsMode::GetDataFromProperty" },
		{ "GetSinglePoint.Name", "EPCGGetZoneGraphToPointsMode::GetSinglePoint" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
		{ "ParseActorComponents.Name", "EPCGGetZoneGraphToPointsMode::ParseActorComponents" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPCGGetZoneGraphToPointsMode::ParseActorComponents", (int64)EPCGGetZoneGraphToPointsMode::ParseActorComponents },
		{ "EPCGGetZoneGraphToPointsMode::GetSinglePoint", (int64)EPCGGetZoneGraphToPointsMode::GetSinglePoint },
		{ "EPCGGetZoneGraphToPointsMode::GetDataFromProperty", (int64)EPCGGetZoneGraphToPointsMode::GetDataFromProperty },
		{ "EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponent", (int64)EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponent },
		{ "EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponentOrParseComponents", (int64)EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponentOrParseComponents },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop,
	nullptr,
	"EPCGGetZoneGraphToPointsMode",
	"EPCGGetZoneGraphToPointsMode",
	Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode()
{
	if (!Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.InnerSingleton, Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode.InnerSingleton;
}
// End Enum EPCGGetZoneGraphToPointsMode

// Begin Class UPCGZoneGraphToPointsSettings
void UPCGZoneGraphToPointsSettings::StaticRegisterNativesUPCGZoneGraphToPointsSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPCGZoneGraphToPointsSettings);
UClass* Z_Construct_UClass_UPCGZoneGraphToPointsSettings_NoRegister()
{
	return UPCGZoneGraphToPointsSettings::StaticClass();
}
struct Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of PCG-compatible data from the selected actors. */" },
		{ "IncludePath", "ZoneGraphToPoints.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
		{ "ToolTip", "Builds a collection of PCG-compatible data from the selected actors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorSelector_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "bDisplayModeSettings" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSinglePointData_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGGetZoneGraphToPointsMode::GetSinglePoint" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayModeSettings_MetaData[] = {
		{ "Comment", "// This can be set false by inheriting nodes to hide the 'Mode' property.\n" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
		{ "ToolTip", "This can be set false by inheriting nodes to hide the 'Mode' property." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedPins_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponent || Mode == EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponentOrParseComponents" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode == EPCGGetZoneGraphToPointsMode::GetDataFromProperty" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackActorsOnlyWithinBounds_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor. */" },
		{ "ModuleRelativePath", "Public/ZoneGraphToPoints.h" },
		{ "ToolTip", "If this is checked, found actors that are outside component bounds will not trigger a refresh. Only works for tags for now in editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorSelector;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
	static void NewProp_bMergeSinglePointData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSinglePointData;
	static void NewProp_bDisplayModeSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayModeSettings;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExpectedPins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpectedPins;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_EDITORONLY_DATA
	static void NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackActorsOnlyWithinBounds;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPCGZoneGraphToPointsSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ActorSelector = { "ActorSelector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGZoneGraphToPointsSettings, ActorSelector), Z_Construct_UScriptStruct_FPCGActorSelectorSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorSelector_MetaData), NewProp_ActorSelector_MetaData) }; // 1073175968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGZoneGraphToPointsSettings, Mode), Z_Construct_UEnum_PCG_ZoneGraph_Interop_EPCGGetZoneGraphToPointsMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mode_MetaData), NewProp_Mode_MetaData) }; // 3993244215
void Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bMergeSinglePointData_SetBit(void* Obj)
{
	((UPCGZoneGraphToPointsSettings*)Obj)->bMergeSinglePointData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bMergeSinglePointData = { "bMergeSinglePointData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGZoneGraphToPointsSettings), &Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bMergeSinglePointData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMergeSinglePointData_MetaData), NewProp_bMergeSinglePointData_MetaData) };
void Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bDisplayModeSettings_SetBit(void* Obj)
{
	((UPCGZoneGraphToPointsSettings*)Obj)->bDisplayModeSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bDisplayModeSettings = { "bDisplayModeSettings", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGZoneGraphToPointsSettings), &Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bDisplayModeSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayModeSettings_MetaData), NewProp_bDisplayModeSettings_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ExpectedPins_Inner = { "ExpectedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ExpectedPins = { "ExpectedPins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGZoneGraphToPointsSettings, ExpectedPins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedPins_MetaData), NewProp_ExpectedPins_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPCGZoneGraphToPointsSettings, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit(void* Obj)
{
	((UPCGZoneGraphToPointsSettings*)Obj)->bTrackActorsOnlyWithinBounds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds = { "bTrackActorsOnlyWithinBounds", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPCGZoneGraphToPointsSettings), &Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackActorsOnlyWithinBounds_MetaData), NewProp_bTrackActorsOnlyWithinBounds_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ActorSelector,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_Mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_Mode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bMergeSinglePointData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bDisplayModeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ExpectedPins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_ExpectedPins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_PropertyName,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::NewProp_bTrackActorsOnlyWithinBounds,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::ClassParams = {
	&UPCGZoneGraphToPointsSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPCGZoneGraphToPointsSettings()
{
	if (!Z_Registration_Info_UClass_UPCGZoneGraphToPointsSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPCGZoneGraphToPointsSettings.OuterSingleton, Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPCGZoneGraphToPointsSettings.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROP_API UClass* StaticClass<UPCGZoneGraphToPointsSettings>()
{
	return UPCGZoneGraphToPointsSettings::StaticClass();
}
UPCGZoneGraphToPointsSettings::UPCGZoneGraphToPointsSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPCGZoneGraphToPointsSettings);
UPCGZoneGraphToPointsSettings::~UPCGZoneGraphToPointsSettings() {}
// End Class UPCGZoneGraphToPointsSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPCGGetZoneGraphToPointsMode_StaticEnum, TEXT("EPCGGetZoneGraphToPointsMode"), &Z_Registration_Info_UEnum_EPCGGetZoneGraphToPointsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3993244215U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPCGZoneGraphToPointsSettings, UPCGZoneGraphToPointsSettings::StaticClass, TEXT("UPCGZoneGraphToPointsSettings"), &Z_Registration_Info_UClass_UPCGZoneGraphToPointsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPCGZoneGraphToPointsSettings), 1967197350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_2465255820(TEXT("/Script/PCG_ZoneGraph_Interop"),
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
