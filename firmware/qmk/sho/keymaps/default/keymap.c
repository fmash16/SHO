/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
  //,------------------------------------------.                    ,----------------------------------------------.
       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P   ,
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN  ,
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
     LSFT_T(KC_Z),    KC_X,    KC_C,    KC_V,    KC_B,                   KC_N,    KC_M, KC_COMM,  KC_DOT, LSFT_T(KC_SLSH) ,
  //|------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+-|
            KC_LCTL,  LT(MO(4),KC_ESC), KC_SPC,             LT(MO(1),KC_ENT),   LT(MO(2),KC_TAB),  LT(MO(6),KC_BSPC) 
                           //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_WFWD,                     KC_VOLU,  KC_7,    KC_8,    KC_9,   XXXXXXX,    
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_WBAK,                     KC_VOLD,  KC_4,    KC_5,    KC_6,    KC_0,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
        KC_F9,  KC_F10,  KC_F11,  KC_F12,   XXXXXXX,                     XXXXXXX,  KC_1,    KC_2,    KC_3,    KC_0,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                  KC_LGUI, TG(3),  KC_SPC,    KC_ENT,   XXXXXXX, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT(
  //,---------------------------------------------.                    ,--------------------------------------------.
       KC_EXLM,  KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,
  //|---------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
       KC_DEL, KC_TILD, KC_LCBR, KC_RCBR, KC_UNDS,                       KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_QUOT,
  //|---------+--------+--------+--------+--------|                   |--------+--------+--------+--------+--------|
       KC_DEL,  KC_GRV, KC_LBRC, KC_RBRC, LSFT(KC_BSLS),                  KC_UNDS, KC_MINS, KC_PLUS, KC_EQUAL, LSFT(KC_QUOT),
  //|---------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                 KC_LGUI,   MO(3),  KC_SPC,    KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  // Gaming Layer
  [3] = LAYOUT(
  //,------------------------------------------.                    ,----------------------------------------------.
       KC_TAB, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       KC_P, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, 
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, 
  //,--------------------------------------------.                    ,--------------------------------------------.
                    KC_LCTL,  LT(MO(4),KC_ESC), KC_SPC,           LT(MO(1),KC_ENT),   TG(3),  LT(MO(6),KC_BSPC)
                                      //`--------------------------'  `--------------------------'
  ),

  [4] = LAYOUT(
  //,------------------------------------------.                    ,----------------------------------------------.
       LALT(KC_TAB),      LALT(KC_1),    LALT(KC_2),    LALT(KC_3),    LALT(KC_4),    LALT(KC_5),                         LALT(KC_6),    LALT(KC_7),    LALT(KC_8),    LALT(KC_9),
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       LALT(KC_A),    LALT(KC_S),    LALT(KC_D),    LALT(KC_F),    LALT(KC_G),                         LALT(KC_H),    LALT(KC_J),    LALT(KC_K),    LALT(KC_L), LALT(KC_SCLN),
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       LT(MO(5),LALT(KC_LSFT)),    LALT(KC_X),    LALT(KC_C),    LALT(KC_V),    LALT(KC_B),                         LALT(KC_N),    LALT(KC_M), LALT(KC_COMM),  LALT(KC_DOT), LALT(KC_SLSH),
  //|------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+-|
                   KC_LCTL,  _______, KC_SPC,                     LALT(KC_ENT),   LALT(KC_TAB),  KC_ESC 
                           //`--------------------------'  `--------------------------'

  ),

  [5] = LAYOUT(
  //,------------------------------------------.                    ,----------------------------------------------.
       LSFT(LALT(KC_Q)),      LSFT(LALT(KC_1)),    LSFT(LALT(KC_2)),    LSFT(LALT(KC_3)),    LSFT(LALT(KC_4)),    LSFT(LALT(KC_5)),                         LSFT(LALT(KC_6)),    LSFT(LALT(KC_7)),    LSFT(LALT(KC_8)),    LSFT(LALT(KC_9)),
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       LSFT(LALT(KC_A)),    LSFT(LALT(KC_S)),    LSFT(LALT(KC_D)),    LSFT(LALT(KC_F)),    LSFT(LALT(KC_G)),                         LSFT(LALT(KC_H)),    LSFT(LALT(KC_J)),    LSFT(LALT(KC_K)),    LSFT(LALT(KC_L)), LSFT(LALT(KC_SCLN)),
  //|------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+-|
       LSFT(LALT(KC_LSFT)),    LSFT(LALT(KC_X)),    LSFT(LALT(KC_C)),    LSFT(LALT(KC_V)),    LSFT(LALT(KC_B)),                         LSFT(LALT(KC_N)),    LSFT(LALT(KC_M)), LSFT(LALT(KC_COMM)),  LSFT(LALT(KC_DOT)), LSFT(LALT(KC_SLSH)),
  //|------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+-|
                            KC_LCTL,  _______, KC_SPC,      LALT(KC_ENT),   LALT(KC_TAB),  KC_ESC 
                           //`--------------------------'  `--------------------------'

  ),

  [6] = LAYOUT(
  //,--------------------------------------------.                    ,--------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_WH_D, KC_WH_U, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      RGB_HUI, RGB_SAI, RGB_VAI, RGB_MOD, RGB_TOG,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX,
  //|--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------|
      RGB_HUD, RGB_SAD, RGB_VAD, RGB_RMOD, XXXXXXX,                      XXXXXXX, KC_MS_BTN1, KC_MS_BTN2, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, _______ 
                                      //`--------------------------'  `--------------------------'
  ),
};
