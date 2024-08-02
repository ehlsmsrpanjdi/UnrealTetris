// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/U_TetrisGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeU_TetrisGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Block_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AU_TetrisGameMode();
U_TETRIS_API UClass* Z_Construct_UClass_AU_TetrisGameMode_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_ULocationObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AU_TetrisGameMode Function SetData
struct Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics
{
	struct U_TetrisGameMode_eventSetData_Parms
	{
		UDataTable* _Table;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "U_TetrisGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp__Table;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::NewProp__Table = { "_Table", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(U_TetrisGameMode_eventSetData_Parms, _Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::NewProp__Table,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AU_TetrisGameMode, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::U_TetrisGameMode_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::U_TetrisGameMode_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AU_TetrisGameMode_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AU_TetrisGameMode_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AU_TetrisGameMode::execSetData)
{
	P_GET_OBJECT(UDataTable,Z_Param__Table);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param__Table);
	P_NATIVE_END;
}
// End Class AU_TetrisGameMode Function SetData

// Begin Class AU_TetrisGameMode Function SpawnCube
struct Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics
{
	struct U_TetrisGameMode_eventSpawnCube_Parms
	{
		FTransform _Transform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AllowPrivateAccess", "true" },
		{ "ModuleRelativePath", "U_TetrisGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::NewProp__Transform = { "_Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(U_TetrisGameMode_eventSpawnCube_Parms, _Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__Transform_MetaData), NewProp__Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::NewProp__Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AU_TetrisGameMode, nullptr, "SpawnCube", nullptr, nullptr, Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::PropPointers), sizeof(Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::U_TetrisGameMode_eventSpawnCube_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::Function_MetaDataParams), Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::U_TetrisGameMode_eventSpawnCube_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AU_TetrisGameMode::execSpawnCube)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out__Transform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnCube(Z_Param_Out__Transform);
	P_NATIVE_END;
}
// End Class AU_TetrisGameMode Function SpawnCube

// Begin Class AU_TetrisGameMode
void AU_TetrisGameMode::StaticRegisterNativesAU_TetrisGameMode()
{
	UClass* Class = AU_TetrisGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetData", &AU_TetrisGameMode::execSetData },
		{ "SpawnCube", &AU_TetrisGameMode::execSpawnCube },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AU_TetrisGameMode);
UClass* Z_Construct_UClass_AU_TetrisGameMode_NoRegister()
{
	return AU_TetrisGameMode::StaticClass();
}
struct Z_Construct_UClass_AU_TetrisGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "U_TetrisGameMode.h" },
		{ "ModuleRelativePath", "U_TetrisGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationData_MetaData[] = {
		{ "ModuleRelativePath", "U_TetrisGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnBlock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "U_TetrisGameMode" },
		{ "ModuleRelativePath", "U_TetrisGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationData;
	static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnBlock;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AU_TetrisGameMode_SetData, "SetData" }, // 4188461247
		{ &Z_Construct_UFunction_AU_TetrisGameMode_SpawnCube, "SpawnCube" }, // 247277066
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AU_TetrisGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AU_TetrisGameMode_Statics::NewProp_LocationData = { "LocationData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AU_TetrisGameMode, LocationData), Z_Construct_UClass_ULocationObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationData_MetaData), NewProp_LocationData_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AU_TetrisGameMode_Statics::NewProp_SpawnBlock = { "SpawnBlock", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AU_TetrisGameMode, SpawnBlock), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_Block_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnBlock_MetaData), NewProp_SpawnBlock_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AU_TetrisGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AU_TetrisGameMode_Statics::NewProp_LocationData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AU_TetrisGameMode_Statics::NewProp_SpawnBlock,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AU_TetrisGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AU_TetrisGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AU_TetrisGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AU_TetrisGameMode_Statics::ClassParams = {
	&AU_TetrisGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AU_TetrisGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AU_TetrisGameMode_Statics::PropPointers),
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AU_TetrisGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AU_TetrisGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AU_TetrisGameMode()
{
	if (!Z_Registration_Info_UClass_AU_TetrisGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AU_TetrisGameMode.OuterSingleton, Z_Construct_UClass_AU_TetrisGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AU_TetrisGameMode.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<AU_TetrisGameMode>()
{
	return AU_TetrisGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AU_TetrisGameMode);
AU_TetrisGameMode::~AU_TetrisGameMode() {}
// End Class AU_TetrisGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AU_TetrisGameMode, AU_TetrisGameMode::StaticClass, TEXT("AU_TetrisGameMode"), &Z_Registration_Info_UClass_AU_TetrisGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AU_TetrisGameMode), 2340208401U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_3032139467(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
