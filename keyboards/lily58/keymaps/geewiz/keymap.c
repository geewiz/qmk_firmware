#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [_DEFAULT] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_LCTL, DH_A   , DH_S   , DH_D   , DH_F   , KC_G   ,                     KC_H   , DH_J   , DH_K   , DH_L   , DH_SCLN, KC_QUOT, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     OSLSFT , Z_CTL  , KC_X   , KC_C   , KC_V   , KC_B   , KC_GRV ,   KC_BSLS, KC_N   , KC_M   , KC_COMM, KC_DOT , SLS_CTL, ENT_SFT, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, KC_ESC , BSP_LWR, KC_TAB ,       KC_ENT , SPC_RSE, KC_DEL , XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
 [_GAME] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                     KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                     KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______,   _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LEAD, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              XXXXXXX, ESC_ALT, TAB_LWR, KC_SPC ,       KC_ENT , SPC_RSE, KC_DEL , XXXXXXX \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
[_LOWER] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     U_RDO  , U_PST  , U_CPY  , U_CUT  , U_UND  , KC_DEL , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                     KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, U_SMCL , _______, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, CTL_Z  , CTL_X  , CTL_C  , CTL_V  , XXXXXXX, XXXXXXX,   XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END , KC_INS , _______, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, LY_ADJT, KC_RGUI, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
[_RAISE] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSLS, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     _______, KC_EXLM, KC_PLUS, KC_LPRN, KC_RPRN, KC_AT  ,                     KC_PIPE, KC_MINS, KC_EQL , KC_UNDS, KC_ASTR, KC_GRV , \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     _______, KC_CIRC, KC_HASH, KC_LBRC, KC_RBRC, KC_TILD, KC_GRV ,   KC_BSLS, KC_AMPR, KC_LCBR, KC_RCBR, KC_PERC, KC_DLR , _______, \
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, LY_ADJT, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
),
  [_ADJUST] = LAYOUT( \
/* ,-----------------------------------------------------.                   ,-----------------------------------------------------. */
     RESET  , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                     KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , RESET  , \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                     XXXXXXX, KC_F9  , KC_F10 , KC_F11 , KC_F11 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LY_GAME,                     KC_MPRV, KC_MSTP, KC_MPLY, KC_MNXT, KC_F12 , XXXXXXX, \
/* |--------+--------+--------+--------+--------+--------|--------. .--------|--------+--------+--------+--------+--------+--------| */
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RMAC1  ,   RMACS  , XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
/* |--------+--------+--------+--------+--------+--------/-------/   \-------\--------+--------+--------+--------+--------+--------| */
                              _______, _______, _______, _______,       _______, _______, _______, _______ \
/*                          |--------+--------+--------|--------/     \--------|--------+--------+--------|                          */
  ),
};
