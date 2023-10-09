// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RatFishing/RatFishingGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRatFishingGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	RATFISHING_API UClass* Z_Construct_UClass_ARatFishingGameModeBase();
	RATFISHING_API UClass* Z_Construct_UClass_ARatFishingGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RatFishing();
// End Cross Module References
	void ARatFishingGameModeBase::StaticRegisterNativesARatFishingGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARatFishingGameModeBase);
	UClass* Z_Construct_UClass_ARatFishingGameModeBase_NoRegister()
	{
		return ARatFishingGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARatFishingGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARatFishingGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RatFishing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARatFishingGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RatFishingGameModeBase.h" },
		{ "ModuleRelativePath", "RatFishingGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARatFishingGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARatFishingGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARatFishingGameModeBase_Statics::ClassParams = {
		&ARatFishingGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARatFishingGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARatFishingGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARatFishingGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARatFishingGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARatFishingGameModeBase.OuterSingleton, Z_Construct_UClass_ARatFishingGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARatFishingGameModeBase.OuterSingleton;
	}
	template<> RATFISHING_API UClass* StaticClass<ARatFishingGameModeBase>()
	{
		return ARatFishingGameModeBase::StaticClass();
	}
	ARatFishingGameModeBase::ARatFishingGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARatFishingGameModeBase);
	ARatFishingGameModeBase::~ARatFishingGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_fabfr_OneDrive_Documents_RatFishing_RatFishing_Source_RatFishing_RatFishingGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fabfr_OneDrive_Documents_RatFishing_RatFishing_Source_RatFishing_RatFishingGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARatFishingGameModeBase, ARatFishingGameModeBase::StaticClass, TEXT("ARatFishingGameModeBase"), &Z_Registration_Info_UClass_ARatFishingGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARatFishingGameModeBase), 2105383567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_fabfr_OneDrive_Documents_RatFishing_RatFishing_Source_RatFishing_RatFishingGameModeBase_h_2130752172(TEXT("/Script/RatFishing"),
		Z_CompiledInDeferFile_FID_Users_fabfr_OneDrive_Documents_RatFishing_RatFishing_Source_RatFishing_RatFishingGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_fabfr_OneDrive_Documents_RatFishing_RatFishing_Source_RatFishing_RatFishingGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
