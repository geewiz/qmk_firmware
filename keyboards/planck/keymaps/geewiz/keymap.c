#include QMK_KEYBOARD_H
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#if defined(GEEWIZ_COLEMAK)
[_DEFAULT] = LAYOUT_planck_grid(
  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    XXXXXXX, XXXXXXX, KC_J   , KC_L,    KC_U,    KC_Y,    KC_QUOT,
  DH_A,    DH_R,    DH_S,    DH_T,    KC_G,    XXXXXXX, XXXXXXX, KC_M   , DH_N,    DH_E,    DH_I,    DH_O   ,
  KC_Z   , KC_X,    KC_C,    KC_D,    KC_V,    XXXXXXX, XXXXXXX, KC_K   , KC_H   , KC_COMM, KC_DOT,  KC_SLSH,
  XXXXXXX, XXXXXXX, ESC_MED, BSP_LWR, KC_NO  , TAB_MSE, KC_NO  , ENT_SYM, SPC_RSE, DEL_ADJ, XXXXXXX, XXXXXXX
),
#else
[_DEFAULT] = LAYOUT_planck_grid(
  KC_Q   , KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
  DH_A   , DH_S,    DH_D,    DH_F,    KC_G,    _______, _______, KC_J   , DH_K   , DH_L   , DH_SCLN, DH_QUOT,
  KC_Z   , KC_X   , KC_C,    KC_V,    KC_B,    _______, _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
  XXXXXXX, XXXXXXX, ESC_MED, BSP_LWR, KC_NO  , TAB_MSE, KC_NO  , ENT_SYM, SPC_RSE, DEL_ADJ, XXXXXXX, XXXXXXX
),
#endif

[_LOWER] = LAYOUT_planck_grid(
  _______, _______, _______, _______, _______, _______, _______, U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  ,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, CHTUPRV, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL ,
  _______, _______, _______, _______, CHTUNXT, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS ,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , _______, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(
  KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_SCLN, KC_4   , KC_5   , KC_6   , KC_EQL , _______, _______, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, KC_DOT , KC_0   , KC_NO  , KC_MINS, KC_NO  , _______, _______, _______, _______, _______
),

[_SYMBOL] = LAYOUT_planck_grid(
  KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_PLUS, _______, _______, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, KC_LPRN, KC_RPRN, KC_NO  , KC_UNDS, KC_NO  , _______, _______, _______, _______, _______
),

[_MOUSE] = LAYOUT_planck_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  ,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , KC_BTN1, KC_BTN3, KC_BTN2, _______, _______
),

[_MEDIA] = LAYOUT_planck_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , KC_MSTP, KC_MPLY, KC_MUTE, _______, _______
),

[_ADJUST] = LAYOUT_planck_grid(
  KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET  ,
  KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SLCK, _______, _______, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, _______, KC_BSPC, KC_NO  , KC_TAB , KC_NO  , _______, _______, _______, _______, _______
),

};
