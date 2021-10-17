// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/NewEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewEnemy() {}
// Cross Module References
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ANewEnemy_NoRegister();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ANewEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
// End Cross Module References
	void ANewEnemy::StaticRegisterNativesANewEnemy()
	{
	}
	UClass* Z_Construct_UClass_ANewEnemy_NoRegister()
	{
		return ANewEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ANewEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NewEnemy.h" },
		{ "ModuleRelativePath", "NewEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewEnemy_Statics::ClassParams = {
		&ANewEnemy::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewEnemy, 1511906645);
	template<> DIVINECOMBAT_API UClass* StaticClass<ANewEnemy>()
	{
		return ANewEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewEnemy(Z_Construct_UClass_ANewEnemy, &ANewEnemy::StaticClass, TEXT("/Script/DivineCombat"), TEXT("ANewEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
