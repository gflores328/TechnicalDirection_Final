// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticMeshOrganizer.h"

#include "EditorUtilityWidgetComponents.h"
#include "EngineUtils.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Components/Button.h"
#include "Engine/StaticMeshActor.h"

void UStaticMeshOrganizer::NativeConstruct()
{
	Super::NativeConstruct();
	
	GroupButton->OnClicked.AddDynamic(this, &UStaticMeshOrganizer::OrganizeActors);
	StaticMeshComboBox->OnSelectionChanged.AddDynamic(this, &UStaticMeshOrganizer::OnMeshSelected);
	StaticMeshComboBox->OnOpening.AddDynamic(this, &UStaticMeshOrganizer::PopulateComboBox);
}

void UStaticMeshOrganizer::NativeDestruct()
{
	Super::NativeDestruct();

	TargetMesh = nullptr;
	StaticMeshComboBox->ClearOptions();
}

void UStaticMeshOrganizer::OnMeshSelected(FString MeshName, ESelectInfo::Type SelectionType)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	TArray<FAssetData> StaticMeshes;
	AssetRegistryModule.Get().GetAssetsByClass(UStaticMesh::StaticClass()->GetClassPathName(), StaticMeshes, true);

	for (auto StaticMesh : StaticMeshes)
	{
		if (MeshName == StaticMesh.AssetName.ToString())
		{
			TargetMesh = Cast<UStaticMesh>(StaticMesh.GetAsset());
			break;
		}
	}
}

void UStaticMeshOrganizer::PopulateComboBox()
{
	StaticMeshComboBox->ClearOptions();
	
	TSet<UStaticMesh*> UniqueStaticMeshes;
	for (TActorIterator<AActor> ActorIterator(GetWorld()); ActorIterator; ++ActorIterator)
	{
		AActor* Actor = *ActorIterator;
		TArray<UStaticMeshComponent*> StaticMeshComponents;
		Actor->GetComponents<UStaticMeshComponent>(StaticMeshComponents);

		for (UStaticMeshComponent* StaticMeshComponent : StaticMeshComponents)
		{
			if (StaticMeshComponent && StaticMeshComponent->GetStaticMesh())
			{
				UniqueStaticMeshes.Add(StaticMeshComponent->GetStaticMesh());
			}
		}
	}

	for (UStaticMesh* StaticMesh : UniqueStaticMeshes)
	{
		StaticMeshComboBox->AddOption(StaticMesh->GetName());
	}
}

void UStaticMeshOrganizer::OrganizeActors()
{
	UWorld* World = GEditor->GetEditorWorldContext().World();
	
	for (TActorIterator<AStaticMeshActor> ActorIterator(World); ActorIterator; ++ActorIterator)
	{
		AStaticMeshActor* StaticMeshActor = *ActorIterator;
		
		if (!StaticMeshActor || !StaticMeshActor->GetStaticMeshComponent())
		{
			continue;
		}

		if (StaticMeshActor->GetStaticMeshComponent()->GetStaticMesh() == TargetMesh)
		{
			FString FolderName = TEXT("Static Meshes/") + TargetMesh->GetName();
			StaticMeshActor->SetFolderPath(FName(*FolderName));
		}
	}
}