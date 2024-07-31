#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┐
     * │ Q │   │ E │
     * ├───┼───┼───┤
     * │   │ S │   │
     * ├───┼───┼───┤
     * │ Z │   │ C │
     * └───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_Q,            KC_E,
                 KC_S,   
        KC_Z,            KC_C, 
        TO(1)
    ),
    [1] = LAYOUT_ortho_4x4(
        KC_R,            KC_Y,
                 KC_G,   
        KC_V,            KC_N, 
        KC_NO
    )
};
