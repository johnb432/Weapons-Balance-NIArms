#pragma hemtt flag pe23_ignore_has_include

class CfgMagazines {
    class 20Rnd_762x51_Mag;
    class sp_fwa_24rnd_75x55_sig510: 20Rnd_762x51_Mag {
        ammo = "HLC_GP11_FMJ";
        mass = 20;

        #if __has_include("\hlc_wp_sigamt\config.bin")
            model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
            modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57.p3d";
            modelSpecialIsProxy = 1;
            picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_ball_ca.paa";
        #endif
    };
    class sp_fwa_24rnd_75x55_sig510_tracer: sp_fwa_24rnd_75x55_sig510 {
        ammo = "HLC_GP11_tracer";

        #if __has_include("\hlc_wp_sigamt\config.bin")
            picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_Tracer_ca.paa";
        #endif
    };
};
