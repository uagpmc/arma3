class CfgVehicles {
    class UAG_Contractor_Black_Splinter;

    class UAG_Sniper_Black_Splinter: UAG_Contractor_Black_Splinter {
        displayName = "Sniper";
        linkedItems[] = {
            commonLinkedItems,
            "UAG_Combat_Helmet_Medium",
            "UAG_Plate_Carrier_Medium"
        };
        magazines[] = {
            x6("7Rnd_408_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_M200v2_LRPS", "Throw", "Put"};
    };
};