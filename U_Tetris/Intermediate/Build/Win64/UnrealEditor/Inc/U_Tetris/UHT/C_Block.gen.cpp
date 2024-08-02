// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_Block.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Block() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Block();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Block_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Cube_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AC_Block
void AC_Block::StaticRegisterNativesAC_Block()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Block);
UClass* Z_Construct_UClass_AC_Block_NoRegister()
{
	return AC_Block::StaticClass();
}
struct Z_Construct_UClass_AC_Block_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_Block.h" },
		{ "ModuleRelativePath", "C_Block.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolTime_MetaData[] = {
		{ "ModuleRelativePath", "C_Block.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_Block" },
		{ "ModuleRelativePath", "C_Block.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeArray_MetaData[] = {
		{ "ModuleRelativePath", "C_Block.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolTime;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CubeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CubeArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Block>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_Block_Statics::NewProp_CoolTime = { "CoolTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Block, CoolTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolTime_MetaData), NewProp_CoolTime_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_Block_Statics::NewProp_CubeType = { "CubeType", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Block, CubeType), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_Cube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeType_MetaData), NewProp_CubeType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Block_Statics::NewProp_CubeArray_Inner = { "CubeArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AC_Cube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AC_Block_Statics::NewProp_CubeArray = { "CubeArray", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Block, CubeArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeArray_MetaData), NewProp_CubeArray_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Block_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Block_Statics::NewProp_CoolTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Block_Statics::NewProp_CubeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Block_Statics::NewProp_CubeArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Block_Statics::NewProp_CubeArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Block_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_Block_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Block_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Block_Statics::ClassParams = {
	&AC_Block::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_Block_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_Block_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Block_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_Block_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_Block()
{
	if (!Z_Registration_Info_UClass_AC_Block.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Block.OuterSingleton, Z_Construct_UClass_AC_Block_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_Block.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<AC_Block>()
{
	return AC_Block::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Block);
AC_Block::~AC_Block() {}
// End Class AC_Block

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Block_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_Block, AC_Block::StaticClass, TEXT("AC_Block"), &Z_Registration_Info_UClass_AC_Block, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Block), 2801880324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Block_h_544191388(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Block_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Block_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
