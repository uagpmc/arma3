class CfgVehicles {
    class UAG_Contractor_Black_Splinter;

    class UAG_Raider_Black_Splinter: UAG_Contractor_Black_Splinter {
        displayName = "Raider";
        magazines[] = {
            x5("50Rnd_570x28_SMG_03"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"SMG_03C_black"};
    };
};