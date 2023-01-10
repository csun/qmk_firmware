#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define DEBOUNCE 5

//#define SPLIT_USB_DETECT

#define MATRIX_ROWS 5 // Double for split
#define MATRIX_COLS 9

// Change this to how you wired your keyboard
// COLS: Left to right, ROWS: Top to bottom
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, B4, E6, B6, B2 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

#endif
