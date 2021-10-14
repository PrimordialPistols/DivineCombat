// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/ECombatSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECombatSystem() {}
// Cross Module References
	DIVINECOMBAT_API UEnum* Z_Construct_UEnum_DivineCombat_ECombat();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
// End Cross Module References
	static UEnum* ECombat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DivineCombat_ECombat, Z_Construct_UPackage__Script_DivineCombat(), TEXT("ECombat"));
		}
		return Singleton;
	}
	template<> DIVINECOMBAT_API UEnum* StaticEnum<ECombat>()
	{
		return ECombat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECombat(ECombat_StaticEnum, TEXT("/Script/DivineCombat"), TEXT("ECombat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DivineCombat_ECombat_Hash() { return 3136137130U; }
	UEnum* Z_Construct_UEnum_DivineCombat_ECombat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DivineCombat();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECombat"), 0, Get_Z_Construct_UEnum_DivineCombat_ECombat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECombat::CE_PLAYERTURN", (int64)ECombat::CE_PLAYERTURN },
				{ "ECombat::CE_ENEMYTURN", (int64)ECombat::CE_ENEMYTURN },
				{ "ECombat::CE_WON", (int64)ECombat::CE_WON },
				{ "ECombat::CE_LOST", (int64)ECombat::CE_LOST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CE_ENEMYTURN.DisplayName", "Enemy turn" },
				{ "CE_ENEMYTURN.Name", "ECombat::CE_ENEMYTURN" },
				{ "CE_LOST.DisplayName", "Lost" },
				{ "CE_LOST.Name", "ECombat::CE_LOST" },
				{ "CE_PLAYERTURN.DisplayName", "Player turn" },
				{ "CE_PLAYERTURN.Name", "ECombat::CE_PLAYERTURN" },
				{ "CE_WON.DisplayName", "Won" },
				{ "CE_WON.Name", "ECombat::CE_WON" },
				{ "Comment", "/**\n * Enum to determine what the current state of combat is\n */" },
				{ "ModuleRelativePath", "ECombatSystem.h" },
				{ "ToolTip", "Enum to determine what the current state of combat is" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DivineCombat,
				nullptr,
				"ECombat",
				"ECombat",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
