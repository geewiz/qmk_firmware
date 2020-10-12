/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2021 Jochen Lillich <contact@geewiz.dev>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap.h"

#if defined(COMBO_ENABLE)
#include "g/keymap_combo.h" // to make combo def dictionary work
#endif

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, HM_A   , HM_S   , HM_D   , HM_F   , KC_G   ,                      KC_H   , HM_J   , HM_K   , HM_L   , HM_SCLN, KC_QUOT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LTHUMB3, LTHUMB2, LTHUMB1,    RTHUMB1, RTHUMB2, RTHUMB3 \
                                      //`--------------------------'  `--------------------------'

  ),

  [_GAME] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LTHUMG3, LTHUMG2, LTHUMG1,    RTHUMG1, RTHUMG2, RTHUMG3 \
                                      //`--------------------------'  `--------------------------'

  ),

  [_NAV] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX,                      XXXXXXX, KC_PGUP, KC_UP  , KC_PGDN, XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, F5_CTL , F6_ALT , F7_GUI , F8_SFT , KC_SMCL,                      KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END , _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, LY_ADJ , KC_DEL  \
                                      //`--------------------------'  `--------------------------'
    ),

  [_SYM] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_TILD, KC_LCBR, KC_RCBR, KC_PLUS, KC_ASTR,                      KC_EQL , KC_DLR , KC_AMPR, KC_PIPE, XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_GRV , KC_LPRN, KC_RPRN, KC_MINS, KC_SLSH,                      KC_BSLS, KC_DQUO, KC_SCLN, KC_COLN, KC_PERC, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, EURO   , KC_LBRC, KC_RBRC, KC_UNDS, KC_EXLM,                      KC_QUES, KC_QUOT, KC_HASH, KC_AT  , KC_CIRC, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, LY_ADJ , _______,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_7   , KC_8   , KC_9   , XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_ASTR, KC_1   , KC_2   , KC_3   , KC_SLSH, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, KC_0   , KC_DOT  \
                                      //`--------------------------'  `--------------------------'
  ),

  [_ADJUST] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RESET,  RGBRST, XXXXXXX, XXXXXXX, XXXXXXX, LY_GAME,                      XXXXXXX, XXXXXXX, KC_MSTP, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LTHUMB3, LTHUMB2, LTHUMB1,    RTHUMB1, RTHUMB2, RTHUMB3 \
                                      //`--------------------------'  `--------------------------'
  )
};

// TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HM_A:
        case HM_S:
        case HM_D:
        case HM_F:
        case HM_J:
        case HM_K:
        case HM_L:
        case HM_SCLN:
            return true;
        default:
            return false;
    }
}

// Leader key
#if defined(LEADER_ENABLE)
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        /* Copy & Paste, Undo */
        SEQ_ONE_KEY(KC_Z) { SEND_STRING(SS_LGUI("z")); }
        SEQ_ONE_KEY(KC_X) { SEND_STRING(SS_LGUI("x")); }
        SEQ_ONE_KEY(KC_C) { SEND_STRING(SS_LGUI("c")); }
        SEQ_ONE_KEY(KC_V) { SEND_STRING(SS_LGUI("v")); }

        /* 1Password */
        SEQ_ONE_KEY(KC_P) { SEND_STRING(SS_LGUI("\\")); }

        /* Boilerplate text */
        SEQ_TWO_KEYS(KC_M, KC_P) { SEND_STRING("jochen@lillich.co"); }
        SEQ_TWO_KEYS(KC_M, KC_W) { SEND_STRING("jochen@freistil.it"); }

        /* Coding */
        SEQ_ONE_KEY(KC_T) { SEND_STRING(SS_LCTL("`")); }

        /* Emoji */
        SEQ_TWO_KEYS(KC_E, KC_S) { SEND_STRING("🙂"); }
        SEQ_TWO_KEYS(KC_E, KC_G) { SEND_STRING("😁"); }
        SEQ_TWO_KEYS(KC_E, KC_T) { SEND_STRING("🤔"); }
        SEQ_TWO_KEYS(KC_E, KC_W) { SEND_STRING("👋"); }
        SEQ_TWO_KEYS(KC_E, KC_F) { SEND_STRING("🙁"); }
    }
}
#endif
