// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetActions/QuickAssetAction.h"
#include "DebugHeader.h"

void UQuickAssetAction::TestFunc()
{
	Print(TEXT("Worked"), FColor::Magenta);
	PrintLog(TEXT("Worked"));
}


