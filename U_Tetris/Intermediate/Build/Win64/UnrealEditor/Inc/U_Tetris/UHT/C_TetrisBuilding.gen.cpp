// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_TetrisBuilding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TetrisBuilding() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
U_TETRIS_API UClass* Z_Construct_UClass_AC_TetrisBuilding();
U_TETRIS_API UClass* Z_Construct_UClass_AC_TetrisBuilding_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AC_TetrisCollision_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AC_TetrisBuilding
void AC_TetrisBuilding::StaticRegisterNativesAC_TetrisBuilding()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_TetrisBuilding);
UClass* Z_Construct_UClass_AC_TetrisBuilding_NoRegister()
{
	return AC_TetrisBuilding::StaticClass();
}
struct Z_Construct_UClass_AC_TetrisBuilding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_TetrisBuilding.h" },
		{ "ModuleRelativePath", "C_TetrisBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_TetrisBuilding" },
		{ "ModuleRelativePath", "C_TetrisBuilding.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCount_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_TetrisBuilding" },
		{ "ModuleRelativePath", "C_TetrisBuilding.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CollisionMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoxCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_TetrisBuilding>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AC_TetrisBuilding_Statics::NewProp_CollisionMesh = { "CollisionMesh", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_TetrisBuilding, CollisionMesh), Z_Construct_UClass_UClass, Z_Construct_UClass_AC_TetrisCollision_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMesh_MetaData), NewProp_CollisionMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_TetrisBuilding_Statics::NewProp_BoxCount = { "BoxCount", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_TetrisBuilding, BoxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCount_MetaData), NewProp_BoxCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_TetrisBuilding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TetrisBuilding_Statics::NewProp_CollisionMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_TetrisBuilding_Statics::NewProp_BoxCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisBuilding_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_TetrisBuilding_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisBuilding_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_TetrisBuilding_Statics::ClassParams = {
	&AC_TetrisBuilding::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_TetrisBuilding_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisBuilding_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_TetrisBuilding_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_TetrisBuilding_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_TetrisBuilding()
{
	if (!Z_Registration_Info_UClass_AC_TetrisBuilding.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_TetrisBuilding.OuterSingleton, Z_Construct_UClass_AC_TetrisBuilding_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_TetrisBuilding.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<AC_TetrisBuilding>()
{
	return AC_TetrisBuilding::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_TetrisBuilding);
AC_TetrisBuilding::~AC_TetrisBuilding() {}
// End Class AC_TetrisBuilding

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBuilding_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_TetrisBuilding, AC_TetrisBuilding::StaticClass, TEXT("AC_TetrisBuilding"), &Z_Registration_Info_UClass_AC_TetrisBuilding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_TetrisBuilding), 3429200061U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBuilding_h_3288578941(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBuilding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBuilding_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
