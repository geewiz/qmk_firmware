// Custom config settings for @geewiz
#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200
// Special tapping term values for home row mods
#define TAPPING_TERM_PER_KEY
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Allow holding a key as mod (not tap) after tapping it
#define TAPPING_FORCE_HOLD
// ...except a few special taps
#define TAPPING_FORCE_HOLD_PER_KEY
// Rolls are taps
#undef PERMISSIVE_HOLD

/* Key combos */
#define COMBO_TERM 50
#define COMBO_VARIABLE_LEN

// Time (in ms) before one shot keys are released
#define ONESHOT_TIMEOUT 5000

// Leader key
#define LEADER_TIMEOUT 500

// Media keys
#define MEDIA_KEY_DELAY 10

// Mouse keys
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_WHEEL_DELAY 0

// Auto-shift
#ifdef AUTO_SHIFT_ENABLE
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#endif
