#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
  _DEFAULT,
  _NAV,
  _SYM,
  _ADJUST
};

enum keycodes {
    KC_SMCL = SAFE_RANGE, // Smart caps lock
};

#define _______ KC_TRNS

// Layer switching
#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_ADJ MO(_ADJUST)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAV, KC_BSPC)
#define LTHUMB3 LALT_T(KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 RGUI_T(KC_DEL)

#include "../../../users/geewiz/keysyms.h"
