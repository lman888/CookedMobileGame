// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CookedMobile/CookedMobileGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookedMobileGameModeBase() {}
// Cross Module References
	COOKEDMOBILE_API UClass* Z_Construct_UClass_ACookedMobileGameModeBase_NoRegister();
	COOKEDMOBILE_API UClass* Z_Construct_UClass_ACookedMobileGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CookedMobile();
// End Cross Module References
	void ACookedMobileGameModeBase::StaticRegisterNativesACookedMobileGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACookedMobileGameModeBase_NoRegister()
	{
		return ACookedMobileGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACookedMobileGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACookedMobileGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CookedMobile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACookedMobileGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CookedMobileGameModeBase.h" },
		{ "ModuleRelativePath", "CookedMobileGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACookedMobileGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACookedMobileGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACookedMobileGameModeBase_Statics::ClassParams = {
		&ACookedMobileGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACookedMobileGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACookedMobileGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACookedMobileGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACookedMobileGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACookedMobileGameModeBase, 175911653);
	template<> COOKEDMOBILE_API UClass* StaticClass<ACookedMobileGameModeBase>()
	{
		return ACookedMobileGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACookedMobileGameModeBase(Z_Construct_UClass_ACookedMobileGameModeBase, &ACookedMobileGameModeBase::StaticClass, TEXT("/Script/CookedMobile"), TEXT("ACookedMobileGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACookedMobileGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
