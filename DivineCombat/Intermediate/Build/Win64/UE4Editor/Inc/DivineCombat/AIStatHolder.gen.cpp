// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/AIStatHolder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIStatHolder() {}
// Cross Module References
	DIVINECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FAIStatHolder();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
// End Cross Module References
class UScriptStruct* FAIStatHolder::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DIVINECOMBAT_API uint32 Get_Z_Construct_UScriptStruct_FAIStatHolder_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIStatHolder, Z_Construct_UPackage__Script_DivineCombat(), TEXT("AIStatHolder"), sizeof(FAIStatHolder), Get_Z_Construct_UScriptStruct_FAIStatHolder_Hash());
	}
	return Singleton;
}
template<> DIVINECOMBAT_API UScriptStruct* StaticStruct<FAIStatHolder>()
{
	return FAIStatHolder::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIStatHolder(FAIStatHolder::StaticStruct, TEXT("/Script/DivineCombat"), TEXT("AIStatHolder"), false, nullptr, nullptr);
static struct FScriptStruct_DivineCombat_StaticRegisterNativesFAIStatHolder
{
	FScriptStruct_DivineCombat_StaticRegisterNativesFAIStatHolder()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIStatHolder")),new UScriptStruct::TCppStructOps<FAIStatHolder>);
	}
} ScriptStruct_DivineCombat_StaticRegisterNativesFAIStatHolder;
	struct Z_Construct_UScriptStruct_FAIStatHolder_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Defense_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Defense;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movement_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Movement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avoidance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Avoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponAdvantage_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WeaponAdvantage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIStatHolder>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, CurrentHealth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_CurrentHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_CurrentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Attack_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Defense_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Defense = { "Defense", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Defense), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Defense_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Defense_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Movement_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Movement = { "Movement", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Movement), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Movement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Movement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, AttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Hit_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Hit), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Avoidance_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Avoidance = { "Avoidance", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Avoidance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Avoidance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Avoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Cooldown_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Cooldown = { "Cooldown", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Cooldown), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Cooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Cooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_WeaponAdvantage_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_WeaponAdvantage = { "WeaponAdvantage", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, WeaponAdvantage), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_WeaponAdvantage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_WeaponAdvantage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_BaseNumber_MetaData[] = {
		{ "Category", "AI Stats" },
		{ "ModuleRelativePath", "AIStatHolder.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_BaseNumber = { "BaseNumber", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIStatHolder, BaseNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_BaseNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_BaseNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIStatHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_CurrentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Defense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Movement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Avoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Cooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_WeaponAdvantage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIStatHolder_Statics::NewProp_BaseNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIStatHolder_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
		nullptr,
		&NewStructOps,
		"AIStatHolder",
		sizeof(FAIStatHolder),
		alignof(FAIStatHolder),
		Z_Construct_UScriptStruct_FAIStatHolder_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIStatHolder_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIStatHolder_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIStatHolder()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIStatHolder_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DivineCombat();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIStatHolder"), sizeof(FAIStatHolder), Get_Z_Construct_UScriptStruct_FAIStatHolder_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIStatHolder_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIStatHolder_Hash() { return 2064500171U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
