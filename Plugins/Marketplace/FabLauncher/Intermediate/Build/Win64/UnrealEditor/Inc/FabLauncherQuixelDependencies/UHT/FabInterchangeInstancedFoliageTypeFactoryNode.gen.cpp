// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFabInterchangeInstancedFoliageTypeFactoryNode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode();
FABLAUNCHERQUIXELDEPENDENCIES_API UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_NoRegister();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling();
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBaseNode();
UPackage* Z_Construct_UPackage__Script_FabLauncherQuixelDependencies();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAffectDistanceFieldLighting 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomAffectDistanceFieldLighting", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAffectDistanceFieldLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAffectDistanceFieldLighting)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAffectDistanceFieldLighting(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAffectDistanceFieldLighting 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAlignToNormal 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomAlignToNormal", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomAlignToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAlignToNormal)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomAlignToNormal(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomAlignToNormal 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomPitchAngle 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms
	{
		float AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomRandomPitchAngle", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomPitchAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomPitchAngle)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRandomPitchAngle(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomPitchAngle 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomYaw 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms
	{
		bool AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomRandomYaw", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomRandomYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomYaw)
{
	P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomRandomYaw(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomRandomYaw *

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleX **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleX", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleX)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleX ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleY **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleY", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleY)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleY(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleY ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleZ **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaleZ", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaleZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleZ)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaleZ(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaleZ ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaling *
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms
	{
		EFoliageScaling AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms, AttributeValue), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(0, nullptr) }; // 3283125269
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomScaling", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomScaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaling)
{
	P_GET_ENUM_REF(EFoliageScaling,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomScaling((EFoliageScaling&)(Z_Param_Out_AttributeValue));
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomScaling ***

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomStaticMesh 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomStaticMesh", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomStaticMesh)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomStaticMesh(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomStaticMesh 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomWorldPositionOffsetDisableDistance 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms
	{
		int32 AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms, AttributeValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "GetCustomWorldPositionOffsetDisableDistance", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventGetCustomWorldPositionOffsetDisableDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomWorldPositionOffsetDisableDistance)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCustomWorldPositionOffsetDisableDistance(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function GetCustomWorldPositionOffsetDisableDistance 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAffectDistanceFieldLighting 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomAffectDistanceFieldLighting", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAffectDistanceFieldLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAffectDistanceFieldLighting)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAffectDistanceFieldLighting(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAffectDistanceFieldLighting 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAlignToNormal 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomAlignToNormal", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomAlignToNormal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAlignToNormal)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomAlignToNormal(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomAlignToNormal 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomPitchAngle 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms
	{
		float AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomRandomPitchAngle", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomPitchAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomPitchAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRandomPitchAngle(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomPitchAngle 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomYaw 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms
	{
		bool AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_AttributeValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->AttributeValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomRandomYaw", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomRandomYaw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomYaw)
{
	P_GET_UBOOL(Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomRandomYaw(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomRandomYaw *

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleX **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleX", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleX)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleX(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleX ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleY **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleY", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleY_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleY)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleY(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleY ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleZ **
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms
	{
		FVector2f AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms, AttributeValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaleZ", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaleZ_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleZ)
{
	P_GET_STRUCT_REF(FVector2f,Z_Param_Out_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaleZ(Z_Param_Out_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaleZ ****

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaling *
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms
	{
		EFoliageScaling AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms, AttributeValue), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) }; // 3283125269
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomScaling", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomScaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaling)
{
	P_GET_ENUM(EFoliageScaling,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomScaling(EFoliageScaling(Z_Param_AttributeValue),Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomScaling ***

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomStaticMesh 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms
	{
		FString AttributeValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttributeValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomStaticMesh", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomStaticMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomStaticMesh)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AttributeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomStaticMesh(Z_Param_AttributeValue);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomStaticMesh 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomWorldPositionOffsetDisableDistance 
struct Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics
{
	struct FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms
	{
		int32 AttributeValue;
		bool bAddApplyDelegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | FabInstancedFoliageTypeFactory" },
		{ "CPP_Default_bAddApplyDelegate", "true" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAddApplyDelegate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AttributeValue;
	static void NewProp_bAddApplyDelegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddApplyDelegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms, AttributeValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeValue_MetaData), NewProp_AttributeValue_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->bAddApplyDelegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate = { "bAddApplyDelegate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAddApplyDelegate_MetaData), NewProp_bAddApplyDelegate_MetaData) };
void Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms), &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_AttributeValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_bAddApplyDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, nullptr, "SetCustomWorldPositionOffsetDisableDistance", Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FabInterchangeInstancedFoliageTypeFactoryNode_eventSetCustomWorldPositionOffsetDisableDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomWorldPositionOffsetDisableDistance)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_AttributeValue);
	P_GET_UBOOL(Z_Param_bAddApplyDelegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCustomWorldPositionOffsetDisableDistance(Z_Param_AttributeValue,Z_Param_bAddApplyDelegate);
	P_NATIVE_END;
}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode Function SetCustomWorldPositionOffsetDisableDistance 

// ********** Begin Class UFabInterchangeInstancedFoliageTypeFactoryNode ***************************
void UFabInterchangeInstancedFoliageTypeFactoryNode::StaticRegisterNativesUFabInterchangeInstancedFoliageTypeFactoryNode()
{
	UClass* Class = UFabInterchangeInstancedFoliageTypeFactoryNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCustomAffectDistanceFieldLighting", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAffectDistanceFieldLighting },
		{ "GetCustomAlignToNormal", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomAlignToNormal },
		{ "GetCustomRandomPitchAngle", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomPitchAngle },
		{ "GetCustomRandomYaw", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomRandomYaw },
		{ "GetCustomScaleX", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleX },
		{ "GetCustomScaleY", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleY },
		{ "GetCustomScaleZ", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaleZ },
		{ "GetCustomScaling", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomScaling },
		{ "GetCustomStaticMesh", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomStaticMesh },
		{ "GetCustomWorldPositionOffsetDisableDistance", &UFabInterchangeInstancedFoliageTypeFactoryNode::execGetCustomWorldPositionOffsetDisableDistance },
		{ "SetCustomAffectDistanceFieldLighting", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAffectDistanceFieldLighting },
		{ "SetCustomAlignToNormal", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomAlignToNormal },
		{ "SetCustomRandomPitchAngle", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomPitchAngle },
		{ "SetCustomRandomYaw", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomRandomYaw },
		{ "SetCustomScaleX", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleX },
		{ "SetCustomScaleY", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleY },
		{ "SetCustomScaleZ", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaleZ },
		{ "SetCustomScaling", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomScaling },
		{ "SetCustomStaticMesh", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomStaticMesh },
		{ "SetCustomWorldPositionOffsetDisableDistance", &UFabInterchangeInstancedFoliageTypeFactoryNode::execSetCustomWorldPositionOffsetDisableDistance },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode;
UClass* UFabInterchangeInstancedFoliageTypeFactoryNode::GetPrivateStaticClass()
{
	using TClass = UFabInterchangeInstancedFoliageTypeFactoryNode;
	if (!Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FabInterchangeInstancedFoliageTypeFactoryNode"),
			Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton,
			StaticRegisterNativesUFabInterchangeInstancedFoliageTypeFactoryNode,
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
	return Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.InnerSingleton;
}
UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_NoRegister()
{
	return UFabInterchangeInstancedFoliageTypeFactoryNode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
		{ "ModuleRelativePath", "Private/Pipelines/Nodes/FabInterchangeInstancedFoliageTypeFactoryNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAffectDistanceFieldLighting, "GetCustomAffectDistanceFieldLighting" }, // 2945068447
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomAlignToNormal, "GetCustomAlignToNormal" }, // 566621481
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomPitchAngle, "GetCustomRandomPitchAngle" }, // 3551498961
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomRandomYaw, "GetCustomRandomYaw" }, // 132420742
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleX, "GetCustomScaleX" }, // 3284577062
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleY, "GetCustomScaleY" }, // 2341490824
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaleZ, "GetCustomScaleZ" }, // 1304615885
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomScaling, "GetCustomScaling" }, // 3227167140
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomStaticMesh, "GetCustomStaticMesh" }, // 439774576
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_GetCustomWorldPositionOffsetDisableDistance, "GetCustomWorldPositionOffsetDisableDistance" }, // 2617301577
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAffectDistanceFieldLighting, "SetCustomAffectDistanceFieldLighting" }, // 3254057036
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomAlignToNormal, "SetCustomAlignToNormal" }, // 4070547833
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomPitchAngle, "SetCustomRandomPitchAngle" }, // 1425559265
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomRandomYaw, "SetCustomRandomYaw" }, // 907671894
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleX, "SetCustomScaleX" }, // 1085970721
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleY, "SetCustomScaleY" }, // 746622826
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaleZ, "SetCustomScaleZ" }, // 49854956
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomScaling, "SetCustomScaling" }, // 3430320830
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomStaticMesh, "SetCustomStaticMesh" }, // 3243783668
		{ &Z_Construct_UFunction_UFabInterchangeInstancedFoliageTypeFactoryNode_SetCustomWorldPositionOffsetDisableDistance, "SetCustomWorldPositionOffsetDisableDistance" }, // 3309263755
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabInterchangeInstancedFoliageTypeFactoryNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBaseNode,
	(UObject* (*)())Z_Construct_UPackage__Script_FabLauncherQuixelDependencies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::ClassParams = {
	&UFabInterchangeInstancedFoliageTypeFactoryNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode()
{
	if (!Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton, Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode.OuterSingleton;
}
UFabInterchangeInstancedFoliageTypeFactoryNode::UFabInterchangeInstancedFoliageTypeFactoryNode() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFabInterchangeInstancedFoliageTypeFactoryNode);
UFabInterchangeInstancedFoliageTypeFactoryNode::~UFabInterchangeInstancedFoliageTypeFactoryNode() {}
// ********** End Class UFabInterchangeInstancedFoliageTypeFactoryNode *****************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Nodes_FabInterchangeInstancedFoliageTypeFactoryNode_h__Script_FabLauncherQuixelDependencies_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, UFabInterchangeInstancedFoliageTypeFactoryNode::StaticClass, TEXT("UFabInterchangeInstancedFoliageTypeFactoryNode"), &Z_Registration_Info_UClass_UFabInterchangeInstancedFoliageTypeFactoryNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabInterchangeInstancedFoliageTypeFactoryNode), 2500627508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Nodes_FabInterchangeInstancedFoliageTypeFactoryNode_h__Script_FabLauncherQuixelDependencies_1466105205(TEXT("/Script/FabLauncherQuixelDependencies"),
	Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Nodes_FabInterchangeInstancedFoliageTypeFactoryNode_h__Script_FabLauncherQuixelDependencies_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Plugins_fab_plugins_unreal_engine_Builds_UE_5_6_FabLauncher_HostProject_Plugins_FabLauncher_Source_FabLauncherQuixelDependencies_Private_Pipelines_Nodes_FabInterchangeInstancedFoliageTypeFactoryNode_h__Script_FabLauncherQuixelDependencies_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
