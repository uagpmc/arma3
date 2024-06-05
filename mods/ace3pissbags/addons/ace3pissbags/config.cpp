class CfgPatches {
    class ace3pissbags {
        name = "ace3pissbags";
        units[] = {};
        requiredAddons[] = {"ace_medical_treatment"};
        authors[] = {"uagpmc.com", "zuedev", "Fluffy"};
        authorUrl = "https://uagpmc.com";
    };
};

class CfgWeapons {
    class ACE_bloodIV;
    class ACE_bloodIV_500;
    class ACE_bloodIV_250;

    class ACE_pissIV: ACE_bloodIV {
        displayName = "Piss Bag (1000ml)";
        picture = "\ace3pissbags\pissiv.paa";
        hiddenSelectionsTextures[] = {"\ace3pissbags\Pissbag_ca.paa"};
    };
    class ACE_pissIV_500: ACE_bloodIV_500 {
        displayName = "Piss Bag (500ml)";
        picture = "\ace3pissbags\pissiv.paa";
        hiddenSelectionsTextures[] = {"\ace3pissbags\Pissbag_ca.paa"};
    };
    class ACE_pissIV_250: ACE_bloodIV_250 {
        displayName = "Piss Bag (250ml)";
        picture = "\ace3pissbags\pissiv.paa";
        hiddenSelectionsTextures[] = {"\ace3pissbags\Pissbag_ca.paa"};
    };
};

class ace_medical_treatment {
    class IV {
        class BloodIV;
        class BloodIV_500;
        class BloodIV_250;

        class PissIV: BloodIV {};
        class PissIV_500: BloodIV_500 {};
        class PissIV_250: BloodIV_250 {};
    };
};

class ace_medical_treatment_actions {
    class BloodIV;

    class PissIV: BloodIV {
        displayName = "Give Piss IV (1000ml)";
        displayNameProgress = "Transfusing Piss...";
        items[] = {"ACE_pissIV"};
    };

    class PissIV_500: PissIV {
        displayName = "Give Piss IV (500ml)";
        items[] = {"ACE_pissIV_500"};
    };

    class PissIV_250: PissIV {
        displayName = "Give Piss IV (250ml)";
        items[] = {"ACE_pissIV_250"};
    };
};
