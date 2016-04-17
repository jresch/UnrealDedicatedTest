// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Dedicated.h"
#include "DedicatedGameMode.h"
#include "DedicatedCharacter.h"

ADedicatedGameMode::ADedicatedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
