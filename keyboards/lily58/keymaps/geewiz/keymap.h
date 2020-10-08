#pragma once

#include QMK_KEYBOARD_H

enum layer_names {
    _DEFAULT,
    _GAME,
    _NAV,
    _SYM,
    _NUM,
    _ADJUST,
};

// Thumb keys
#define LTHUMB1 KC_TAB
#define LTHUMB2 LT(_NAV, KC_BSPC)
#define LTHUMB3 LT(_NUM, KC_ESC)
#define RTHUMB1 KC_ENT
#define RTHUMB2 LT(_SYM, KC_SPC)
#define RTHUMB3 KC_F19

// Layers
#define LY_GAM TG(_GAME)
#define LY_NAV MO(_NAV)
#define LY_SYM MO(_SYM)
#define LY_NUM MO(_NUM)
#define LY_ADJ MO(_ADJUST)

// Mod-tap
#define BSP_GUI LGUI_T(KC_BSPC)
#define DEL_HYP HYPR_T(KC_DEL)
#define ESC_CTL LCTL_T(KC_ESC)

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

#define N4_CTL LCTL_T(KC_4)
#define N5_SFT LSFT_T(KC_5)
#define N6_ALT LALT_T(KC_6)
#define PRV_ALT LALT_T(KC_MPRV)
#define PLY_GUI LGUI_T(KC_MPLY)
#define NXT_SFT LSFT_T(KC_MNXT)
#define STP_GUI LGUI_T(KC_MSTP)

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
#define VOLUP KC__VOLUP
#define VOLDN KC__VOLDOWN
#define MUTE KC__MUTE
#define PLAY KC_MPLY
#define STOP KC_MSTP
#define NEXT KC_MNXT
#define PREV KC_MPRV
#define APP1 A(KC_F1)
#define APP2 A(KC_F2)
#define APP3 A(KC_F3)
#define APP4 A(KC_F4)
#define APP5 A(KC_F5)
#define APP6 A(KC_F6)
#define APP7 A(KC_F7)
#define APP8 A(KC_F8)
#define APP9 A(KC_F9)
#define APP10 A(KC_F10)

// Dynamic macros
#define MAC1 DYN_MACRO_PLAY1
#define MAC2 DYN_MACRO_PLAY2
#define RMAC1 DYN_REC_START1
#define RMAC2 DYN_REC_START2
#define RMACS DYN_REC_STOP
