// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_TetrisInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
#ifdef U_TETRIS_C_TetrisInstance_generated_h
#error "C_TetrisInstance.generated.h already included, missing '#pragma once' in C_TetrisInstance.h"
#endif
#define U_TETRIS_C_TetrisInstance_generated_h

#define FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetData);


#define FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_TetrisInstance(); \
	friend struct Z_Construct_UClass_UC_TetrisInstance_Statics; \
public: \
	DECLARE_CLASS(UC_TetrisInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/U_Tetris"), NO_API) \
	DECLARE_SERIALIZER(UC_TetrisInstance)


#define FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_TetrisInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC_TetrisInstance(UC_TetrisInstance&&); \
	UC_TetrisInstance(const UC_TetrisInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_TetrisInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_TetrisInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_TetrisInstance) \
	NO_API virtual ~UC_TetrisInstance();


#define FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_13_PROLOG
#define FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U_TETRIS_API UClass* StaticClass<class UC_TetrisInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_U_Tetris_Source_U_Tetris_C_TetrisInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
