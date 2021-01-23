#include QMK_KEYBOARD_H

// tapping term per key
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_ESC):
      //            return TAPPING_TERM + 1250;
        return 500;
        case LALT_T(KC_TAB):
            return 500;
        default:
            return TAPPING_TERM;
    }
}

enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case LSFT(KC_QUOT):
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING("\"");
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NUBS, KC_SLSH, KC_N, KC_M, KC_COMM, KC_DOT, KC_ENT, KC_ESC, KC_LSFT, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_SPC, MO(2), KC_LCTL, KC_NUHS, KC_QUOT, KC_TAB),
	[1] = LAYOUT(KC_EXLM, KC_AT, LSFT(KC_3), KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_DEL, KC_BSPC, KC_F24, LALT(KC_F3), KC_LCBR, LSFT(KC_LBRC), KC_LPRN, KC_RPRN, LSFT(KC_RBRC), KC_RCBR, KC_NO, KC_AT, LCTL(KC_F12), LALT(KC_X), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, LSFT(KC_NUHS), KC_COMM, KC_DOT, KC_UP, KC_NUHS, KC_NUBS, KC_LSFT, KC_LGUI, MO(3), KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT),
	[2] = LAYOUT(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_F24, LALT(KC_F3), KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_QUOT, LCTL(KC_F12), LALT(KC_X), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NUHS, LSFT(KC_NUHS), KC_COMM, KC_DOT, KC_PGUP, KC_ENT, KC_NO, KC_NO, KC_LGUI, KC_TRNS, MO(3), KC_LCTL, KC_LALT, KC_TRNS, KC_SLSH, KC_HOME, KC_PGDN, KC_END),
	[3] = LAYOUT(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ASTG, KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_MPLY, KC_MPLY, KC_MPRV, KC_MNXT, KC_NO, KC_NO, KC_DEL, C(A(KC_DEL)), KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};


