#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
    _DEFAULT,
    _GAME,
    _NAV,
    _SYM,
    _NUM,
    _ADJUST,
};

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAV, KC_BSPC)
#define LTHUMB3 LT(_NUM, KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 KC_F19

// Layers
#define LY_GAM TG(_GAME)
#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_NUM MO(_NUM)
#define LY_ADJ MO(_ADJUST)

#include "../../../users/geewiz/keysyms.h"
