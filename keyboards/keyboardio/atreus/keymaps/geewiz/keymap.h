#pragma once

#include QMK_KEYBOARD_H
#include "geewiz.h"

enum layer_names {
  _DFLT,
  _NAVI,
  _NUMB,
  _SYMB,
  _FUNC
};

#define _______ KC_TRNS

// Layer switching
#define LY_NAVI MO(_NAVI)
#define LY_SYMB MO(_SYMB)
#define LY_FUNC MO(_FUNC)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAVI, KC_SPC)
#define LTHUMB3 KC_ESC
#define RTHUMB1 LT(_SYMB, KC_ENT)
#define RTHUMB2 LT(_NUMB, KC_BSPC)
#define RTHUMB3 LT(_FUNC, KC_DEL)
