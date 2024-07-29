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
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
U_TETRIS_API UClass* Z_Construct_UClass_AU_TetrisGameMode();
U_TETRIS_API UClass* Z_Construct_UClass_AU_TetrisGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin Class AU_TetrisGameMode
void AU_TetrisGameMode::StaticRegisterNativesAU_TetrisGameMode()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AU_TetrisGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AU_TetrisGameMode, AU_TetrisGameMode::StaticClass, TEXT("AU_TetrisGameMode"), &Z_Registration_Info_UClass_AU_TetrisGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AU_TetrisGameMode), 3657929868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_2550478594(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
