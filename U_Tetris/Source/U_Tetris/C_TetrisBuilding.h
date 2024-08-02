// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_TetrisBuilding.generated.h"

UCLASS()
class U_TETRIS_API AC_TetrisBuilding : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AC_TetrisBuilding();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	bool AllOverlap();

private:
	void MakeCollision();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AC_TetrisCollision> CollisionMesh = nullptr;

	TArray<AC_TetrisCollision*> CollisionBoxs;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	int BoxCount = 8;

};
