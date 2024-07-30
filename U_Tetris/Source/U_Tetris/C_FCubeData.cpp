// Fill out your copyright notice in the Description page of Project Settings.


#include "C_FCubeData.h"

void ULocationObject::SetData(const TArray<FC_FCubeData*>& _Array)
{
	for (int i = 0; i < _Array.Num(); ++i) {
		LocationArray.Add(_Array[i]->LocationArray);
		SpawnedArray.Add(false);
	}
	int a = 0;
}
