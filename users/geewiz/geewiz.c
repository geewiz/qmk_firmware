#include QMK_KEYBOARD_H
#include <stdbool.h>
#include "geewiz.h"

/* Based on work from @dnaq and @iaap on the splitkb.com Discord. */

static bool smart_caps_enabled = false;

void enable_smart_caps(void) {
    smart_caps_enabled = true;
    tap_code(KC_CAPS);
}

void disable_smart_caps(void) {
    smart_caps_enabled = false;
    tap_code(KC_CAPS);
}

void toggle_smart_caps(void) {
    if (smart_caps_enabled) {
        disable_smart_caps();
    } else {
        enable_smart_caps();
    }
}

bool process_smart_caps(uint16_t keycode, keyrecord_t *record) {
    if (smart_caps_enabled) {
        // first strip off the mod taps and layer taps if needed
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
                if (record->tap.count == 0)
                    return true;
                keycode = keycode & 0xFF;
        }
        switch (keycode) {
            case U_SMCL:
                if (record->event.pressed) {
                    toggle_smart_caps();
                }
                return false;
            // we end caps lock on one of the following keypresses
            case KC_ESC:
            case KC_ENT:
            case KC_TAB:
            case KC_DOT:
            case KC_COMM:
                if (record->event.pressed) {
                    disable_smart_caps();
                }
                return true;
            // Turn space into underscore
            case KC_SPC:
                // _ on space
                if (record->event.pressed) {
                    register_code16(KC_UNDS);
                } else {
                    unregister_code16(KC_UNDS);
                }
                return false;
        }
    }

    return true;
}

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

#ifdef COMBO_ENABLE
#include "g/keymap_combo.h" // to make combo def dictionary work
#endif

#ifdef OLED_ENABLE
uint32_t tap_timer = 0; // Initialize timer for OLED animation
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const bool pressed = record->event.pressed;

#ifdef OLED_ENABLE // Reset typing timer for OLED animation
  if (pressed) { tap_timer = timer_read32(); }
#endif

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
};

#if defined(LEADER_ENABLE)
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        SEQ_ONE_KEY(KC_S)        { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_3) SS_UP(X_LALT)); }
        SEQ_ONE_KEY(KC_A)        { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_8) SS_UP(X_LALT)); }
        SEQ_ONE_KEY(KC_O)        { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_4) SS_TAP(X_KP_6) SS_UP(X_LALT)); }
        SEQ_ONE_KEY(KC_U)        { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_5) SS_TAP(X_KP_2) SS_UP(X_LALT)); }
        SEQ_ONE_KEY(KC_E)        { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_2) SS_TAP(X_KP_8) SS_UP(X_LALT)); }
        SEQ_TWO_KEYS(KC_A, KC_A) { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_1) SS_TAP(X_KP_9) SS_TAP(X_KP_6) SS_UP(X_LALT)); }
        SEQ_TWO_KEYS(KC_O, KC_O) { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_1) SS_TAP(X_KP_4) SS_UP(X_LALT)); }
        SEQ_TWO_KEYS(KC_U, KC_U) { SEND_STRING(SS_DOWN(X_LALT) SS_TAP(X_KP_0) SS_TAP(X_KP_2) SS_TAP(X_KP_2) SS_TAP(X_KP_0) SS_UP(X_LALT)); }

        SEQ_ONE_KEY(KC_F) { SEND_STRING(".f7it.net"); }
    }
}
#endif
