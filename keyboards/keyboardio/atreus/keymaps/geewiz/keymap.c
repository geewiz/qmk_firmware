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
      Z_CTL  , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,  KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , SLS_CTL,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_RGUI, KC_LCTL, ESC_GUI, BSP_LWR, KC_TAB ,  KC_ENT , SPC_RSE, DEL_ALT, KC_MINS, KC_QUOT, ENT_SFT
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_LOWER] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    U_RDO  , U_PST  , U_CPY  , U_UND  , XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                    KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL ,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS ,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, KC_RGUI, KC_RALT, _______, _______, _______,  _______, LY_ADJT, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_RAISE] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                    KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_EXLM, KC_PLUS, KC_LPRN, KC_RPRN, KC_AT  ,                    KC_PIPE, KC_MINS, KC_EQL , KC_UNDS, KC_ASTR,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_CIRC, KC_HASH, KC_LBRC, KC_RBRC, KC_TILD, KC_GRV ,  KC_BSLS, KC_AMPR, KC_LCBR, KC_RCBR, KC_PERC, KC_DLR ,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, LY_ADJT, _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_PSCR,                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_F5  , KC_6   , KC_7   , KC_F8  , KC_SLCK,                    XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_PAUS, XXXXXXX,  XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      RESET  , _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),
};
// clang-format on
