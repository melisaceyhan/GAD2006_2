// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class labwork2 : ModuleRules
{
	public labwork2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
