#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0x1209  // You can replace this with your own vendor ID
#define PRODUCT_ID      0x3456  // You can replace this with your own product ID
#define DEVICE_VER      0x0001  // Device version (0x0001 = version 1.0)
#define MANUFACTURER    "Me"  // Replace with your manufacturer's name
#define PRODUCT         "YourProduct"  // Replace with your product's name
#define DESCRIPTION     "QMK keyboard firmware for YourProduct"

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 15

/* Keyboard Matrix Assignments */

#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20 }


/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define TAPPING_TERM 200

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define USB_POLLING_INTERVAL_MS 1
