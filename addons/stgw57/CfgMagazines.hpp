class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
        mass = 20;
    };
    class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
        mass = 20;
    };
    class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_ap_stgw {
        mass = 20;
    };

    class hlc_20Rnd_762x51_b_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_mk316_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.24;
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW.p3d";
    };
    class hlc_20Rnd_762x51_bball_amt: hlc_24Rnd_75x55_B_stgw {
        mass = 16.24;
        modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW.p3d";
    };
    class hlc_20Rnd_762x51_T_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.24;
    };
    class hlc_20rnd_762x51_MDIM_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.24;
    };
    class hlc_20rnd_762x51_M_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_TDim_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.24;
    };
    class hlc_20Rnd_762x51_S_amt: hlc_20Rnd_762x51_b_amt {
        mass = 16.24;
    };
};
