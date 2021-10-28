// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/GameModeTurnSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameModeTurnSystem() {}
// Cross Module References
	DIVINECOMBAT_API UEnum* Z_Construct_UEnum_DivineCombat_ETurnOrder();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_AGameModeTurnSystem_NoRegister();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_AGameModeTurnSystem();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
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
	uint32 Get_Z_Construct_UEnum_DivineCombat_ETurnOrder_Hash() { return 431261065U; }
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
				{ "Comment", "/**\n * \n */" },
				{ "ETO_ENEMYTURN.Comment", "/**\n * \n */" },
				{ "ETO_ENEMYTURN.DisplayName", "Enemy Turn" },
				{ "ETO_ENEMYTURN.Name", "ETurnOrder::ETO_ENEMYTURN" },
				{ "ETO_LOST.Comment", "/**\n * \n */" },
				{ "ETO_LOST.DisplayName", "Lost" },
				{ "ETO_LOST.Name", "ETurnOrder::ETO_LOST" },
				{ "ETO_PLAYERTURN.Comment", "/**\n * \n */" },
				{ "ETO_PLAYERTURN.DisplayName", "Player Turn" },
				{ "ETO_PLAYERTURN.Name", "ETurnOrder::ETO_PLAYERTURN" },
				{ "ETO_WON.Comment", "/**\n * \n */" },
				{ "ETO_WON.DisplayName", "Won" },
				{ "ETO_WON.Name", "ETurnOrder::ETO_WON" },
				{ "ModuleRelativePath", "GameModeTurnSystem.h" },
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
	DEFINE_FUNCTION(AGameModeTurnSystem::execEndBattle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndBattle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeTurnSystem::execEnemyTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnemyTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeTurnSystem::execPlayerTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGameModeTurnSystem::execBattleStart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BattleStart();
		P_NATIVE_END;
	}
	void AGameModeTurnSystem::StaticRegisterNativesAGameModeTurnSystem()
	{
		UClass* Class = AGameModeTurnSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BattleStart", &AGameModeTurnSystem::execBattleStart },
			{ "EndBattle", &AGameModeTurnSystem::execEndBattle },
			{ "EnemyTurn", &AGameModeTurnSystem::execEnemyTurn },
			{ "PlayerTurn", &AGameModeTurnSystem::execPlayerTurn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "Comment", "/** Sets up the system */" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
		{ "ToolTip", "Sets up the system" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeTurnSystem, nullptr, "BattleStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeTurnSystem_BattleStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeTurnSystem_BattleStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "Comment", "/** Ends the battle sequence*/" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
		{ "ToolTip", "Ends the battle sequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeTurnSystem, nullptr, "EndBattle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeTurnSystem_EndBattle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeTurnSystem_EndBattle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "Comment", "/** Checks if enemy is dead if not cycles back */" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
		{ "ToolTip", "Checks if enemy is dead if not cycles back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeTurnSystem, nullptr, "EnemyTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Turn System" },
		{ "Comment", "/** Checks if player is dead if not cycles back */" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
		{ "ToolTip", "Checks if player is dead if not cycles back" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameModeTurnSystem, nullptr, "PlayerTurn", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameModeTurnSystem_NoRegister()
	{
		return AGameModeTurnSystem::StaticClass();
	}
	struct Z_Construct_UClass_AGameModeTurnSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerIsDead_MetaData[];
#endif
		static void NewProp_bPlayerIsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerIsDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameModeTurnSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameModeTurnSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameModeTurnSystem_BattleStart, "BattleStart" }, // 3911860112
		{ &Z_Construct_UFunction_AGameModeTurnSystem_EndBattle, "EndBattle" }, // 3379097193
		{ &Z_Construct_UFunction_AGameModeTurnSystem_EnemyTurn, "EnemyTurn" }, // 3557573588
		{ &Z_Construct_UFunction_AGameModeTurnSystem_PlayerTurn, "PlayerTurn" }, // 3167314951
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeTurnSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameModeTurnSystem.h" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead_MetaData[] = {
		{ "Category", "Turn System" },
		{ "ModuleRelativePath", "GameModeTurnSystem.h" },
	};
#endif
	void Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead_SetBit(void* Obj)
	{
		((AGameModeTurnSystem*)Obj)->bPlayerIsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead = { "bPlayerIsDead", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameModeTurnSystem), &Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameModeTurnSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameModeTurnSystem_Statics::NewProp_bPlayerIsDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameModeTurnSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameModeTurnSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameModeTurnSystem_Statics::ClassParams = {
		&AGameModeTurnSystem::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameModeTurnSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeTurnSystem_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGameModeTurnSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameModeTurnSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameModeTurnSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameModeTurnSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameModeTurnSystem, 1658627503);
	template<> DIVINECOMBAT_API UClass* StaticClass<AGameModeTurnSystem>()
	{
		return AGameModeTurnSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameModeTurnSystem(Z_Construct_UClass_AGameModeTurnSystem, &AGameModeTurnSystem::StaticClass, TEXT("/Script/DivineCombat"), TEXT("AGameModeTurnSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameModeTurnSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
