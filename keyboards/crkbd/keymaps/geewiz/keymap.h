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
#define LTHUMB3 LGUI_T(KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 LALT_T(KC_DEL)

// Thumb keys GAME
#define LTHUMG1 KC_SPC
#define LTHUMG2 LT(_NAV, KC_TAB)
#define LTHUMG3 LALT_T(KC_ESC)
#define RTHUMG1 KC_ENT
#define RTHUMG2 LT(_SYM, KC_SPC)
#define RTHUMG3 KC_DEL

// Left side home row mods
#define HM_A LCTL_T(KC_A)
#define HM_S LALT_T(KC_S)
#define HM_D LGUI_T(KC_D)
#define HM_F LSFT_T(KC_F)
// Right side home row mods
#define HM_SCLN RCTL_T(KC_SCLN)
#define HM_L RALT_T(KC_L)
#define HM_K RGUI_T(KC_K)
#define HM_J RSFT_T(KC_J)
// Left side NAV layer mods
#define F5_CTL LCTL_T(KC_F5)
#define F6_ALT LALT_T(KC_F6)
#define F7_GUI LGUI_T(KC_F7)
#define F8_SFT LSFT_T(KC_F8)

#define DEL_HYP HYPR_T(KC_DEL)

// Abbreviations
#define OSLSFT OSM(MOD_LSFT)
#define OSRSFT OSM(MOD_RSFT)
#define CMDLEFT LCMD(KC_LEFT)
#define ALTLEFT A(KC_LEFT)
#define ALTRGHT A(KC_RGHT)
#define CMDRGHT LCMD(KC_RGHT)
#define CHATUP A(S(KC_UP))
#define CHATDN A(S(KC_DOWN))
#define EURO A(S(KC_2))
#define CUT LCMD(KC_X)
#define COPY LCMD(KC_C)
#define PASTE LCMD(KC_V)
#define UNDO LCMD(KC_Z)
#define DELWRD A(KC_BSPC)
