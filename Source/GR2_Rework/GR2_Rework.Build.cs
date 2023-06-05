// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GR2_Rework : ModuleRules
{
	public GR2_Rework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput", "UMG" });
	}
}
