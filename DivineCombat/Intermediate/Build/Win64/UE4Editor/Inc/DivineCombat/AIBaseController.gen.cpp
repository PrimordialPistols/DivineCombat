// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/AIBaseController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBaseController() {}
// Cross Module References
	DIVINECOMBAT_API UClass* Z_Construct_UClass_AAIBaseController_NoRegister();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_AAIBaseController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
// End Cross Module References
	void AAIBaseController::StaticRegisterNativesAAIBaseController()
	{
	}
	UClass* Z_Construct_UClass_AAIBaseController_NoRegister()
	{
		return AAIBaseController::StaticClass();
	}
	struct Z_Construct_UClass_AAIBaseController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBaseController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBaseController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIBaseController.h" },
		{ "ModuleRelativePath", "AIBaseController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBaseController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBaseController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIBaseController_Statics::ClassParams = {
		&AAIBaseController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIBaseController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIBaseController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIBaseController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIBaseController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIBaseController, 3163708502);
	template<> DIVINECOMBAT_API UClass* StaticClass<AAIBaseController>()
	{
		return AAIBaseController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIBaseController(Z_Construct_UClass_AAIBaseController, &AAIBaseController::StaticClass, TEXT("/Script/DivineCombat"), TEXT("AAIBaseController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBaseController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
