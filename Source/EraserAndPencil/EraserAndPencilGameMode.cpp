// Copyright Epic Games, Inc. All Rights Reserved.

#include "EraserAndPencilGameMode.h"
#include "EraserAndPencilHUD.h"
#include "EraserAndPencilCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEraserAndPencilGameMode::AEraserAndPencilGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	/*static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/EraserAndPencil/Blueprints/CharacterCPP/Blueprints/BP_EraserAndPencilCha"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;*/

	// use our custom HUD class
	HUDClass = AEraserAndPencilHUD::StaticClass();
}
