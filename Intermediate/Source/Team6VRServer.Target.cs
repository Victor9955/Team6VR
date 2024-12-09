using UnrealBuildTool;

public class Team6VRServerTarget : TargetRules
{
	public Team6VRServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("Team6VR");
	}
}
