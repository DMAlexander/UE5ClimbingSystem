// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE5ClimbableSystem/UE5ClimbableSystemGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE5ClimbableSystemGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5CLIMBABLESYSTEM_API UClass* Z_Construct_UClass_AUE5ClimbableSystemGameMode();
	UE5CLIMBABLESYSTEM_API UClass* Z_Construct_UClass_AUE5ClimbableSystemGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UE5ClimbableSystem();
// End Cross Module References
	void AUE5ClimbableSystemGameMode::StaticRegisterNativesAUE5ClimbableSystemGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUE5ClimbableSystemGameMode);
	UClass* Z_Construct_UClass_AUE5ClimbableSystemGameMode_NoRegister()
	{
		return AUE5ClimbableSystemGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE5ClimbableSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UE5ClimbableSystemGameMode.h" },
		{ "ModuleRelativePath", "UE5ClimbableSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE5ClimbableSystemGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::ClassParams = {
		&AUE5ClimbableSystemGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE5ClimbableSystemGameMode()
	{
		if (!Z_Registration_Info_UClass_AUE5ClimbableSystemGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUE5ClimbableSystemGameMode.OuterSingleton, Z_Construct_UClass_AUE5ClimbableSystemGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUE5ClimbableSystemGameMode.OuterSingleton;
	}
	template<> UE5CLIMBABLESYSTEM_API UClass* StaticClass<AUE5ClimbableSystemGameMode>()
	{
		return AUE5ClimbableSystemGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE5ClimbableSystemGameMode);
	AUE5ClimbableSystemGameMode::~AUE5ClimbableSystemGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_alexa_Documents_UnrealProjects_UE5ClimbableSystem_Source_UE5ClimbableSystem_UE5ClimbableSystemGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_Documents_UnrealProjects_UE5ClimbableSystem_Source_UE5ClimbableSystem_UE5ClimbableSystemGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUE5ClimbableSystemGameMode, AUE5ClimbableSystemGameMode::StaticClass, TEXT("AUE5ClimbableSystemGameMode"), &Z_Registration_Info_UClass_AUE5ClimbableSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUE5ClimbableSystemGameMode), 312694958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_alexa_Documents_UnrealProjects_UE5ClimbableSystem_Source_UE5ClimbableSystem_UE5ClimbableSystemGameMode_h_1077820866(TEXT("/Script/UE5ClimbableSystem"),
		Z_CompiledInDeferFile_FID_Users_alexa_Documents_UnrealProjects_UE5ClimbableSystem_Source_UE5ClimbableSystem_UE5ClimbableSystemGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_alexa_Documents_UnrealProjects_UE5ClimbableSystem_Source_UE5ClimbableSystem_UE5ClimbableSystemGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
