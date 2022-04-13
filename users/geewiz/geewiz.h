#pragma once

enum keycodes {
  DEFAULT = SAFE_RANGE,
  U_SMCL, // Smart caps lock
};

enum layer_names {
  _DEFAULT,
  _GAME,
  _LOWER,
  _RAISE,
  _ADJUST
};

// Layer switch
#define LY_DFLT MO(_DEFAULT)
#define LY_LOWR MO(_LOWER)
#define LY_RAIS MO(_RAISE)
#define LY_ADJT MO(_ADJUST)
#define LY_GAME TG(_GAME)

// Layer taps
#define BSP_LWR LT(_LOWER, KC_BSPC)
#define TAB_LWR LT(_LOWER, KC_TAB)
#define SPC_RSE LT(_RAISE, KC_SPC)

// Default layer home row mods
#define DH_A    LGUI_T(KC_A)
#define DH_S    LALT_T(KC_S)
#define DH_D    LCTL_T(KC_D)
#define DH_F    LSFT_T(KC_F)
#define DH_SCLN RGUI_T(KC_SCLN)
#define DH_QUOT RGUI_T(KC_QUOT)
#define DH_L    RALT_T(KC_L)
#define DH_K    RCTL_T(KC_K)
#define DH_J    RSFT_T(KC_J)

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
#define OSLSFT OSM(MOD_LSFT)
#define OSRSFT OSM(MOD_RSFT)
#define OSLCTL OSM(MOD_LCTL)
#define DEL_HYP HYPR_T(KC_DEL)
#define DEL_ALT LALT_T(KC_DEL)
#define ESC_CTL LCTL_T(KC_ESC)
#define ESC_GUI LGUI_T(KC_ESC)
#define ESC_ALT LALT_T(KC_ESC)
#define ENT_SFT LSFT_T(KC_ENT)
#define Z_CTL LCTL_T(KC_Z)
#define SLS_CTL RCTL_T(KC_SLSH)
#define CHTUNXT LSFT(LALT(KC_DOWN))
#define CHTUPRV LSFT(LALT(KC_UP))

// Dynamic macros
#define MAC1 DYN_MACRO_PLAY1
#define MAC2 DYN_MACRO_PLAY2
#define RMAC1 DYN_REC_START1
#define RMAC2 DYN_REC_START2
#define RMACS DYN_REC_STOP
