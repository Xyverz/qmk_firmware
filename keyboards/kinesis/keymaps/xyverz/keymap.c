// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
 
#include QMK_KEYBOARD_H

#define DVORAK 0 // Base Dvorak
#define GAMING 1 // Gaming Layer for HFW
#define FNLAYER 2 // Function Layer
#define MACLOCK LGUI(LCTL(KC_Q))
#define WINLOCK LGUI(KC_L)


/****************************************************************************************************
*
* Keymap: Default Layer in Dvorak
*
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS |  FN0 |  BOOT  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | ESC    |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | \|     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |  '"  |  ,<  |  .>  |   Y  |   Y  |                           |   F  |   G  |   C  |   R  |   L  | /?     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | GRV    |   A  |   O  |   E  |   U  |   I  |                           |   D  |   H  |   T  |   N  |   S  | -_     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |  ;:  |   Q  |   J  |   K  |   X  |                           |   B  |   M  |   W  |   V  |   Z  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          |  [{  |  ]}  | Left | Right|                                         | Up   | Down |  /?  |  =+  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Ctrl | Alt  |         | Alt  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Gui  |         | Gui  |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | Fn2  |         | Fn2  |      |      |
*                                 `--------------------'         `--------------------'
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DVORAK] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_NO,    QK_BOOT,
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,
    KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                                                                      KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,
    KC_GRV,   KC_A,     KC_O,     KC_E,     KC_U,     KC_I,                                                                      KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,
    KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                                                                      KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,
              KC_LBRC,  KC_RBRC,  KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_SLSH,  KC_EQL,
                                                      KC_LCTL,  KC_LALT,                                               KC_RGUI,  KC_RCTL,
                                                                KC_LGUI,                                               KC_RGUI,
                                            KC_BSPC,  KC_DEL,   MO(2),                                                 MO(2),    KC_ENT,   KC_SPC
  ),

  [GAMING] = LAYOUT(
    KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,         KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_SCRL,  KC_PAUS,  KC_NO,    QK_BOOT,
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                                                      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_BSLS,
    KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                                                                      KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,
    KC_GRV,   KC_A,     KC_O,     KC_E,     KC_U,     KC_I,                                                                      KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,
    KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                                                                      KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,
              KC_LBRC,  KC_RBRC,  KC_LEFT,  KC_RGHT,                                                                                       KC_UP,    KC_DOWN,  KC_SLSH,  KC_EQL,
                                                      KC_LCTL,  KC_LALT,                                               KC_RGUI,  KC_RCTL,
                                                                KC_LGUI,                                               KC_RGUI,
                                            KC_SPC,   KC_DEL,   MO(2),                                                 MO(2),    KC_ENT,   KC_BSPC
  ),

  [FNLAYER] = LAYOUT(
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_F11,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                                                     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F12,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                                   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_CAPS,  KC_TRNS,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,                                                                   TG(1),    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_TRNS,                                                                   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
              KC_TRNS,  KC_TRNS,  KC_HOME,  KC_END,                                                                                        KC_PGUP,  KC_PGDN,  KC_TRNS,  KC_TRNS,
                                                      KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS,
                                                                KC_TRNS,                                               KC_TRNS,
                                            MACLOCK,  KC_TRNS,  KC_TRNS,                                               KC_TRNS,  KC_TRNS,  WINLOCK
  ),

};
