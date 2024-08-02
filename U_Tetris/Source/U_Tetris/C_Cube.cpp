// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Cube.h"
#include "Components/StaticMeshComponent.h"
#include "C_FCubeData.h"
#include "U_Tetris/C_TetrisInstance.h"




// Sets default values
AC_Cube::AC_Cube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Body = CreateDefaultSubobject<UStaticMeshComponent>("asdf");
	//MakeCube();
}

// Called when the game starts or when spawned
void AC_Cube::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AC_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Cube::SetLocation(int _X, int _Y)
{
	Location.LocatoinX = _X;
	Location.LocatoinY = _Y;
}

void AC_Cube::SetLocation(FCubeLocation _CubeLocation, AActor* _LocationActor)
{
	SetLocation(_CubeLocation.LocatoinX, _CubeLocation.LocatoinY);
	float ActorLength =  GetAbsoluteLength();
	FVector VecY = FVector{ 0.0f, Location.LocatoinX * ActorLength , 0.0f };
	FVector VecZ = FVector{ 0.0f, 0.0f, Location.LocatoinY * ActorLength };
	AddActorLocalOffset(VecY);
	AddActorLocalOffset(VecZ);
}

FVector AC_Cube::GetAbsoluteScale()
{
	FVector BoundSize = Body->GetStaticMesh()->GetBounds().BoxExtent * 2;
	return BoundSize* GetActorScale();
}

float AC_Cube::GetAbsoluteLength()
{
	FVector BoundSize = Body->GetStaticMesh()->GetBounds().BoxExtent * 2;
	return BoundSize.X * GetActorScale().X;  // Scale이 모두 같을 경우 기준
}


