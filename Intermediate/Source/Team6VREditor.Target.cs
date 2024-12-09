using UnrealBuildTool;

public class Team6VREditorTarget : TargetRules
{
	public Team6VREditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Team6VR");
	}
}
