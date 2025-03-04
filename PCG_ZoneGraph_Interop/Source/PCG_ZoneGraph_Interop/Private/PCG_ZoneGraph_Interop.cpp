// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCG_ZoneGraph_Interop.h"

#define LOCTEXT_NAMESPACE "FPCG_ZoneGraph_InteropModule"

void FPCG_ZoneGraph_InteropModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FPCG_ZoneGraph_InteropModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FPCG_ZoneGraph_InteropModule, PCG_ZoneGraph_Interop)