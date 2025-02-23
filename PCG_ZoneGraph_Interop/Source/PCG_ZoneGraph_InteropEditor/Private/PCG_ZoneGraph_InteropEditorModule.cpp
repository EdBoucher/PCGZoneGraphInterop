#include "PCG_ZoneGraph_InteropEditorModule.h"

#define LOCTEXT_NAMESPACE "FPCG_ZoneGraph_InteropEditorModule"

void PCG_ZoneGraph_InteropEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void PCG_ZoneGraph_InteropEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(PCG_ZoneGraph_InteropEditorModule, PCG_ZoneGraph_InteropEditor)