// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DIVINECOMBAT_AIBaseController_generated_h
#error "AIBaseController.generated.h already included, missing '#pragma once' in AIBaseController.h"
#endif
#define DIVINECOMBAT_AIBaseController_generated_h

#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_SPARSE_DATA
#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_RPC_WRAPPERS
#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIBaseController(); \
	friend struct Z_Construct_UClass_AAIBaseController_Statics; \
public: \
	DECLARE_CLASS(AAIBaseController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(AAIBaseController)


#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAAIBaseController(); \
	friend struct Z_Construct_UClass_AAIBaseController_Statics; \
public: \
	DECLARE_CLASS(AAIBaseController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DivineCombat"), NO_API) \
	DECLARE_SERIALIZER(AAIBaseController)


#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIBaseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBaseController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBaseController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBaseController(AAIBaseController&&); \
	NO_API AAIBaseController(const AAIBaseController&); \
public:


#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAIBaseController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBaseController(AAIBaseController&&); \
	NO_API AAIBaseController(const AAIBaseController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBaseController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBaseController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAIBaseController)


#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_PRIVATE_PROPERTY_OFFSET
#define DivineCombat_Source_DivineCombat_AIBaseController_h_12_PROLOG
#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_RPC_WRAPPERS \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_INCLASS \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DivineCombat_Source_DivineCombat_AIBaseController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_PRIVATE_PROPERTY_OFFSET \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_SPARSE_DATA \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_INCLASS_NO_PURE_DECLS \
	DivineCombat_Source_DivineCombat_AIBaseController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DIVINECOMBAT_API UClass* StaticClass<class AAIBaseController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DivineCombat_Source_DivineCombat_AIBaseController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
