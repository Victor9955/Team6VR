using UnrealBuildTool;

public class Team6VRClientTarget : TargetRules
{
	public Team6VRClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("Team6VR");
	}
}
