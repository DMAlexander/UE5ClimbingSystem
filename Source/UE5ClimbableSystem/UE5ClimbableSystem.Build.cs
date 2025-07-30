// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5ClimbableSystem : ModuleRules
{
	public UE5ClimbableSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
