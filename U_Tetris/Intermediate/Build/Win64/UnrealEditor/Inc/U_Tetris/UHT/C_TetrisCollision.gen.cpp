// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_TetrisCollision.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TetrisCollision() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AC_TetrisCollision();
U_TETRIS_API UClass* Z_Construct_UClass_AC_TetrisCollision_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AC_TetrisCollision Function GetOverlap
struct Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics
{
	struct C_TetrisCollision_eventGetOverlap_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TetrisCollision.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C_TetrisCollision_eventGetOverlap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C_TetrisCollision_eventGetOverlap_Parms), &Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TetrisCollision, nullptr, "GetOverlap", nullptr, nullptr, Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::C_TetrisCollision_eventGetOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::C_TetrisCollision_eventGetOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC_TetrisCollision_GetOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TetrisCollision_GetOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_TetrisCollision::execGetOverlap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetOverlap();
	P_NATIVE_END;
}
// End Class AC_TetrisCollision Function GetOverlap

// Begin Class AC_TetrisCollision Function OffOverlap
struct Z_Construct_UFunction_AC_TetrisCollision_OffOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TetrisCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TetrisCollision_OffOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TetrisCollision, nullptr, "OffOverlap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TetrisCollision_OffOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_TetrisCollision_OffOverlap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_TetrisCollision_OffOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TetrisCollision_OffOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_TetrisCollision::execOffOverlap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OffOverlap();
	P_NATIVE_END;
}
// End Class AC_TetrisCollision Function OffOverlap

// Begin Class AC_TetrisCollision Function OnOverlap
struct Z_Construct_UFunction_AC_TetrisCollision_OnOverlap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_TetrisCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_TetrisCollision_OnOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_TetrisCollision, nullptr, "OnOverlap", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_TetrisCollision_OnOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_TetrisCollision_OnOverlap_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC_TetrisCollision_OnOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_TetrisCollision_OnOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC_TetrisCollision::execOnOverlap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlap();
	P_NATIVE_END;
}
// End Class AC_TetrisCollision Function OnOverlap

// Begin Class AC_TetrisCollision
void AC_TetrisCollision::StaticRegisterNativesAC_TetrisCollision()
{
	UClass* Class = AC_TetrisCollision::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOverlap", &AC_TetrisCollision::execGetOverlap },
		{ "OffOverlap", &AC_TetrisCollision::execOffOverlap },
		{ "OnOverlap", &AC_TetrisCollision::execOnOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_TetrisCollision);
UClass* Z_Construct_UClass_AC_TetrisCollision_NoRegister()
{
	return AC_TetrisCollision::StaticClass();
}
struct Z_Construct_UClass_AC_TetrisCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_TetrisCollision.h" },
		{ "ModuleRelativePath", "C_TetrisCollision.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_TetrisCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_TetrisCollision.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_TetrisCollision_GetOverlap, "GetOverlap" }, // 612250499
		{ &Z_Construct_UFunction_AC_TetrisCollision_OffOverlap, "OffOverlap" }, // 4174894190
		{ &Z_Construct_UFunction_AC_TetrisCollision_OnOverlap, "OnOverlap" }, // 2905078786
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_TetrisCollision>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_TetrisCollision_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_TetrisCollision, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_TetrisCollision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TetrisCollision_Statics::NewProp_CollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisCollision_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_TetrisCollision_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisCollision_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_TetrisCollision_Statics::ClassParams = {
	&AC_TetrisCollision::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AC_TetrisCollision_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisCollision_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisCollision_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_TetrisCollision_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_TetrisCollision()
{
	if (!Z_Registration_Info_UClass_AC_TetrisCollision.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_TetrisCollision.OuterSingleton, Z_Construct_UClass_AC_TetrisCollision_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_TetrisCollision.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<AC_TetrisCollision>()
{
	return AC_TetrisCollision::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_TetrisCollision);
AC_TetrisCollision::~AC_TetrisCollision() {}
// End Class AC_TetrisCollision

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_TetrisCollision, AC_TetrisCollision::StaticClass, TEXT("AC_TetrisCollision"), &Z_Registration_Info_UClass_AC_TetrisCollision, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_TetrisCollision), 2210158016U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_931222444(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
