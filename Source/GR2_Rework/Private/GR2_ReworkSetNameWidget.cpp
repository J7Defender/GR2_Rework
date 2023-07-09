// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkSetNameWidget.h"

#include "GR2_ReworkCharacterData.h"

void UGR2_ReworkSetNameWidget::SetName(const FString& Name)
{
	GR2_ReworkCharacterData::SetUserName(Name);
}
