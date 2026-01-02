#define MIRYOKU_ALPHAS_QWERTY

#include <behaviors.dtsi>

// up/down for roller encoder
/ {
    keymap {
        BASE {
            sensor-bindings = <&inc_dec_kp C_VOL_DN C_VOL_UP>;
        };
    };
};

