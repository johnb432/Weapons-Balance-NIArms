// PKM boxes
class hlc_100Rnd_762x54_B_PKM: 30Rnd_556x45_Stanag {
    ACE_isBelt = 1;
    ammo = "HLC_762x54_ball";
    author = "Toadie, johnb43";
    count = 100;
    descriptionShort = "Caliber: 7.62x54mmR 57-N-323S<br/>Type: FMJ<br/>Rounds: 100<br/>Used in: PK";
    displayName = "100Rnd 7.62x54 57-N-323S Belt";
    displayNameShort = "FMJ";
    initSpeed = 825;
    mass = 43;
    modelSpecial = "";
    picture = "\hlc_core\tex\ui\ammo\m_pkm100ball_ca.paa";
    scope = 2;
    tracersEvery = 0;
};
class hlc_250Rnd_762x54_B_PKM: hlc_100Rnd_762x54_B_PKM {
    count = 250;
    descriptionShort = "Caliber: 7.62x54mmR 57-N-323S<br/>Type: FMJ<br/>Rounds: 250<br/>Used in: PK";
    displayName = "250Rnd 7.62x54 57-N-323S Belt";
    mass = 91;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250ball_ca.paa";
};
class hlc_100Rnd_762x54_T_PKM: hlc_100Rnd_762x54_B_PKM {
    ammo = "HLC_762x54_tracer";
    descriptionShort = "Caliber: 7.62x54mmR 7T2<br/>Type: Tracer<br/>Rounds: 100<br/>Used in: PK";
    displayName = "100Rnd 7.62x54 7T2 Belt (Green Tracer)";
    displayNameShort = "Tracer";
    initSpeed = 798;
    lastRoundsTracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100tracer_ca.paa";
    tracersEvery = 1;
};
class hlc_250Rnd_762x54_T_PKM: hlc_100Rnd_762x54_T_PKM {
    count = 250;
    descriptionShort = "Caliber: 7.62x54mmR 7T2<br/>Type: Tracer<br/>Rounds: 250<br/>Used in: PK";
    displayName = "250Rnd 7.62x54 7T2 Belt (Green Tracer)";
    mass = 91;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250tracer_ca.paa";
};
class hlc_100Rnd_762x54_M_PKM: hlc_100Rnd_762x54_T_PKM {
    descriptionShort = "Caliber: 7.62x54mmR 57-N-323S/7T2<br/>Type: FMJ/Tracer<br/>Rounds: 100<br/>Used in: PK";
    displayName = "100Rnd 7.62x54 57-N-323S Belt (Green Tracer Mixed)";
    displayNameShort = "FMJ/Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_pkm100mixed_ca.paa";
    tracersEvery = 3;
};
class hlc_250Rnd_762x54_M_PKM: hlc_100Rnd_762x54_M_PKM {
    count = 250;
    descriptionShort = "Caliber: 7.62x54mmR 57-N-323S/7T2<br/>Type: FMJ/Tracer<br/>Rounds: 250<br/>Used in: PK";
    displayName = "250Rnd 7.62x54 57-N-323S Belt (Green Tracer Mixed)";
    mass = 91;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250mixed_ca.paa";
};

class hlc_100Rnd_762x54_AP_PKM: hlc_100Rnd_762x54_B_PKM {
    ammo = "HLC_762x54_AP";
    descriptionShort = "Caliber: 7.62x54mmR 7N13<br/>Type: AP<br/>Rounds: 100<br/>Used in: PK";
    displayName = "100Rnd 7.62x54 7N13 Belt";
    displayNameShort = "AP";
    initSpeed = 825;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100ap_ca.paa";
};
class hlc_250Rnd_762x54_AP_PKM: hlc_100Rnd_762x54_AP_PKM {
    count = 250;
    descriptionShort = "Caliber: 7.62x54mmR 7N13<br/>Type: AP<br/>Rounds: 250<br/>Used in: PK";
    displayName = "250Rnd 7.62x54 7N13 Belt";
    mass = 91;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250ap_ca.paa";
};
