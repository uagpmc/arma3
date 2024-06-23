/* UAG Combat Helmet - Heavy
 * Based on: H_HelmetB_TI_tna_F
 * From: A3_Characters_F_Exp_Headgear
 * Changes:
 * - Perfect hearing protection
 * - Half weight
 * - Double armour hitpoints
 * - 5% pass-through
 */

class CfgWeapons {
    class HitpointsProtectionInfo;
    class Head;
    class Face;

    class H_HelmetB_TI_tna_F;

    class H_HelmetB_TI_tna_F_PROXY: H_HelmetB_TI_tna_F {
        scope = 0;
        class ItemInfo;
    };

    class UAG_Combat_Helmet_Heavy: H_HelmetB_TI_tna_F_PROXY {
        _generalMacro = "UAG_Combat_Helmet_Heavy";
        scope = 2;
        displayName = "UAG Combat Helmet - Heavy";
        hiddenSelectionsTextures[] = {"\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Heavy\h_helmetb_ti_tna_f_co_uag.paa"};
        picture = "\z\UAG_Units\addons\uag_units_uag\Gear\UAG_Combat_Helmet_Heavy\icon_h_helmetb_ti_tna_f_ca_uag.paa";

        ace_hearing_protection = 1;
        ace_hearing_lowerVolume = 0;

        class ItemInfo: ItemInfo {
            mass = 15;
            modelSides[] = {3,2,1,0};

            class HitpointsProtectionInfo: HitpointsProtectionInfo {
                class Head: Head {
                    armor = 12;
                    passThrough = 0.05;
                };
                class Face: Face {
                    armor = 8;
                    passThrough = 0.05;
                };
            };
        };
    };
};