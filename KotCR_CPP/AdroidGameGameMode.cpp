// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdroidGameGameMode.h"
#include "AdroidGamePawn.h"

AAdroidGameGameMode::AAdroidGameGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAdroidGamePawn::StaticClass();
}

