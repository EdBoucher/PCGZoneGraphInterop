// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ZoneGraphToPoints.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PCG_ZONEGRAPH_INTEROP_ZoneGraphToPoints_generated_h
#error "ZoneGraphToPoints.generated.h already included, missing '#pragma once' in ZoneGraphToPoints.h"
#endif
#define PCG_ZONEGRAPH_INTEROP_ZoneGraphToPoints_generated_h

#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPCGZoneGraphToPointsSettings(); \
	friend struct Z_Construct_UClass_UPCGZoneGraphToPointsSettings_Statics; \
public: \
	DECLARE_CLASS(UPCGZoneGraphToPointsSettings, UPCGSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PCG_ZoneGraph_Interop"), NO_API) \
	DECLARE_SERIALIZER(UPCGZoneGraphToPointsSettings)


#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPCGZoneGraphToPointsSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPCGZoneGraphToPointsSettings(UPCGZoneGraphToPointsSettings&&); \
	UPCGZoneGraphToPointsSettings(const UPCGZoneGraphToPointsSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPCGZoneGraphToPointsSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPCGZoneGraphToPointsSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPCGZoneGraphToPointsSettings) \
	NO_API virtual ~UPCGZoneGraphToPointsSettings();


#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_23_PROLOG
#define FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PCG_ZONEGRAPH_INTEROP_API UClass* StaticClass<class UPCGZoneGraphToPointsSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chapp_OneDrive_Documents_PCG_ZoneGraph_Interop_HostProject_Plugins_PCG_ZoneGraph_Interop_Source_PCG_ZoneGraph_Interop_Public_ZoneGraphToPoints_h


#define FOREACH_ENUM_EPCGGETZONEGRAPHTOPOINTSMODE(op) \
	op(EPCGGetZoneGraphToPointsMode::ParseActorComponents) \
	op(EPCGGetZoneGraphToPointsMode::GetSinglePoint) \
	op(EPCGGetZoneGraphToPointsMode::GetDataFromProperty) \
	op(EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponent) \
	op(EPCGGetZoneGraphToPointsMode::GetDataFromPCGComponentOrParseComponents) 

enum class EPCGGetZoneGraphToPointsMode : uint8;
template<> struct TIsUEnumClass<EPCGGetZoneGraphToPointsMode> { enum { Value = true }; };
template<> PCG_ZONEGRAPH_INTEROP_API UEnum* StaticEnum<EPCGGetZoneGraphToPointsMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
