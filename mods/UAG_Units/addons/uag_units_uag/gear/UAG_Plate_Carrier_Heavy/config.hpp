// TODO: uag textures

class CfgWeapons {
    class V_PlateCarrierSpec_blk;

    class UAG_Plate_Carrier_Heavy_PROXY: V_PlateCarrierSpec_blk {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Plate_Carrier_Heavy: UAG_Plate_Carrier_Heavy_PROXY {
        scope = 2;
        displayName = "UAG Plate Carrier - Heavy";
    };
};