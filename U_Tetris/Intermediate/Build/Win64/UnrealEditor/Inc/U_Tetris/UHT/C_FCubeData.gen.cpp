// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "U_Tetris/C_FCubeData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_FCubeData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
U_TETRIS_API UClass* Z_Construct_UClass_ULocationObject();
U_TETRIS_API UClass* Z_Construct_UClass_ULocationObject_NoRegister();
U_TETRIS_API UScriptStruct* Z_Construct_UScriptStruct_FC_FCubeData();
U_TETRIS_API UScriptStruct* Z_Construct_UScriptStruct_FCubeLocation();
UPackage* Z_Construct_UPackage__Script_U_Tetris();
// End Cross Module References

// Begin ScriptStruct FCubeLocation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CubeLocation;
class UScriptStruct* FCubeLocation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CubeLocation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CubeLocation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCubeLocation, (UObject*)Z_Construct_UPackage__Script_U_Tetris(), TEXT("CubeLocation"));
	}
	return Z_Registration_Info_UScriptStruct_CubeLocation.OuterSingleton;
}
template<> U_TETRIS_API UScriptStruct* StaticStruct<FCubeLocation>()
{
	return FCubeLocation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCubeLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocatoinX_MetaData[] = {
		{ "Category", "CubeLocation" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocatoinY_MetaData[] = {
		{ "Category", "CubeLocation" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocatoinX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocatoinY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCubeLocation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCubeLocation_Statics::NewProp_LocatoinX = { "LocatoinX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCubeLocation, LocatoinX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocatoinX_MetaData), NewProp_LocatoinX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCubeLocation_Statics::NewProp_LocatoinY = { "LocatoinY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCubeLocation, LocatoinY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocatoinY_MetaData), NewProp_LocatoinY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCubeLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeLocation_Statics::NewProp_LocatoinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCubeLocation_Statics::NewProp_LocatoinY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCubeLocation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
	nullptr,
	&NewStructOps,
	"CubeLocation",
	Z_Construct_UScriptStruct_FCubeLocation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeLocation_Statics::PropPointers),
	sizeof(FCubeLocation),
	alignof(FCubeLocation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCubeLocation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCubeLocation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCubeLocation()
{
	if (!Z_Registration_Info_UScriptStruct_CubeLocation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CubeLocation.InnerSingleton, Z_Construct_UScriptStruct_FCubeLocation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CubeLocation.InnerSingleton;
}
// End ScriptStruct FCubeLocation

// Begin ScriptStruct FC_FCubeData
static_assert(std::is_polymorphic<FC_FCubeData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FC_FCubeData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_C_FCubeData;
class UScriptStruct* FC_FCubeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_C_FCubeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_C_FCubeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FC_FCubeData, (UObject*)Z_Construct_UPackage__Script_U_Tetris(), TEXT("C_FCubeData"));
	}
	return Z_Registration_Info_UScriptStruct_C_FCubeData.OuterSingleton;
}
template<> U_TETRIS_API UScriptStruct* StaticStruct<FC_FCubeData>()
{
	return FC_FCubeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FC_FCubeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationArray_MetaData[] = {
		{ "Category", "C_FCubeData" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocationArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FC_FCubeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FC_FCubeData_Statics::NewProp_LocationArray_Inner = { "LocationArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCubeLocation, METADATA_PARAMS(0, nullptr) }; // 1402397571
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FC_FCubeData_Statics::NewProp_LocationArray = { "LocationArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC_FCubeData, LocationArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationArray_MetaData), NewProp_LocationArray_MetaData) }; // 1402397571
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FC_FCubeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC_FCubeData_Statics::NewProp_LocationArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC_FCubeData_Statics::NewProp_LocationArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC_FCubeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FC_FCubeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"C_FCubeData",
	Z_Construct_UScriptStruct_FC_FCubeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC_FCubeData_Statics::PropPointers),
	sizeof(FC_FCubeData),
	alignof(FC_FCubeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC_FCubeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FC_FCubeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FC_FCubeData()
{
	if (!Z_Registration_Info_UScriptStruct_C_FCubeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_C_FCubeData.InnerSingleton, Z_Construct_UScriptStruct_FC_FCubeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_C_FCubeData.InnerSingleton;
}
// End ScriptStruct FC_FCubeData

// Begin Class ULocationObject
void ULocationObject::StaticRegisterNativesULocationObject()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocationObject);
UClass* Z_Construct_UClass_ULocationObject_NoRegister()
{
	return ULocationObject::StaticClass();
}
struct Z_Construct_UClass_ULocationObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "C_FCubeData.h" },
		{ "ModuleRelativePath", "C_FCubeData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULocationObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_U_Tetris,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocationObject_Statics::ClassParams = {
	&ULocationObject::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocationObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocationObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocationObject()
{
	if (!Z_Registration_Info_UClass_ULocationObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocationObject.OuterSingleton, Z_Construct_UClass_ULocationObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocationObject.OuterSingleton;
}
template<> U_TETRIS_API UClass* StaticClass<ULocationObject>()
{
	return ULocationObject::StaticClass();
}
ULocationObject::ULocationObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationObject);
ULocationObject::~ULocationObject() {}
// End Class ULocationObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCubeLocation::StaticStruct, Z_Construct_UScriptStruct_FCubeLocation_Statics::NewStructOps, TEXT("CubeLocation"), &Z_Registration_Info_UScriptStruct_CubeLocation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCubeLocation), 1402397571U) },
		{ FC_FCubeData::StaticStruct, Z_Construct_UScriptStruct_FC_FCubeData_Statics::NewStructOps, TEXT("C_FCubeData"), &Z_Registration_Info_UScriptStruct_C_FCubeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FC_FCubeData), 193575043U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocationObject, ULocationObject::StaticClass, TEXT("ULocationObject"), &Z_Registration_Info_UClass_ULocationObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocationObject), 4286673744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_3235026888(TEXT("/Script/U_Tetris"),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
