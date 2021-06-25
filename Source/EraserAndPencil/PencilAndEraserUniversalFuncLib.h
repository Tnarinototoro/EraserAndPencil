// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PencilAndEraserUniversalFuncLib.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class ERASERANDPENCIL_API UPencilAndEraserUniversalFuncLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    public:
		UFUNCTION(BlueprintCallable)
			static void DeprojectFromTransformRecord(const FVector2D& ScreenPos,
				const FTransform& Transform,
				const float& FOVinDegree,
				const float& surfaceWidth,
				const float& surfaceHeight,
				FVector& OutWorldOrigin,
				FVector& OutWorldDirection);
};
