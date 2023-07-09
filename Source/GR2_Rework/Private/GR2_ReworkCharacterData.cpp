// Fill out your copyright notice in the Description page of Project Settings.


#include "GR2_ReworkCharacterData.h"

GR2_ReworkCharacterData::GR2_ReworkCharacterData()
{
}

GR2_ReworkCharacterData::~GR2_ReworkCharacterData()
{
}

GR2_ReworkCharacterData* GR2_ReworkCharacterData::GetInstance()
{
	if (CharacterData == nullptr)
	{
		CharacterData = new GR2_ReworkCharacterData();
	}
	return CharacterData;
}

void GR2_ReworkCharacterData::SetUserName(FString Name)
{
	GetInstance()->Name = Name;
}

