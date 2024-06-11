class CfgVehicles {
    class UAG_Contractor;

    class UAG_Grenadier: UAG_Contractor {
        displayName = "Grenadier";
        linkedItems[] = {
            commonLinkedItems,
            "UAG_Combat_Helmet_Medium",
            "UAG_Plate_Carrier_Medium"
        };
        magazines[] = {
            x4("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            x4("1Rnd_HE_Grenade_shell"),
            x3("1Rnd_SmokeRed_Grenade_shell"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAG_MSBS65v2_GL_ModularSight"};
    };
};