// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealCodeSamples : ModuleRules
{
	public UnrealCodeSamples(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
