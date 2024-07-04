class CfgVehicles {
    class UAG_Contractor_Black_Splinter;

    class UAG_Crewman_Black_Splinter: UAG_Contractor_Black_Splinter {
        displayName = "Crewman";
        linkedItems[] = {
            commonLinkedItems,
            "H_Tank_black_F", // TODO: UAG Crewman Helmet
            "UAG_Plate_Carrier_Light"
        };
    };
};