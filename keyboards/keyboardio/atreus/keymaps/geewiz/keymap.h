#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
  _DEFAULT,
  _NAV,
  _SYM,
  _NUM,
  _ADJUST
};

enum keycodes {
    KC_SMCL = SAFE_RANGE, // Smart caps lock
};

#define _______ KC_TRNS

// Layer switching
#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_NUM MO(_NUM)
#define LY_ADJ MO(_ADJUST)

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAV, KC_BSPC)
#define LTHUMB3 LT(_NUM, KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 KC_F19

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
