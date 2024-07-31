// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C_Cube.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef U_TETRIS_C_Cube_generated_h
#error "C_Cube.generated.h already included, missing '#pragma once' in C_Cube.h"
#endif
#define U_TETRIS_C_Cube_generated_h

#define FID_U_Tetris_Source_U_Tetris_C_Cube_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAC_Cube(); \
	friend struct Z_Construct_UClass_AC_Cube_Statics; \
public: \
	DECLARE_CLASS(AC_Cube, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/U_Tetris"), NO_API) \
	DECLARE_SERIALIZER(AC_Cube)


#define FID_U_Tetris_Source_U_Tetris_C_Cube_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC_Cube(AC_Cube&&); \
	AC_Cube(const AC_Cube&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC_Cube); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC_Cube); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AC_Cube) \
	NO_API virtual ~AC_Cube();


#define FID_U_Tetris_Source_U_Tetris_C_Cube_h_10_PROLOG
#define FID_U_Tetris_Source_U_Tetris_C_Cube_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_U_Tetris_Source_U_Tetris_C_Cube_h_13_INCLASS_NO_PURE_DECLS \
	FID_U_Tetris_Source_U_Tetris_C_Cube_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> U_TETRIS_API UClass* StaticClass<class AC_Cube>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_U_Tetris_Source_U_Tetris_C_Cube_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
