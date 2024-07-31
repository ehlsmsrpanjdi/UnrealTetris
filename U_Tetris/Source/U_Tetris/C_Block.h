// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_Block.generated.h"

UCLASS()
class U_TETRIS_API AC_Block : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_Block();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void MakeCube();
	void CubeInit();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = "true"))
	TSubclassOf<class AC_Cube> CubeType;

	UPROPERTY()
	TArray<class AC_Cube*> CubeArray;
	const int CubeCount = 4;

};
