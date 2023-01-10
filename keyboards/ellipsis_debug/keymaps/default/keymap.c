#include QMK_KEYBOARD_H
#include <print.h>

enum layers {
	_WIN = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_WIN] = LAYOUT_all(
        KC_GRV,  KC_7,    KC_8,        KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
	    KC_ESC, KC_Y,    KC_U,        KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
		KC_HOME, KC_H,    KC_J,        KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  KC_PGUP,
		KC_DEL, KC_N,   KC_M,        KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
		KC_ENT, KC_SPC, KC_BSPC,  KC_TRNS, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT)
};
