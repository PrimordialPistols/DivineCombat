// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIVINECOMBAT_GameModeTurnSystem_generated_h
#error "GameModeTurnSystem.generated.h already included, missing '#pragma once' in GameModeTurnSystem.h"
#endif
#define DIVINECOMBAT_GameModeTurnSystem_generated_h

#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_SPARSE_DATA
#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndBattle); \
	DECLARE_FUNCTION(execEnemyTurn); \
	DECLARE_FUNCTION(execPlayerTurn); \
	DECLARE_FUNCTION(execBattleStart);


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndBattle); \
	DECLARE_FUNCTION(execEnemyTurn); \
	DECLARE_FUNCTION(execPlayerTurn); \
	DECLARE_FUNCTION(execBattleStart);


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModeTurnSystem(); \
	friend struct Z_Construct_UClass_AGameModeTurnSystem_Statics; \
public: \
	DECLARE_CLASS(AGameModeTurnSystem, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(AGameModeTurnSystem)


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeTurnSystem(); \
	friend struct Z_Construct_UClass_AGameModeTurnSystem_Statics; \
public: \
	DECLARE_CLASS(AGameModeTurnSystem, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(AGameModeTurnSystem)


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeTurnSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeTurnSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeTurnSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeTurnSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeTurnSystem(AGameModeTurnSystem&&); \
	NO_API AGameModeTurnSystem(const AGameModeTurnSystem&); \
public:


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeTurnSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeTurnSystem(AGameModeTurnSystem&&); \
	NO_API AGameModeTurnSystem(const AGameModeTurnSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeTurnSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeTurnSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeTurnSystem)


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_PRIVATE_PROPERTY_OFFSET
#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_23_PROLOG
#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_RPC_WRAPPERS \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_INCLASS \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_INCLASS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_GameModeTurnSystem_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIVINECOMBAT_API UClass* StaticClass<class AGameModeTurnSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DivineCombat_Source_DivineCombat_GameModeTurnSystem_h


#define FOREACH_ENUM_ETURNORDER(op) \
	op(ETurnOrder::ETO_PLAYERTURN) \
	op(ETurnOrder::ETO_ENEMYTURN) \
	op(ETurnOrder::ETO_WON) \
	op(ETurnOrder::ETO_LOST) 

enum class ETurnOrder : uint8;
template<> DIVINECOMBAT_API UEnum* StaticEnum<ETurnOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
