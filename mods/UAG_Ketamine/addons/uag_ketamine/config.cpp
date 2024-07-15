class CfgPatches {
    class uag_ketamine {
        authors[] = {"zuedev", "fluffy"};
        authorUrl = "https://uagpmc.com";
        name = "uag_ketamine";
        requiredAddons[] = {"A3_Weapons_F_Items"};
        requiredVersion = 2.16;
        units[] = {};
        weapons[] = {
					"UAG_Ketamine"
				};
    };
};

class CfgFunctions {
		class uag {
				class ketamine {
						file = "\z\UAG_Ketamine\addons\uag_ketamine\functions";
						class inventoryHandler { postinit = 1; };
						class displayItem {};
						class injectKetamine {};
						class handleItem {};
				};
		};
};

class CfgWeapons {
	class Medikit;
	class UAG_Ketamine: Medikit {
		displayName = "Vitamin K";
		scope = 2;
		author = "Fluffy";
		descriptionShort = "A nice Vitamin.";
		descriptionUse = "A Delicious Stick of Vitamin K";
	};
};
