class CfgVehicles {
    class UAG_Contractor;

    class UAG_Pointman: UAG_Contractor {
        displayName = "Pointman";
        magazines[] = {
            x4("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            x3("6Rnd_12Gauge_Pellets"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_MSBS65v2_UBS_Holo"};
    };
};