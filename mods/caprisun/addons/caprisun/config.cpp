// I took the liberty of changing the Prefix to UAGPMC
// It can be anything else but for the moment that's what I'm using
// - Fluffy

class CfgPatches {
    class uagpmc_caprisun {
        name = "Caprisun";
        units[] = {};
        requiredAddons[] = {"ace_medical_treatment"};
        authors[] = {"uagpmc.com", "zuedev", "fluffy"};
        authorUrl = "https://uagpmc.com";
    };
};

class CfgWeapons {
    class ACE_personalAidKit;
    class UAGPMC_Capri_Sun: ACE_personalAidKit {
        displayName = "Capri Sun";
        picture = "\uagpmc_caprisun\caprisun.paa";
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
