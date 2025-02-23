// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_ZoneGraph_Interop/Public/PGLZoneGraphSettingsNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGLZoneGraphSettingsNode() {}

// Begin Cross Module References
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPGLZoneGraphSettingsNode();
PCG_ZONEGRAPH_INTEROP_API UClass* Z_Construct_UClass_UPGLZoneGraphSettingsNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop();
// End Cross Module References

// Begin Class UPGLZoneGraphSettingsNode
void UPGLZoneGraphSettingsNode::StaticRegisterNativesUPGLZoneGraphSettingsNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGLZoneGraphSettingsNode);
UClass* Z_Construct_UClass_UPGLZoneGraphSettingsNode_NoRegister()
{
	return UPGLZoneGraphSettingsNode::StaticClass();
}
struct Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Builds a collection of PCG-compatible data from ZoneGraph settings. */" },
		{ "IncludePath", "PGLZoneGraphSettingsNode.h" },
		{ "ModuleRelativePath", "Public/PGLZoneGraphSettingsNode.h" },
		{ "ToolTip", "Builds a collection of PCG-compatible data from ZoneGraph settings." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGLZoneGraphSettingsNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_Interop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::ClassParams = {
	&UPGLZoneGraphSettingsNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPGLZoneGraphSettingsNode()
{
	if (!Z_Registration_Info_UClass_UPGLZoneGraphSettingsNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGLZoneGraphSettingsNode.OuterSingleton, Z_Construct_UClass_UPGLZoneGraphSettingsNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPGLZoneGraphSettingsNode.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROP_API UClass* StaticClass<UPGLZoneGraphSettingsNode>()
{
	return UPGLZoneGraphSettingsNode::StaticClass();
}
UPGLZoneGraphSettingsNode::UPGLZoneGraphSettingsNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGLZoneGraphSettingsNode);
UPGLZoneGraphSettingsNode::~UPGLZoneGraphSettingsNode() {}
// End Class UPGLZoneGraphSettingsNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLZoneGraphSettingsNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGLZoneGraphSettingsNode, UPGLZoneGraphSettingsNode::StaticClass, TEXT("UPGLZoneGraphSettingsNode"), &Z_Registration_Info_UClass_UPGLZoneGraphSettingsNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGLZoneGraphSettingsNode), 1679694627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLZoneGraphSettingsNode_h_1256341408(TEXT("/Script/PCG_ZoneGraph_Interop"),
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLZoneGraphSettingsNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_PGLZoneGraphSettingsNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
