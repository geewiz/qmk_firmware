 /* Copyright 2021 Jochen Lillich
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */

// This is the personal keymap of Jochen Lillich (@geewiz).

#include "keymap.h"

#if defined(COMBO_ENABLE)
#include "g/keymap_combo.h" // to make combo def dictionary work
#endif

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DFLT] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      DH_A   , DH_S   , DH_D   , DH_F   , KC_G   ,                    KC_H   , DH_J   , DH_K   , DH_L   , DH_QUOT,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,  KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_LCTL, KC_ESC , LTHUMB3, LTHUMB2, LTHUMB1,  RTHUMB1, RTHUMB2, RTHUMB3, KC_MINS, KC_QUOT, KC_LEAD
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_NAVI] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    U_RDO  , U_PST  , U_CPY  , U_UND  , XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                    KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL ,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS ,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_NUMB] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_LBRC, KC_7   , KC_8   , KC_9   , KC_RBRC,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_SCLN, KC_4   , KC_5   , KC_6   , KC_EQL ,                    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_GRV , KC_1   , KC_2   , KC_3   , KC_BSLS, KC_GRV ,  KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, KC_DOT , KC_0   , KC_MINS,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_SYMB] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_PLUS,                    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_PIPE, KC_GRV ,  KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, KC_LPRN, KC_RPRN, KC_UNDS,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_FUNC] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SLCK,                    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      RESET  , _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),
};
// clang-format on

#include "../../../users/geewiz/leader.c"
