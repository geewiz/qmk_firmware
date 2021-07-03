/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define USE_SERIAL_PD2
#define EE_HANDS

#ifdef RGB_MATRIX_ENABLE
#	define RGB_MATRIX_KEYPRESSES
#	define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#ifndef RGB_DISABLE_WHEN_USB_SUSPENDED
#	define RGB_DISABLE_WHEN_USB_SUSPENDED true
#endif
#ifndef SPLIT_KEYBOARD
#	define RGB_DISABLE_TIMEOUT 180000
#endif
#	define RGB_MATRIX_STARTUP_HUE 208
#	define RGB_MATRIX_STARTUP_SAT 135
#	define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_REACTIVE_SIMPLE
//#	define DISABLE_RGB_MATRIX_ALPHAS_MODS
#	define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
#	define DISABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#	define DISABLE_RGB_MATRIX_BREATHING
#	define DISABLE_RGB_MATRIX_BAND_SAT
#	define DISABLE_RGB_MATRIX_BAND_VAL
#	define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
#	define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
#	define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
#	define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
#	define DISABLE_RGB_MATRIX_CYCLE_ALL
#	define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#	define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
#	define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#	define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
#	define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#	define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
#	define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
#	define DISABLE_RGB_MATRIX_DUAL_BEACON
#	define DISABLE_RGB_MATRIX_RAINBOW_BEACON
#	define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
#	define DISABLE_RGB_MATRIX_RAINDROPS
#	define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#	define DISABLE_RGB_MATRIX_HUE_BREATHING
#	define DISABLE_RGB_MATRIX_HUE_PENDULUM
#	define DISABLE_RGB_MATRIX_HUE_WAVE
#	define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
#	define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#	define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
#	define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
#	define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
#	define DISABLE_RGB_MATRIX_SPLASH
#	define DISABLE_RGB_MATRIX_MULTISPLASH
#	define DISABLE_RGB_MATRIX_SOLID_SPLASH
#	define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#	define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
//#	define DISABLE_RGB_MATRIX_CANDY_TAP
#	define DISABLE_RGB_MATRIX_CANDY_SPLASH
//#	define DISABLE_RGB_MATRIX_PIXEL_RAIN
#	define DISABLE_RGB_MATRIX_PIXEL_FLOW
#	define DISABLE_RGB_MATRIX_PIXEL_FRACTAL
#endif

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLIGHT_ANIMATIONS
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef OLED_DRIVER_ENABLE
#define OLED_TIMEOUT 10000
#define OLED_DISABLE_TIMEOUT // Prevent matrix_changed triggering oled_on()
#define OLED_UPDATE_INTERVAL 50
#define OLED_BRIGHTNESS 180
#define OLED_FONT_H "keyboards/crkbd/keymaps/geewiz/oledfont.c"
#endif

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 180
// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT
// Allow holding a key as mod after tapping it
#define TAPPING_FORCE_HOLD_PER_KEY

/* Key combos */
#define COMBO_TERM 50
#define COMBO_VARIABLE_LEN

// Time (in ms) before one shot keys are released
#define ONESHOT_TIMEOUT 5000

// Leader key
#define LEADER_TIMEOUT 350
#define LEADER_PER_KEY_TIMING

#define MEDIA_KEY_DELAY 10
