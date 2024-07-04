class CfgVehicles {
    class UAG_Contractor_Black_Splinter;

    class UAG_Pilot_Black_Splinter: UAG_Contractor_Black_Splinter {
        displayName = "Pilot";
        linkedItems[] = {
            commonLinkedItems,
            "H_CrewHelmetHeli_B", // TODO: UAG Pilot Helmet
            "UAG_Plate_Carrier_Light"
        };
    };
};