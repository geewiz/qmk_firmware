#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
  _DEFAULT,
  _GAME,
  _NAV,
  _SYM,
  _ADJUST
};

enum keycodes {
  DEFAULT = SAFE_RANGE,
  GAME,
  NAV,
  SYM,
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
#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_ADJ MO(_ADJUST)
#define LY_GAME TG(_GAME)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAV, KC_BSPC)
#define LTHUMB3 LALT_T(KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 RGUI_T(KC_DEL)

// Thumb keys GAME
#define LTHUMG1 KC_SPC
#define LTHUMG2 LT(_NAV, KC_TAB)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_SYM, KC_SPC)
#define RTHUMG3 KC_DEL

// Abbreviations
#define OSLSFT OSM(MOD_LSFT)
#define OSRSFT OSM(MOD_RSFT)
#define OSLCTL OSM(MOD_LCTL)
#define DEL_HYP HYPR_T(KC_DEL)
#define ESC_CTL LCTL_T(KC_ESC)
