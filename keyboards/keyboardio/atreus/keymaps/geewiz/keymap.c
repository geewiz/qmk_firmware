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
  [_DEFAULT] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                    KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                    KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,  KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_LCTL, KC_ESC , LTHUMB3, LTHUMB2, LTHUMB1,  RTHUMB1, RTHUMB2, RTHUMB3, KC_MINS, KC_QUOT, KC_LEAD
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_NAV] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_PGUP, KC_HOME, KC_UP  , KC_END , XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_SMCL,                    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      CTL_Z  , CTL_X  , CTL_C  , CTL_V  , XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, LY_ADJ , KC_DEL , _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_SYM] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, KC_LCBR, KC_RCBR, XXXXXXX, XXXXXXX,                    KC_EQL , KC_7   , KC_8   , KC_9   , KC_GRV ,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      XXXXXXX, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX,                    KC_MINS, KC_4   , KC_5   , KC_6   , KC_0   ,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LBRC, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_DOT , KC_1   , KC_2   , KC_3   , KC_BSLS,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, LY_ADJ , _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                    KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_F11 ,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, KC_F12 ,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      RESET  , _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),
};
// clang-format on

#include "../../../users/geewiz/leader.c"
