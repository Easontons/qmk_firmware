#include QMK_KEYBOARD_H
// #include "eyy44.h"
const uint16_t PROGMEM combo_slsh_1[]            = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_q[]             = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM combo_p[]             = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_b[]             = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_n[]             = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_comm[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM combo_dot[] = {KC_COMM, KC_Q, COMBO_END};
const uint16_t PROGMEM combo_slsh_2[]            = {KC_M, KC_COMM, COMBO_END};

const uint16_t PROGMEM combo_wk_q[] = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM combo_wk_v[]             = {KC_M, KC_C, COMBO_END};
const uint16_t PROGMEM combo_wk_k[]             = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_wk_comm[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM combo_wk_dot[] = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_wk_slsh[]            = {KC_L, KC_COMM, COMBO_END};

combo_t                key_combos[COMBO_COUNT] = {
                   COMBO(combo_q, KC_Q),
                   COMBO(combo_b, KC_B),
                   COMBO(combo_n, KC_N),
                   COMBO(combo_comm, KC_COMM),
                   COMBO(combo_dot, KC_DOT),
                   COMBO(combo_slsh_1, KC_SLSH),
                   COMBO(combo_slsh_2, KC_SLSH),
                   COMBO(combo_wk_q, KC_Q),
                   COMBO(combo_wk_v, KC_V),
                   COMBO(combo_wk_k, KC_K),
                   COMBO(combo_wk_comm, KC_COMM),
                   COMBO(combo_wk_dot, KC_DOT),
                   COMBO(combo_wk_slsh, KC_SLSH),

};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P,
		KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN,
		KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
		KC_LCTL, KC_LALT, KC_SPC, KC_ENT, KC_BSPC, KC_RGUI),
};
