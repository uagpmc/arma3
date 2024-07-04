class CfgWeapons {
    class V_PlateCarrierSpec_blk;

    class UAG_Plate_Carrier_Heavy_PROXY: V_PlateCarrierSpec_blk {
        scope = private;
        class ItemInfo;
    };

    class UAG_Plate_Carrier_Heavy: UAG_Plate_Carrier_Heavy_PROXY {
        scope = public;
        displayName = "UAG Plate Carrier - Heavy";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Heavy\carrier_gl_rig_blk_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Plate_Carrier_Heavy\icon_carrier_spec_rig_blk_uag.paa";
    };
};