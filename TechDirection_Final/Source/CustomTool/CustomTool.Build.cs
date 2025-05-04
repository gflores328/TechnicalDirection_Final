using UnrealBuildTool;

public class CustomTool : ModuleRules
{
    public CustomTool(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
                "UMG"
            }
        );

        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "Blutility",
                "UnrealEd",
                "LevelEditor",
                "UMGEditor"
            }
        );
    }
}