class CfgPatches {
    class caprisun {
        name = "caprisun";
        units[] = {};
        requiredAddons[] = {"ace_medical_treatment"};
        authors[] = {"zuedev", "fluffy"};
        authorUrl = "https://uagpmc.com";
    };
};

class CfgWeapons {
    class ACE_personalAidKit;
    
    class UAGPMC_Capri_Sun: ACE_personalAidKit {
        displayName = "Capri Sun";
        picture = "\z\ACE3_Capri_Sun\addons\caprisun\caprisun.paa";
    };
};

class ace_medical_treatment_actions {
    class PersonalAidKit;

    class CapriSun: PersonalAidKit {
        displayName = "Use Capri Sun";
        displayNameProgress = "Giving sippies...";
        items[] = {"UAGPMC_Capri_Sun"};
    };
};
