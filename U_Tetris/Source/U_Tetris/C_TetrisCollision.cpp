// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TetrisCollision.h"
#include "Components/BoxComponent.h"

// Sets default values
AC_TetrisCollision::AC_TetrisCollision()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>("BoxComponent");
}

// Called when the game starts or when spawned
void AC_TetrisCollision::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AC_TetrisCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

