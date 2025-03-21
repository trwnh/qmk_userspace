/* Copyright 2025 a <a@trwnh.com> @trwnh

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

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,          KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
        _______, KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  _______,          RM_TOGG,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_INS,
        _______, RM_HUEU, RM_SATU, RM_VALU, RM_SPDU, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_PAUS,
        _______, RM_HUED, RM_SATD, RM_VALD, RM_SPDD, _______, _______, _______, _______, _______, _______, _______,          _______,          KC_SCRL,
        KC_MSTP,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______, KC_PGUP, KC_APP,
        KC_MPRV, KC_MPLY, KC_MNXT,                            QK_BOOT,                            MO(2), _______, _______, KC_HOME, KC_PGDN, KC_END
    ),

    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          MS_BTN3,
        _______, MS_BTN1, MS_BTN2, MS_BTN3, MS_BTN4, MS_BTN5, MS_BTN6, MS_BTN7, MS_BTN8, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          MS_ACL0,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          MS_BTN1,          MS_ACL1,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          MS_BTN2, MS_UP,   MS_ACL2,
        _______, _______, _______,                            _______,                            _______, _______, _______, MS_LEFT, MS_DOWN, MS_RGHT
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(RM_PREV, RM_NEXT) },
    [2] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

#if defined(RGB_MATRIX_ENABLE)

// RGB led number layout, function of the key

//  0, ESC    6, F1      12, F2      18, F3   23, F4   28, F5      34, F6   39, F7   44, F8      50, F9   56, F10   61, F11    66, F12    69, Prt       Rotary(Mute)
//  1, ~      7, 1       13, 2       19, 3    24, 4    29, 5       35, 6    40, 7    45, 8       51, 9    57, 0     62, -_     78, (=+)   85, BackSpc   72, Home    
//  2, Tab    8, Q       14, W       20. E    25, R    30, T       36, Y    41, U    46, I       52, O    58, P     63, [{     89, ]}     93, \|        75, PgUp    
//  3, Caps   9, A       15, S       21, D    26, F    31, G       37, H    42, J    47, K       53, L    59, ;:    64, '"                96, Enter     86, PgDn    
//  4, Sh_L   10, Z      16, X       22, C    27, V    32, B       38, N    43, M    48, ,<      54, .<   60, /?               90, Sh_R   94, Up        82, End     
//  5, Ct_L   11,Win_L   17, Alt_L                     33, SPACE                     49, Alt_R   55, FN             65, Ct_R   95, Left   97, Down      79, Right   

//  67, led 01   
//  70, led 02   
//  73, led 03   
//  76, led 04   
//  80, led 05   
//  83, led 06   
//  87, led 07
//  91, led 08

//  68, led 11
//  71, led 12
//  74, led 13
//  77, led 14
//  81, led 15
//  84, led 16
//  88, led 17
//  92, led 18

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t i = led_min; i < led_max; i++) {
            if (g_led_config.flags[i] & LED_FLAG_KEYLIGHT) {
                rgb_matrix_set_color(i, 255, 38, 38);
            }
        }
    }
    if (get_highest_layer(layer_state) > 0) {
        uint8_t layer = get_highest_layer(layer_state);

        for (uint8_t row = 0; row < MATRIX_ROWS; ++row) {
            for (uint8_t col = 0; col < MATRIX_COLS; ++col) {
                uint8_t index = g_led_config.matrix_co[row][col];

                if (index >= led_min && index < led_max && index != NO_LED &&
                keymap_key_to_keycode(layer, (keypos_t){col,row}) > KC_TRNS) {
                    rgb_matrix_set_color(index, RGB_GREEN);
                }
            }
        }
    }

    // Left side rainbow
    rgb_matrix_set_color(67, 255,   0,   0);	// Left LED 01
    rgb_matrix_set_color(70, 255, 127,   0);	// Left LED 02
    rgb_matrix_set_color(73, 255, 255,   0);	// Left LED 03
    rgb_matrix_set_color(76,   0, 255,   0);	// Left LED 04
    rgb_matrix_set_color(80,   0,   0, 255);	// Left LED 05
    rgb_matrix_set_color(83,  46,  43,  95);	// Left LED 06
    rgb_matrix_set_color(87, 139,   0, 255);	// Left LED 07
    rgb_matrix_set_color(91, 255, 255, 255);	// Left LED 08

    // Right side rainbow
    rgb_matrix_set_color(68, 255,   0,   0);	// Right LED 11
    rgb_matrix_set_color(71, 255, 127,   0);	// Right LED 12
    rgb_matrix_set_color(74, 255, 255,   0);	// Right LED 13
    rgb_matrix_set_color(77,   0, 255,   0);	// Right LED 14
    rgb_matrix_set_color(81,   0,   0, 255);	// Right LED 15
    rgb_matrix_set_color(84,  46,  43,  95);	// Right LED 16
    rgb_matrix_set_color(88, 139,   0, 255);	// Right LED 17
    rgb_matrix_set_color(92, 255, 255, 255);	// Right LED 18

    return false;
}
#endif