#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
  _DEFAULT,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum keycodes {
  DEFAULT = SAFE_RANGE,
  GAME,
  LOWER,
  RAISE,
  ADJUST,
  BACKLIT,
  RGBRST,
  KC_SMCL, // Smart caps lock
};

enum macro_keycodes {
  KC_SAMPLEMACRO,
};

// #define _______ KC_TRNS

// Layer switching
#define LY_LWR MO(_LOWER)
#define LY_RSE MO(_RAISE)
#define LY_ADJ MO(_ADJUST)
#define LY_GAM TG(_GAME)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_LOWER, KC_SPC)
#define LTHUMB3 KC_ESC
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_RAISE, KC_BSPC)
#define RTHUMB3 KC_DEL

// Thumb keys GAME
#define LTHUMG1 KC_TAB
#define LTHUMG2 LT(_LOWER, KC_SPC)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_RAISE, KC_BSPC)
#define RTHUMG3 KC_DEL

#include "../../../users/geewiz/keysyms.h"
