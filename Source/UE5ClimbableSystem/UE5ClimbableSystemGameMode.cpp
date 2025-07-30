// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5ClimbableSystemGameMode.h"
#include "UE5ClimbableSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5ClimbableSystemGameMode::AUE5ClimbableSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
