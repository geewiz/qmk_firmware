#include QMK_KEYBOARD_H
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT_planck_grid(
  KC_TAB , KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  XXXXXXX, DH_A,    DH_S,    DH_D,    DH_F,    KC_G,    KC_H,    DH_J,    DH_K,    DH_L,    DH_SCLN, KC_QUOT,
  XXXXXXX, KC_Z   , KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
  XXXXXXX, XXXXXXX, XXXXXXX, KC_ESC , KC_NO  , BSP_LWR, KC_NO  , SPC_RSE, KC_DEL , XXXXXXX, XXXXXXX, KC_RCTL
),

[_LOWER] = LAYOUT_planck_grid(
  _______, _______, _______, _______, _______, _______, U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , _______,
  _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, CHTUPRV, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL , _______,
  _______, _______, _______, _______, _______, CHTUNXT, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , _______,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , LY_ADJT, _______, _______, _______, _______
),

[_RAISE] = LAYOUT_planck_grid(
  _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSLS,
  _______, KC_EXLM, KC_PLUS, KC_LPRN, KC_RPRN, KC_AT  , KC_PIPE, KC_MINS, KC_EQL , KC_UNDS, KC_ASTR, KC_GRV ,
  _______, KC_CIRC, KC_HASH, KC_LBRC, KC_RBRC, KC_TILD, KC_AMPR, KC_LCBR, KC_RCBR, KC_PERC, KC_DLR , _______,
  _______, _______, _______, _______, KC_NO  , LY_ADJT, KC_NO  , _______, _______, _______, _______, _______
),

[_ADJUST] = LAYOUT_planck_grid(
  RESET  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_SLCK, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_PAUS, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , _______, _______, _______, _______, _______
),

};
