// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WallRun/BaseLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLevel() {}
// Cross Module References
	WALLRUN_API UClass* Z_Construct_UClass_ABaseLevel_NoRegister();
	WALLRUN_API UClass* Z_Construct_UClass_ABaseLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_WallRun();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ABaseLevel::StaticRegisterNativesABaseLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseLevel);
	UClass* Z_Construct_UClass_ABaseLevel_NoRegister()
	{
		return ABaseLevel::StaticClass();
	}
	struct Z_Construct_UClass_ABaseLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_WallRun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseLevel.h" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLevel, Trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Triggers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BaseLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseLevel, SpawnLocation), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_Trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseLevel_Statics::NewProp_SpawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseLevel_Statics::ClassParams = {
		&ABaseLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseLevel()
	{
		if (!Z_Registration_Info_UClass_ABaseLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseLevel.OuterSingleton, Z_Construct_UClass_ABaseLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseLevel.OuterSingleton;
	}
	template<> WALLRUN_API UClass* StaticClass<ABaseLevel>()
	{
		return ABaseLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseLevel);
	struct Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_BaseLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_BaseLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseLevel, ABaseLevel::StaticClass, TEXT("ABaseLevel"), &Z_Registration_Info_UClass_ABaseLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseLevel), 1063102771U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_BaseLevel_h_2444834576(TEXT("/Script/WallRun"),
		Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_BaseLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_BaseLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
