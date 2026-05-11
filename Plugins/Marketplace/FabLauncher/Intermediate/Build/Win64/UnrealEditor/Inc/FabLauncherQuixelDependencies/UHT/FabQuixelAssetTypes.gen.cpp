// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FabQuixelAssetTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFabQuixelAssetTypes() {}

// ********** Begin Cross Module References ********************************************************
FABLAUNCHERQUIXELDEPENDENCIES_API UEnum* Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType();
FABLAUNCHERQUIXELDEPENDENCIES_API UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetaDataJson();
FABLAUNCHERQUIXELDEPENDENCIES_API UScriptStruct* Z_Construct_UScriptStruct_FFabSemanticTags();
UPackage* Z_Construct_UPackage__Script_FabLauncherQuixelDependencies();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFabSemanticTags **************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabSemanticTags;
class UScriptStruct* FFabSemanticTags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabSemanticTags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabSemanticTags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabSemanticTags, (UObject*)Z_Construct_UPackage__Script_FabLauncherQuixelDependencies(), TEXT("FabSemanticTags"));
	}
	return Z_Registration_Info_UScriptStruct_FFabSemanticTags.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFabSemanticTags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Asset_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Asset_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabSemanticTags>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabSemanticTags_Statics::NewProp_Asset_Type = { "Asset_Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabSemanticTags, Asset_Type), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Asset_Type_MetaData), NewProp_Asset_Type_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabSemanticTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabSemanticTags_Statics::NewProp_Asset_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabSemanticTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabSemanticTags_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FabLauncherQuixelDependencies,
	nullptr,
	&NewStructOps,
	"FabSemanticTags",
	Z_Construct_UScriptStruct_FFabSemanticTags_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabSemanticTags_Statics::PropPointers),
	sizeof(FFabSemanticTags),
	alignof(FFabSemanticTags),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabSemanticTags_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabSemanticTags_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabSemanticTags()
{
	if (!Z_Registration_Info_UScriptStruct_FFabSemanticTags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabSemanticTags.InnerSingleton, Z_Construct_UScriptStruct_FFabSemanticTags_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFabSemanticTags.InnerSingleton;
}
// ********** End ScriptStruct FFabSemanticTags ****************************************************

// ********** Begin ScriptStruct FFabAssetMetaDataJson *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson;
class UScriptStruct* FFabAssetMetaDataJson::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFabAssetMetaDataJson, (UObject*)Z_Construct_UPackage__Script_FabLauncherQuixelDependencies(), TEXT("FabAssetMetaDataJson"));
	}
	return Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SemanticTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_Bias_Tier1_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_Scale_Tier1_MetaData[] = {
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Categories_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Categories;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SemanticTags;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement_Bias_Tier1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Displacement_Scale_Tier1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFabAssetMetaDataJson>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetaDataJson, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetaDataJson, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Categories_MetaData), NewProp_Categories_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_SemanticTags = { "SemanticTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetaDataJson, SemanticTags), Z_Construct_UScriptStruct_FFabSemanticTags, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SemanticTags_MetaData), NewProp_SemanticTags_MetaData) }; // 2147633905
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Displacement_Bias_Tier1 = { "Displacement_Bias_Tier1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetaDataJson, Displacement_Bias_Tier1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Displacement_Bias_Tier1_MetaData), NewProp_Displacement_Bias_Tier1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Displacement_Scale_Tier1 = { "Displacement_Scale_Tier1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFabAssetMetaDataJson, Displacement_Scale_Tier1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Displacement_Scale_Tier1_MetaData), NewProp_Displacement_Scale_Tier1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Categories_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Categories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_SemanticTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Displacement_Bias_Tier1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewProp_Displacement_Scale_Tier1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FabLauncherQuixelDependencies,
	nullptr,
	&NewStructOps,
	"FabAssetMetaDataJson",
	Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::PropPointers),
	sizeof(FFabAssetMetaDataJson),
	alignof(FFabAssetMetaDataJson),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFabAssetMetaDataJson()
{
	if (!Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.InnerSingleton, Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson.InnerSingleton;
}
// ********** End ScriptStruct FFabAssetMetaDataJson ***********************************************

// ********** Begin Enum EFabMegascanImportType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFabMegascanImportType;
static UEnum* EFabMegascanImportType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFabMegascanImportType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFabMegascanImportType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType, (UObject*)Z_Construct_UPackage__Script_FabLauncherQuixelDependencies(), TEXT("EFabMegascanImportType"));
	}
	return Z_Registration_Info_UEnum_EFabMegascanImportType.OuterSingleton;
}
template<> FABLAUNCHERQUIXELDEPENDENCIES_API UEnum* StaticEnum<EFabMegascanImportType>()
{
	return EFabMegascanImportType_StaticEnum();
}
struct Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Decal.DisplayName", "Decal" },
		{ "Decal.Name", "EFabMegascanImportType::Decal" },
		{ "Imperfection.DisplayName", "Imperfection" },
		{ "Imperfection.Name", "EFabMegascanImportType::Imperfection" },
		{ "Model3D.DisplayName", "3D" },
		{ "Model3D.Name", "EFabMegascanImportType::Model3D" },
		{ "ModuleRelativePath", "Public/FabQuixelAssetTypes.h" },
		{ "Plant.DisplayName", "Plant" },
		{ "Plant.Name", "EFabMegascanImportType::Plant" },
		{ "Surface.DisplayName", "Surface" },
		{ "Surface.Name", "EFabMegascanImportType::Surface" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFabMegascanImportType::Model3D", (int64)EFabMegascanImportType::Model3D },
		{ "EFabMegascanImportType::Surface", (int64)EFabMegascanImportType::Surface },
		{ "EFabMegascanImportType::Decal", (int64)EFabMegascanImportType::Decal },
		{ "EFabMegascanImportType::Imperfection", (int64)EFabMegascanImportType::Imperfection },
		{ "EFabMegascanImportType::Plant", (int64)EFabMegascanImportType::Plant },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_FabLauncherQuixelDependencies,
	nullptr,
	"EFabMegascanImportType",
	"EFabMegascanImportType",
	Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType()
{
	if (!Z_Registration_Info_UEnum_EFabMegascanImportType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFabMegascanImportType.InnerSingleton, Z_Construct_UEnum_FabLauncherQuixelDependencies_EFabMegascanImportType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFabMegascanImportType.InnerSingleton;
}
// ********** End Enum EFabMegascanImportType ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFabMegascanImportType_StaticEnum, TEXT("EFabMegascanImportType"), &Z_Registration_Info_UEnum_EFabMegascanImportType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3832245936U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFabSemanticTags::StaticStruct, Z_Construct_UScriptStruct_FFabSemanticTags_Statics::NewStructOps, TEXT("FabSemanticTags"), &Z_Registration_Info_UScriptStruct_FFabSemanticTags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabSemanticTags), 2147633905U) },
		{ FFabAssetMetaDataJson::StaticStruct, Z_Construct_UScriptStruct_FFabAssetMetaDataJson_Statics::NewStructOps, TEXT("FabAssetMetaDataJson"), &Z_Registration_Info_UScriptStruct_FFabAssetMetaDataJson, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFabAssetMetaDataJson), 4133431821U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_3999861618(TEXT("/Script/FabLauncherQuixelDependencies"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Public_FabQuixelAssetTypes_h__Script_FabLauncherQuixelDependencies_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
