#include "tv44.h"
#include "action_layer.h"
#include "eeconfig.h"

extern keymap_config_t keymap_config;

#define _BL 0
#define _UP 1
#define _DN 2
#define _FN 3
#define _LK 4

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define RAISE LT(_UP, KC_SPC)
#define LOWER LT(_DN, KC_SPC)

#define SFT_ESC SFT_T(KC_ESC) 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = { /* Base Layer */
    { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC },
    { MO(_FN), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT },
    { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SFT_ESC },
    { KC_LCTL, KC_LGUI, KC_LALT, RAISE,   XXXXXXX, XXXXXXX, XXXXXXX, LOWER,   KC_RALT, MO(_FN), XXXXXXX, TG(_LK) }
  },
  [_UP] = { /* Raised Layer */
    { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS },
    { _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_QUOT, KC_EQL },
    { _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, _______ },
    { XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  _______, _______, XXXXXXX, XXXXXXX },
  },
  [_DN] = { /* Lowered Layer */
    { KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS },
    { _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQUO, KC_PLUS },
    { _______, _______, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_PIPE, _______ },
    { XXXXXXX, _______, _______, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX },
  },
  [_FN] = { /* Function Layer */
    { _______, KC_PGUP, KC_UP,   KC_PGDN, _______, _______, _______, _______, KC_INS,  _______, _______, KC_DEL  },
    { _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_HOME, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______ },
    { _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______, _______, _______, _______, _______, _______ },
    { _______, _______, _______, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  _______, _______, XXXXXXX, XXXXXXX },
  },
  [_LK] = { /* Lock Layer */
    { _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   _______, _______, KC_7,    KC_8,    KC_9,    _______, _______ },
    { _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,   _______, _______, KC_4,    KC_5,    KC_6,    _______, _______ },
    { _______, KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, KC_0,    KC_1,    KC_2,    KC_3,    _______, _______ },
    { XXXXXXX, _______, _______, KC_SPC,  XXXXXXX, XXXXXXX, XXXXXXX, KC_0,    KC_DOT,  _______, XXXXXXX, _______ },
  }
};

const uint16_t PROGMEM fn_actions[] = {

};
