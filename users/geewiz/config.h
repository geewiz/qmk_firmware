// Custom config settings for @geewiz
#pragma once

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 200

/* Key combos */
#define COMBO_TERM 50
#define COMBO_VARIABLE_LEN

// Time (in ms) before one shot keys are released
#define ONESHOT_TIMEOUT 5000

// Leader key
#define LEADER_TIMEOUT 500

#define MEDIA_KEY_DELAY 10

#ifdef AUTO_SHIFT_ENABLE
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
#define AUTO_SHIFT_NO_SETUP
#endif
