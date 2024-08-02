// Fill out your copyright notice in the Description page of Project Settings.


#include "C_TetrisBlueprintfunction.h"

FRandomStream UC_TetrisBlueprintfunction::Stream = FRandomStream();
bool UC_TetrisBlueprintfunction::StreamInit = false;

void UC_TetrisBlueprintfunction::AddLocation(FVector _Location, AActor* _LocationActor, UPrimitiveComponent* _Component, FVector _Scale)
{
	float ActorLength = GetAbsoluteLength(_Component, _Scale);
	FVector AddVector = _Location * ActorLength;
	_LocationActor->AddActorLocalOffset(AddVector);
}

float UC_TetrisBlueprintfunction::GetAbsoluteLength(UPrimitiveComponent* _Component, FVector _Scale)
{
	_Component->GetLocalBounds
	FVector BoundSize = _Component->GetStaticMesh()->GetBounds().BoxExtent * 2;
	return BoundSize.X * _Scale.X;  // Scale이 모두 같을 경우 기준
}

