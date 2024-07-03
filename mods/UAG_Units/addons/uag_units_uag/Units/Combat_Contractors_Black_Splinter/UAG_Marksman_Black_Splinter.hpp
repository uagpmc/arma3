class CfgVehicles {
    class UAG_Contractor_Black_Splinter;

    class UAG_Marksman_Black_Splinter: UAG_Contractor_Black_Splinter {
        displayName = "Marksman";
        magazines[] = {
            x4("20Rnd_762x51_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_SIG556v2_Pitbull", "Throw", "Put"};
    };
};