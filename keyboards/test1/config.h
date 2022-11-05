// Copyright 2022 Ryota Mannari (@Ryota Mannari)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VENDOR_ID    0xFFFF
#define PRODUCT_ID   0xFFFF
#define DEVICE_VER   0x0001
#define MANUFACTURER manse
#define PRODUCT      Test1

#define MATRIX_COLS 15
#define MATRIX_ROWS 5

#define MATRIX_COL_PINS { GP8, GP7, GP6, GP2, GP3, GP4, GP5, GP10, GP15, GP14, GP13, GP12, GP11, GP9, GP21 }
#define MATRIX_ROW_PINS { GP20, GP19, GP18, GP17, GP16 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
