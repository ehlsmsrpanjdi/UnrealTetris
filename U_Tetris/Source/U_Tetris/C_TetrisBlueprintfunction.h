// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "C_TetrisBlueprintfunction.generated.h"

/**
 *
 */
UCLASS()
class U_TETRIS_API UC_TetrisBlueprintfunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	static int RandomInt(int _Min, int _Max) {
		if (false == StreamInit) {
			Stream.GenerateNewSeed();
			StreamInit = true;
			return Stream.RandRange(_Min, _Max);
		}
		else {
			return Stream.RandRange(_Min, _Max);
		}
	}

	static void AddLocation(FVector _Location, AActor* _LocationActor, UPrimitiveComponent* _Component, FVector _Scale);
	static float GetAbsoluteLength(UPrimitiveComponent* _Component, FVector _Scale);
private:
	static FRandomStream Stream;
	static bool StreamInit;
};

