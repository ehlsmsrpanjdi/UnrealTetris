// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "C_TetrisCollision.generated.h"

UCLASS()
class U_TETRIS_API AC_TetrisCollision : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AC_TetrisCollision();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void OnOverlap() {
		IsOverlap = true;
	}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void OffOverlap() {
		IsOverlap = false;
	}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool GetOverlap() {
		return IsOverlap;
	}

	FORCEINLINE class UBoxComponent* GetCollisionBox() {
		return CollisionBox;
	}
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* CollisionBox;
	bool IsOverlap = false;
};
