// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TetrisInstance.h"


void UC_TetrisInstance::SetData()
{
	LocationData = NewObject<ULocationObject>();
	TArray<FC_FCubeData*> CubeArray;
	CubeData->GetAllRows(TEXT(""), CubeArray);
	LocationData->SetData(CubeArray);
}
