// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "StaticMeshOrganizer.generated.h"

class UEditorUtilityComboBoxString;
class UButton;
/**
 * 
 */
UCLASS()
class UStaticMeshOrganizer : public UEditorUtilityWidget
{
	GENERATED_BODY()

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

public:
	UPROPERTY() UStaticMesh* TargetMesh;

	UPROPERTY(meta = (BindWidget)) UButton* GroupButton;
	UPROPERTY(meta = (BindWidget)) UEditorUtilityComboBoxString* StaticMeshComboBox;
	
	UFUNCTION(BlueprintCallable, Category = "StaticMesh Selector") void OnMeshSelected(FString MeshName, ESelectInfo::Type SelectionType);
	UFUNCTION(BlueprintCallable, Category = "StaticMesh Selector") void PopulateComboBox();
	UFUNCTION(BlueprintCallable, Category = "StaticMesh Selector") void OrganizeActors();
};
