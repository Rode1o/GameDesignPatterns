// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DesignPatterns : ModuleRules
{
	public DesignPatterns(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
