// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Darts_Game : ModuleRules
{
	public Darts_Game(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
