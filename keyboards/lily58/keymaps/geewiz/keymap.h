#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
    _DEFAULT,
    _GAME,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// Layers
#define LY_LWR MO(_LOWER)
#define LY_RSE MO(_RAISE)
#define LY_ADJ MO(_ADJUST)
#define LY_GAM TG(_GAME)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_LOWER, KC_SPC)
#define LTHUMB3 ESC_GUI
#define LTHUMB4 XXXXXXX
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_RAISE, KC_BSPC)
#define RTHUMB3 DEL_ALT
#define RTHUMB4 XXXXXXX

// Thumb keys GAME
#define LTHUMG1 KC_SPC
#define LTHUMG2 LT(_LOWER, KC_TAB)
#define LTHUMG3 LALT_T(KC_ESC)
#define LTHUMG4 XXXXXXX
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_RAISE, KC_SPC)
#define RTHUMG3 KC_DEL
#define RTHUMG4 XXXXXXX

#include "../../../users/geewiz/keysyms.h"
