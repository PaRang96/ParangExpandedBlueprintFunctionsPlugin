// Copyright Epic Games, Inc. All Rights Reserved.

#include "ParangExpandedBlueprintPlugin.h"

#define LOCTEXT_NAMESPACE "FParangExpandedBlueprintPluginModule"

void FParangExpandedBlueprintPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FParangExpandedBlueprintPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FParangExpandedBlueprintPluginModule, ParangExpandedBlueprintPlugin)