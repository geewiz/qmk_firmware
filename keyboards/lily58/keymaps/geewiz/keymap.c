#include "keymap.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* DEFAULT
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                  |  6   |  7   |  8   |  9   |  0   | Bspc |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   F  |   P  |   B  |                  |   J  |   L  |   U  |   Y  |   ;  |  -   |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |  CTL |   A  |   R  |   S  |   T  |   G  |------.    ,------|   M  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------| Macro|    | F19  |------+------+------+------+------+------|
 * |  SFT |   Z  |   X  |   C  |   D  |   V  |------|    |------|   K  |   H  |   ,  |   .  |   /  | Lead |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |  Esc | Bspc | /  TAB /      \Enter \  | Spc  | F19  |      |
 *                   |      |  NUM |  NAV |/      /        \      \ | SYM  |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
 [_DEFAULT] = LAYOUT( \
  KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
  KC_LCTL, HM_A   , HM_S   , HM_D   , HM_F   , KC_G   ,                   KC_H   , HM_J   , HM_K   , HM_L   , HM_SCLN, KC_QUOT, \
  OSLSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , MAC1   , KC_F19 , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LEAD, \
                             XXXXXXX, LTHUMB3, LTHUMB2, LTHUMB1, RTHUMB1, RTHUMB2, RTHUMB3, XXXXXXX \
),
/* GAME
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                  |  6   |  7   |  8   |  9   |  0   | Bspc |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   E  |   R  |   T  |                  |  Y   |  U   |  I   |  O   |  P   |  -   |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * | LCTL |   A  |   S  |   D  |   F  |   G  |------.    ,------|  H   |  J   |  K   |  L   |  ;   |  '   |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * | LSFT |   Z  |   X  |   C  |   V  |   B  |------|    |------|  N   |  M   |  ,   |  .   |  /   | Lead |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |  OPT | Bspc | /  Spc /      \Enter \  | Spc  | CMD  |      |
 *                   |      |      |  NAV |/      /        \ NUM  \ | SYM  |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
 [_GAME] = LAYOUT( \
  KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_MINS, \
  KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______, _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_LEAD, \
                             XXXXXXX, LTHUMB3, LTHUMB2, KC_SPC , RTHUMB1, RTHUMB2, RTHUMB3, XXXXXXX \
),
/* Navigation & media
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |      |      |      |      |      |      |                  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      |      | Stop |      |      |                  |      | PgUp |  Up  | PgDn |      | Del  |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      | Prev | Play | Next |      |------.    ,------| Home | Left | Down | Rght | End  | DelW |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * |      |      | Vol- | Mute | Vol+ |      |------|    |------|      | CmdL | AltL | AltR | CmdR |      |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |      | ____ | /      /      \      \  | ADJT | Del  |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_NAV] = LAYOUT( \
  RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, STOP   , XXXXXXX, XXXXXXX,                   XXXXXXX, KC_PGUP, KC_UP  , KC_PGDN, XXXXXXX, KC_DEL , \
  _______, KC_LCTL, PRV_ALT, PLY_GUI, NXT_SFT, XXXXXXX,                   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END , DELWRD , \
  _______, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, CMDLEFT, ALTLEFT, ALTRGHT, CMDRGHT, _______, \
                             _______, _______, _______, _______, _______, LY_ADJ , KC_DEL , _______ \
),
/* Symbols
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |      |      |      |      |      |      |                  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |   ~  |   {  |   }  |   +  |   *  |                  |  =   |  $   |  &   |  |   | BSpc |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |   `  |   (  |   )  |   -  |   /  |------.    ,------|  \   |  "   |  ;   |  :   |  %   |      |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * |      |   €  |   [  |   ]  |   _  |   !  |------|    |------|  ?   |  '   |  #   |  @   |  ^   |      |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |      | ADJT | /      /      \      \  | ____ |      |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_SYM] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_TILD, KC_LCBR, KC_RCBR, KC_PLUS, KC_ASTR,                   KC_EQL , KC_DLR , KC_AMPR, KC_PIPE, KC_BSPC, XXXXXXX, \
  _______, KC_GRV , KC_LPRN, KC_RPRN, KC_MINS, KC_SLSH,                   KC_BSLS, KC_DQUO, KC_SCLN, KC_COLN, KC_PERC, XXXXXXX, \
  _______, EURO   , KC_LBRC, KC_RBRC, KC_UNDS, KC_EXLM, XXXXXXX, XXXXXXX, KC_QUES, KC_QUOT, KC_HASH, KC_AT  , KC_CIRC, _______, \
                             _______, _______, LY_ADJ , _______, _______, _______, _______, _______ \
),
/* NUM - Numbers
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |      |      |      |      |      |      |                  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                  |  /   |  7   |  8   |  9   | BSpc |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      | CTRL |  ALT |  GUI | SHFT |      |------.    ,------|  -   |  4   |  5   |  6   |  +   |      |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * |      |      |      |      |      |      |------|    |------|  *   |  1   |  2   |  3   | Ent  |      |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |      |      | /      /      \      \  |  0   |  .   |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_NUM] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_SLSH, KC_7   , KC_8   , KC_9   , KC_BSPC, _______, \
  _______, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,                   KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ASTR, KC_1   , KC_2   , KC_3   , KC_ENT , _______, \
                             _______, _______, _______, _______, _______, KC_0   , KC_DOT , _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Reset|      |      |      |      |      |                    |      |  F9  | F10  | F11  | F12 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |  F5  |  F6  |  F7  |  F8  |      |
 * |------+------+------+------+------+------|  MacS |    | MacF  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |  F1  |  F2  |  F3  |  F4  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /  Caps /       \Reset \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `-------------------''-------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_F5  , KC_F6  , KC_F7  , KC_F8  , XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RMAC1  , RMACS  , XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , XXXXXXX,\
                             _______, _______, _______, KC_CAPS, RESET  , _______, _______, _______ \
  ),
};

//SSD1306 OLED update loop, make sure to enable OLED_DRIVER_ENABLE=yes in rules.mk
#ifdef OLED_DRIVER_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
}
#endif // OLED_DRIVER_ENABLE

// TAPPING_FORCE_HOLD_PER_KEY
bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HM_A:
        case HM_S:
        case HM_D:
        case HM_F:
        case HM_J:
        case HM_K:
        case HM_L:
        case HM_SCLN:
            return true;
        default:
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_DRIVER_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

// Leader key
#if defined(LEADER_ENABLE)
LEADER_EXTERNS();

void matrix_scan_user(void) {
    LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        /* äöüß */
        SEQ_ONE_KEY(KC_A) { SEND_STRING(SS_LALT("u") "a"); }
        SEQ_ONE_KEY(KC_O) { SEND_STRING(SS_LALT("u") "o"); }
        SEQ_ONE_KEY(KC_U) { SEND_STRING(SS_LALT("u") "u"); }
        SEQ_TWO_KEYS(KC_A, KC_A) { SEND_STRING(SS_LALT("u") "A"); }
        SEQ_TWO_KEYS(KC_O, KC_O) { SEND_STRING(SS_LALT("u") "O"); }
        SEQ_TWO_KEYS(KC_U, KC_U) { SEND_STRING(SS_LALT("u") "U"); }

        /* Copy & Paste, Undo */
        SEQ_ONE_KEY(KC_Z) { SEND_STRING(SS_LGUI("z")); }
        SEQ_ONE_KEY(KC_X) { SEND_STRING(SS_LGUI("x")); }
        SEQ_ONE_KEY(KC_C) { SEND_STRING(SS_LGUI("c")); }
        SEQ_ONE_KEY(KC_V) { SEND_STRING(SS_LGUI("v")); }

        /* 1Password */
        SEQ_ONE_KEY(KC_P) { SEND_STRING(SS_LGUI("\\")); }

        /* Boilerplate text */
        SEQ_TWO_KEYS(KC_M, KC_P) { SEND_STRING("jochen@lillich.co"); }
        SEQ_TWO_KEYS(KC_M, KC_W) { SEND_STRING("jochen@freistil.it"); }

        /* Coding */
        SEQ_ONE_KEY(KC_T) { SEND_STRING(SS_LCTL("`")); }

        /* Emoji */
        SEQ_TWO_KEYS(KC_E, KC_S) { SEND_STRING("🙂"); }
        SEQ_TWO_KEYS(KC_E, KC_G) { SEND_STRING("😁"); }
        SEQ_TWO_KEYS(KC_E, KC_T) { SEND_STRING("🤔"); }
        SEQ_TWO_KEYS(KC_E, KC_W) { SEND_STRING("👋"); }
        SEQ_TWO_KEYS(KC_E, KC_F) { SEND_STRING("🙁"); }

        // Default layer switching
        SEQ_TWO_KEYS(KC_L, KC_D) { default_layer_set(1UL<<_DEFAULT); }
        SEQ_TWO_KEYS(KC_L, KC_G) { default_layer_set(1UL<<_GAME); }
    }
}
#endif
