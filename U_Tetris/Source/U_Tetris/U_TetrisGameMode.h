// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "U_TetrisGameMode.generated.h"

UCLASS(minimalapi)
class AU_TetrisGameMode : public AGameModeBase
{
	GENERATED_BODY()

	friend class AC_Block;

public:
	AU_TetrisGameMode();

protected:
	virtual void BeginPlay();


	UFUNCTION(BlueprintCallable)
	void SetData(class UDataTable* _Table);

	FORCEINLINE class ULocationObject* GetData() {
		return LocationData;
	}


private:

	UPROPERTY()
	ULocationObject* LocationData = nullptr;


	void SetCubeData(TArray<class AC_Cube*>& _Array);
};



