// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EraserAndPencil/EraserAndPencilGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEraserAndPencilGameMode() {}
// Cross Module References
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_AEraserAndPencilGameMode_NoRegister();
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_AEraserAndPencilGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EraserAndPencil();
// End Cross Module References
	void AEraserAndPencilGameMode::StaticRegisterNativesAEraserAndPencilGameMode()
	{
	}
	UClass* Z_Construct_UClass_AEraserAndPencilGameMode_NoRegister()
	{
		return AEraserAndPencilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEraserAndPencilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEraserAndPencilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EraserAndPencil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEraserAndPencilGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "EraserAndPencilGameMode.h" },
		{ "ModuleRelativePath", "EraserAndPencilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEraserAndPencilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEraserAndPencilGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEraserAndPencilGameMode_Statics::ClassParams = {
		&AEraserAndPencilGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEraserAndPencilGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEraserAndPencilGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEraserAndPencilGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEraserAndPencilGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEraserAndPencilGameMode, 2696918733);
	template<> ERASERANDPENCIL_API UClass* StaticClass<AEraserAndPencilGameMode>()
	{
		return AEraserAndPencilGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEraserAndPencilGameMode(Z_Construct_UClass_AEraserAndPencilGameMode, &AEraserAndPencilGameMode::StaticClass, TEXT("/Script/EraserAndPencil"), TEXT("AEraserAndPencilGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEraserAndPencilGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
