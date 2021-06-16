// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "EraserAndPencilHUD.generated.h"

UCLASS()
class AEraserAndPencilHUD : public AHUD
{
	GENERATED_BODY()

public:
	AEraserAndPencilHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

