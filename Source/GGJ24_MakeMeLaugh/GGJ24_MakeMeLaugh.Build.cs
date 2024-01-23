// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GGJ24_MakeMeLaugh : ModuleRules
{
	public GGJ24_MakeMeLaugh(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
