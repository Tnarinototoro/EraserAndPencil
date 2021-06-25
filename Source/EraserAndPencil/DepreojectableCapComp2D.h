// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//for worst game!
#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "DepreojectableCapComp2D.generated.h"
struct FIntRect;
/**
 * 
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class ERASERANDPENCIL_API UDepreojectableCapComp2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()
public :
	UFUNCTION(BlueprintCallable)
		void CaptureComponent2D_DeProject(
			const FVector2D& ScreenPos,
			FVector& OutWorldOrigin,
			FVector& OutWorldDirection);

	UFUNCTION(BlueprintCallable)
		void GetRenderPaperSize(float& RectX,float& RectY);
	UFUNCTION(BlueprintCallable)
	float GetSceneCapturCompFOVangle()
	{
		return this->FOVAngle * (float)PI / 180.0f;
	}
};
