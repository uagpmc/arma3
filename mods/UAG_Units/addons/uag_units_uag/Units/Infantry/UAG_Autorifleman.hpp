class CfgVehicles {
    class UAG_Contractor;

    class UAG_Autorifleman: UAG_Contractor {
        displayName = "Autorifleman";
        linkedItems[] = {
            commonLinkedItems,
            "UAG_Combat_Helmet_Heavy",
            "UAG_Plate_Carrier_Heavy"
        };
        magazines[] = {
            x4("200Rnd_556x45_Box_Tracer_Red_F"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"LMG_03_F"};
    };
};