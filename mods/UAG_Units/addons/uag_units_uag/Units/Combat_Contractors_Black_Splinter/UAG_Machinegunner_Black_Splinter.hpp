class CfgVehicles {
    class UAG_Autorifleman_Black_Splinter;

    class UAG_Machinegunner_Black_Splinter: UAG_Autorifleman_Black_Splinter {
        displayName = "Machinegunner";
        magazines[] = {
            x4("130Rnd_338_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"MMG_02_black_F"};
    };
};