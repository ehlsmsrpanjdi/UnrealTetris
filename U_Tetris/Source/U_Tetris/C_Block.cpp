// Fill out your copyright notice in the Description page of Project Settings.


#include "C_Block.h"
#include "C_Cube.h"
#include "Kismet/GameplayStatics.h"
#include "U_TetrisGameMode.h"

// Sets default values
AC_Block::AC_Block()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AC_Block::BeginPlay()
{
	Super::BeginPlay();

	MakeCube();
	CubeInit();

}

void AC_Block::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	for (int i = 0; i < CubeArray.Num(); ++i) {
		CubeArray[i]->Destroy();
	}
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void AC_Block::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DownCube(DeltaTime);
}


void AC_Block::MakeCube()
{
	if (CubeType->IsValidLowLevel() == false) {
		UE_LOG(LogTemp, Fatal, TEXT(""));
	}
	for (int i = 0; i < CubeCount; ++i) {
		CubeArray.Add(GetWorld()->SpawnActor<AC_Cube>(CubeType, GetActorTransform()));
	}
}

void AC_Block::CubeInit()
{
	UGameInstance* UInst = GetGameInstance();
	if (UInst->IsValidLowLevel() == true) {
		AU_TetrisGameMode* Mode = Cast<AU_TetrisGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
		if (Mode->IsValidLowLevel() == true) {
			Mode->SetCubeData(CubeArray);
		}
	}
}

void AC_Block::DownCube(float _DeltaTime)
{
	CoolTime += _DeltaTime;
	if (CoolTime >= DownTime) {
		CoolTime -= DownTime;
		FVector MoveVector = FVector(0.0f, 0.0f, CubeLength());
		for (int i = 0; i < CubeArray.Num(); ++i) {
			CubeArray[i]->AddActorLocalOffset(-MoveVector);
		}
	}
}

float AC_Block::CubeLength()
{
	if (true == CubeArray[0]->IsValidLowLevel()) {
		return CubeArray[0]->GetAbsoluteLength();
	}
	else {
		return 0.0f;
	}
}

