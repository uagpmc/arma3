class CfgVehicles {
    class UAG_Autorifleman;

    class UAG_Machinegunner: UAG_Autorifleman {
        displayName = "Machinegunner";
        magazines[] = {
            x4("130Rnd_338_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"MMG_02_black_F"};
    };
};