class CfgVehicles {
    class UAG_Survivor;

    class UAG_Contractor: UAG_Survivor {
        displayName = "Contractor";
        items[] = {
            baseVanillaMedicalItems
        };
        linkedItems[] = {
            commonLinkedItems,
            "UAG_Combat_Helmet_Light",
            "UAG_Plate_Carrier_Light"
        };
        magazines[] = {
            x6("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_MSBS65v2_ModularSight"};
    };
};