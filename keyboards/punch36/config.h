#pragma once
// #ifndef CONFIG_H
// #define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0xFEED
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER eyy
#define PRODUCT eyy keyboard

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS \
    { F4, F5, F6, F7 }
// A3 A2 A1 A0
#define MATRIX_COL_PINS \
    { D4, C6, D7, E6, B4 }
// D4 D5 D6 D7 D8 D9

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D2

#define USE_SERIAL
#define COMBO_COUNT 13
/* Set 0 if debouncing isn't needed */

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define RETRO_TAPPING


#define DYNAMIC_KEYMAP_LAYER_COUNT 8


// #endif
