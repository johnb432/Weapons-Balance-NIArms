#pragma hemtt flag pe23_ignore_has_include

class CfgWeapons {
    // 5.56mm
    class Rifle_Base_F;
    class hlc_acr_base: Rifle_Base_F {
        class WeaponSlotsInfo;
    };
    class hlc_acr556_base: hlc_acr_base {
        class WeaponSlotsInfo;
    };
    class hlc_rifle_ACR_SBR_tan: hlc_acr556_base {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        HLC_CurrentBarrel = "hlc_barrel_compact_ACR_556";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75.6;
        };
    };
    class hlc_rifleACR_SBR_cliffhanger: hlc_rifle_ACR_SBR_tan {
        displayName = "Remington ACR-E (Compact/'Cliffhanger')";
        HLC_CompatibleBarrels_Classes[] = {};
        HLC_CurrentBarrel = "";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75.6;
        };
    };
    class hlc_rifle_ACR_SBR_green: hlc_rifle_ACR_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75.6;
        };
    };
    class hlc_rifle_ACR_SBR_black: hlc_rifle_ACR_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 75.6;
        };
    };

    class hlc_rifle_ACR_GL_SBR_black: hlc_rifle_ACR_SBR_black {
        displayName = "Remington ACR-E (Compact/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 108.6;
        };
    };
    class hlc_rifle_ACR_GL_SBR_cliffhanger: hlc_rifle_ACR_GL_SBR_black {
        displayName = "Remington ACR-E (Compact/GL/'Cliffhanger')";
        HLC_CompatibleBarrels_Classes[] = {};
        HLC_CurrentBarrel = "";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 108.6;
        };
    };
    class hlc_rifle_ACR_GL_SBR_green: hlc_rifle_ACR_GL_SBR_black {
        displayName = "Remington ACR-E (Compact/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 108.6;
        };
    };
    class hlc_rifle_ACR_GL_SBR_tan: hlc_rifle_ACR_GL_SBR_black {
        displayName = "Remington ACR-E (Compact/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 108.6;
        };
    };

    class hlc_rifle_ACR_Carb_black: hlc_rifle_ACR_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_carbine_ACR_556";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80.8;
        };
    };
    class hlc_rifle_ACR_Carb_black_x15: hlc_rifle_ACR_Carb_black {
        model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    };
    class hlc_rifle_ACR_Carb_green: hlc_rifle_ACR_Carb_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80.8;
        };
    };
    class hlc_rifle_ACR_Carb_green_x15: hlc_rifle_ACR_Carb_green {
        model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    };
    class hlc_rifle_ACR_Carb_tan: hlc_rifle_ACR_Carb_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80.8;
        };
    };
    class hlc_rifle_ACR_Carb_tan_x15: hlc_rifle_ACR_Carb_tan {
        model = "hlc_wp_acr\mesh\acr\ACR_Carbine_x15.p3d";
    };

    class hlc_rifle_ACR_GL_Carb_black: hlc_rifle_ACR_Carb_black {
        displayName = "Remington ACR-E (Carbine/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 113.8;
        };
    };
    class hlc_rifle_ACR_GL_Carb_green: hlc_rifle_ACR_GL_Carb_black {
        displayName = "Remington ACR-E (Carbine/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 113.8;
        };
    };
    class hlc_rifle_ACR_GL_Carb_tan: hlc_rifle_ACR_GL_Carb_black {
        displayName = "Remington ACR-E (Carbine/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 113.8;
        };
    };

    class hlc_rifle_ACR_MID_black: hlc_rifle_ACR_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_mid_ACR_556";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.7;
        };
    };
    class hlc_rifle_ACR_MID_green: hlc_rifle_ACR_MID_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.7;
        };
    };
    class hlc_rifle_ACR_MID_tan: hlc_rifle_ACR_MID_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.7;
        };
    };

    class hlc_rifle_ACR_MID_black_grip3: hlc_rifle_ACR_MID_black {};
    class hlc_rifle_ACR_MID_green_grip3: hlc_rifle_ACR_MID_green {};
    class hlc_rifle_ACR_MID_tan_grip3: hlc_rifle_ACR_MID_tan {};

    class hlc_rifle_ACR_GL_mid_black: hlc_rifle_ACR_MID_black {
        displayName = "Remington ACR-E (Mid/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.7;
        };
    };
    class hlc_rifle_ACR_GL_mid_green: hlc_rifle_ACR_GL_mid_black {
        displayName = "Remington ACR-E (Mid/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.7;
        };
    };
    class hlc_rifle_ACR_GL_mid_tan: hlc_rifle_ACR_GL_mid_black {
        displayName = "Remington ACR-E (Mid/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.7;
        };
    };

    class hlc_rifle_ACR_full_black: hlc_rifle_ACR_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_full_ACR_556";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.3;
        };
    };
    class hlc_rifle_ACR_full_green: hlc_rifle_ACR_full_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.3;
        };
    };
    class hlc_rifle_ACR_full_tan: hlc_rifle_ACR_full_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        rhs_grip1_change = "hlc_rifle_ACR_Full_tan_grip";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 85.3;
        };
    };

    class hlc_rifle_ACR_Full_black_grip3: hlc_rifle_ACR_full_black {};
    class hlc_rifle_ACR_Full_green_grip3: hlc_rifle_ACR_full_green {};
    class hlc_rifle_ACR_Full_tan_grip3: hlc_rifle_ACR_full_tan {};

    // 6.8mm
    class hlc_rifle_ACR68_SBR_tan: hlc_acr_base {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        HLC_CurrentBarrel = "hlc_barrel_compact_ACR_68";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.6;
        };
    };
    class hlc_rifle_ACR68_SBR_green: hlc_rifle_ACR68_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.6;
        };
    };
    class hlc_rifle_ACR68_SBR_black: hlc_rifle_ACR68_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.6;
        };
    };
    class hlc_rifle_ACR68_Squant: hlc_rifle_ACR68_SBR_tan {
        displayName = "Remington ACR-E 6.8mm (Compact/SQ/Tan)";
        HLC_CompatibleBarrels_Classes[] = {};
        HLC_CurrentBarrel = "";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77.6;
        };
    };

    class hlc_rifle_ACR68_GL_SBR_black: hlc_rifle_ACR68_SBR_black {
        displayName = "Remington ACR-E 6.8mm (Compact/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110.6;
        };
    };
    class hlc_rifle_ACR68_GL_SBR_green: hlc_rifle_ACR68_GL_SBR_black {
        displayName = "Remington ACR-E 6.8mm (Compact/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110.6;
        };
    };
    class hlc_rifle_ACR68_GL_SBR_tan: hlc_rifle_ACR68_GL_SBR_black {
        displayName = "Remington ACR-E 6.8mm (Compact/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110.6;
        };
    };

    class hlc_rifle_ACR68_Carb_black: hlc_rifle_ACR68_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_carbine_ACR_68";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.8;
        };
    };
    class hlc_rifle_ACR68_Carb_green: hlc_rifle_ACR68_Carb_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.8;
        };
    };
    class hlc_rifle_ACR68_Carb_tan: hlc_rifle_ACR68_Carb_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.8;
        };
    };
    class hlc_rifle_ACR68_aron: hlc_rifle_ACR68_Carb_black {
        displayName = "Remington ACR-E 6.8mm (Carbine/SQ/Black)";
        HLC_CompatibleBarrels_Classes[] = {};
        HLC_CurrentBarrel = "";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 82.8;
        };
    };

    class hlc_rifle_ACR68_GL_Carb_black: hlc_rifle_ACR68_Carb_black {
        displayName = "Remington ACR-E 6.8mm (Carbine/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.8;
        };
    };
    class hlc_rifle_ACR68_GL_Carb_green: hlc_rifle_ACR68_GL_Carb_black {
        displayName = "Remington ACR-E 6.8mm (Carbine/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.8;
        };
    };
    class hlc_rifle_ACR68_GL_Carb_tan: hlc_rifle_ACR68_GL_Carb_black {
        displayName = "Remington ACR-E 6.8mm (Carbine/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 115.8;
        };
    };

    class hlc_rifle_ACR68_MID_black: hlc_rifle_ACR68_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_mid_ACR_68";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.7;
        };
    };
    class hlc_rifle_ACR68_MID_green: hlc_rifle_ACR68_MID_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.7;
        };
    };
    class hlc_rifle_ACR68_MID_tan: hlc_rifle_ACR68_MID_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 84.7;
        };
    };

    class hlc_rifle_ACR68_MID_black_grip3: hlc_rifle_ACR68_MID_black {};
    class hlc_rifle_ACR68_MID_green_grip3: hlc_rifle_ACR68_MID_green {};
    class hlc_rifle_ACR68_MID_tan_grip3: hlc_rifle_ACR68_MID_tan {};

    class hlc_rifle_ACR68_GL_mid_black: hlc_rifle_ACR68_MID_black {
        displayName = "Remington ACR-E 6.8mm (Mid/GL/Black)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_black","hlc_rifle_ACR_GL_Carb_black","hlc_rifle_ACR_GL_mid_black","hlc_rifle_ACR68_GL_SBR_black","hlc_rifle_ACR68_GL_Carb_black","hlc_rifle_ACR68_GL_mid_black"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117.7;
        };
    };
    class hlc_rifle_ACR68_GL_mid_green: hlc_rifle_ACR68_GL_mid_black {
        displayName = "Remington ACR-E 6.8mm (Mid/GL/Green)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_green","hlc_rifle_ACR_GL_Carb_green","hlc_rifle_ACR_GL_mid_green","hlc_rifle_ACR68_GL_SBR_green","hlc_rifle_ACR68_GL_Carb_green","hlc_rifle_ACR68_GL_mid_green"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117.7;
        };
    };
    class hlc_rifle_ACR68_GL_mid_tan: hlc_rifle_ACR68_GL_mid_black {
        displayName = "Remington ACR-E 6.8mm (Mid/GL/Tan)";
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_GL_SBR_tan","hlc_rifle_ACR_GL_Carb_tan","hlc_rifle_ACR_GL_mid_tan","hlc_rifle_ACR68_GL_SBR_tan","hlc_rifle_ACR68_GL_Carb_tan","hlc_rifle_ACR68_GL_mid_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 117.7;
        };
    };

    class hlc_rifle_ACR68_full_black: hlc_rifle_ACR68_SBR_tan {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_black","hlc_rifle_ACR_carb_black","hlc_rifle_ACR_MID_black","hlc_rifle_ACR_Full_black","hlc_rifle_ACR68_SBR_black","hlc_rifle_ACR68_carb_black","hlc_rifle_ACR68_MID_black","hlc_rifle_ACR68_full_black"};
        HLC_CurrentBarrel = "hlc_barrel_full_ACR_68";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.3;
        };
    };
    class hlc_rifle_ACR68_full_green: hlc_rifle_ACR68_full_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_green","hlc_rifle_ACR_carb_green","hlc_rifle_ACR_MID_green","hlc_rifle_ACR_Full_green","hlc_rifle_ACR68_SBR_green","hlc_rifle_ACR68_carb_green","hlc_rifle_ACR68_MID_green","hlc_rifle_ACR68_full_green"};
        picture = "\hlc_wp_acr\tex\ui\gear_rifle-green_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.3;
        };
    };
    class hlc_rifle_ACR68_full_tan: hlc_rifle_ACR68_full_black {
        HLC_CompatibleBarrels_Classes[] = {"hlc_rifle_ACR_SBR_tan","hlc_rifle_ACR_carb_tan","hlc_rifle_ACR_MID_tan","hlc_rifle_ACR_Full_tan","hlc_rifle_ACR68_SBR_tan","hlc_rifle_ACR68_carb_tan","hlc_rifle_ACR68_MID_tan","hlc_rifle_ACR68_full_tan"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 87.3;
        };
    };

    #if __has_include("\hlc_wp_aug\config.bin")
        class CBA_MiscItem;
        class CBA_MiscItem_ItemInfo;
        class hlc_barrel_compact_ACR_556: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Compact/5.56)";
            descriptionshort = "10.5'' 5.56mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 13;
            };
        };
        class hlc_barrel_carbine_ACR_556: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Carbine/5.56)";
            descriptionshort = "14.5'' 5.56mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 18.2;
            };
        };
        class hlc_barrel_mid_ACR_556: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Mid/5.56)";
            descriptionshort = "16.5'' 5.56mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo  {
                mass = 20.1;
            };
        };
        class hlc_barrel_full_ACR_556: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Long/5.56)";
            descriptionshort = "18.5'' 5.56mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 22.7;
            };
        };

        class hlc_barrel_compact_ACR_68: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Compact/6.8)";
            descriptionshort = "10.5'' 6.8mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 15;
            };
        };
        class hlc_barrel_carbine_ACR_68: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Carbine/6.8)";
            descriptionshort = "14.5'' 6.8mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_carbine_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Carbine_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 20.2;
            };
        };
        class hlc_barrel_mid_ACR_68: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Mid/6.8)";
            descriptionshort = "16.5'' 6.8mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_standard_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\Standard_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo  {
                mass = 22.1;
            };
        };
        class hlc_barrel_full_ACR_68: CBA_MiscItem {
            dlc = "Niarms_acr";
            author = "johnb43";
            displayName = "ACR Barrel (Long/6.8)";
            descriptionshort = "18.5'' 6.8mm Quick-Detach Barrel for ACR";
            picture = "\hlc_wp_aug\tex\ui\gear_barrel_hbar_ca.paa";
            model = "hlc_wp_aug\mesh\pickup\HBAR_barrel.p3d";
            scope = 2;
            class ItemInfo: CBA_MiscItem_ItemInfo {
                mass = 24.7;
            };
        };
    #endif

    class ItemCore;
    class InventoryMuzzleItem_Base_F;
    class muzzle_snds_H: ItemCore {
        class ItemInfo: InventoryMuzzleItem_Base_F {
            class AmmoCoef;
        };
    };
    class hlc_muzzle_SF3P_556: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
    class hlc_muzzle_SF3P_68: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
    class hlc_muzzle_SF3P_762: muzzle_snds_H {
        class ItemInfo: ItemInfo {
            class AmmoCoef: AmmoCoef {
                audibleFire = 1;
                visibleFire = 0.5;
            };
        };
    };
};
