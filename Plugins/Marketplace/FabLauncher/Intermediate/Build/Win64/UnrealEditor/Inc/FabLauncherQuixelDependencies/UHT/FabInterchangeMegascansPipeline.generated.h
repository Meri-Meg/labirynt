// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pipelines/FabInterchangeMegascansPipeline.h"

#ifdef FABLAUNCHERQUIXELDEPENDENCIES_FabInterchangeMegascansPipeline_generated_h
#error "FabInterchangeMegascansPipeline.generated.h already included, missing '#pragma once' in FabInterchangeMegascansPipeline.h"
#endif
#define FABLAUNCHERQUIXELDEPENDENCIES_FabInterchangeMegascansPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFabInterchangeMegascansPipeline *****************************************
FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeMegascansPipeline_NoRegister();

#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFabInterchangeMegascansPipeline(); \
	friend struct Z_Construct_UClass_UFabInterchangeMegascansPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeMegascansPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UFabInterchangeMegascansPipeline, UInterchangePipelineBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FabLauncherQuixelDependencies"), Z_Construct_UClass_UFabInterchangeMegascansPipeline_NoRegister) \
	DECLARE_SERIALIZER(UFabInterchangeMegascansPipeline)


#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_77_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFabInterchangeMegascansPipeline(UFabInterchangeMegascansPipeline&&) = delete; \
	UFabInterchangeMegascansPipeline(const UFabInterchangeMegascansPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFabInterchangeMegascansPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFabInterchangeMegascansPipeline); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFabInterchangeMegascansPipeline) \
	NO_API virtual ~UFabInterchangeMegascansPipeline();


#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_74_PROLOG
#define FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_77_INCLASS_NO_PURE_DECLS \
	FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFabInterchangeMegascansPipeline;

// ********** End Class UFabInterchangeMegascansPipeline *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_FabInterchangeMegascansPipeline_h

// ********** Begin Enum EFabMegascanImportTier ****************************************************
#define FOREACH_ENUM_EFABMEGASCANIMPORTTIER(op) \
	op(EFabMegascanImportTier::Invalid) \
	op(EFabMegascanImportTier::Raw) \
	op(EFabMegascanImportTier::High) \
	op(EFabMegascanImportTier::Medium) \
	op(EFabMegascanImportTier::Low) 

enum class EFabMegascanImportTier : int8;
template<> struct TIsUEnumClass<EFabMegascanImportTier> { enum { Value = true }; };
template<> FABLAUNCHERQUIXELDEPENDENCIES_API UEnum* StaticEnum<EFabMegascanImportTier>();
// ********** End Enum EFabMegascanImportTier ******************************************************

// ********** Begin Enum EFabMegascanMaterialType **************************************************
#define FOREACH_ENUM_EFABMEGASCANMATERIALTYPE(op) \
	op(EFabMegascanMaterialType::Invalid) \
	op(EFabMegascanMaterialType::Base) \
	op(EFabMegascanMaterialType::BaseMasked) \
	op(EFabMegascanMaterialType::BaseFuzz) \
	op(EFabMegascanMaterialType::BaseTransmission) \
	op(EFabMegascanMaterialType::Glass) \
	op(EFabMegascanMaterialType::Surface) \
	op(EFabMegascanMaterialType::SurfaceMasked) \
	op(EFabMegascanMaterialType::SurfaceFuzz) \
	op(EFabMegascanMaterialType::SurfaceTransmission) \
	op(EFabMegascanMaterialType::Fabric) \
	op(EFabMegascanMaterialType::FabricMasked) \
	op(EFabMegascanMaterialType::Decal) \
	op(EFabMegascanMaterialType::Plant) \
	op(EFabMegascanMaterialType::PlantBillboard) 

enum class EFabMegascanMaterialType : int32;
template<> struct TIsUEnumClass<EFabMegascanMaterialType> { enum { Value = true }; };
template<> FABLAUNCHERQUIXELDEPENDENCIES_API UEnum* StaticEnum<EFabMegascanMaterialType>();
// ********** End Enum EFabMegascanMaterialType ****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
