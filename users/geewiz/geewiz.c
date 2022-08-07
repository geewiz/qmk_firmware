#include QMK_KEYBOARD_H
#include <stdbool.h>
#include "geewiz.h"
#include "smart_caps.h"
#include "features/achordion.h"

#ifdef COMBO_ENABLE
#include "g/keymap_combo.h" // to make combo def dictionary work
#endif

#ifdef OLED_ENABLE
uint32_t tap_timer = 0; // Initialize timer for OLED animation
#endif

/***
* Layers
***/

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

/***
* Mod-tap, home row mods
***/

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // allow outer fingers to linger
        case DH_A:
        case DH_S:
        case DH_L:
        case DH_QUOT:
            return TAPPING_TERM + 200;
        default:
            return TAPPING_TERM;
    }
}
#endif

#ifdef TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BSP_NAV:
        case DH_J:
        case DH_K:
        case DH_L:
            return false;
        default:
            return true;
    }
}
#endif

/***
* Main key processing
***/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE // Reset typing timer for OLED animation
  if (record->event.pressed) { tap_timer = timer_read32(); }
#endif

  if (!process_achordion(keycode, record)) { return false; }

  switch (keycode) {
    case U_SMCL:
        if (record->event.pressed) return false;
        toggle_smart_caps();
        return false;
  }

  if (!process_smart_caps(keycode, record)) { return false; }

  return true;
};

/***
* Leader key
***/

#ifdef LEADER_ENABLE
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
