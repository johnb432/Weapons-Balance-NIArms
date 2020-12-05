class CfgAmmo {
    class HLC_3006_FMJ;
    class HLC_3006_T: HLC_3006_FMJ {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgOnly = 0;
        tracerscale = 1.2;
    };

    class B_762x51_Ball;
    class HLC_GP11_FMJ: B_762x51_Ball {
        ACE_bulletLength = 35.0012;
    };
    class HLC_GP11_APBT: B_762x51_Ball {
        ACE_bulletLength = 35.0012;
    };
};
