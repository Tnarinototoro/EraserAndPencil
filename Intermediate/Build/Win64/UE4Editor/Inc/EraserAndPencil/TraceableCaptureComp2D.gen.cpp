// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EraserAndPencil/TraceableCaptureComp2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTraceableCaptureComp2D() {}
// Cross Module References
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_ATraceableCaptureComp2D_NoRegister();
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_ATraceableCaptureComp2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EraserAndPencil();
// End Cross Module References
	void ATraceableCaptureComp2D::StaticRegisterNativesATraceableCaptureComp2D()
	{
	}
	UClass* Z_Construct_UClass_ATraceableCaptureComp2D_NoRegister()
	{
		return ATraceableCaptureComp2D::StaticClass();
	}
	struct Z_Construct_UClass_ATraceableCaptureComp2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATraceableCaptureComp2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EraserAndPencil,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATraceableCaptureComp2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TraceableCaptureComp2D.h" },
		{ "ModuleRelativePath", "TraceableCaptureComp2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATraceableCaptureComp2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATraceableCaptureComp2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATraceableCaptureComp2D_Statics::ClassParams = {
		&ATraceableCaptureComp2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATraceableCaptureComp2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATraceableCaptureComp2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATraceableCaptureComp2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATraceableCaptureComp2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATraceableCaptureComp2D, 868514128);
	template<> ERASERANDPENCIL_API UClass* StaticClass<ATraceableCaptureComp2D>()
	{
		return ATraceableCaptureComp2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATraceableCaptureComp2D(Z_Construct_UClass_ATraceableCaptureComp2D, &ATraceableCaptureComp2D::StaticClass, TEXT("/Script/EraserAndPencil"), TEXT("ATraceableCaptureComp2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATraceableCaptureComp2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
