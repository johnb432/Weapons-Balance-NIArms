class hlc_30rnd_68x43_FMJ: 30Rnd_556x45_Stanag {
    mass = 12;
};
class hlc_30rnd_68x43_OTM: hlc_30rnd_68x43_FMJ {
    mass = 12;
};


class hlc_29rnd_300BLK_STANAG: 30Rnd_556x45_Stanag {
    mass = 10;
};
class hlc_30rnd_300BLK_EMAG: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};
class hlc_30rnd_300BLK_PMAG: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};
class hlc_30rnd_300BLK_SCAR: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};
class hlc_30rnd_300BLK_STANAGHD: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};

class hlc_29rnd_300BLK_STANAG_S: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};
class hlc_30rnd_300BLK_EMAG_S: hlc_29rnd_300BLK_STANAG_S {
    mass = 10;
};
class hlc_30rnd_300BLK_PMAG_S: hlc_29rnd_300BLK_STANAG_S {
    mass = 10;
};
class hlc_30rnd_300BLK_SCAR_S: hlc_29rnd_300BLK_STANAG_S {
    mass = 10;
};
class hlc_30rnd_300BLK_STANAGHD_S: hlc_29rnd_300BLK_STANAG_S {
    mass = 10;
};

class hlc_29rnd_300BLK_STANAG_T: hlc_29rnd_300BLK_STANAG {
    mass = 10;
};
class hlc_30rnd_300BLK_EMAG_T: hlc_29rnd_300BLK_STANAG_T {
    mass = 10;
};
class hlc_30rnd_300BLK_PMAG_T: hlc_29rnd_300BLK_STANAG_T {
    mass = 10;
};
class hlc_30rnd_300BLK_SCAR_T: hlc_29rnd_300BLK_STANAG_T {
    mass = 10;
};
class hlc_30rnd_300BLK_STANAGHD_T: hlc_29rnd_300BLK_STANAG_T {
    mass = 10;
};

class hlc_50rnd_300BLK_STANAG_EPR: hlc_29rnd_300BLK_STANAG {
    mass = 25;
};


class hlc_30rnd_556x45_b_HK33: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class hlc_30rnd_556x45_EPR_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_mdim_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_tdim_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};

class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
    mass = 20;
};
class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
    mass = 20;
};
class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_ap_stgw {
    mass = 20;
};

class 20Rnd_762x51_Mag;
class sp_fwa_24rnd_75x55_sig510: 20Rnd_762x51_Mag {
    ammo = "HLC_GP11_FMJ";
    mass = 20;
    model = "\hlc_wp_sigamt\mesh\magazine\magazine_stgw.p3d";
    modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\24rnd_GP11_STGW57";
    modelSpecialIsProxy = 1;
    picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_ball_ca.paa";
};
class sp_fwa_24rnd_75x55_sig510_tracer: sp_fwa_24rnd_75x55_sig510 {
    ammo = "HLC_GP11_tracer";
    picture = "\hlc_wp_sigamt\tex\ui\m_stgw57_Tracer_ca.paa";
};

class hlc_20Rnd_762x51_b_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.24;
};
class hlc_20Rnd_762x51_mk316_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.24;
    modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
};
class hlc_20Rnd_762x51_bball_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.24;
    modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
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
