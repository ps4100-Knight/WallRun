// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WALLRUN_BaseLevel_generated_h
#error "BaseLevel.generated.h already included, missing '#pragma once' in BaseLevel.h"
#endif
#define WALLRUN_BaseLevel_generated_h

#define FID_WallRun_Source_WallRun_BaseLevel_h_14_SPARSE_DATA
#define FID_WallRun_Source_WallRun_BaseLevel_h_14_RPC_WRAPPERS
#define FID_WallRun_Source_WallRun_BaseLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_WallRun_Source_WallRun_BaseLevel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseLevel(); \
	friend struct Z_Construct_UClass_ABaseLevel_Statics; \
public: \
	DECLARE_CLASS(ABaseLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WallRun"), NO_API) \
	DECLARE_SERIALIZER(ABaseLevel)


#define FID_WallRun_Source_WallRun_BaseLevel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseLevel(); \
	friend struct Z_Construct_UClass_ABaseLevel_Statics; \
public: \
	DECLARE_CLASS(ABaseLevel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WallRun"), NO_API) \
	DECLARE_SERIALIZER(ABaseLevel)


#define FID_WallRun_Source_WallRun_BaseLevel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseLevel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseLevel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseLevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseLevel(ABaseLevel&&); \
	NO_API ABaseLevel(const ABaseLevel&); \
public:


#define FID_WallRun_Source_WallRun_BaseLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseLevel(ABaseLevel&&); \
	NO_API ABaseLevel(const ABaseLevel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseLevel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseLevel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseLevel)


#define FID_WallRun_Source_WallRun_BaseLevel_h_11_PROLOG
#define FID_WallRun_Source_WallRun_BaseLevel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_SPARSE_DATA \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_RPC_WRAPPERS \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_INCLASS \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_WallRun_Source_WallRun_BaseLevel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_SPARSE_DATA \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_INCLASS_NO_PURE_DECLS \
	FID_WallRun_Source_WallRun_BaseLevel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WALLRUN_API UClass* StaticClass<class ABaseLevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WallRun_Source_WallRun_BaseLevel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
