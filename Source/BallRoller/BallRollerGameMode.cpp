// Copyright Epic Games, Inc. All Rights Reserved.

#include "BallRollerGameMode.h"
#include "BallRollerCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABallRollerGameMode::ABallRollerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
