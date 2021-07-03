#include "keymap.h"
#include "smart_caps.h"

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

#ifdef OLED_DRIVER_ENABLE
uint32_t tap_timer = 0; // Initialize timer for OLED animation
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  const bool pressed = record->event.pressed;

#ifdef OLED_DRIVER_ENABLE // Reset typing timer for OLED animation
	if (record->event.pressed) { tap_timer = timer_read32(); }
#endif

  switch (keycode) {
    case KC_SMCL:
        if (pressed) return false;
        toggle_smart_caps();
        return false;
  }

  if (!process_smart_caps(keycode, record)) {
      return false;
  }

  return true;
};
