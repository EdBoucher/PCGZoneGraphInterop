// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneShapeBlueprintFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UZoneShapeComponent;
struct FZoneShapePoint;
#ifdef PCG_ZONEGRAPH_INTEROPEDITOR_ZoneShapeBlueprintFunctionLibrary_generated_h
#error "ZoneShapeBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in ZoneShapeBlueprintFunctionLibrary.h"
#endif
#define PCG_ZONEGRAPH_INTEROPEDITOR_ZoneShapeBlueprintFunctionLibrary_generated_h

#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPGLBreakZoneShapeAtLocation); \
	DECLARE_FUNCTION(execPGLSetPointPositionRotation); \
	DECLARE_FUNCTION(execPGLSortPolygonPointsCounterclockwise); \
	DECLARE_FUNCTION(execPGLCreateIntersectionForSplineShape);


#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUZoneShapeBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UZoneShapeBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UZoneShapeBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG_ZoneGraph_InteropEditor"), NO_API) \
	DECLARE_SERIALIZER(UZoneShapeBlueprintFunctionLibrary)


#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UZoneShapeBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UZoneShapeBlueprintFunctionLibrary(UZoneShapeBlueprintFunctionLibrary&&); \
	UZoneShapeBlueprintFunctionLibrary(const UZoneShapeBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UZoneShapeBlueprintFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UZoneShapeBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UZoneShapeBlueprintFunctionLibrary) \
	NO_API virtual ~UZoneShapeBlueprintFunctionLibrary();


#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_11_PROLOG
#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_ZONEGRAPH_INTEROPEDITOR_API UClass* StaticClass<class UZoneShapeBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_InteropEditor_Public_ZoneShapeBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
