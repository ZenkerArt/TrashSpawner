// Fill out your copyright notice in the Description page of Project Settings.


#include "TrashLib.h"

void UTrashLib::moveActorToFolder(AActor* Actor, FName Name)
{
	Actor->SetFolderPath(Name);
}