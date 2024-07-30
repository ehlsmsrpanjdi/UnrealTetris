// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TetrisInstance.h"


void UC_TetrisInstance::SetData(UDataTable* _Data)
{
	LocationData = NewObject<ULocationObject>();
	TArray<FC_FCubeData*> CubeArray;
	_Data->GetAllRows(TEXT(""), CubeArray);
	LocationData->SetData(CubeArray);
}
