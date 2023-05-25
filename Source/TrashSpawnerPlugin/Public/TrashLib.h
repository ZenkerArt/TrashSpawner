// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TrashLib.generated.h"

/**
 * 
 */
UCLASS()
class TRASHSPAWNERPLUGIN_API UTrashLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "Trash Lib")
		static void moveActorToFolder(AActor* Actor, FName Name);
};
