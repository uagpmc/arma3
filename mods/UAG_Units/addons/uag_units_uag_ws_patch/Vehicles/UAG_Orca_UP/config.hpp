class CfgVehicles {
    class B_ION_Heli_Light_02_dynamicLoadout_lxWS;

    class UAG_Orca_UP_PARENTPROXY: B_ION_Heli_Light_02_dynamicLoadout_lxWS {
        scope = private;
    };

    class UAG_Orca_UP: UAG_Orca_UP_PARENTPROXY {
        scope = public;
        displayName = "Orca (UP)";
        crew = "UAG_Pilot_Black_Splinter";
        faction = "UAG";
        side = 1;
        hiddenSelectionsTextures[] = {
            "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa",
            "\a3\air_f\data\rockets_co.paa",
            "\lxWS\air_f_lxWS\heli_light_02\data\lxws_heli_light_02_adds_ion_co.paa"
        };
        waterDamageEngine = 0;
        waterLeakiness = 0;
    };
};