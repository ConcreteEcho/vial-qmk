// Copyright 2021 Andrzej Kotulski (@akotulski)
// SPDX-License-Identifier: GPL-2.0-or-later
// NEW

#include QMK_KEYBOARD_H

#define RAISE MO(_RAISE)
#define LOWER MO(_LOWER)
#define KC_COPY LCTL(KC_INS)
#define KC_PST LSFT(KC_INS)

enum layer_names {
    _BASE,
    _RAISE,
    _LOWER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base (qwerty)
     * +-----------------------------------------+                             +-----------------------------------------+
     * | ESC  |   q  |   w  |   e  |   r  |   t  |                             |   y  |   u  |   i  |   o  |   p  |   [  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | TAB  |   a  |   s  |   d  |   f  |   g  |                             |   h  |   j  |   k  |   l  |   ;  |   '  |
     * |------+------+------+------+------+------|                             |------+------+------+------+------+------|
     * | SHFT |   z  |   x  |   c  |   v  |   b  |                             |   n  |   m  |   ,  |   .  |   /  |  del |
     * +------+------+------+------+-------------+                             +-------------+------+------+------+------+
     *        |  [   |   ]  |      |LOWER | GUI  |                             |  [   |   X  |  [   |   ]  |   B  |
     *        +------+------+------+------+------+                             +-------------+------+------+------+
     *                             | CTRL |  ALT |                             | shift|  <-  |
     *                             +------+------+                             +------+------+
     *
     */
    [_BASE] = LAYOUT(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NUHS,
                 KC_COPY, KC_PST,  KC_SPC,  LOWER,   KC_LGUI,            KC_DEL,  RAISE,   KC_BSPC, KC_PGUP, KC_PGDN,
                                            KC_LSFT, KC_LALT,            KC_RSFT, KC_ENT
    ),

    [_LOWER] = LAYOUT(
        _______, KC_PSLS, KC_PAST,    KC_9,    KC_8, KC_PPLS,             _______, KC_LPRN, KC_RPRN, KC_RBRC, _______, _______,
        KC_GRV,     KC_3,    KC_2,    KC_1,    KC_0, KC_PMNS,             _______,   KC_UP, KC_DOWN, KC_LEFT, KC_RGHT, _______,
        _______,    KC_7,    KC_6,    KC_5,    KC_4, KC_PENT,             _______, KC_MINS,  KC_EQL, KC_HOME, KC_END, KC_PSCR,
                 _______, _______, _______, _______, _______,             _______, KC_LGUI, _______, _______, _______,
                                            KC_LSFT, _______,             KC_RALT, KC_RSFT
    ),

    [_RAISE] = LAYOUT(
        _______,  KC_F12,  KC_F11,   KC_F9,   KC_F8, KC_VOLU,             KC_MNXT, _______, _______, _______, _______, QK_BOOT,
        _______,   KC_F3,   KC_F2,   KC_F1,  KC_F10, KC_VOLD,             KC_MPRV, _______, _______, _______, _______, _______,
        _______,   KC_F7,   KC_F6,   KC_F5,   KC_F4, KC_MPLY,             _______, _______, _______, _______, _______, _______,
                 _______, _______, _______, _______, _______,             _______, _______, _______, _______, _______,
                                            _______, _______,             _______, _______
    )
};

