// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ERASERANDPENCIL_EraserAndPencilProjectile_generated_h
#error "EraserAndPencilProjectile.generated.h already included, missing '#pragma once' in EraserAndPencilProjectile.h"
#endif
#define ERASERANDPENCIL_EraserAndPencilProjectile_generated_h

#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_SPARSE_DATA
#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEraserAndPencilProjectile(); \
	friend struct Z_Construct_UClass_AEraserAndPencilProjectile_Statics; \
public: \
	DECLARE_CLASS(AEraserAndPencilProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EraserAndPencil"), NO_API) \
	DECLARE_SERIALIZER(AEraserAndPencilProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEraserAndPencilProjectile(); \
	friend struct Z_Construct_UClass_AEraserAndPencilProjectile_Statics; \
public: \
	DECLARE_CLASS(AEraserAndPencilProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EraserAndPencil"), NO_API) \
	DECLARE_SERIALIZER(AEraserAndPencilProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEraserAndPencilProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEraserAndPencilProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEraserAndPencilProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEraserAndPencilProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEraserAndPencilProjectile(AEraserAndPencilProjectile&&); \
	NO_API AEraserAndPencilProjectile(const AEraserAndPencilProjectile&); \
public:


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEraserAndPencilProjectile(AEraserAndPencilProjectile&&); \
	NO_API AEraserAndPencilProjectile(const AEraserAndPencilProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEraserAndPencilProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEraserAndPencilProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEraserAndPencilProjectile)


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AEraserAndPencilProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEraserAndPencilProjectile, ProjectileMovement); }


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_12_PROLOG
#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_SPARSE_DATA \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_RPC_WRAPPERS \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_INCLASS \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_SPARSE_DATA \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_INCLASS_NO_PURE_DECLS \
	EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ERASERANDPENCIL_API UClass* StaticClass<class AEraserAndPencilProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EraserAndPencil_Source_EraserAndPencil_EraserAndPencilProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
