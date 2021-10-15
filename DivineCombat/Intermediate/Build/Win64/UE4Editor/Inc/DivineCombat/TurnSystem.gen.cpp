// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/TurnSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnSystem() {}
// Cross Module References
	DIVINECOMBAT_API UEnum* Z_Construct_UEnum_DivineCombat_ETurnOrder();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ATurnSystem_NoRegister();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ATurnSystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* ETurnOrder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DivineCombat_ETurnOrder, Z_Construct_UPackage__Script_DivineCombat(), TEXT("ETurnOrder"));
		}
		return Singleton;
	}
	template<> DIVINECOMBAT_API UEnum* StaticEnum<ETurnOrder>()
	{
		return ETurnOrder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurnOrder(ETurnOrder_StaticEnum, TEXT("/Script/DivineCombat"), TEXT("ETurnOrder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DivineCombat_ETurnOrder_Hash() { return 1869857919U; }
	UEnum* Z_Construct_UEnum_DivineCombat_ETurnOrder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DivineCombat();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurnOrder"), 0, Get_Z_Construct_UEnum_DivineCombat_ETurnOrder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurnOrder::ETO_PLAYERTURN", (int64)ETurnOrder::ETO_PLAYERTURN },
				{ "ETurnOrder::ETO_ENEMYTURN", (int64)ETurnOrder::ETO_ENEMYTURN },
				{ "ETurnOrder::ETO_WON", (int64)ETurnOrder::ETO_WON },
				{ "ETurnOrder::ETO_LOST", (int64)ETurnOrder::ETO_LOST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETO_ENEMYTURN.DisplayName", "Enemy Turn" },
				{ "ETO_ENEMYTURN.Name", "ETurnOrder::ETO_ENEMYTURN" },
				{ "ETO_LOST.DisplayName", "Lost" },
				{ "ETO_LOST.Name", "ETurnOrder::ETO_LOST" },
				{ "ETO_PLAYERTURN.DisplayName", "Plsyer Turn" },
				{ "ETO_PLAYERTURN.Name", "ETurnOrder::ETO_PLAYERTURN" },
				{ "ETO_WON.DisplayName", "Won" },
				{ "ETO_WON.Name", "ETurnOrder::ETO_WON" },
				{ "ModuleRelativePath", "TurnSystem.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DivineCombat,
				nullptr,
				"ETurnOrder",
				"ETurnOrder",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ATurnSystem::StaticRegisterNativesATurnSystem()
	{
	}
	UClass* Z_Construct_UClass_ATurnSystem_NoRegister()
	{
		return ATurnSystem::StaticClass();
	}
	struct Z_Construct_UClass_ATurnSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TurnOrder_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TurnOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDead_MetaData[];
#endif
		static void NewProp_bIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurnSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TurnSystem.h" },
		{ "ModuleRelativePath", "TurnSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder_MetaData[] = {
		{ "Category", "TurnSystem" },
		{ "ModuleRelativePath", "TurnSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder = { "TurnOrder", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurnSystem, TurnOrder), Z_Construct_UEnum_DivineCombat_ETurnOrder, METADATA_PARAMS(Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead_MetaData[] = {
		{ "Category", "TurnSystem" },
		{ "ModuleRelativePath", "TurnSystem.h" },
	};
#endif
	void Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead_SetBit(void* Obj)
	{
		((ATurnSystem*)Obj)->bIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead = { "bIsDead", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ATurnSystem), &Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurnSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnSystem_Statics::NewProp_TurnOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurnSystem_Statics::NewProp_bIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurnSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurnSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurnSystem_Statics::ClassParams = {
		&ATurnSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurnSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurnSystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurnSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurnSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurnSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurnSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurnSystem, 3607283018);
	template<> DIVINECOMBAT_API UClass* StaticClass<ATurnSystem>()
	{
		return ATurnSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurnSystem(Z_Construct_UClass_ATurnSystem, &ATurnSystem::StaticClass, TEXT("/Script/DivineCombat"), TEXT("ATurnSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurnSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
