/* Copyright 2021 Katrina (@PepperKats)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

enum layers {
    _LAYERONE,
    _LAYERTWO,
    _LAYERTHREE,
    _LAYERFOUR,
};

#ifdef OLED_ENABLE
#include "oled.c"
#endif

// DaVinci Resolve keycodes
#define DV_RDEL KC_DEL
#define DV_SPLIT C(KC_BSLS)
#define DV_UNDO C(KC_Z)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_LAYERONE] = LAYOUT(
        // Default
        TO(1),              KC_BSPC ,              KC_F10  , KC_F11  , KC_F12  ,    KC_F13 , KC_F14 , KC_F15 ,
        KC_NUM  , KC_PSLS , KC_PAST , KC_PMNS ,    KC_F7   , KC_F8   , KC_F9   ,
        KC_P7   , KC_P8   , KC_P9   , KC_PPLS ,    KC_F4   , KC_F5   , KC_F6   ,
        KC_P4   , KC_P5   , KC_P6   ,              KC_F1   , KC_F2   , KC_F3   ,
        KC_P1   , KC_P2   , KC_P3   , KC_PENT ,              KC_UP   ,
        KC_P0   ,           KC_PDOT ,              KC_LEFT , KC_DOWN , KC_RGHT ,    KC_HOME, KC_MUTE , KC_NO
                                                                                 // Sm left, Sm right, Big
    ),
    [_LAYERTWO] = LAYOUT(
        // Davinci Resolve
        TO(2),              DV_UNDO ,              KC_A    , KC_B    , KC_T    ,    KC_F13 , KC_F14 , KC_F15 ,
        KC_NUM  , KC_PSLS , KC_PAST , DV_RDEL ,    KC_I    , KC_F8   , KC_O    ,
        KC_P7   , KC_P8   , KC_P9   , DV_SPLIT,    KC_LCBR , KC_SLSH , KC_RCBR ,
        KC_P4   , KC_P5   , KC_P6   ,              KC_J    , KC_K    , KC_L    ,
        KC_P1   , KC_P2   , KC_P3   , KC_PENT ,              KC_UP   ,
        KC_P0   ,           KC_PDOT ,              KC_LEFT , KC_DOWN , KC_RGHT ,    KC_HOME, KC_END , KC_NO
    ),
    [_LAYERTHREE] = LAYOUT(
        TO(3),              KC_BSPC ,              KC_F10  , KC_F11  , KC_F13  ,    KC_F13 , KC_F14 , KC_F15 ,
        KC_NUM  , KC_PSLS , KC_PAST , KC_PMNS ,    KC_F7   , KC_F8   , KC_F9   ,
        KC_P7   , KC_P8   , KC_P9   , KC_PPLS ,    KC_F4   , KC_F5   , KC_F6   ,
        KC_P4   , KC_P5   , KC_P6   ,              KC_F1   , KC_F2   , KC_F3   ,
        KC_P1   , KC_P2   , KC_P3   , KC_PENT ,              KC_UP   ,
        KC_P0   ,           KC_PDOT ,              KC_LEFT , KC_DOWN , KC_RGHT ,    KC_HOME, KC_END , KC_NO
    ),
    [_LAYERFOUR] = LAYOUT(
        TO(0),              KC_BSPC ,              RGB_RMOD, RGB_TOG , RGB_MOD ,    KC_F13  , KC_F14  , QK_BOOT,
        KC_NUM  , KC_PSLS , KC_PAST , KC_PMNS ,    KC_F7   , KC_F8   , KC_F9   ,
        KC_P7   , KC_P8   , KC_P9   , KC_PPLS ,    KC_F4   , KC_F5   , KC_F6   ,
        KC_P4   , KC_P5   , KC_P6   ,              KC_F1   , KC_F2   , KC_F3   ,
        KC_P1   , KC_P2   , KC_P3   , KC_PENT ,              KC_UP   ,
        KC_P0   ,           KC_PDOT ,              KC_LEFT , KC_DOWN , KC_RGHT ,    RGB_TOG , KC_END  , KC_NO
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    // Encoder order: small right, small left, big
    // Default
    [_LAYERONE] = {
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU),
        ENCODER_CCW_CW(KC_PGUP, KC_PGDN),
        ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)
    },
    // DaVince Resolve
    [_LAYERTWO] = {
        // Zoom out, zoom in
        ENCODER_CCW_CW(C(KC_MINS), C(KC_EQL)),
        // Clip back, clip forward
        ENCODER_CCW_CW(KC_UP, KC_DOWN),
        // 1 s back, 1 s forward
        ENCODER_CCW_CW(S(KC_LEFT), S(KC_RGHT))
    },
    [_LAYERTHREE] = {
        ENCODER_CCW_CW(KC_PGUP, KC_PGDN),
        ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU)
    },
    [_LAYERFOUR] = {
        ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),
        ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),
        ENCODER_CCW_CW(KC_VOLD, KC_VOLU)
    }
};
#endif
