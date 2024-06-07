#define commonLinkedItems "UAGPMC_Balaclava_Goggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "ItemGPS"
#define baseAceMedicalItems x10("ACE_elasticBandage"), x10("ACE_quikclot"), x2("ACE_morphine"), "ACE_epinephrine", "ACE_splint", "ACE_bloodIV_500", x2("ACE_tourniquet")
#define baseAceMiscItems "ACE_EarPlugs", "ACE_EntrenchingTool", "ACE_Flashlight_MX991", "ACE_MapTools", "ACE_IR_Strobe_Item", "ACE_CableTie", "ACE_Banana"
#define extraAceMedicalKit x10("ACE_elasticBandage"), x10("ACE_quikclot"), x5("ACE_morphine"), x5("ACE_morphine"), x5("ACE_bloodIV"), x4("ACE_tourniquet"), x2("ACE_splint")

class CfgVehicles {
    class B_Survivor_F;
    class UAGPMC_Survivor: B_Survivor_F {
        displayName = "Survivor";
        faction = "UAGPMC";
        linkedItems[] = {
            commonLinkedItems
        };
        uniformClass = "UAGPMC_Combat_Fatigues";
    };

    class UAGPMC_Contractor: UAGPMC_Survivor {
        displayName = "Contractor";
        items[] = {
            baseAceMedicalItems,
            baseAceMiscItems,
            "ItemAndroid"
        };
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Light",
            "UAGPMC_Plate_Carrier_Light"
        };
        magazines[] = {
            x6("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAGPMC_MSBS65v2_ModularSight"};
    };

    class UAGPMC_Autorifleman: UAGPMC_Contractor {
        displayName = "Autorifleman";
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Heavy",
            "UAGPMC_Plate_Carrier_Heavy"
        };
        magazines[] = {
            x4("200Rnd_556x45_Box_Tracer_Red_F"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"LMG_03_F"};
    };

    class UAGPMC_Machinegunner: UAGPMC_Autorifleman {
        displayName = "Machinegunner";
        magazines[] = {
            x4("130Rnd_338_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"MMG_02_black_F"};
    };

    class UAGPMC_Pointman: UAGPMC_Contractor {
        displayName = "Pointman";
        magazines[] = {
            x4("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            x3("6Rnd_12Gauge_Pellets"),
            "HandGrenade",
            "SmokeShell",
            "ACE_CTS9"
        };
        weapons[] = {"UAGPMC_MSBS65v2_UBS_Holo"};
    };

    class UAGPMC_Raider: UAGPMC_Contractor {
        displayName = "Raider";
        magazines[] = {
            x5("50Rnd_570x28_SMG_03"),
            "HandGrenade",
            "SmokeShell",
            x2("ACE_CTS9")
        };
        weapons[] = {"SMG_03C_black"};
    };

    class UAGPMC_Corpsman: UAGPMC_Contractor {
        displayName = "Corpsman";
        items[] = {
            baseAceMedicalItems,
            baseAceMiscItems,
            "ItemAndroid",
            extraAceMedicalKit,
            "ACE_personalAidKit",
            "ACE_surgicalKit",
            "adv_aceCPR_AED"
        };
    };

    class UAGPMC_Medic: UAGPMC_Corpsman {
        displayName = "Medic";
        items[] = {
            baseAceMedicalItems,
            baseAceMiscItems,
            "ItemAndroid",
            x2(extraAceMedicalKit),
            x2("ACE_personalAidKit"),
            "ACE_surgicalKit",
            "adv_aceCPR_AED"
        };
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Medium",
            "UAGPMC_Plate_Carrier_Medium"
        };
    };

    class UAGPMC_Teamleader: UAGPMC_Contractor {
        displayName = "Teamleader";
        items[] = {
            baseAceMedicalItems,
            baseAceMiscItems,
            "ACE_EarPlugs",
            "ACE_IR_Strobe_Item",
            "ACE_CableTie",
            "ItemcTab",
            "ACE_personalAidKit",
            "ACE_Clacker",
            "ACE_HuntIR_monitor"
        };
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Medium",
            "UAGPMC_Plate_Carrier_Medium"
        };
    };

    class UAGPMC_SectionCommander: UAGPMC_Teamleader {
        displayName = "Section Commander";
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Medium",
            "UAGPMC_Plate_Carrier_Medium",
            "B_UavTerminal"
        };
    };

    class UAGPMC_BitchBoy: UAGPMC_Contractor {
        backpack = "Rainman_Kitbag_Splinter_Urban";
        displayName = "Bitch Boy";
    };

    class UAGPMC_Marksman: UAGPMC_Contractor {
        displayName = "Marksman";
        magazines[] = {
            x4("ACE_20Rnd_762x51_Mag_Tracer"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAGPMC_SIG556_Pitbull"};
    };

    class UAGPMC_Sniper: UAGPMC_Contractor {
        displayName = "Sniper";
        items[] = {
            baseAceMedicalItems,
            baseAceMiscItems,
            "ACE_ATragMX",
            "ACE_Kestrel4500",
            "ACE_Tripod"
        };
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Medium",
            "UAGPMC_Plate_Carrier_Medium"
        };
        magazines[] = {
            x6("7Rnd_408_Mag"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAGPMC_M200_LRPS"};
    };

    class UAGPMC_Grenadier: UAGPMC_Contractor {
        displayName = "Grenadier";
        linkedItems[] = {
            commonLinkedItems,
            "UAGPMC_Combat_Helmet_Medium",
            "UAGPMC_Plate_Carrier_Medium"
        };
        magazines[] = {
            x4("30Rnd_65x39_caseless_msbs_mag_Tracer"),
            x4("1Rnd_HE_Grenade_shell"),
            x3("1Rnd_SmokeRed_Grenade_shell"),
            x2("ACE_HuntIR_M203"),
            "HandGrenade",
            "SmokeShell"
        };
        weapons[] = {"UAGPMC_MSBS65v2_GL_ModularSight"};
    };

    class C_Offroad_01_comms_F;
    class UAGPMC_Offroad_Comms: C_Offroad_01_comms_F {
        armor = 60;
        armorLights = 0.04;
        armorStructural = 8;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "Offroad (Comms)";
        faction = "UAGPMC";
        peakTorque = 800;
        side = 1;
        waterResistanceCoef = 0.025;
    };

    class C_Offroad_01_covered_F;
    class UAGPMC_Offroad_Covered: C_Offroad_01_covered_F {
        armor = 60;
        armorLights = 0.04;
        armorStructural = 8;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "Offroad (Covered)";
        faction = "UAGPMC";
        peakTorque = 800;
        side = 1;
        waterResistanceCoef = 0.025;
    };

    class O_LSV_02_armed_black_F;
    class UAGPMC_Qilin_M134: O_LSV_02_armed_black_F {
        armor = 200;
        armorStructural = 5;
        armorLights = 0.4;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "Qilin (M134)";
        faction = "UAGPMC";
        maxSpeed = 240;
        peakTorque = 1200;
        scope = 2;
        side = 1;
        waterResistanceCoef = 0.025;
    };

    class O_LSV_02_AT_F;
    class UAGPMC_Qilin_Metis: O_LSV_02_AT_F {
        armor = 200;
        armorStructural = 5;
        armorLights = 0.4;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "Qilin (Metis)";
        faction = "UAGPMC";
        hiddenSelectionsTextures[] = {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa","\uagpmc_units_customunits\data\Vorona_F_CO.paa","\uagpmc_units_customunits\data\Vorona_F_CO.paa"};
        maxSpeed = 240;
        peakTorque = 1200;
        scope = 2;
        side = 1;
        textureList[] = {};
        waterResistanceCoef = 0.025;
    };

    class O_MRAP_02_hmg_F;
    class UAGPMC_Ifrit_HMG: O_MRAP_02_hmg_F {
        armor = 400;
        armorLights = 0.8;
        armorStructural = 10;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "Ifrit (HMG)";
        faction = "UAGPMC";
        hiddenSelectionsTextures[] = {"\uagpmc_units_customunits\data\MRAP_02_ext_01_CO.paa","uagpmc_uagunits\data\MRAP_02_ext_02_CO.paa","uagpmc_uagunits\data\turret_opfor_co.paa"};
        maxSpeed = 180;
        peakTorque = 3000;
        side = 1;
        textureList[] = {};
        waterResistanceCoef = 0.025;
    };

    class B_MBT_01_TUSK_F;
    class UAGPMC_Slammer: B_MBT_01_TUSK_F {
        armor = 1200;
        armorLights = 0.2;
        armorStructural = 12;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "M2A4 Slammer UP";
        faction = "UAGPMC";
        hiddenSelectionsTextures[] = {"\uagpmc_units_customunits\data\MBT_01_body_CO.paa","uagpmc_uagunits\data\MBT_01_tow_CO.paa","uagpmc_uagunits\data\mbt_addons_co.paa","uagpmc_uagunits\data\camonet_NATO_Desert_CO.paa"};
        maxSpeed = 140;
        peakTorque = 7000;
        side = 1;
        waterResistanceCoef = 0.025;
    };

    class O_MBT_04_command_F;
    class UAGPMC_Armata_30mm: O_MBT_04_command_F {
        armor = 1000;
        armorLights = 0.2;
        armorStructural = 12;
        canFloat = 1;
        crew = "UAGPMC_Contractor";
        displayName = "T-140K Armata (30mm)";
        faction = "UAGPMC";
        hiddenSelectionsTextures[] = {"\uagpmc_units_customunits\data\MBT_04_exterior_brown_hex_1_CO.paa","uagpmc_uagunits\data\MBT_04_exterior_brown_hex_2_CO.paa","uagpmc_uagunits\data\camonet_CSAT_HEX_Desert_CO.paa"};
        maxSpeed = 120;
        peakTorque = 6500;
        side = 1;
        waterResistanceCoef = 0.025;
    };

    class O_Heli_Light_02_unarmed_F;
    class UAGPMC_Orca_Unnarmed: O_Heli_Light_02_unarmed_F {
        armor = 80;
        armorLights = 0.8;
        armorStructural = 8;
        crew = "UAGPMC_Contractor";
        displayName = "PO-30 Orca (Unarmed)";
        faction = "UAGPMC";
        maxSpeed = 400;
        side = 1;
    };

    class Supply0;
    class Supply280: Supply0 {
        maximumLoad = 280;
    };
};
