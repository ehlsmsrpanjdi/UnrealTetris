// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "U_TetrisGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
#ifdef U_TETRIS_U_TetrisGameMode_generated_h
#error "U_TetrisGameMode.generated.h already included, missing '#pragma once' in U_TetrisGameMode.h"
#endif
#define U_TETRIS_U_TetrisGameMode_generated_h

#define FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnCube); \
	DECLARE_FUNCTION(execSetData);


#define FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAU_TetrisGameMode(); \
	friend struct Z_Construct_UClass_AU_TetrisGameMode_Statics; \
public: \
	DECLARE_CLASS(AU_TetrisGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/U_Tetris"), U_TETRIS_API) \
	DECLARE_SERIALIZER(AU_TetrisGameMode)


#define FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AU_TetrisGameMode(AU_TetrisGameMode&&); \
	AU_TetrisGameMode(const AU_TetrisGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(U_TETRIS_API, AU_TetrisGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AU_TetrisGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AU_TetrisGameMode) \
	U_TETRIS_API virtual ~AU_TetrisGameMode();


#define FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_9_PROLOG
#define FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U_TETRIS_API UClass* StaticClass<class AU_TetrisGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_U_Tetris_Source_U_Tetris_U_TetrisGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
