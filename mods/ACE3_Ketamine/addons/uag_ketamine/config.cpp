class CfgPatches {
    class ace_ketamine {
        authors[] = {"zuedev", "fluffy"};
        authorUrl = "https://uagpmc.com";
        name = "ace_ketamine";
        requiredAddons[] = {"ace_medical_treatment"};
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
						file = "\z\ACE3_Ketamine\addons\uag_ketamine\functions";
						class injectKetamine {};
				};
		};
};

class CfgWeapons {
	class CBA_MiscItem_ItemInfo;
	class ACE_morphine;
	
	class UAG_Ketamine: ACE_morphine 
	{
	    displayName = "Vitamin K";
	    author = "Fluffy";
	    
			descriptionShort = "A nice Vitamin.";
			descriptionUse = "A Delicious Stick of Vitamin K";
	    class ItemInfo: CBA_MiscItem_ItemInfo 
	    {
	        mass = 0.875;
	    };
	};
};

class ace_medical_treatment 
{
    class Medication
    {
        class Morphine;

				class UAG_Ketamine: Morphine
        {
            painReduce = 2.0;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 600;
            timeTillMaxEffect = 20;
            maxDose = 1;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
    };
};

class ace_medical_treatment_actions 
{
    class Morphine;

    class UAG_Ketamine: Morphine 
    {
        displayName = "Inject Ketamine";
        displayNameProgress = "Injecting Vitamin K";
        callbackSuccess = "call ace_medical_treatment_fnc_medication; call UAG_fnc_injectKetamine";
				items[] = {"UAG_Ketamine"};
    };
};
