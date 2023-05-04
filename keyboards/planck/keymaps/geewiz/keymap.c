#include QMK_KEYBOARD_H
#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_DEFAULT] = LAYOUT_planck_grid(
  KC_Q   , KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
  DH_A   , DH_S,    DH_D,    DH_F,    KC_G,    _______, _______, KC_H   , DH_J   , DH_K   , DH_L   , DH_QUOT,
  KC_Z   , KC_X   , KC_C,    KC_V,    KC_B,    _______, _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
  KC_MUTE, XXXXXXX, ESC_MED, BSP_NAV, KC_NO  , TAB_MSE, KC_NO  , ENT_ADJ, SPC_SYM, DEL_NUM, XXXXXXX, XXXXXXX
),

[_NAVI] = LAYOUT_planck_grid(
  _______, _______, _______, _______, _______, _______, _______, U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  ,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL ,
  KC_RGUI, KC_RALT, KC_RCTL, KC_RSFT, XXXXXXX, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS ,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , _______, _______, _______, _______, _______
),

[_SYMBOL] = LAYOUT_planck_grid(
  KC_GRV , KC_AMPR, KC_ASTR, KC_MINS, XXXXXXX, _______, _______, XXXXXXX, KC_UNDS, KC_LABK, KC_RABK, KC_TILD,
  KC_COLN, KC_DLR , KC_PERC, KC_CIRC, KC_EQL , _______, _______, KC_PLUS, KC_LPRN, KC_LBRC, KC_LCBR, KC_SCLN,
  KC_PIPE, KC_EXLM, KC_AT  , KC_HASH, XXXXXXX, _______, _______, XXXXXXX, KC_RPRN, KC_RBRC, KC_RCBR, KC_BSLS,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , _______, _______, _______, _______, _______
),

[_NUMBER] = LAYOUT_planck_grid(
  KC_SLSH, KC_7   , KC_8   , KC_9   , KC_ASTR, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_0   , KC_4   , KC_5   , KC_6   , KC_MINS, _______, _______, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_DOT , KC_1   , KC_2   , KC_3   , KC_PLUS, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, KC_DOT , KC_0   , KC_NO  , _______, KC_NO  , _______, _______, _______, _______, _______
),

[_MOUSE] = LAYOUT_planck_grid(
  RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  ,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, XXXXXXX,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , KC_BTN1, KC_BTN3, KC_BTN2, _______, _______
),

[_MEDIA] = LAYOUT_planck_grid(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI,
  KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX, _______, _______, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______, _______, _______, _______, KC_NO  , _______, KC_NO  , KC_MSTP, KC_MPLY, KC_MUTE, _______, _______
),

[_ADJUST] = LAYOUT_planck_grid(
  KC_F12 , KC_F7  , KC_F8  , KC_F9  , KC_PSCR, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET  ,
  KC_F11 , KC_F4  , KC_F5  , KC_F6  , KC_SCRL, _______, _______, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
  KC_F10 , KC_F1  , KC_F2  , KC_F3  , KC_PAUS, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_MUTE, RESET  , _______, KC_BSPC, KC_NO  , KC_TAB , KC_NO  , _______, _______, _______, RESET  , _______
),
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  switch (get_highest_layer(layer_state)) {
    case _NUMBER:
      clockwise ? tap_code16(C(KC_TAB)) : tap_code16(S(C(KC_TAB)));
      break;
    case _ADJUST:
      clockwise ? tap_code(KC_VOLU) : tap_code(KC_VOLD);
      break;
    default:
      clockwise ? tap_code(KC_WH_D) : tap_code(KC_WH_U);
      break;
  }
  return false;
}
#endif

// Exceptions for the opposite hands rule
bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Allow same-hand holds for thumb keys
  if (tap_hold_record->event.key.row >= 3) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
  switch (tap_hold_keycode) {
    // For the encoder layers, we need standard QMK hold behaviour
    case DEL_NUM:
    case ENT_ADJ:
      return 0;
  }

  return 800;  // Otherwise use a reasonable timeout
}
