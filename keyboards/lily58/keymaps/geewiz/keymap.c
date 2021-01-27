#include QMK_KEYBOARD_H

#ifdef PROTOCOL_LUFA
  #include "lufa.h"
  #include "split_util.h"
#endif
#ifdef SSD1306OLED
  #include "ssd1306.h"
#endif

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif

extern uint8_t is_master;

#define _DEFAULT 0
#define _GAME 1
#define _NAV 2
#define _SYM 3
#define _NUM 4
#define _ADJUST 5

// Layers
#define LY_GAM TG(_GAME)
#define LY_NAV MO(_NAV)
#define BSP_NAV LT(_NAV, KC_BSPC)
#define LY_SYM MO(_SYM)
#define SPC_SYM LT(_SYM, KC_SPC)
#define LY_NUM MO(_NUM)
#define ESC_NUM LT(_NUM, KC_ESC)
#define LY_ADJ MO(_ADJUST)

// Mod-tap
#define BSP_GUI LGUI_T(KC_BSPC)
#define DEL_HYP HYPR_T(KC_DEL)
#define ESC_CTL LCTL_T(KC_ESC)
#define E_GUI LGUI_T(KC_E)
#define S_CTL LCTL_T(KC_S)
#define D_SFT LSFT_T(KC_D)
#define F_ALT LALT_T(KC_F)
#define I_GUI LGUI_T(KC_I)
#define L_CTL LCTL_T(KC_L)
#define K_SFT LSFT_T(KC_K)
#define J_ALT LALT_T(KC_J)
#define N4_CTL LCTL_T(KC_4)
#define N5_SFT LSFT_T(KC_5)
#define N6_ALT LALT_T(KC_6)
#define PRV_CTL LCTL_T(KC_MPRV)
#define PLY_SFT LSFT_T(KC_MPLY)
#define NXT_ALT LALT_T(KC_MNXT)
#define STP_GUI LGUI_T(KC_MSTP)

// Abbreviations
#define OSLSFT OSM(MOD_LSFT)
#define OSRSFT OSM(MOD_RSFT)
#define CHATUP A(S(KC_UP))
#define CHATDN A(S(KC_DOWN))
#define EURO A(S(KC_2))
#define CUT LCMD(KC_X)
#define COPY LCMD(KC_C)
#define PASTE LCMD(KC_V)
#define UNDO LCMD(KC_Z)
#define DELWRD A(KC_BSPC)
#define VOLUP KC__VOLUP
#define VOLDN KC__VOLDOWN
#define MUTE KC__MUTE
#define PLAY KC_MPLY
#define STOP KC_MSTP
#define NEXT KC_MNXT
#define PREV KC_MPRV
#define APP1 A(KC_F1)
#define APP2 A(KC_F2)
#define APP3 A(KC_F3)
#define APP4 A(KC_F4)
#define APP5 A(KC_F5)
#define APP6 A(KC_F6)
#define APP7 A(KC_F7)
#define APP8 A(KC_F8)
#define APP9 A(KC_F9)
#define APP10 A(KC_F10)

// Dynamic macros
#define MAC1 DYN_MACRO_PLAY1
#define MAC2 DYN_MACRO_PLAY2
#define RMAC1 DYN_REC_START1
#define RMAC2 DYN_REC_START2
#define RMACS DYN_REC_STOP

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* DEFAULT
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                  |  6   |  7   |  8   |  9   |  0   | Lead |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |TabHYP|   Q  |   W  |   E  |   R  |   T  |                  |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |  CTL |   A  |   S  |   D  |   F  |   G  |------.    ,------|   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------| Macro|    |Macro |------+------+------+------+------+------|
 * |  SFT |   Z  |   X  |   C  |   V  |   B  |------|    |------|   N  |   M  |   ,  |   .  |   /  |Enter |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |  Esc | Bspc | /  Tab /      \Enter \  | Spc  | Del  |      |
 *                   |      |  NUM |  NAV |/      /        \      \ | SYM  | HYPR |      |
 *                   `-------------------''------'          '------''--------------------'
 */
 [_DEFAULT] = LAYOUT( \
  KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_LEAD, \
  KC_TAB , KC_Q   , KC_W   , E_GUI  , KC_R   , KC_T   ,                   KC_Y   , KC_U   , I_GUI  , KC_O   , KC_P   , KC_DEL , \
  ESC_CTL, KC_A   , S_CTL  , D_SFT  , F_ALT  , KC_G   ,                   KC_H   , J_ALT  , K_SFT  , L_CTL  , KC_SCLN, KC_QUOT, \
  OSLSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , MAC1   , MAC1   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT , \
                             XXXXXXX, ESC_NUM, BSP_NAV, KC_TAB , KC_ENT , SPC_SYM, DEL_HYP, XXXXXXX \
),
/* GAME
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |  Esc |   1  |   2  |   3  |   4  |   5  |                  |  6   |  7   |  8   |  9   |  0   | Bspc |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   E  |   R  |   T  |                  |  Y   |  U   |  I   |  O   |  P   | Del  |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * | LCTL |   A  |   S  |   D  |   F  |   G  |------.    ,------|  H   |  J   |  K   |  L   |  ;   |  '   |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * | LSFT |   Z  |   X  |   C  |   V  |   B  |------|    |------|  N   |  M   |  ,   |  .   |  /   | Ent  |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      | LOPT | LGUI | / Space/      \Enter \  | NAV  | DFLT |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
 [_GAME] = LAYOUT( \
  KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_BSPC, \
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_DEL , \
  KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, \
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , _______, _______, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT , \
                             _______, KC_LOPT, KC_LGUI, KC_SPC , KC_ENT , LY_NAV , LY_GAM , _______ \
),
/* Navigation & media
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |      |      |      |      |      |      |                  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      |      | Stop |      |      |                  |      | PgUp |  Up  | PgDn |      | Del  |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      | Prev | Play | Next |      |------.    ,------| Home | Left | Down | Rght | End  | DelW |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * |      |      | Vol- | Mute | Vol+ |      |------|    |------|      |      |      |      |      |      |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |      |   ^^ | /  Esc /      \ Tab  \  | ADJ  |      |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_NAV] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, STP_GUI, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_PGUP, KC_UP  , KC_PGDN, XXXXXXX, KC_DEL , \
  _______, XXXXXXX, PRV_CTL, PLY_SFT, NXT_ALT, XXXXXXX,                   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END , DELWRD , \
  _______, XXXXXXX, KC_VOLU, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
                             _______, _______, _______, KC_ESC , KC_TAB , LY_ADJ , XXXXXXX, _______ \
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
 *                   |      |      |  ADJ | /  Esc /      \      \  |  ^^  |      |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_SYM] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_TILD, KC_LCBR, KC_RCBR, KC_PLUS, KC_ASTR,                   KC_EQL , KC_DLR , KC_AMPR, KC_PIPE, KC_BSPC, XXXXXXX, \
  _______, KC_GRV , KC_LPRN, KC_RPRN, KC_MINS, KC_SLSH,                   KC_BSLS, KC_DQUO, KC_SCLN, KC_COLN, KC_PERC, XXXXXXX, \
  _______, EURO   , KC_LBRC, KC_RBRC, KC_UNDS, KC_EXLM, XXXXXXX, XXXXXXX, KC_QUES, KC_QUOT, KC_HASH, KC_AT  , KC_CIRC, _______, \
                             _______, _______, LY_ADJ , KC_ESC , _______, _______, _______, _______ \
),
/* NUM - Numbers
 * ,-----------------------------------------.                  ,-----------------------------------------.
 * |      |      |      |      |      |      |                  |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      |      |  GUI |      |      |                  |  /   |  7   |  8   |  9   | BSpc |      |
 * |------+------+------+------+------+------|                  |------+------+------+------+------+------|
 * |      |      |  CTL |  SFT |  ALT |      |------.    ,------|  -   |  4   |  5   |  6   |  +   |      |
 * |------+------+------+------+------+------|      |    |      |------+------+------+------+------+------|
 * |      |      |      |      |      |      |------|    |------|  *   |  1   |  2   |  3   | Ent  |      |
 * `-----------------------------------------/      |    \      \-----------------------------------------'
 *                   |      |      |      | /  Esc /      \      \  |  0   |  .   |      |
 *                   |      |      |      |/      /        \      \ |      |      |      |
 *                   `-------------------''------'          '------''--------------------'
 */
[_NUM] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
  _______, XXXXXXX, XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX,                   KC_SLSH, KC_7   , KC_8   , KC_9   , KC_BSPC, _______, \
  _______, XXXXXXX, KC_LCTL, KC_LSFT, KC_LALT, XXXXXXX,                   KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS, _______, \
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ASTR, KC_1   , KC_2   , KC_3   , KC_ENT , _______, \
                             _______, _______, _______, KC_ESC , _______, KC_0   , KC_DOT , _______ \
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Reset |      |      |      |      |      |                    |      |  F9  | F10  | F11  | F12 |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Vol- | Mute | Vol+ |      |      |-------.    ,-------|      |  F5  |  F6  |  F7  |  F8  | Game |
 * |------+------+------+------+------+------|  MacS |    | MacF  |------+------+------+------+------+------|
 * |      | Prev | Play | Next |      |      |-------|    |-------|      |  F1  |  F2  |  F3  |  F4  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \Reset \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `-------------------''-------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  RESET  , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, KC_F9  , KC_F10 , KC_F11 , KC_F12 , XXXXXXX, \
  XXXXXXX, VOLDN  , VOLUP  , MUTE   , XXXXXXX, XXXXXXX,                   XXXXXXX, KC_F5  , KC_F6  , KC_F7  , KC_F8  , LY_GAM , \
  XXXXXXX, PREV   , NEXT   , PLAY   , XXXXXXX, XXXXXXX, RMAC1  , RMACS  , XXXXXXX, KC_F1  , KC_F2  , KC_F3  , KC_F4  , XXXXXXX,\
                             _______, _______, _______, _______, RESET  , _______, _______, _______ \
  ),
};

int RGB_current_mode;

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}

// Combos

const uint16_t PROGMEM combo_dotcom[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_wp[] = {KC_W, KC_P, COMBO_END};
const uint16_t PROGMEM combo_rt[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_ncom[] = {KC_N, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_nu[] = {KC_N, KC_U, COMBO_END};
const uint16_t PROGMEM combo_le[] = {KC_L, KC_E, COMBO_END};
const uint16_t PROGMEM combo_ey[] = {KC_E, KC_Y, COMBO_END};

enum combos {
  COMBO_ENT,
  COMBO_ESC,
  COMBO_TAB,
  COMBO_MINS,
  COMBO_SCLN,
  COMBO_UNDS,
  COMBO_COLN,
};

combo_t key_combos[] = {
  [COMBO_ENT] = COMBO(combo_dotcom, KC_ENT),
  [COMBO_ESC] = COMBO(combo_wp, KC_ESC),
  [COMBO_TAB] = COMBO(combo_rt, KC_TAB),
  [COMBO_MINS] = COMBO(combo_ncom, KC_MINS),
  [COMBO_SCLN] = COMBO(combo_nu, KC_SCLN),
  [COMBO_UNDS] = COMBO(combo_le, KC_UNDS),
  [COMBO_COLN] = COMBO(combo_ey, KC_COLN),
};
int COMBO_LEN = sizeof(key_combos) / sizeof(key_combos[0]);

// Leader key

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
    }
}

// Rotary encoder

void knob_code(uint16_t keycode) {
  uint16_t held_keycode_timer = timer_read();
  register_code(keycode);
  while (timer_elapsed(held_keycode_timer) < MEDIA_KEY_DELAY) {
      // no-op
  }
  unregister_code(keycode);
}

void encoder_update_user(uint8_t index, bool clockwise) {
    switch (biton32(layer_state)) {
        case 4:
        if (clockwise) {
            knob_code(KC_VOLU);
            break;
        } else {
            knob_code(KC_VOLD);
            break;
        }
        case 3:
        if (clockwise) {
            knob_code(KC_PGDN);
            break;
        } else {
            knob_code(KC_PGUP);
            break;
        }
        case 2:
        if (clockwise) {
            knob_code(KC_RIGHT);
            break;
        } else {
            knob_code(KC_LEFT);
            break;
        }
        case 0:
        if (clockwise) {
            knob_code(KC_MS_WH_DOWN);
            break;
        } else {
            knob_code(KC_MS_WH_UP);
            break;
        }
    }
}

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
