// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DivineCombat/BaseEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnemy() {}
// Cross Module References
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ABaseEnemy_NoRegister();
	DIVINECOMBAT_API UClass* Z_Construct_UClass_ABaseEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_DivineCombat();
// End Cross Module References
	DEFINE_FUNCTION(ABaseEnemy::execTakeDamage)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execAttackMove)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackMove();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execCheckTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseEnemy::execWeaponTriangle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WeaponTriangle();
		P_NATIVE_END;
	}
	void ABaseEnemy::StaticRegisterNativesABaseEnemy()
	{
		UClass* Class = ABaseEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackMove", &ABaseEnemy::execAttackMove },
			{ "CheckTarget", &ABaseEnemy::execCheckTarget },
			{ "Move", &ABaseEnemy::execMove },
			{ "TakeDamage", &ABaseEnemy::execTakeDamage },
			{ "WeaponTriangle", &ABaseEnemy::execWeaponTriangle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Priority" },
		{ "Comment", "/** One move to call to calaulate everything */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "One move to call to calaulate everything" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "AttackMove", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_AttackMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_AttackMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Priority" },
		{ "Comment", "/**Checks if in prioroty before attacking  */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Checks if in prioroty before attacking" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "CheckTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_CheckTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_CheckTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Priority" },
		{ "Comment", "/** Will handle movement */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Will handle movement" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics
	{
		struct BaseEnemy_eventTakeDamage_Parms
		{
			int32 DamageAmount;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DamageAmount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseEnemy_eventTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseEnemy_eventTakeDamage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseEnemy_eventTakeDamage_Parms), &Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_DamageAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Base Enemy" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "TakeDamage", nullptr, nullptr, sizeof(BaseEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target Priority" },
		{ "Comment", "/** Determines if opponent is weak */" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
		{ "ToolTip", "Determines if opponent is weak" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseEnemy, nullptr, "WeaponTriangle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseEnemy_WeaponTriangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABaseEnemy_WeaponTriangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABaseEnemy_NoRegister()
	{
		return ABaseEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsWeakAgainst_MetaData[];
#endif
		static void NewProp_bIsWeakAgainst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWeakAgainst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_DivineCombat,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseEnemy_AttackMove, "AttackMove" }, // 2963937009
		{ &Z_Construct_UFunction_ABaseEnemy_CheckTarget, "CheckTarget" }, // 3021649553
		{ &Z_Construct_UFunction_ABaseEnemy_Move, "Move" }, // 2048473587
		{ &Z_Construct_UFunction_ABaseEnemy_TakeDamage, "TakeDamage" }, // 2356713348
		{ &Z_Construct_UFunction_ABaseEnemy_WeaponTriangle, "WeaponTriangle" }, // 3899907198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseEnemy.h" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst_MetaData[] = {
		{ "Category", "Target Priority" },
		{ "ModuleRelativePath", "BaseEnemy.h" },
	};
#endif
	void Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst_SetBit(void* Obj)
	{
		((ABaseEnemy*)Obj)->bIsWeakAgainst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst = { "bIsWeakAgainst", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABaseEnemy), &Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEnemy_Statics::NewProp_bIsWeakAgainst,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseEnemy_Statics::ClassParams = {
		&ABaseEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseEnemy, 2132057196);
	template<> DIVINECOMBAT_API UClass* StaticClass<ABaseEnemy>()
	{
		return ABaseEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseEnemy(Z_Construct_UClass_ABaseEnemy, &ABaseEnemy::StaticClass, TEXT("/Script/DivineCombat"), TEXT("ABaseEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
