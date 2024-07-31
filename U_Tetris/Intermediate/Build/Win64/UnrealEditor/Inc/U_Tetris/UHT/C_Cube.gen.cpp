// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_Cube.h"
#include "U_Tetris/C_FCubeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Cube() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Cube();
U_TETRIS_API UClass* Z_Construct_UClass_AC_Cube_NoRegister();
U_TETRIS_API UScriptStruct* Z_Construct_UScriptStruct_FCubeLocation();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AC_Cube
void AC_Cube::StaticRegisterNativesAC_Cube()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_Cube);
UClass* Z_Construct_UClass_AC_Cube_NoRegister()
{
	return AC_Cube::StaticClass();
}
struct Z_Construct_UClass_AC_Cube_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_Cube.h" },
		{ "ModuleRelativePath", "C_Cube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "C_Cube.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Body_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "C_Cube" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_Cube.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Body;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Cube>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC_Cube_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Cube, Location), Z_Construct_UScriptStruct_FCubeLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) }; // 1402397571
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Cube_Statics::NewProp_Body = { "Body", nullptr, (EPropertyFlags)0x014400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_Cube, Body), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Body_MetaData), NewProp_Body_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Cube_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Cube_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Cube_Statics::NewProp_Body,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Cube_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC_Cube_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Cube_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_Cube_Statics::ClassParams = {
	&AC_Cube::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AC_Cube_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AC_Cube_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_Cube_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_Cube_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC_Cube()
{
	if (!Z_Registration_Info_UClass_AC_Cube.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_Cube.OuterSingleton, Z_Construct_UClass_AC_Cube_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC_Cube.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<AC_Cube>()
{
	return AC_Cube::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Cube);
AC_Cube::~AC_Cube() {}
// End Class AC_Cube

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Cube_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC_Cube, AC_Cube::StaticClass, TEXT("AC_Cube"), &Z_Registration_Info_UClass_AC_Cube, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_Cube), 1300328464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Cube_h_281138580(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Cube_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_Cube_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
