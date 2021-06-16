// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EraserAndPencil/DepreojectableCapComp2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDepreojectableCapComp2D() {}
// Cross Module References
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_UDepreojectableCapComp2D_NoRegister();
	ERASERANDPENCIL_API UClass* Z_Construct_UClass_UDepreojectableCapComp2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_EraserAndPencil();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UDepreojectableCapComp2D::execGetSceneCapturCompFOVangle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSceneCapturCompFOVangle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDepreojectableCapComp2D::execGetRenderPaperSize)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RectX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_RectY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRenderPaperSize(Z_Param_Out_RectX,Z_Param_Out_RectY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDepreojectableCapComp2D::execCaptureComponent2D_DeProject)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutWorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureComponent2D_DeProject(Z_Param_Out_ScreenPos,Z_Param_Out_OutWorldOrigin,Z_Param_Out_OutWorldDirection);
		P_NATIVE_END;
	}
	void UDepreojectableCapComp2D::StaticRegisterNativesUDepreojectableCapComp2D()
	{
		UClass* Class = UDepreojectableCapComp2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureComponent2D_DeProject", &UDepreojectableCapComp2D::execCaptureComponent2D_DeProject },
			{ "GetRenderPaperSize", &UDepreojectableCapComp2D::execGetRenderPaperSize },
			{ "GetSceneCapturCompFOVangle", &UDepreojectableCapComp2D::execGetSceneCapturCompFOVangle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics
	{
		struct DepreojectableCapComp2D_eventCaptureComponent2D_DeProject_Parms
		{
			FVector2D ScreenPos;
			FVector OutWorldOrigin;
			FVector OutWorldDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenPos_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenPos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldOrigin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutWorldDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_ScreenPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_ScreenPos = { "ScreenPos", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventCaptureComponent2D_DeProject_Parms, ScreenPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_ScreenPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_ScreenPos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_OutWorldOrigin = { "OutWorldOrigin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventCaptureComponent2D_DeProject_Parms, OutWorldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_OutWorldDirection = { "OutWorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventCaptureComponent2D_DeProject_Parms, OutWorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_ScreenPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_OutWorldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::NewProp_OutWorldDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepreojectableCapComp2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepreojectableCapComp2D, nullptr, "CaptureComponent2D_DeProject", nullptr, nullptr, sizeof(DepreojectableCapComp2D_eventCaptureComponent2D_DeProject_Parms), Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics
	{
		struct DepreojectableCapComp2D_eventGetRenderPaperSize_Parms
		{
			float RectX;
			float RectY;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RectX;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RectY;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::NewProp_RectX = { "RectX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventGetRenderPaperSize_Parms, RectX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::NewProp_RectY = { "RectY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventGetRenderPaperSize_Parms, RectY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::NewProp_RectX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::NewProp_RectY,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepreojectableCapComp2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepreojectableCapComp2D, nullptr, "GetRenderPaperSize", nullptr, nullptr, sizeof(DepreojectableCapComp2D_eventGetRenderPaperSize_Parms), Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics
	{
		struct DepreojectableCapComp2D_eventGetSceneCapturCompFOVangle_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DepreojectableCapComp2D_eventGetSceneCapturCompFOVangle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DepreojectableCapComp2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDepreojectableCapComp2D, nullptr, "GetSceneCapturCompFOVangle", nullptr, nullptr, sizeof(DepreojectableCapComp2D_eventGetSceneCapturCompFOVangle_Parms), Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDepreojectableCapComp2D_NoRegister()
	{
		return UDepreojectableCapComp2D::StaticClass();
	}
	struct Z_Construct_UClass_UDepreojectableCapComp2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDepreojectableCapComp2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_EraserAndPencil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDepreojectableCapComp2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDepreojectableCapComp2D_CaptureComponent2D_DeProject, "CaptureComponent2D_DeProject" }, // 2907795348
		{ &Z_Construct_UFunction_UDepreojectableCapComp2D_GetRenderPaperSize, "GetRenderPaperSize" }, // 956942798
		{ &Z_Construct_UFunction_UDepreojectableCapComp2D_GetSceneCapturCompFOVangle, "GetSceneCapturCompFOVangle" }, // 308942992
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepreojectableCapComp2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "DepreojectableCapComp2D.h" },
		{ "ModuleRelativePath", "DepreojectableCapComp2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDepreojectableCapComp2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDepreojectableCapComp2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDepreojectableCapComp2D_Statics::ClassParams = {
		&UDepreojectableCapComp2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDepreojectableCapComp2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDepreojectableCapComp2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDepreojectableCapComp2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDepreojectableCapComp2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDepreojectableCapComp2D, 4266014736);
	template<> ERASERANDPENCIL_API UClass* StaticClass<UDepreojectableCapComp2D>()
	{
		return UDepreojectableCapComp2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDepreojectableCapComp2D(Z_Construct_UClass_UDepreojectableCapComp2D, &UDepreojectableCapComp2D::StaticClass, TEXT("/Script/EraserAndPencil"), TEXT("UDepreojectableCapComp2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDepreojectableCapComp2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
