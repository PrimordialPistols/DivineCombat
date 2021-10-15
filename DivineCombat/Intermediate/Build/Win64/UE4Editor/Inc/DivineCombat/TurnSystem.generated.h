// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIVINECOMBAT_TurnSystem_generated_h
#error "TurnSystem.generated.h already included, missing '#pragma once' in TurnSystem.h"
#endif
#define DIVINECOMBAT_TurnSystem_generated_h

#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_SPARSE_DATA
#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_RPC_WRAPPERS
#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurnSystem(); \
	friend struct Z_Construct_UClass_ATurnSystem_Statics; \
public: \
	DECLARE_CLASS(ATurnSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(ATurnSystem)


#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATurnSystem(); \
	friend struct Z_Construct_UClass_ATurnSystem_Statics; \
public: \
	DECLARE_CLASS(ATurnSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(ATurnSystem)


#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurnSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurnSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnSystem(ATurnSystem&&); \
	NO_API ATurnSystem(const ATurnSystem&); \
public:


#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurnSystem(ATurnSystem&&); \
	NO_API ATurnSystem(const ATurnSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurnSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurnSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurnSystem)


#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_PRIVATE_PROPERTY_OFFSET
#define DivineCombat_Source_DivineCombat_TurnSystem_h_18_PROLOG
#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_RPC_WRAPPERS \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_INCLASS \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DivineCombat_Source_DivineCombat_TurnSystem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_INCLASS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_TurnSystem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIVINECOMBAT_API UClass* StaticClass<class ATurnSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DivineCombat_Source_DivineCombat_TurnSystem_h


#define FOREACH_ENUM_ETURNORDER(op) \
	op(ETurnOrder::ETO_PLAYERTURN) \
	op(ETurnOrder::ETO_ENEMYTURN) \
	op(ETurnOrder::ETO_WON) \
	op(ETurnOrder::ETO_LOST) 

enum class ETurnOrder : uint8;
template<> DIVINECOMBAT_API UEnum* StaticEnum<ETurnOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
