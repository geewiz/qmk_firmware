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
      KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      ESC_CTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LEAD,\
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
      KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          LTHUMG3, LTHUMG2, LTHUMG1,    RTHUMG1, RTHUMG2, RTHUMG3 \
                                      //`--------------------------'  `--------------------------'
  ),

  [_LOWER] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_PGUP, KC_HOME, KC_UP  , KC_END , XXXXXXX, KC_DEL ,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LCTL, KC_LGUI, KC_LALT, KC_LSFT, KC_SMCL,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, CTL_Z  , CTL_X  , CTL_C  , CTL_V  , XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, LY_ADJ , _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,                      KC_EQL , KC_7   , KC_8   , KC_9   , KC_0   , _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,                      KC_MINS, KC_4   , KC_5   , KC_6   , KC_GRV , _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX,                      KC_0   , KC_1   , KC_2   , KC_3   , KC_BSLS, _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, LY_ADJ , _______,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_ADJUST] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        RESET, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                      KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 ,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, LY_GAM ,                      KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, XXXXXXX, KC_F12 ,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  )
};

#include "../../../users/geewiz/leader.c"
