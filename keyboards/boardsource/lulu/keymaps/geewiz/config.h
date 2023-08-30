#ifdef RGB_MATRIX_ENABLE
#  define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_ALPHAS_MODS
#  define RGB_MATRIX_STARTUP_HUE 85
#  define RGB_MATRIX_STARTUP_SAT 135
#  define RGB_MATRIX_STARTUP_VAL 50
#  define RGB_MATRIX_STARTUP_SPD 201

#  define ENABLE_RGB_MATRIX_SOLID_COLOR
#  define ENABLE_RGB_MATRIX_ALPHAS_MODS
#  define ENABLE_RGB_MATRIX_BREATHING
#endif

// Special tapping term values for home row mods
#define TAPPING_TERM_PER_KEY
// Allow holding a key as mod (not tap) after tapping it
#define TAPPING_FORCE_HOLD
// ...except a few special taps
#define TAPPING_FORCE_HOLD_PER_KEY
// Do not favour hold over tap
#undef PERMISSIVE_HOLD
#undef HOLD_ON_OTHER_KEY_PRESS

#define ACHORDION_ENABLE // features/achordion
