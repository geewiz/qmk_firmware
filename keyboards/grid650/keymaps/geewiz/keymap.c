/* Copyright 2020 grid
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

// #define LED_DEBUG

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {
//     QMKBEST = SAFE_RANGE,
//     QMKURL
// };

//keymap for test
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     /* Base */
//     [_BASE] = LAYOUT(
//         KC_1,       KC_2,       MO(_FN),
//         KC_4,       KC_5,       KC_6, 
//         KC_7,       KC_8,       KC_9,
//         KC_A,       KC_B,       KC_C,
//         OUT_USB,    OUT_BT,       KC_F
//     )
//     // [_FN] = LAYOUT(
//     //     QMKBEST, QMKURL,  _______,
//     //         RESET,    XXXXXXX
//     // )
// };



enum my_keycodes {
  FOO = SAFE_RANGE,
  BAR,
  LED_BLE,
  BLE_PWR_OFF,
  BLE_PWR_ON,
  BLE_DFU,
  BREATHING,
  ON,
  RED,
  BLUE,
  ORANGE
};

// USB keymap for user
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSLS, KC_GRV , KC_GRV ,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSPC, KC_PGUP, KC_DEL ,
        KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_BSLS, KC_ENT , KC_PGDN,
        KC_LSFT, KC_NUBS, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT, KC_UP  , MO(_FN),
        KC_LGUI, KC_NO  , KC_LALT, KC_NO  , KC_NO  , KC_SPC , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_RALT, KC_NO  , KC_LEFT, KC_DOWN, KC_RGHT,
        KC_F1  , KC_F2  , KC_F3  , KC_F4
    ),
    [_FN] = LAYOUT(
        RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_F13 , KC_DEL , KC_DEL,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_UP  , _______, _______, KC_HOME, KC_BSPC,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, KC_BTN1, KC_BTN2, _______, _______, _______, _______, KC_LEFT, KC_RGHT, _______, KC_LEAD, KC_END ,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DOWN, KC_LEAD, KC_MS_U, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R,
        _______, _______, _______, _______        
    )
};

//uint8_t white_led = 1;
uint8_t orange_led = 1;
uint8_t red_led = 1;
uint8_t ble_led = 1;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BLE_PWR_OFF:
            if (record->event.pressed) {
                //BLE_PWR(PD5) LOW
                PORTD &= ~(1<<5);

                //BLE_OE(PD2) HIGH
                PORTD |= (1<<2);

                //DFU_MCU(PC6) HIGH
                // PORTC |= 1 << 6;   //set high
            } else {
                // Do something else when release
            }
            return true;      

        case BLE_PWR_ON:
            if (record->event.pressed) {
                
                //BLE_PWR(PD5) HIGH
                // PORTD &= ~(1<<5);
                PORTD |= (1<<5);

                //BLE_OE(PD2) LOW
                // PORTD |= (1<<2);
                PORTD &= ~(1<<2);

                //DFU_MCU(PC6) HIGH
                // PORTC |= 1 << 6;   //set high
                    
            } else {
                // Do something else when release
            }
            return true;         

        case BLE_DFU:
            if (record->event.pressed) {
                //DFU_MCU(PC6) HIGH
                PORTC |= 1 << 6;   //set high
                  
            } else {
                // Do something else when release
                //DFU_MCU(PC6) LOW
                PORTC &= ~(1 << 6);   //set high
            }
            return true; 
        default:
            return true; // Process all other keycodes normally
    }
}

#include "../../../users/geewiz/leader.c"
