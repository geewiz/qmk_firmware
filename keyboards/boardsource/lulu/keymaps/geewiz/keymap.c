// Copyright 2022 Cole Smith <cole@boadsource.xyz>
// Copyright 2022 Jochen Lillich <hello@geewiz.dev>
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "geewiz.h"

#include "users/callum/swapper.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     XXXXXXX, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , KC_QUOT, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE,   KC_HOME, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              KC_LGUI, ESC_NAV, KC_LSFT, TAB_MSE,       ENT_MED, KC_SPC , BSP_SYM, KC_RGUI \
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
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_MUTE,   KC_HOME, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, QK_LEAD, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              KC_ESC , KC_TAB , KC_LALT, KC_SPC ,       LY_MEDI, XXXXXXX, LY_SYMB, KC_LGUI \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_NAVI] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, OS_RGUI, OS_RALT, OS_RCTL, OS_RSFT, KC_RGUI,                     KC_TAB , KC_ESC , SW_WIN , XXXXXXX, CW_TOGG, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, OS_LGUI, OS_LALT, OS_LCTL, OS_LSFT, KC_LGUI,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_ENT , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, U_UND  , U_CUT  , U_CPY  , U_PST  , KC_DEL , XXXXXXX,   XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, _______, XXXXXXX, XXXXXXX,       XXXXXXX, KC_BSPC, LY_NUMB, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_SYMBOL] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC,                     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, KC_LCBR, KC_LBRC, KC_LPRN, KC_GRV ,                     KC_TILD, KC_MINS, KC_PLUS, KC_EQL , XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_PIPE, KC_RCBR, KC_RBRC, KC_RPRN, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, KC_UNDS, KC_SCLN, KC_COLN, KC_BSLS, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, LY_NUMB, LY_ADJT, XXXXXXX,       XXXXXXX, XXXXXXX, _______, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_NUMBER] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, OS_LGUI, OS_LALT, OS_LCTL, OS_LSFT, KC_MINS,                     KC_PLUS, OS_LSFT, OS_LCTL, OS_LALT, OS_LGUI, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, KC_COMM, KC_DOT , XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, _______, XXXXXXX, XXXXXXX,       XXXXXXX, XXXXXXX, _______, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_MOUSE] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, DESK_1 , DESK_2 , DESK_3 , DESK_4 , DESK_5 ,                     DESK_6 , DESK_7 , DESK_8 , DESK_9 , DESK_0 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, U_UND  , U_CUT  , U_CPY  , U_PST  , XXXXXXX, XXXXXXX,   XXXXXXX, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, XXXXXXX, XXXXXXX, _______,       KC_BTN1, KC_BTN3, KC_BTN2, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_MEDIA] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     XXXXXXX, KC_MPLY, KC_MSTP, KC_MPRV, KC_MNXT, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,       _______, XXXXXXX, XXXXXXX, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),

  [_ADJUST] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, KC_F11 , KC_F12 , KC_PAUS, KC_PSCR, KC_SCRL,                     TG_GAME, XXXXXXX, XXXXXXX, RGB_TOG, RGB_MOD, XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, XXXXXXX,\
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, XXXXXXX, _______, XXXXXXX,       XXXXXXX, XXXXXXX, _______, XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),
};

#ifdef ACHORDION_ENBLE
// Exceptions for the opposite hands rule
bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Allow same-hand holds for thumb keys
  if (tap_hold_record->event.key.row == 4) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    // Standard QMK hold behaviour for thumb keys
    case ESC_MED:
    case BSP_NAV:
    case TAB_MSE:
    case ENT_ADJ:
    case SPC_SYM:
    case DEL_NUM:
      return 0;
  }

  return 800;  // Reasonable default timeout
}
#endif
