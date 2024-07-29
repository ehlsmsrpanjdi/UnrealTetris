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
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisInstance();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class UC_TetrisInstance
void UC_TetrisInstance::StaticRegisterNativesUC_TetrisInstance()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_TetrisInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_UC_TetrisInstance, UC_TetrisInstance::StaticClass, TEXT("UC_TetrisInstance"), &Z_Registration_Info_UClass_UC_TetrisInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_TetrisInstance), 143447202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_3573858355(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
