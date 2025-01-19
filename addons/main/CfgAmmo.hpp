class CfgAmmo {
    class HLC_3006_FMJ;
    class HLC_3006_T: HLC_3006_FMJ {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red.p3d";
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

    class FH_545x39_Tracer;
    class FH_545x39_Tracer_Dim: FH_545x39_Tracer {
        nvgOnly = 1;
    };

    class HLC_762x39_Tracer;
    class HLC_762x39_Tracer_Dim: HLC_762x39_Tracer {
        nvgOnly = 1;
    };
};
