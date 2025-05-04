#include "CustomTool.h"

#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "LevelEditor.h"

#define LOCTEXT_NAMESPACE "FCustomToolModule"

void FCustomToolModule::StartupModule()
{
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	const TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());

	MenuExtender->AddMenuBarExtension(
		"Help",
		EExtensionHook::After,
		nullptr,
		FMenuBarExtensionDelegate::CreateRaw(this, &FCustomToolModule::AddMenu)
		);

	LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
}

void FCustomToolModule::ShutdownModule()
{
    
}

void FCustomToolModule::AddMenu(FMenuBarBuilder& MenuBarBuilder)
{
	MenuBarBuilder.AddPullDownMenu(
		FText::FromString("Custom Tool"),
		FText::FromString("Custom Tools for Technical Direction"),
		FNewMenuDelegate::CreateRaw(this, &FCustomToolModule::FillMenu));
}

void FCustomToolModule::FillMenu(FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		FText::FromString("Static Mesh Organizer"),
		FText::FromString("Finds all static mesh actors using the selected mesh in a level and puts them into a folder in the outliner"),
		FSlateIcon(),
		FUIAction(FExecuteAction::CreateLambda([&]()
		{
			if (UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>())
			{
				UEditorUtilityWidgetBlueprint* StaticMeshOrganizer = Cast<UEditorUtilityWidgetBlueprint>(
				StaticLoadObject(UEditorUtilityWidgetBlueprint::StaticClass(), nullptr,
				TEXT("/Game/CustomTool/StaticMeshOrganizer.StaticMeshOrganizer")));

				if (StaticMeshOrganizer)
				{
					UUserWidget* StaticMeshSelectorInstance = EditorUtilitySubsystem->SpawnAndRegisterTab(StaticMeshOrganizer);
				}
			}
		})));
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FCustomToolModule, CustomTool)