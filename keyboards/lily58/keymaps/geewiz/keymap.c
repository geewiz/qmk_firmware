#include "keymap.h"
#include "../../../users/geewiz/smart_caps.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_DEFAULT] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     OSLSFT , Z_CTL  , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,   KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , SLS_CTL, ENT_SFT, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              LTHUMB4, LTHUMB3, LTHUMB2, LTHUMB1,       RTHUMB1, RTHUMB2, RTHUMB3, RTHUMB4 \
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
                              LTHUMG4, LTHUMG3, LTHUMG2, LTHUMG1,       RTHUMG1, RTHUMG2, RTHUMG3, RTHUMG4 \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
[_LOWER] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_SMCL ,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_TAB , _______, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, CTL_Z  , CTL_X  , CTL_C  , CTL_V  , XXXXXXX, XXXXXXX,   XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , XXXXXXX, _______, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, LY_ADJ , KC_RGUI, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
[_RAISE] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_EXLM, KC_PLUS, KC_LPRN, KC_RPRN, KC_AT  ,                     KC_PIPE, KC_MINS, KC_EQL , KC_UNDS, KC_ASTR, _______, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_CIRC, KC_HASH, KC_LBRC, KC_RBRC, KC_TILD, KC_GRV ,   KC_BSLS, KC_AMPR, KC_LCBR, KC_RCBR, KC_PERC, KC_DLR , _______, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, LY_ADJ , _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
  [_ADJUST] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , RESET  , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, KC_F9  , KC_F10 , KC_F11 , KC_F11 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LY_GAM ,                     KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_F12 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RMAC1  ,   RMACS  , XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),
};

#ifdef OLED_DRIVER_ENABLE
//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const bool pressed = record->event.pressed;

  if (pressed) {
#ifdef OLED_DRIVER_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }

  switch (keycode) {
    case U_SMCL:
      if (pressed) return false;
      toggle_smart_caps();
      return false;
  }

  if (!process_smart_caps(keycode, record)) {
      return false;
  }

  return true;
}
