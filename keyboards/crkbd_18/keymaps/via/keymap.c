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

typedef struct
{
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;

enum
{
    CT_CLN,
};
const uint16_t PROGMEM combo_slsh_1[] = {KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_q[] = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM combo_p[]             = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_b[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_n[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_comm[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM combo_comm_2[] = {KC_I, KC_O, COMBO_END};
const uint16_t PROGMEM combo_dot[] = {KC_COMM, KC_Q, COMBO_END};
const uint16_t PROGMEM combo_dot_2[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM combo_slsh_2[] = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_slsh_3[] = {KC_M, KC_B, COMBO_END};

const uint16_t PROGMEM combo_wk_q[] = {KC_D, KC_R, COMBO_END};
const uint16_t PROGMEM combo_wk_v[] = {KC_M, KC_C, COMBO_END};
const uint16_t PROGMEM combo_wk_k[] = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_wk_comm[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM combo_wk_comm_2[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_wk_comm_3[] = {KC_U, KC_P, COMBO_END};
const uint16_t PROGMEM combo_wk_dot[] = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_wk_dot_2[] = {KC_M, KC_K, COMBO_END};
const uint16_t PROGMEM combo_wk_slsh[] = {KC_L, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_wk_slsh_2[] = {KC_L, KC_M, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_q, KC_Q),
    COMBO(combo_b, KC_B),
    COMBO(combo_n, KC_N),
    COMBO(combo_comm, KC_COMM),
    COMBO(combo_comm_2, KC_COMM),
    COMBO(combo_dot, KC_DOT),
    COMBO(combo_dot_2, KC_DOT),
    COMBO(combo_slsh_1, KC_SLSH),
    COMBO(combo_slsh_2, KC_SLSH),
    COMBO(combo_slsh_3, KC_SLSH),
    COMBO(combo_wk_q, KC_Q),
    COMBO(combo_wk_v, KC_V),
    COMBO(combo_wk_k, KC_K),
    COMBO(combo_wk_comm, KC_COMM),
    COMBO(combo_wk_comm_2, KC_COMM),
    COMBO(combo_wk_comm_3, KC_COMM),
    COMBO(combo_wk_dot, KC_DOT),
    COMBO(combo_wk_dot_2, KC_DOT),
    COMBO(combo_wk_slsh, KC_SLSH),
    COMBO(combo_wk_slsh_2, KC_SLSH),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, FN_MO13,  KC_SPC,     KC_ENT, FN_MO23, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    qk_tap_dance_action_t *action;
    switch (keycode)
    {
    case LGUI_T(KC_PERC):
        if (record->tap.count && record->event.pressed)
        {
            tap_code16(KC_PERC); // Send KC_DQUO on tap
            return false;        // Return false to ignore further processing of key
        }
        break;
    case LALT_T(KC_CIRC):
        if (record->tap.count && record->event.pressed)
        {
            tap_code16(KC_CIRC); // Send KC_DQUO on tap
            return false;        // Return false to ignore further processing of key
        }
        break;
    case LSFT_T(KC_AMPR):
        if (record->tap.count && record->event.pressed)
        {
            tap_code16(KC_AMPR);
            return false;
        }
        break;
    case TD(CT_CLN): // list all tap dance keycodes with tap-hold configurations
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished)
        {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
    }
    return true;
}

void tap_dance_tap_hold_finished(qk_tap_dance_state_t *state, void *user_data)
{
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed)
    {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        )
        {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        }
        else
        {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(qk_tap_dance_state_t *state, void *user_data)
{
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held)
    {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold)                                                                                               \
    {                                                                                                                                      \
        .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), \
    }

qk_tap_dance_action_t tap_dance_actions[] = {
    [CT_CLN] = ACTION_TAP_DANCE_TAP_HOLD(KC_COLN, KC_SCLN),
};

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case LT(2, KC_SPC):
        return false;
    case LT(6, KC_TAB):
        return false;
    case LT(6, KC_ENT):
        return false;
    case LT(1, KC_SCLN):
        return false;
    default:
        return true;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case CTL_T(KC_A):
        return 777;
    case GUI_T(KC_S):
        return 777;
    case ALT_T(KC_H):
        return 777;
    case SFT_T(KC_T):
        return 777;

    case CTL_T(KC_I):
        return 777;
    case GUI_T(KC_O):
        return 777;
    case ALT_T(KC_E):
        return 777;
    case SFT_T(KC_N):
        return 777;
    default:
        return TAPPING_TERM;
    }
}

// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record)
// {
//     switch (keycode)
//     {
//     case LT(1, KC_ENT):
//         return true;

//     default:
//         return false;
//     }
// }

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record)
{
    switch (keycode)
    {
    case LT(1, KC_SCLN):
        return true;

    default:
        return false;
    }
}
