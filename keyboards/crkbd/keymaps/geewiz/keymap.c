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

extern uint8_t is_master;

#ifdef OLED_ENABLE
#include "oled.c"
#endif

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined(GEEWIZ_COLEMAK)
  [_DEFAULT] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                      KC_J   , KC_L   , KC_U   , KC_Y   , KC_QUOT, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, DH_A   , DH_R   , DH_S   , DH_T   , KC_G   ,                      KC_M   , DH_N   , DH_E   , DH_I   , DH_O   , XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,                      KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          ESC_MED, BSP_LWR, TAB_MSE ,    ENT_SYM, SPC_RSE, DEL_ADJ \
                                      //`--------------------------'  `--------------------------'
  ),
#else
  [_DEFAULT] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, DH_A   , DH_S   , DH_D   , DH_F   , KC_G   ,                      KC_H   , DH_J   , DH_K   , DH_L   , DH_QUOT, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          ESC_MED, BSP_LWR, TAB_MSE ,    ENT_SYM, SPC_RSE, DEL_ADJ \
                                      //`--------------------------'  `--------------------------'
  ),
#endif

#if defined(GEEWIZ_COLEMAK)
  [_GAME] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC , KC_Q   , KC_W   , KC_F   , KC_P   , KC_B   ,                      KC_J   , KC_L   , KC_U   , KC_Y   , KC_QUOT, KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB , KC_A   , KC_R   , KC_S   , KC_T   , KC_G   ,                      KC_M   , KC_N   , KC_E   , KC_I   , KC_O   , KC_SCLN,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LALT, KC_Z   , KC_X   , KC_C   , KC_D   , KC_V   ,                      KC_K   , KC_H   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT, KC_LCTL, KC_SPC  ,    ENT_SYM, SPC_RSE, DEL_ADJ \
                                      //`--------------------------'  `--------------------------'
  ),
#else
  [_GAME] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                      KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                      KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LALT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                      KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT ,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LSFT, KC_LCTL, KC_SPC ,    ENT_SYM, SPC_RSE, DEL_ADJ \
                                      //`--------------------------'  `--------------------------'
  ),
  #endif

  [_LOWER] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, CHTUPRV,                      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL , _______,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT, CHTUNXT,                      KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , _______,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_RAISE] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SCLN, KC_4   , KC_5   , KC_6   , KC_EQL ,                      XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_DOT , KC_0   , KC_MINS,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYMBOL] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_PLUS,                      XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LPRN, KC_RPRN, KC_UNDS,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  ),

  [_MOUSE] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, KC_ALGR, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, XXXXXXX,    KC_BTN1, KC_BTN3, KC_BTN2 \
                                      //`--------------------------'  `--------------------------'
  ),

  [_MEDIA] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    KC_MSTP, KC_MPLY, KC_MUTE \
                                      //`--------------------------'  `--------------------------'
  ),

  [_ADJUST] = LAYOUT_split_3x6_3( \
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR,                      XXXXXXX, XXXXXXX, LY_GAME, XXXXXXX, RESET  , XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SLCK,                      XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,    _______, _______, _______ \
                                      //`--------------------------'  `--------------------------'
  )
};
