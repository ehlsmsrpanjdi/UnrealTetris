// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_TetrisCollision.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U_TETRIS_C_TetrisCollision_generated_h
#error "C_TetrisCollision.generated.h already included, missing '#pragma once' in C_TetrisCollision.h"
#endif
#define U_TETRIS_C_TetrisCollision_generated_h

#define FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOverlap); \
	DECLARE_FUNCTION(execOffOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


#define FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_TetrisCollision(); \
	friend struct Z_Construct_UClass_AC_TetrisCollision_Statics; \
public: \
	DECLARE_CLASS(AC_TetrisCollision, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U_Tetris"), NO_API) \
	DECLARE_SERIALIZER(AC_TetrisCollision)


#define FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_TetrisCollision(AC_TetrisCollision&&); \
	AC_TetrisCollision(const AC_TetrisCollision&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_TetrisCollision); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_TetrisCollision); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_TetrisCollision) \
	NO_API virtual ~AC_TetrisCollision();


#define FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_9_PROLOG
#define FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_INCLASS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U_TETRIS_API UClass* StaticClass<class AC_TetrisCollision>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_U_Tetris_Source_U_Tetris_C_TetrisCollision_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
