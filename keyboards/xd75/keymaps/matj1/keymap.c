/* Copyright 2017 Wunder
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
#include "xd75.h"

// Layer shorthand
#define _QW 0
#define _COL 1
#define _DV 2
#define _FN 3
#define _KBD 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | INSERT | PGUP   | HOME   | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | Q      | W      | E      | R      | T      | DELETE | PGDOWN | END    | Y      | U      | I      | O      | P      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LSHIFT | A      | S      | D      | F      | G      | -      | `      | =      | H      | J      | K      | L      | ;      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | \      | Z      | X      | C      | V      | B      | [      | UP     | ]      | N      | M      | ,      | .      | /      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | APP    | LALT   | FN0    | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | RALT   | FN1    | KEYBD  | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QW] = { /* QWERTY */
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_INS,  KC_PGUP, KC_HOME, KC_6,   KC_7,    KC_8,    KC_9,     KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_DEL,  KC_PGDN, KC_END,  KC_Y,   KC_U,    KC_I,    KC_O,     KC_P,    KC_ENT  },
  { KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_MINS, KC_GRV,  KC_EQL,  KC_H,   KC_J,    KC_K,    KC_L,     KC_SCLN, KC_RSFT },
  { KC_BSLS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_LBRC, KC_UP,   KC_RBRC, KC_N,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_QUOT },
  { KC_LCTL, KC_LGUI, KC_APP,  MO(_FN), KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_RALT, MO(_FN), MO(_KBD), KC_RGUI, KC_RCTL },
 },

/* COLEMAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | INSERT | PGUP   | HOME   | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | Q      | W      | F      | P      | G      | DELETE | PGDOWN | END    | J      | L      | U      | Y      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LSHIFT | A      | R      | S      | T      | D      | -      | `      | =      | H      | N      | E      | I      | O      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | \      | Z      | X      | C      | V      | B      | [      | UP     | ]      | K      | M      | ,      | .      | /      | '      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | APP    | LALT   | _FN    | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | RALT   | _FN    | KEYBD  | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_COL] = { /* COLEMAK */
  { KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,    KC_5,   KC_INS,  KC_PGUP, KC_HOME, KC_6,   KC_7,    KC_8,    KC_9,     KC_0,    KC_BSPC },
  { KC_TAB,  KC_Q,    KC_W,    KC_F,   KC_P,    KC_G,   KC_DEL,  KC_PGDN, KC_END,  KC_J,   KC_L,    KC_U,    KC_Y,     KC_SCLN, KC_ENT  },
  { KC_LSFT, KC_A,    KC_R,    KC_S,   KC_T,    KC_D,   KC_MINS, KC_GRV,  KC_EQL,  KC_H,   KC_N,    KC_E,    KC_I,     KC_O,    KC_RSFT },
  { KC_BSLS, KC_Z,    KC_X,    KC_C,   KC_V,    KC_B,   KC_LBRC, KC_UP,   KC_RBRC, KC_K,   KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_QUOT },
  { KC_LCTL, KC_LGUI, KC_APP, MO(_FN), KC_LALT, KC_SPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_SPC, KC_RALT, MO(_FN), MO(_KBD), KC_RGUI, KC_RCTL },
 },

/* DVORAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | INSERT | PGUP   | HOME   | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | '      | ,      | .      | P      | Y      | DELETE | PGDOWN | END    | F      | G      | C      | R      | L      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LSHIFT | A      | O      | E      | U      | I      | [      | `      | ]      | D      | H      | T      | N      | S      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | \      | ;      | Q      | J      | K      | X      | /      | UP     | =      | B      | M      | W      | V      | Z      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | APP    | LALT   | FN0    | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | RALT   | FN1    | KEYBD  | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_DV] = { /* DVORAK */
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,   KC_INS,  KC_PGUP,  KC_HOME, KC_6,   KC_7,    KC_8,    KC_9,     KC_0,    KC_BSPC },
  { KC_TAB,  KC_QUOT, KC_DOT,  KC_COMM, KC_P,    KC_Y,   KC_DEL,  KC_PGDN,  KC_END,  KC_F,   KC_G,    KC_C,    KC_R,     KC_L,    KC_ENT  },
  { KC_LSFT, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,   KC_LBRC, KC_GRAVE, KC_RBRC, KC_D,   KC_H,    KC_T,    KC_N,     KC_S,    KC_RSFT },
  { KC_BSLS, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,   KC_SLSH, KC_UP,    KC_EQL,  KC_B,   KC_M,    KC_W,    KC_V,     KC_Z,    KC_MINS },
  { KC_LCTL, KC_LGUI, KC_APP,  MO(_FN), KC_LALT, KC_SPC, KC_LEFT, KC_DOWN,  KC_RGHT, KC_SPC, KC_RALT, MO(_FN), MO(_KBD), KC_RGUI, KC_RCTL },
 },

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | INSERT | PGUP   | HOME   | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    |        | PREV   | PLAY   | NEXT   |        | DELETE | PGDOWN | END    |        | 7      | 8      | 9      | -      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LSHIFT |        | VOL-   | MUTE   | VOL+   |        | PRN SC | SCR LK | PAUSE  |        | 4      | 5      | 6      | +      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        | UP     |        | .      | 1      | 2      | 3      | *      | /      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | LGUI   | APP    |        | LALT   |        | LEFT   | DOWN   | RIGHT  | 0      | RALT   |        |        | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_FN] = { /* FUNCTION */
  { KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_INS,  KC_PGUP, KC_HOME, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12  },
  { KC_TAB,  KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_DEL,  KC_PGDN, KC_END,  KC_TRNS, KC_7,    KC_8,    KC_9,    KC_PMNS, KC_ENT  },
  { KC_LSFT, KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_PSCR, KC_SLCK, KC_PAUS, KC_TRNS, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_RSFT },
  { KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, KC_DOT,  KC_1,    KC_2,    KC_3,    KC_PAST, KC_PSLS },
  { KC_LCTL, KC_LGUI, KC_APP,  KC_TRNS, KC_LALT, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_0,    KC_RALT, KC_TRNS, KC_TRNS, KC_RGUI, KC_RCTL },
 },

/* KEYBOARD
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        | RESET  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | _QW    |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        | _DV    |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        | _COL   |        |        |        | BL_INC |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        | BL_TOGG|        | BL_DEC |        | BL_TOGG| BL_BRTG|        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_KBD] = { /* KEYBOARD */
  { KC_NO, KC_NO,   KC_NO, KC_NO,    KC_NO, KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, RESET },
  { KC_NO, TO(_QW), KC_NO, KC_NO,    KC_NO, KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO },
  { KC_NO, KC_NO,   KC_NO, TO(_DV),  KC_NO, KC_NO,   KC_NO, KC_NO,  KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO },
  { KC_NO, KC_NO,   KC_NO, TO(_COL), KC_NO, KC_NO,   KC_NO, BL_INC, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO },
  { KC_NO, KC_NO,   KC_NO, KC_NO,    KC_NO, BL_TOGG, KC_NO, BL_DEC, KC_NO, KC_NO, BL_TOGG, KC_NO, KC_NO, KC_NO, KC_NO },
 }
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
