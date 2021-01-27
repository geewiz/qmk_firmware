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
      HM_A   , HM_S   , HM_D   , HM_F   , KC_G   ,                    KC_H   , HM_J   , HM_K   , HM_L   , HM_SCLN,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,  KC_F19 , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      OSLSFT , KC_LCTL, KC_ESC , LTHUMB3, LTHUMB2, LTHUMB1,  RTHUMB1, RTHUMB2, RTHUMB3, KC_MINS, KC_QUOT, KC_LEAD
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_NAV] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX,                    XXXXXXX, KC_PGUP, KC_UP  , KC_PGDN, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      F5_CTL , F6_ALT , F7_GUI , F8_SFT , KC_SMCL,                    KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END ,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      KC_F1  , KC_F2  , KC_F3  , KC_F4  , XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, CMDLEFT, ALTLEFT, ALTRGHT, CMDRGHT,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, LY_ADJ , KC_DEL , _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_SYM] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      KC_TILD, KC_LCBR, KC_RCBR, KC_PLUS, KC_ASTR,                    KC_EQL , KC_DLR , KC_AMPR, KC_PIPE, KC_BSPC,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_GRV , KC_LPRN, KC_RPRN, KC_MINS, KC_SLSH,                    KC_BSLS, KC_DQUO, KC_SCLN, KC_COLN, KC_PERC,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      EURO   , KC_LBRC, KC_RBRC, KC_UNDS, KC_EXLM, XXXXXXX,  XXXXXXX, KC_QUES, KC_QUOT, KC_HASH, KC_AT  , KC_CIRC,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, LY_ADJ , _______,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_NUM] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_SLSH, KC_7   , KC_8   , KC_9   , KC_BSPC,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, KC_ASTR, KC_1   , KC_2   , KC_3   , KC_ENT ,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,  _______, _______, KC_0   , KC_DOT , _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),

  [_ADJUST] = LAYOUT(
	//,--------------------------------------------.                  ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                    XXXXXXX, XXXXXXX, KC_MSTP, XXXXXXX, XXXXXXX,
	//|--------+--------+--------+--------+--------|                  |--------+--------+--------+--------+--------|
      KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,                    XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------.,--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,
	//|--------+--------+--------+--------+--------+--------||--------+--------+--------+--------+--------+--------|
      RESET  , _______, _______, _______, _______, KC_SMCL,  _______, _______, _______, _______, _______, _______
	//`-----------------------------------------------------'`-----------------------------------------------------'
  ),
};
// clang-format on

// TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HM_A:
        case HM_S:
        case HM_D:
        case HM_F:
        case HM_J:
        case HM_K:
        case HM_L:
        case HM_SCLN:
            return TAPPING_TERM_HOMEROW;
        default:
            return TAPPING_TERM;
    }
}

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
