// Copyright Epic Games, Inc. All Rights Reserved.

#include "U_TetrisGameMode.h"
#include "U_TetrisCharacter.h"
#include "UObject/ConstructorHelpers.h"

AU_TetrisGameMode::AU_TetrisGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
