#pragma once

#include QMK_KEYBOARD_H
#include "../../../../users/geewiz/keysyms.h"

enum layer_names {
  _DFLT,
  _GAME,
  _NAVI,
  _NUMB,
  _SYMB,
  _FUNC
};

enum macro_keycodes {
  KC_SAMPLEMACRO,
};

// #define _______ KC_TRNS

// Layer switching
#define LY_GAME TG(_GAME)
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

// Thumb keys GAME
#define LTHUMG1 KC_TAB
#define LTHUMG2 LT(_NAVI, KC_SPC)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_SYMB, KC_BSPC)
#define RTHUMG3 KC_DEL
