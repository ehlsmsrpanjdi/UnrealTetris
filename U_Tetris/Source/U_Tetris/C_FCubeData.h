// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C_FCubeData.generated.h"


UCLASS(BlueprintType)
class ULocationObject : public UObject {
	GENERATED_BODY()
public:
	TArray<FCubeLocation> LocationArray;
};


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
