class CfgPatches
{
    class ace3painbegone
    {
        authors[] = {"uagpmc","zuedev","Fluffy"};
        authorUrl = "https://uagpmc.com";
        name = "ace3painbegone";
        units[] = {};
        weapons[] = {};
        requireAddons[] = {"ace_medical_treatment"};
    };
};

class CfgWeapons 
{
    class CBA_MiscItem_ItemInfo;
    class ACE_morphine;
    class FF_Painkiller: ACE_morphine 
    {
        displayName = "Painkiller";
        author = "Fluffy";
        model = "\ace3painbegone\data\Painkiller.p3d";
        picture = "\ace3painbegone\data\PainkillerIcon_ca.paa";
        descriptionShort = "Used to Treat Pain";
        descriptionUse = "Tablets used to cure Slight Pain, 1 out of 10 Operators Recommend!";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\ace3painbegone\data\Painkiller_ca.paa"};
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
        class FF_Painkiller: Morphine
        {
            painReduce = 0.2;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 600;
            timeTillMaxEffect = 120;
            maxDose = 5;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
    };
};

class ace_medical_treatment_actions 
{
    class Morphine;
    class FF_Painkiller: Morphine 
    {
        allowedSelections[] = {"Head"};
        displayName = "Use Painkiller";
        displayNameProgress = "Using Painkiller";
        items[] = {"FF_Painkiller"};
    };
};
