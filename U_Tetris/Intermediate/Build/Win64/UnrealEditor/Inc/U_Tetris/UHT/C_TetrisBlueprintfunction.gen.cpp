// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_TetrisBlueprintfunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_TetrisBlueprintfunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisBlueprintfunction();
U_TETRIS_API UClass* Z_Construct_UClass_UC_TetrisBlueprintfunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class UC_TetrisBlueprintfunction
void UC_TetrisBlueprintfunction::StaticRegisterNativesUC_TetrisBlueprintfunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC_TetrisBlueprintfunction);
UClass* Z_Construct_UClass_UC_TetrisBlueprintfunction_NoRegister()
{
	return UC_TetrisBlueprintfunction::StaticClass();
}
struct Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "C_TetrisBlueprintfunction.h" },
		{ "ModuleRelativePath", "C_TetrisBlueprintfunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_TetrisBlueprintfunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::ClassParams = {
	&UC_TetrisBlueprintfunction::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC_TetrisBlueprintfunction()
{
	if (!Z_Registration_Info_UClass_UC_TetrisBlueprintfunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC_TetrisBlueprintfunction.OuterSingleton, Z_Construct_UClass_UC_TetrisBlueprintfunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC_TetrisBlueprintfunction.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<UC_TetrisBlueprintfunction>()
{
	return UC_TetrisBlueprintfunction::StaticClass();
}
UC_TetrisBlueprintfunction::UC_TetrisBlueprintfunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC_TetrisBlueprintfunction);
UC_TetrisBlueprintfunction::~UC_TetrisBlueprintfunction() {}
// End Class UC_TetrisBlueprintfunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBlueprintfunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC_TetrisBlueprintfunction, UC_TetrisBlueprintfunction::StaticClass, TEXT("UC_TetrisBlueprintfunction"), &Z_Registration_Info_UClass_UC_TetrisBlueprintfunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC_TetrisBlueprintfunction), 227376354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBlueprintfunction_h_1021247032(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBlueprintfunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_TetrisBlueprintfunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
