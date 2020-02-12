// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FPS_GameGameMode.h"
#include "FPS_GameHUD.h"
#include "FPS_GameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPS_GameGameMode::AFPS_GameGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFPS_GameHUD::StaticClass();
}
