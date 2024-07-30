// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C_FCubeData.generated.h"

USTRUCT(BlueprintType)
struct  FCubeLocation {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LocatoinX;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float LocatoinY;
};

USTRUCT(BlueprintType)
struct FC_FCubeData : public FTableRowBase
{
	GENERATED_BODY();
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FCubeLocation> LocationArray;
};


UCLASS()
class ULocationObject : public UObject {
	GENERATED_BODY()
public:
	void SetData(const TArray<FC_FCubeData*>& _Array);

private:
	TArray<bool> SpawnedArray;
	TArray<TArray<FCubeLocation>> LocationArray;
};
