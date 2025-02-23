// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_ZoneGraph_InteropEditor/Public/PGLCreateZoneShape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePGLCreateZoneShape() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
PCG_API UClass* Z_Construct_UClass_UPCGSettings();
PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* Z_Construct_UClass_UPGLCreateZoneShapeNode();
PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* Z_Construct_UClass_UPGLCreateZoneShapeNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCG_ZoneGraph_InteropEditor();
// End Cross Module References

// Begin Class UPGLCreateZoneShapeNode
void UPGLCreateZoneShapeNode::StaticRegisterNativesUPGLCreateZoneShapeNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPGLCreateZoneShapeNode);
UClass* Z_Construct_UClass_UPGLCreateZoneShapeNode_NoRegister()
{
	return UPGLCreateZoneShapeNode::StaticClass();
}
struct Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Procedural" },
		{ "Comment", "/** Node for creating n-gon zone shapes and spawning actors based on input data points. */" },
		{ "IncludePath", "PGLCreateZoneShape.h" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneShape.h" },
		{ "ToolTip", "Node for creating n-gon zone shapes and spawning actors based on input data points." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "Comment", "//~Begin UPCGSettings interface\n" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneShape.h" },
		{ "PCG_Overridable", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossingTransformAttributeName_MetaData[] = {
		{ "Category", "Zone Shape Settings" },
		{ "ModuleRelativePath", "Public/PGLCreateZoneShape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossingTransformAttributeName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPGLCreateZoneShapeNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneShapeNode, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::NewProp_CrossingTransformAttributeName = { "CrossingTransformAttributeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPGLCreateZoneShapeNode, CrossingTransformAttributeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossingTransformAttributeName_MetaData), NewProp_CrossingTransformAttributeName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::NewProp_CrossingTransformAttributeName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPCGSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_InteropEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::ClassParams = {
	&UPGLCreateZoneShapeNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPGLCreateZoneShapeNode()
{
	if (!Z_Registration_Info_UClass_UPGLCreateZoneShapeNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPGLCreateZoneShapeNode.OuterSingleton, Z_Construct_UClass_UPGLCreateZoneShapeNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPGLCreateZoneShapeNode.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* StaticClass<UPGLCreateZoneShapeNode>()
{
	return UPGLCreateZoneShapeNode::StaticClass();
}
UPGLCreateZoneShapeNode::UPGLCreateZoneShapeNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPGLCreateZoneShapeNode);
UPGLCreateZoneShapeNode::~UPGLCreateZoneShapeNode() {}
// End Class UPGLCreateZoneShapeNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_PGLCreateZoneShape_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPGLCreateZoneShapeNode, UPGLCreateZoneShapeNode::StaticClass, TEXT("UPGLCreateZoneShapeNode"), &Z_Registration_Info_UClass_UPGLCreateZoneShapeNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPGLCreateZoneShapeNode), 2608516364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_PGLCreateZoneShape_h_605499441(TEXT("/Script/PCG_ZoneGraph_InteropEditor"),
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_PGLCreateZoneShape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_PGLCreateZoneShape_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
