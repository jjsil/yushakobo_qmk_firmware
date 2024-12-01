// Copyright 2023 yushakobo (@yushakobo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

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

#define RGBLIGHT_DEFAULT_VAL 32

// Enable RBG Light Layers feature
#define RGBLIGHT_LAYERS
// Retain the default brightness value instead of using the layer value
#define RGBLIGHT_LAYERS_RETAIN_VAL