// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EraserAndPencil/EraserAndPencilHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEraserAndPencilHUD() {}
// Cross Module References
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_AEraserAndPencilHUD_NoRegister();
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_AEraserAndPencilHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_EraserAndPencil();
// End Cross Module References
	void AEraserAndPencilHUD::StaticRegisterNativesAEraserAndPencilHUD()
	{
	}
	UClass* Z_Construct_UClass_AEraserAndPencilHUD_NoRegister()
	{
		return AEraserAndPencilHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEraserAndPencilHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEraserAndPencilHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_EraserAndPencil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEraserAndPencilHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "EraserAndPencilHUD.h" },
		{ "ModuleRelativePath", "EraserAndPencilHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEraserAndPencilHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEraserAndPencilHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEraserAndPencilHUD_Statics::ClassParams = {
		&AEraserAndPencilHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEraserAndPencilHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEraserAndPencilHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEraserAndPencilHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEraserAndPencilHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEraserAndPencilHUD, 3819747208);
	template<> ERASERANDPENCIL_API UClass* StaticClass<AEraserAndPencilHUD>()
	{
		return AEraserAndPencilHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEraserAndPencilHUD(Z_Construct_UClass_AEraserAndPencilHUD, &AEraserAndPencilHUD::StaticClass, TEXT("/Script/EraserAndPencil"), TEXT("AEraserAndPencilHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEraserAndPencilHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
