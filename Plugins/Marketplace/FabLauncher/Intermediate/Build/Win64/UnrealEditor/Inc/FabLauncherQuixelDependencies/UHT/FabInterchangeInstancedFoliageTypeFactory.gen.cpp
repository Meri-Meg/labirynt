// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Factories/FabInterchangeInstancedFoliageTypeFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFabInterchangeInstancedFoliageTypeFactory() {}

// ********** Begin Cross Module References ********************************************************
FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory();
FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_NoRegister();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
UPackage* Z_Construct_UPackage__Script_FabLauncherQuixelDependencies();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactory *******************************
void UFabInterchangeInstancedFoliageTypeFactory::StaticRegisterNativesUFabInterchangeInstancedFoliageTypeFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory;
UClass* UFabInterchangeInstancedFoliageTypeFactory::GetPrivateStaticClass()
{
	using TClass = UFabInterchangeInstancedFoliageTypeFactory;
	if (!Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FabInterchangeInstancedFoliageTypeFactory"),
			Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.InnerSingleton,
			StaticRegisterNativesUFabInterchangeInstancedFoliageTypeFactory,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_NoRegister()
{
	return UFabInterchangeInstancedFoliageTypeFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Pipelines/Factories/FabInterchangeInstancedFoliageTypeFactory.h" },
		{ "ModuleRelativePath", "Private/Pipelines/Factories/FabInterchangeInstancedFoliageTypeFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabInterchangeInstancedFoliageTypeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
	(UObject* (*)())Z_Construct_UPackage__Script_FabLauncherQuixelDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::ClassParams = {
	&UFabInterchangeInstancedFoliageTypeFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory()
{
	if (!Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.OuterSingleton, Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory.OuterSingleton;
}
UFabInterchangeInstancedFoliageTypeFactory::UFabInterchangeInstancedFoliageTypeFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabInterchangeInstancedFoliageTypeFactory);
UFabInterchangeInstancedFoliageTypeFactory::~UFabInterchangeInstancedFoliageTypeFactory() {}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactory *********************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Factories_FabInterchangeInstancedFoliageTypeFactory_h__Script_FabLauncherQuixelDependencies_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactory, UFabInterchangeInstancedFoliageTypeFactory::StaticClass, TEXT("UFabInterchangeInstancedFoliageTypeFactory"), &Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabInterchangeInstancedFoliageTypeFactory), 389857294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Factories_FabInterchangeInstancedFoliageTypeFactory_h__Script_FabLauncherQuixelDependencies_1576299639(TEXT("/Script/FabLauncherQuixelDependencies"),
	Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Factories_FabInterchangeInstancedFoliageTypeFactory_h__Script_FabLauncherQuixelDependencies_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Factories_FabInterchangeInstancedFoliageTypeFactory_h__Script_FabLauncherQuixelDependencies_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
