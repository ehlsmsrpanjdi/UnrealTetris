// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "C_FCubeData.h"
#include "C_TetrisInstance.generated.h"

/**
 * 
 */
UCLASS()
class U_TETRIS_API UC_TetrisInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetData();

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UDataTable> CubeData;

	UPROPERTY()
	ULocationObject* LocationData = nullptr;
};
