// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_ZoneGraph_Interop/Public/PGLCreateZoneGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGLCreateZoneGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_API UEnum* Z_Construct_UEnum_PCG_EPCGAttachOptions();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPGLCreateZoneGraphSettings();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPGLCreateZoneGraphSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop();
// End Cross Module References

// Begin Class UPGLCreateZoneGraphSettings
void UPGLCreateZoneGraphSettings::StaticRegisterNativesUPGLCreateZoneGraphSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGLCreateZoneGraphSettings);
UClass* Z_Construct_UClass_UPGLCreateZoneGraphSettings_NoRegister()
{
	return UPGLCreateZoneGraphSettings::StaticClass();
}
struct Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** PCG node that creates a spline presentation from the input points data, with optional tangents */" },
		{ "IncludePath", "PGLCreateZoneGraph.h" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "PCG node that creates a spline presentation from the input points data, with optional tangents" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClosedLoop_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinear_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Controls whether the segment between control points is a curve (when false) or a straight line (when true).\n" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Controls whether the segment between control points is a curve (when false) or a straight line (when true)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomTangents_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Allow to specify custom tangents for each point, as an attribute. Can't be set if the spline is linear. */" },
		{ "EditCondition", "!bLinear" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
		{ "ToolTip", "Allow to specify custom tangents for each point, as an attribute. Can't be set if the spline is linear." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArriveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bLinear && bApplyCustomTangents" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeaveTangentAttribute_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "!bLinear && bApplyCustomTangents" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachOptions_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditCondition", "Mode==EPGLCreateZoneGraphMode::CreateNewActor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessFunctionNames_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Specify a list of functions to be called on the target actor after spline creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled. */" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneGraph.h" },
		{ "ToolTip", "Specify a list of functions to be called on the target actor after spline creation. Functions need to be parameter-less and with \"CallInEditor\" flag enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_bClosedLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosedLoop;
	static void NewProp_bLinear_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinear;
	static void NewProp_bApplyCustomTangents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomTangents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ArriveTangentAttribute;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LeaveTangentAttribute;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_AttachOptions_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttachOptions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PostProcessFunctionNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessFunctionNames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGLCreateZoneGraphSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bClosedLoop_SetBit(void* Obj)
{
	((UPGLCreateZoneGraphSettings*)Obj)->bClosedLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bClosedLoop = { "bClosedLoop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPGLCreateZoneGraphSettings), &Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bClosedLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClosedLoop_MetaData), NewProp_bClosedLoop_MetaData) };
void Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bLinear_SetBit(void* Obj)
{
	((UPGLCreateZoneGraphSettings*)Obj)->bLinear = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bLinear = { "bLinear", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPGLCreateZoneGraphSettings), &Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bLinear_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinear_MetaData), NewProp_bLinear_MetaData) };
void Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bApplyCustomTangents_SetBit(void* Obj)
{
	((UPGLCreateZoneGraphSettings*)Obj)->bApplyCustomTangents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bApplyCustomTangents = { "bApplyCustomTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPGLCreateZoneGraphSettings), &Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bApplyCustomTangents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCustomTangents_MetaData), NewProp_bApplyCustomTangents_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_ArriveTangentAttribute = { "ArriveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneGraphSettings, ArriveTangentAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArriveTangentAttribute_MetaData), NewProp_ArriveTangentAttribute_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_LeaveTangentAttribute = { "LeaveTangentAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneGraphSettings, LeaveTangentAttribute), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeaveTangentAttribute_MetaData), NewProp_LeaveTangentAttribute_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneGraphSettings, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_AttachOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_AttachOptions = { "AttachOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneGraphSettings, AttachOptions), Z_Construct_UEnum_PCG_EPCGAttachOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachOptions_MetaData), NewProp_AttachOptions_MetaData) }; // 1737999506
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_PostProcessFunctionNames_Inner = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_PostProcessFunctionNames = { "PostProcessFunctionNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneGraphSettings, PostProcessFunctionNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessFunctionNames_MetaData), NewProp_PostProcessFunctionNames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bClosedLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bLinear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_bApplyCustomTangents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_ArriveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_LeaveTangentAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_AttachOptions_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_AttachOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_PostProcessFunctionNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::NewProp_PostProcessFunctionNames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::ClassParams = {
	&UPGLCreateZoneGraphSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPGLCreateZoneGraphSettings()
{
	if (!Z_Registration_Info_UClass_UPGLCreateZoneGraphSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGLCreateZoneGraphSettings.OuterSingleton, Z_Construct_UClass_UPGLCreateZoneGraphSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPGLCreateZoneGraphSettings.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROP_API UClass* StaticClass<UPGLCreateZoneGraphSettings>()
{
	return UPGLCreateZoneGraphSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGLCreateZoneGraphSettings);
UPGLCreateZoneGraphSettings::~UPGLCreateZoneGraphSettings() {}
// End Class UPGLCreateZoneGraphSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLCreateZoneGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGLCreateZoneGraphSettings, UPGLCreateZoneGraphSettings::StaticClass, TEXT("UPGLCreateZoneGraphSettings"), &Z_Registration_Info_UClass_UPGLCreateZoneGraphSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGLCreateZoneGraphSettings), 1401831316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLCreateZoneGraph_h_703790086(TEXT("/Script/PCG_ZoneGraph_Interop"),
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLCreateZoneGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLCreateZoneGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
