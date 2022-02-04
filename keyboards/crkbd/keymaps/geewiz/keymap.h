#pragma once

#include QMK_KEYBOARD_H
#include "../../../../users/geewiz/keysyms.h"

enum layer_names {
  _DEFAULT,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum macro_keycodes {
  KC_SAMPLEMACRO,
};

// #define _______ KC_TRNS

// Layer switching
#define LY_GAME TG(_GAME)
#define LY_LWR MO(_LOWER)
#define LY_RSE MO(_RAISE)
#define LY_ADJ MO(_ADJUST)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_LOWER, KC_BSPC)
#define LTHUMB3 LGUI_T(KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_RAISE, KC_SPC)
#define RTHUMB3 LALT_T(KC_DEL)

// Thumb keys GAME
#define LTHUMG1 KC_TAB
#define LTHUMG2 LT(_LOWER, KC_BSPC)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_RAISE, KC_SPC)
#define RTHUMG3 KC_DEL
