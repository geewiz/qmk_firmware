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
#define LTHUMB2 LT(_LOWER, KC_BSPC)
#define LTHUMB3 LGUI_T(KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_RAISE, KC_SPC)
#define RTHUMB3 LALT_T(KC_DEL)

// Thumb keys GAME
#define LTHUMG1 KC_SPC
#define LTHUMG2 LT(_LOWER, KC_TAB)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_RAISE, KC_SPC)
#define RTHUMG3 KC_DEL

// Left side home row mods
#define HM_A LGUI_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LCTL_T(KC_D)
#define HM_F LSFT_T(KC_F)
// Right side home row mods
#define HM_SCLN RGUI_T(KC_SCLN)
#define HM_L    RALT_T(KC_L)
#define HM_K    RCTL_T(KC_K)
#define HM_J    RSFT_T(KC_J)

#include "../../../users/geewiz/keysyms.h"
