class CfgVehicles {
    class UAG_Contractor;

    class UAG_Raider: UAG_Contractor {
        displayName = "Raider";
        magazines[] = {
            x5("50Rnd_570x28_SMG_03"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"SMG_03C_black"};
    };
};