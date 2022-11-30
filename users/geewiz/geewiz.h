#pragma once

#include "features/achordion.h"

enum keycodes {
  DEFAULT = SAFE_RANGE,
  U_SMCL, // Smart caps lock
};

enum layer_names {
  _DEFAULT = 0,
  _GAME,
  _NAVI,
  _SYMBOL,
  _NUMBER,
  _MOUSE,
  _MEDIA,
  _DESKTOP,
  _ADJUST,
};

// Layer switch
#define LY_NAVI MO(_NAVI)
#define LY_NUMB MO(_NUMBER)
#define LY_SYMB MO(_SYMBOL)
#define LY_MOUS MO(_MOUSE)
#define LY_ADJT MO(_ADJUST)
#define LY_DFLT DF(_DEFAULT)
#define LY_GAME DF(_GAME)
#define TG_GAME TG(_GAME)
#define TG_DESK TG(_DESKTOP)

// Layer taps
#define BSP_NAV LT(_NAVI, KC_BSPC)
#define DEL_ADJ LT(_ADJUST, KC_DEL)
#define DEL_NUM LT(_NUMBER, KC_DEL)
#define ENT_ADJ LT(_ADJUST, KC_ENT)
#define ENT_NUM LT(_NUMBER, KC_ENT)
#define ESC_MED LT(_MEDIA, KC_ESC)
#define SPC_SYM LT(_SYMBOL, KC_SPC)
#define TAB_MSE LT(_MOUSE, KC_TAB)
#define TAB_NAV LT(_NAVI, KC_TAB)

// Default layer home row mods
#if defined(GEEWIZ_COLEMAK)
#define DH_A    LGUI_T(KC_A)
#define DH_R    LALT_T(KC_R)
#define DH_S    LCTL_T(KC_S)
#define DH_T    LSFT_T(KC_T)
#define DH_O    LGUI_T(KC_O)
#define DH_I    LALT_T(KC_I)
#define DH_E    LCTL_T(KC_E)
#define DH_N    LSFT_T(KC_N)
#else
#define DH_A    LGUI_T(KC_A)
#define DH_S    LALT_T(KC_S)
#define DH_D    LCTL_T(KC_D)
#define DH_F    LSFT_T(KC_F)
#define DH_SCLN LGUI_T(KC_SCLN)
#define DH_QUOT LGUI_T(KC_QUOT)
#define DH_L    LALT_T(KC_L)
#define DH_K    LCTL_T(KC_K)
#define DH_J    LSFT_T(KC_J)
#endif

// Windows functions
#define U_RDO LCTL(KC_Y)
#define U_PST LCTL(KC_V)
#define U_CPY LCTL(KC_C)
#define U_CUT LCTL(KC_X)
#define U_UND LCTL(KC_Z)

// Abbreviations
#define CTL_Z LCTL(KC_Z)
#define CTL_X LCTL(KC_X)
#define CTL_C LCTL(KC_C)
#define CTL_V LCTL(KC_V)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define OS_LALT OSM(MOD_LALT)
#define OS_LGUI OSM(MOD_LGUI)
#define OS_RSFT OSM(MOD_RSFT)
#define DEL_HYP HYPR_T(KC_DEL)
#define DEL_ALT LALT_T(KC_DEL)
#define ESC_CTL LCTL_T(KC_ESC)
#define ESC_GUI LGUI_T(KC_ESC)
#define ESC_ALT LALT_T(KC_ESC)
#define ENT_SFT LSFT_T(KC_ENT)
#define TAB_SFT LSFT_T(KC_TAB)
#define Z_CTL LCTL_T(KC_Z)
#define SLS_CTL RCTL_T(KC_SLSH)
#define CHTUNXT LSFT(LALT(KC_DOWN))
#define CHTUPRV LSFT(LALT(KC_UP))
#define DESK_1 LGUI(KC_1)
#define DESK_2 LGUI(KC_2)
#define DESK_3 LGUI(KC_3)
#define DESK_4 LGUI(KC_4)
#define DESK_5 LGUI(KC_5)
#define DESK_6 LGUI(KC_6)

// Dynamic macros
#define MAC1 DYN_MACRO_PLAY1
#define MAC2 DYN_MACRO_PLAY2
#define RMAC1 DYN_REC_START1
#define RMAC2 DYN_REC_START2
#define RMACS DYN_REC_STOP
