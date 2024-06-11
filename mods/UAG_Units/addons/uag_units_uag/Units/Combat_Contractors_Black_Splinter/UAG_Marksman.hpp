class CfgVehicles {
    class UAG_Contractor;

    class UAG_Marksman: UAG_Contractor {
        displayName = "Marksman";
        magazines[] = {
            x4("20Rnd_762x51_Mag_Tracer"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_SIG556v2_Pitbull"};
    };
};