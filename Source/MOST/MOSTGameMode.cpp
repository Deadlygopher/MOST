// Copyright Epic Games, Inc. All Rights Reserved.

#include "MOSTGameMode.h"
#include "MOSTCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMOSTGameMode::AMOSTGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
