// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_TetrisInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TetrisInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisInstance();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisInstance_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_ULocationObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class UC_TetrisInstance Function SetData
struct Z_Construct_UFunction_UC_TetrisInstance_SetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TetrisInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC_TetrisInstance_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC_TetrisInstance, nullptr, "SetData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC_TetrisInstance_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC_TetrisInstance_SetData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UC_TetrisInstance_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC_TetrisInstance_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC_TetrisInstance::execSetData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData();
	P_NATIVE_END;
}
// End Class UC_TetrisInstance Function SetData

// Begin Class UC_TetrisInstance
void UC_TetrisInstance::StaticRegisterNativesUC_TetrisInstance()
{
	UClass* Class = UC_TetrisInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetData", &UC_TetrisInstance::execSetData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_TetrisInstance);
UClass* Z_Construct_UClass_UC_TetrisInstance_NoRegister()
{
	return UC_TetrisInstance::StaticClass();
}
struct Z_Construct_UClass_UC_TetrisInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "C_TetrisInstance.h" },
		{ "ModuleRelativePath", "C_TetrisInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_TetrisInstance" },
		{ "ModuleRelativePath", "C_TetrisInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationData_MetaData[] = {
		{ "ModuleRelativePath", "C_TetrisInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC_TetrisInstance_SetData, "SetData" }, // 1897925202
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_TetrisInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_TetrisInstance_Statics::NewProp_CubeData = { "CubeData", nullptr, (EPropertyFlags)0x0144000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_TetrisInstance, CubeData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeData_MetaData), NewProp_CubeData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UC_TetrisInstance_Statics::NewProp_LocationData = { "LocationData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UC_TetrisInstance, LocationData), Z_Construct_UClass_ULocationObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationData_MetaData), NewProp_LocationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_TetrisInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_TetrisInstance_Statics::NewProp_CubeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_TetrisInstance_Statics::NewProp_LocationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UC_TetrisInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_TetrisInstance_Statics::ClassParams = {
	&UC_TetrisInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UC_TetrisInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_TetrisInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_TetrisInstance()
{
	if (!Z_Registration_Info_UClass_UC_TetrisInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_TetrisInstance.OuterSingleton, Z_Construct_UClass_UC_TetrisInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_TetrisInstance.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<UC_TetrisInstance>()
{
	return UC_TetrisInstance::StaticClass();
}
UC_TetrisInstance::UC_TetrisInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_TetrisInstance);
UC_TetrisInstance::~UC_TetrisInstance() {}
// End Class UC_TetrisInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_TetrisInstance, UC_TetrisInstance::StaticClass, TEXT("UC_TetrisInstance"), &Z_Registration_Info_UClass_UC_TetrisInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_TetrisInstance), 3563745121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_1326567546(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
