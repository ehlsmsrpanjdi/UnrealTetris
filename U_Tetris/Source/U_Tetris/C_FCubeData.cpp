// Fill out your copyright notice in the Description page of Project Settings.


#include "C_FCubeData.h"
#include "C_Cube.h"

void ULocationObject::SetData(const TArray<FC_FCubeData*>& _Array)
{
	for (int i = 0; i < _Array.Num(); ++i) {
		LocationArray.Add(_Array[i]->LocationArray);
		SpawnedArray.Add(false);
	}
}

void ULocationObject::SetCubeData(TArray<class AC_Cube*>& _Array)
{
	FRandomStream Stream;
	int RandomNumber = Stream.FRandRange(0, SpawnedArray.Num());

	for (int i = 0; i < LocationArray[RandomNumber].Num(); ++i) {
		_Array[i]->SetLocation(LocationArray[RandomNumber][i]);
	}
}
