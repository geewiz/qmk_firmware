// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// Copyright 2022 Jochen Lillich <hello@geewiz.dev>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "geewiz.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DEFAULT] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, DH_A   , DH_S   , DH_D   , DH_F   , KC_G   ,                     KC_H   , DH_J   , DH_K   , DH_L   , DH_QUOT, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE,   KC_HOME, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              KC_LGUI, ESC_MED, BSP_NAV, TAB_MSE,       ENT_ADJ, SPC_SYM, DEL_NUM, KC_RGUI \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_GAME] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______,   _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LEAD, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, KC_ESC , KC_TAB , KC_SPC ,       ENT_ADJ, SPC_SYM, DEL_NUM, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_NAVI] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT, XXXXXXX, XXXXXXX,   XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_SYMBOL] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_GRV , KC_AMPR, KC_ASTR, KC_MINS, XXXXXXX,                     XXXXXXX, KC_UNDS, KC_LABK, KC_RABK, KC_TILD, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_EQL ,                     KC_PLUS, KC_LPRN, KC_LBRC, KC_LCBR, KC_SCLN, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_PIPE, KC_EXLM, KC_AT  , KC_HASH, XXXXXXX, _______,   _______, XXXXXXX, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_NUMBER] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_SLSH, KC_7   , KC_8   , KC_9   , KC_ASTR,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_0   , KC_4   , KC_5   , KC_6   , KC_MINS,                     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_DOT , KC_1   , KC_2   , KC_3   , KC_PLUS, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_MEDIA] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_ADJUST] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SLCK,                     LY_GAME, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _NAVI, _SYMBOL, _ADJUST);
}
