class CfgWeapons {
    class V_PlateCarrier2_blk;

    class UAG_Plate_Carrier_Medium_PROXY: V_PlateCarrier2_blk {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Plate_Carrier_Medium: UAG_Plate_Carrier_Medium_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Medium";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Medium\vests_blk_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Medium\icon_V_plate_carrier_2_blk_CA_uag.paa";
    };
};