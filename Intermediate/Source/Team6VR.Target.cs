using UnrealBuildTool;

public class Team6VRTarget : TargetRules
{
	public Team6VRTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("Team6VR");
	}
}
