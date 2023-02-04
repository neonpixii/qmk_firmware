#include QMK_KEYBOARD_H
#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] =
        {
            {KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_LEFT_ALT},
            {C(KC_X), C(KC_C), C(KC_V)},
            {KC_E, C(KC_Z), TO(1)},
        },
    [1] =
        {
            {C(KC_EQUAL), C(KC_RIGHT_BRACKET), KC_PAGE_UP},
            {C(KC_MINUS), C(KC_LEFT_BRACKET), KC_PAGE_DOWN},
            {C(S(KC_A)), TO(2), TO(0)},
        },
    [2] =
        {
            {KC_KB_VOLUME_DOWN, KC_MEDIA_PLAY_PAUSE, KC_KB_VOLUME_UP},
            {KC_UP, KC_DOWN, KC_KB_MUTE},
            {KC_LEFT, KC_RIGHT, TO(0)},
        },
};

const rgblight_segment_t PROGMEM rgblight_layer0[] = RGBLIGHT_LAYER_SEGMENTS({0, 3, HSV_PINK}, {3, 3, HSV_CYAN}, {6, 1, HSV_GREEN}, {7, 1, HSV_CYAN}, {8, 1, HSV_GREEN});
const rgblight_segment_t PROGMEM rgblight_layer1[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HSV_CYAN}, {1, 1, HSV_YELLOW}, {2, 1, HSV_PURPLE}, {3, 1, HSV_CYAN}, {4, 1, HSV_YELLOW}, {5, 1, HSV_PURPLE}, {6, 1, HSV_GREEN}, {7, 1, HSV_SPRINGGREEN}, {8, 1, HSV_AZURE});
const rgblight_segment_t PROGMEM rgblight_layer2[] = RGBLIGHT_LAYER_SEGMENTS({0, 4, HSV_MAGENTA}, {4, 2, HSV_CYAN}, {6, 1, HSV_GREEN}, {7, 2, HSV_CYAN});
const rgblight_segment_t* const PROGMEM my_rgblight_layers[] = RGBLIGHT_LAYERS_LIST(rgblight_layer0, rgblight_layer1, rgblight_layer2);

void keyboard_post_init_user(void) {
    rgblight_layers = my_rgblight_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    print("i'm a useful part of this desk setup\n");

    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    rgblight_set_layer_state(1, layer_state_cmp(state, 1));
    rgblight_set_layer_state(2, layer_state_cmp(state, 2));
    rgblight_set();

    return state;
}
