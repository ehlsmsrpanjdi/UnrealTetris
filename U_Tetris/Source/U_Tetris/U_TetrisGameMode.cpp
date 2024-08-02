// Copyright Epic Games, Inc. All Rights Reserved.

#include "U_TetrisGameMode.h"
#include "U_TetrisCharacter.h"
#include "C_FCubeData.h"
#include "C_Cube.h"
#include "C_TetrisInstance.h"
#include "UObject/ConstructorHelpers.h"
#include "C_Block.h"

AU_TetrisGameMode::AU_TetrisGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AU_TetrisGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AU_TetrisGameMode::SetData(UDataTable* _Table)
{
	if (_Table->IsValidLowLevel() == true) {
		LocationData = NewObject<ULocationObject>();
		TArray<FC_FCubeData*> CubeArray;
		_Table->GetAllRows(TEXT(""), CubeArray);
		LocationData->SetData(CubeArray);
	}
}

void AU_TetrisGameMode::SpawnCube(const FTransform& _Transform)
{
	if (false == SpawnBlock->IsValidLowLevel()) {
		UE_LOG(LogTemp, Fatal, TEXT(""));
	}
	else {
		GetWorld()->SpawnActor<AC_Block>(SpawnBlock, _Transform);
	}
}

void AU_TetrisGameMode::SetCubeData(TArray<AC_Cube*>& _Array)
{
	if (LocationData->IsValidLowLevel() == true) {
		LocationData->SetCubeData(_Array);
	}
	else {
		UC_TetrisInstance* Inst = Cast<UC_TetrisInstance>(GetGameInstance());
		SetData(Inst->GetData());
		LocationData->SetCubeData(_Array);
	}
}
