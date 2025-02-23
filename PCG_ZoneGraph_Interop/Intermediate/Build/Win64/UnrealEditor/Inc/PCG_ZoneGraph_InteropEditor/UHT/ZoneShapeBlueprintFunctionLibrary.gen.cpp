// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PCG_ZoneGraph_InteropEditor/Public/ZoneShapeBlueprintFunctionLibrary.h"
#include "ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneShapeBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary();
PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_PCG_ZoneGraph_InteropEditor();
ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneShapeComponent_NoRegister();
ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneShapePoint();
// End Cross Module References

// Begin Class UZoneShapeBlueprintFunctionLibrary Function PGLBreakZoneShapeAtLocation
struct Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics
{
	struct ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms
	{
		UZoneShapeComponent* ShapeComp;
		FVector BreakLocation;
		TArray<UZoneShapeComponent*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneShapeBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShapeComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BreakLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ShapeComp = { "ShapeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms, ShapeComp), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeComp_MetaData), NewProp_ShapeComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_BreakLocation = { "BreakLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms, BreakLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakLocation_MetaData), NewProp_BreakLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ShapeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_BreakLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary, nullptr, "PGLBreakZoneShapeAtLocation", nullptr, nullptr, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLBreakZoneShapeAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoneShapeBlueprintFunctionLibrary::execPGLBreakZoneShapeAtLocation)
{
	P_GET_OBJECT(UZoneShapeComponent,Z_Param_ShapeComp);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BreakLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UZoneShapeComponent*>*)Z_Param__Result=UZoneShapeBlueprintFunctionLibrary::PGLBreakZoneShapeAtLocation(Z_Param_ShapeComp,Z_Param_Out_BreakLocation);
	P_NATIVE_END;
}
// End Class UZoneShapeBlueprintFunctionLibrary Function PGLBreakZoneShapeAtLocation

// Begin Class UZoneShapeBlueprintFunctionLibrary Function PGLCreateIntersectionForSplineShape
struct Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics
{
	struct ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms
	{
		UZoneShapeComponent* ShapeComp;
		UZoneShapeComponent* TargetShapeComp;
		FVector Intersection;
		bool DestroyCoveredShape;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Creates an intersection for a spline shape.\n\x09 * @param ShapeComp - The Zone Shape Component to modify.\n\x09 * @param DestroyCoveredShape - Whether to destroy the covered shape.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ZoneShapeBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Creates an intersection for a spline shape.\n@param ShapeComp - The Zone Shape Component to modify.\n@param DestroyCoveredShape - Whether to destroy the covered shape." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetShapeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ShapeComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetShapeComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intersection;
	static void NewProp_DestroyCoveredShape_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DestroyCoveredShape;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_ShapeComp = { "ShapeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms, ShapeComp), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeComp_MetaData), NewProp_ShapeComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_TargetShapeComp = { "TargetShapeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms, TargetShapeComp), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetShapeComp_MetaData), NewProp_TargetShapeComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_Intersection = { "Intersection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms, Intersection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_DestroyCoveredShape_SetBit(void* Obj)
{
	((ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms*)Obj)->DestroyCoveredShape = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_DestroyCoveredShape = { "DestroyCoveredShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms), &Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_DestroyCoveredShape_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_ShapeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_TargetShapeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_Intersection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::NewProp_DestroyCoveredShape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary, nullptr, "PGLCreateIntersectionForSplineShape", nullptr, nullptr, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLCreateIntersectionForSplineShape_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoneShapeBlueprintFunctionLibrary::execPGLCreateIntersectionForSplineShape)
{
	P_GET_OBJECT(UZoneShapeComponent,Z_Param_ShapeComp);
	P_GET_OBJECT(UZoneShapeComponent,Z_Param_TargetShapeComp);
	P_GET_STRUCT(FVector,Z_Param_Intersection);
	P_GET_UBOOL(Z_Param_DestroyCoveredShape);
	P_FINISH;
	P_NATIVE_BEGIN;
	UZoneShapeBlueprintFunctionLibrary::PGLCreateIntersectionForSplineShape(Z_Param_ShapeComp,Z_Param_TargetShapeComp,Z_Param_Intersection,Z_Param_DestroyCoveredShape);
	P_NATIVE_END;
}
// End Class UZoneShapeBlueprintFunctionLibrary Function PGLCreateIntersectionForSplineShape

// Begin Class UZoneShapeBlueprintFunctionLibrary Function PGLSetPointPositionRotation
struct Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics
{
	struct ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms
	{
		FZoneShapePoint Point;
		FTransform SourceTransform;
		FVector TargetPointWorldPosition;
		FVector TargetPointWorldNormal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneShapeBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointWorldPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPointWorldNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointWorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPointWorldNormal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms, Point), Z_Construct_UScriptStruct_FZoneShapePoint, METADATA_PARAMS(0, nullptr) }; // 4006737465
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_SourceTransform = { "SourceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms, SourceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTransform_MetaData), NewProp_SourceTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_TargetPointWorldPosition = { "TargetPointWorldPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms, TargetPointWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointWorldPosition_MetaData), NewProp_TargetPointWorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_TargetPointWorldNormal = { "TargetPointWorldNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms, TargetPointWorldNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPointWorldNormal_MetaData), NewProp_TargetPointWorldNormal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_SourceTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_TargetPointWorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::NewProp_TargetPointWorldNormal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary, nullptr, "PGLSetPointPositionRotation", nullptr, nullptr, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLSetPointPositionRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoneShapeBlueprintFunctionLibrary::execPGLSetPointPositionRotation)
{
	P_GET_STRUCT_REF(FZoneShapePoint,Z_Param_Out_Point);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_SourceTransform);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPointWorldPosition);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetPointWorldNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	UZoneShapeBlueprintFunctionLibrary::PGLSetPointPositionRotation(Z_Param_Out_Point,Z_Param_Out_SourceTransform,Z_Param_Out_TargetPointWorldPosition,Z_Param_Out_TargetPointWorldNormal);
	P_NATIVE_END;
}
// End Class UZoneShapeBlueprintFunctionLibrary Function PGLSetPointPositionRotation

// Begin Class UZoneShapeBlueprintFunctionLibrary Function PGLSortPolygonPointsCounterclockwise
struct Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics
{
	struct ZoneShapeBlueprintFunctionLibrary_eventPGLSortPolygonPointsCounterclockwise_Parms
	{
		UZoneShapeComponent* PolygonShapeComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ZoneShapeBlueprintFunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PolygonShapeComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PolygonShapeComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::NewProp_PolygonShapeComp = { "PolygonShapeComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ZoneShapeBlueprintFunctionLibrary_eventPGLSortPolygonPointsCounterclockwise_Parms, PolygonShapeComp), Z_Construct_UClass_UZoneShapeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PolygonShapeComp_MetaData), NewProp_PolygonShapeComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::NewProp_PolygonShapeComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary, nullptr, "PGLSortPolygonPointsCounterclockwise", nullptr, nullptr, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::PropPointers), sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLSortPolygonPointsCounterclockwise_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::Function_MetaDataParams), Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::ZoneShapeBlueprintFunctionLibrary_eventPGLSortPolygonPointsCounterclockwise_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UZoneShapeBlueprintFunctionLibrary::execPGLSortPolygonPointsCounterclockwise)
{
	P_GET_OBJECT(UZoneShapeComponent,Z_Param_PolygonShapeComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	UZoneShapeBlueprintFunctionLibrary::PGLSortPolygonPointsCounterclockwise(Z_Param_PolygonShapeComp);
	P_NATIVE_END;
}
// End Class UZoneShapeBlueprintFunctionLibrary Function PGLSortPolygonPointsCounterclockwise

// Begin Class UZoneShapeBlueprintFunctionLibrary
void UZoneShapeBlueprintFunctionLibrary::StaticRegisterNativesUZoneShapeBlueprintFunctionLibrary()
{
	UClass* Class = UZoneShapeBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PGLBreakZoneShapeAtLocation", &UZoneShapeBlueprintFunctionLibrary::execPGLBreakZoneShapeAtLocation },
		{ "PGLCreateIntersectionForSplineShape", &UZoneShapeBlueprintFunctionLibrary::execPGLCreateIntersectionForSplineShape },
		{ "PGLSetPointPositionRotation", &UZoneShapeBlueprintFunctionLibrary::execPGLSetPointPositionRotation },
		{ "PGLSortPolygonPointsCounterclockwise", &UZoneShapeBlueprintFunctionLibrary::execPGLSortPolygonPointsCounterclockwise },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneShapeBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_NoRegister()
{
	return UZoneShapeBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ZoneShapeBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ZoneShapeBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLBreakZoneShapeAtLocation, "PGLBreakZoneShapeAtLocation" }, // 2106627916
		{ &Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLCreateIntersectionForSplineShape, "PGLCreateIntersectionForSplineShape" }, // 982261258
		{ &Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSetPointPositionRotation, "PGLSetPointPositionRotation" }, // 1074642358
		{ &Z_Construct_UFunction_UZoneShapeBlueprintFunctionLibrary_PGLSortPolygonPointsCounterclockwise, "PGLSortPolygonPointsCounterclockwise" }, // 1512017789
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneShapeBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_PCG_ZoneGraph_InteropEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::ClassParams = {
	&UZoneShapeBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UZoneShapeBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneShapeBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UZoneShapeBlueprintFunctionLibrary.OuterSingleton;
}
template<> PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* StaticClass<UZoneShapeBlueprintFunctionLibrary>()
{
	return UZoneShapeBlueprintFunctionLibrary::StaticClass();
}
UZoneShapeBlueprintFunctionLibrary::UZoneShapeBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneShapeBlueprintFunctionLibrary);
UZoneShapeBlueprintFunctionLibrary::~UZoneShapeBlueprintFunctionLibrary() {}
// End Class UZoneShapeBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary, UZoneShapeBlueprintFunctionLibrary::StaticClass, TEXT("UZoneShapeBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UZoneShapeBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneShapeBlueprintFunctionLibrary), 2519158728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_3733629302(TEXT("/Script/PCG_ZoneGraph_InteropEditor"),
	Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
