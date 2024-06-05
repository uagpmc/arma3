class CfgPatches {
    class ace3caprisun {
        name = "ace3caprisun";
        units[] = {};
        requiredAddons[] = {"ace_medical_treatment"};
        authors[] = {"uagpmc.com", "zuedev"};
        authorUrl = "https://uagpmc.com";
    };
};

class CfgWeapons {
    class ACE_personalAidKit;
    class ACE_Capri_Sun: ACE_personalAidKit {
        displayName = "Capri Sun";
        picture = "\ace3caprisun\caprisun.paa";
    };
};

class ace_medical_treatment_actions {
    class PersonalAidKit;

    class CapriSun: PersonalAidKit {
        displayName = "Use Capri Sun";
        displayNameProgress = "Giving sippies...";
        items[] = {"ACE_Capri_Sun"};
    };
};