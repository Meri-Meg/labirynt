// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FabQuixelAssetTypes.h"

#ifdef FABLAUNCHERQUIXELDEPENDENCIES_FabQuixelAssetTypes_generated_h
#error "FabQuixelAssetTypes.generated.h already included, missing '#pragma once' in FabQuixelAssetTypes.h"
#endif
#define FABLAUNCHERQUIXELDEPENDENCIES_FabQuixelAssetTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFabSemanticTags **************************************************
#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFabSemanticTags_Statics; \
	FABLAUNCHERQUIXELDEPENDENCIES_API static class UScriptStruct* StaticStruct();


struct FFabSemanticTags;
// ********** End ScriptStruct FFabSemanticTags ****************************************************

// ********** Begin ScriptStruct FFabAssetMetaDataJson *********************************************
#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics; \
	FABLAUNCHERQUIXELDEPENDENCIES_API static class UScriptStruct* StaticStruct();


struct FFabAssetMetaDataJson;
// ********** End ScriptStruct FFabAssetMetaDataJson ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h

// ********** Begin Enum EFabMegascanImportType ****************************************************
#define FOREACH_ENUM_EFABMEGASCANIMPORTTYPE(op) \
	op(EFabMegascanImportType::Model3D) \
	op(EFabMegascanImportType::Surface) \
	op(EFabMegascanImportType::Decal) \
	op(EFabMegascanImportType::Imperfection) \
	op(EFabMegascanImportType::Plant) 

enum class EFabMegascanImportType;
template<> struct TIsUEnumClass<EFabMegascanImportType> { enum { Value = true }; };
template<> FABLAUNCHERQUIXELDEPENDENCIES_API UEnum* StaticEnum<EFabMegascanImportType>();
// ********** End Enum EFabMegascanImportType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
