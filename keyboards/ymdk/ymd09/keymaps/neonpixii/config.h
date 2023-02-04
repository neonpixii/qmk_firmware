#pragma once

// change the maximum brightness to 96 (out of 255)
#undef RGBLIGHT_LIMIT_VAL
#define RGBLIGHT_LIMIT_VAL 96

// enable lighting layers
#define RGBLIGHT_LAYERS

// disable all the built-in effects we're not going to use. i am never not sizecoding
#undef RGBLIGHT_EFFECT_BREATHING
#undef RGBLIGHT_EFFECT_RAINBOW_MOOD
#undef RGBLIGHT_EFFECT_RAINBOW_SWIRL
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE
