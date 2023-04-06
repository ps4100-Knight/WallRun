// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WallRun/WallRunGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWallRunGameMode() {}
// Cross Module References
	WALLRUN_API UClass* Z_Construct_UClass_AWallRunGameMode_NoRegister();
	WALLRUN_API UClass* Z_Construct_UClass_AWallRunGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WallRun();
// End Cross Module References
	void AWallRunGameMode::StaticRegisterNativesAWallRunGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWallRunGameMode);
	UClass* Z_Construct_UClass_AWallRunGameMode_NoRegister()
	{
		return AWallRunGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AWallRunGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWallRunGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WallRun,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWallRunGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WallRunGameMode.h" },
		{ "ModuleRelativePath", "WallRunGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWallRunGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWallRunGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWallRunGameMode_Statics::ClassParams = {
		&AWallRunGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWallRunGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWallRunGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWallRunGameMode()
	{
		if (!Z_Registration_Info_UClass_AWallRunGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWallRunGameMode.OuterSingleton, Z_Construct_UClass_AWallRunGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWallRunGameMode.OuterSingleton;
	}
	template<> WALLRUN_API UClass* StaticClass<AWallRunGameMode>()
	{
		return AWallRunGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWallRunGameMode);
	struct Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_WallRunGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_WallRunGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWallRunGameMode, AWallRunGameMode::StaticClass, TEXT("AWallRunGameMode"), &Z_Registration_Info_UClass_AWallRunGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWallRunGameMode), 1807299294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_WallRunGameMode_h_899028244(TEXT("/Script/WallRun"),
		Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_WallRunGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WallRun_Source_WallRun_WallRunGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
