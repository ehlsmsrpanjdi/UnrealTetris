// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TetrisBuilding.h"
#include "C_TetrisCollision.h"
#include "Components/BoxComponent.h"
#include "C_TetrisBlueprintfunction.h"

// Sets default values
AC_TetrisBuilding::AC_TetrisBuilding()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;


}

// Called when the game starts or when spawned
void AC_TetrisBuilding::BeginPlay()
{
	Super::BeginPlay();
	MakeCollision();
}

// Called every frame
void AC_TetrisBuilding::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	int a = 0;
}

bool AC_TetrisBuilding::AllOverlap()
{
	bool IsOverlap = true;
	for (int i = 0; i < CollisionBoxs.Num(); ++i) {
		IsOverlap |= CollisionBoxs[i]->GetOverlap();
	}
	return IsOverlap;
}

void AC_TetrisBuilding::MakeCollision()
{
	if (CollisionMesh->IsValidLowLevel() == false) {
		UE_LOG(LogTemp, Fatal, TEXT(""));
	}
	for (int i = 0; i < BoxCount; ++i) {
		AC_TetrisCollision* CollisionBox = GetWorld()->SpawnActor<AC_TetrisCollision>(CollisionMesh, GetActorTransform());
		CollisionBoxs.Add(CollisionBox);
		UC_TetrisBlueprintfunction::AddLocation(FVector(0.0f, float(i), 0.0f), CollisionBox, CollisionBox->GetCollisionBox(), );
	}
}

