// Fill out your copyright notice in the Description page of Project Settings.


#include "C_FCubeData.h"
#include "C_Cube.h"
#include "C_TetrisBlueprintfunction.h"


void ULocationObject::SetData(const TArray<FC_FCubeData*>& _Array)
{
	for (int i = 0; i < _Array.Num(); ++i) {
		LocationArray.Add(_Array[i]->LocationArray);
		SpawnedArray.Add(false);
	}
}

void ULocationObject::SetCubeData(TArray<class AC_Cube*>& _Array)
{

	int Size = SpawnedArray.Num();

	int RandomValue = UC_TetrisBlueprintfunction::RandomInt(0, Size - 1);

	for (int i = 0; i < LocationArray[RandomValue].Num(); ++i) {
		_Array[i]->SetLocation(LocationArray[RandomValue][i]);
	}
}
