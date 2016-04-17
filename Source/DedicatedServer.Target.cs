
using UnrealBuildTool;
using System.Collections.Generic;

public class DedicatedServerTarget : TargetRules
{
    public DedicatedServerTarget(TargetInfo Target)
    {
        Type = TargetType.Server;
    }

    //
    // TargetRules interface.
    //

    public override void SetupBinaries(
        TargetInfo Target,
        ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfigurations,
        ref List<string> OutExtraModuleNames
        )
    {
        OutExtraModuleNames.AddRange(new string[] { "Dedicated" });
    }
}