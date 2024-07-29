// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_FCubeData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U_TETRIS_C_FCubeData_generated_h
#error "C_FCubeData.generated.h already included, missing '#pragma once' in C_FCubeData.h"
#endif
#define U_TETRIS_C_FCubeData_generated_h

#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationObject(); \
	friend struct Z_Construct_UClass_ULocationObject_Statics; \
public: \
	DECLARE_CLASS(ULocationObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/U_Tetris"), NO_API) \
	DECLARE_SERIALIZER(ULocationObject)


#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULocationObject(ULocationObject&&); \
	ULocationObject(const ULocationObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationObject) \
	NO_API virtual ~ULocationObject();


#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_9_PROLOG
#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_11_INCLASS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U_TETRIS_API UClass* StaticClass<class ULocationObject>();

#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCubeLocation_Statics; \
	U_TETRIS_API static class UScriptStruct* StaticStruct();


template<> U_TETRIS_API UScriptStruct* StaticStruct<struct FCubeLocation>();

#define FID_U_Tetris_Source_U_Tetris_C_FCubeData_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FC_FCubeData_Statics; \
	U_TETRIS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> U_TETRIS_API UScriptStruct* StaticStruct<struct FC_FCubeData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_U_Tetris_Source_U_Tetris_C_FCubeData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
