#include "keymap.h"
#include "smart_caps.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    const bool pressed = record->event.pressed;

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
