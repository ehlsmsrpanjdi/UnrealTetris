// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_FCubeData.h"
#include "C_Cube.generated.h"

UCLASS()
class U_TETRIS_API AC_Cube : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AC_Cube();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetLocation(int _X, int _Y);
	void SetLocation(struct FCubeLocation _CubeLocation, AActor* _LocationActor);

	FVector GetAbsoluteScale();

	float GetAbsoluteLength();

private:

	UPROPERTY()
	struct FCubeLocation Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UStaticMeshComponent> Body;
};
