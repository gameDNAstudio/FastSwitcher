// Fast Switcher Plugin
// Created by Patryk Stepniewski
// Copyright (c) 2014-2017 gameDNA. All Rights Reserved.

using System.IO;

namespace UnrealBuildTool.Rules
{
	public class FastSwitcher : ModuleRules
	{
		public FastSwitcher(TargetInfo Target)
		{
			Definitions.Add("WITH_FASTSWITCHER=1");

			PrivateIncludePaths.Add("FastSwitcher/Private");

			PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject" });
		}
	}
}
