// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WallRun/LevelSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSpawner() {}
// Cross Module References
	WALLRUN_API UClass* Z_Construct_UClass_ALevelSpawner_NoRegister();
	WALLRUN_API UClass* Z_Construct_UClass_ALevelSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WallRun();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WALLRUN_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelSpawner::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSpawner::execSpawnLevel)
	{
		P_GET_UBOOL(Z_Param_IsFirst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnLevel(Z_Param_IsFirst);
		P_NATIVE_END;
	}
	void ALevelSpawner::StaticRegisterNativesALevelSpawner()
	{
		UClass* Class = ALevelSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ALevelSpawner::execOnOverlapBegin },
			{ "SpawnLevel", &ALevelSpawner::execSpawnLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics
	{
		struct LevelSpawner_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelSpawner_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSpawner_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSpawner_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSpawner, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::LevelSpawner_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics
	{
		struct LevelSpawner_eventSpawnLevel_Parms
		{
			bool IsFirst;
		};
		static void NewProp_IsFirst_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFirst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_IsFirst_SetBit(void* Obj)
	{
		((LevelSpawner_eventSpawnLevel_Parms*)Obj)->IsFirst = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_IsFirst = { "IsFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSpawner_eventSpawnLevel_Parms), &Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_IsFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::NewProp_IsFirst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSpawner, nullptr, "SpawnLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::LevelSpawner_eventSpawnLevel_Parms), Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSpawner_SpawnLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelSpawner_SpawnLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelSpawner);
	UClass* Z_Construct_UClass_ALevelSpawner_NoRegister()
	{
		return ALevelSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level1_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level2_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level3_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level4_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level5_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level5;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level6_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level6;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level7_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level7;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level8_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level9_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level9;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Level10_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Level10;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WallRun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSpawner_OnOverlapBegin, "OnOverlapBegin" }, // 3394671354
		{ &Z_Construct_UFunction_ALevelSpawner_SpawnLevel, "SpawnLevel" }, // 2096715110
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSpawner.h" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level1_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level1 = { "Level1", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level1), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level2_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level2 = { "Level2", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level2), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level3_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level3 = { "Level3", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level3), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level4_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level4 = { "Level4", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level4), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level5_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level5 = { "Level5", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level5), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level5_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level6_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level6 = { "Level6", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level6), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level6_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level7_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level7 = { "Level7", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level7), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level7_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level8_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level8 = { "Level8", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level8), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level8_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level9_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level9 = { "Level9", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level9), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level9_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level10_MetaData[] = {
		{ "Category", "LevelSpawner" },
		{ "ModuleRelativePath", "LevelSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level10 = { "Level10", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSpawner, Level10), Z_Construct_UClass_ABaseLevel_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level10_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level10_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level6,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level7,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level9,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSpawner_Statics::NewProp_Level10,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelSpawner_Statics::ClassParams = {
		&ALevelSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSpawner()
	{
		if (!Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton, Z_Construct_UClass_ALevelSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelSpawner.OuterSingleton;
	}
	template<> WALLRUN_API UClass* StaticClass<ALevelSpawner>()
	{
		return ALevelSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSpawner);
	struct Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_LevelSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_LevelSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelSpawner, ALevelSpawner::StaticClass, TEXT("ALevelSpawner"), &Z_Registration_Info_UClass_ALevelSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelSpawner), 2976378171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_LevelSpawner_h_2884415496(TEXT("/Script/WallRun"),
		Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_LevelSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_LevelSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
