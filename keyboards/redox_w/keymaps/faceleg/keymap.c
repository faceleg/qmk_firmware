#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_COPY, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(1), TG(2), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL, KC_PSTE, KC_A, KC_S, KC_D, KC_F, KC_G, KC_LBRC, KC_RBRC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_NO, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LCTL, KC_DEL, KC_TAB, KC_RCTL, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RBRC, LCA(KC_I), KC_GRV, KC_LEFT, KC_RGHT, KC_LGUI, KC_BSPC, KC_LSFT, KC_ENT, KC_SPC, KC_RGUI, KC_DOWN, KC_UP, KC_BSLS, RGUI(KC_SPC)),
	[1] = LAYOUT(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_TRNS, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRNS, KC_TRNS, KC_NO, KC_P7, KC_P8, KC_P9, KC_NO, KC_NO, KC_TRNS, KC_HASH, KC_DLR, KC_LBRC, KC_RBRC, KC_GRV, KC_TRNS, KC_TRNS, KC_NO, KC_P4, KC_P5, KC_P6, KC_NO, KC_NO, KC_TRNS, KC_PERC, KC_CIRC, KC_LPRN, KC_RPRN, KC_TILD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_P1, KC_P2, KC_P3, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0, KC_P0, KC_PDOT, KC_NO, KC_NO),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_ACL0, KC_BTN1, KC_BTN2, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[3] = LAYOUT(KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO)
};

#define fbtch_red_led_off   PORTF |= (1<<5)
#define fbtch_red_led_on    PORTF &= ~(1<<5)

#define fbtch_blu_led_off   PORTF |= (1<<4)
#define fbtch_blu_led_on    PORTF &= ~(1<<4)

#define fbtch_orange_led_off   PORTD |= (1<<4)
#define fbtch_orange_led_on    PORTD &= (1<<4)

#define fbtch_grn_led_on    PORTF &= ~(1<<5)
#define fbtch_grn_led_off    PORTF |= ~(1<<5)

#define fbtch_unknown_pd_on    PORTD &= (1<<7)
#define fbtch_unknown_pf_on    PORTF &= (1<<7)

#define fbtch_set_led_off      fbtch_red_led_off; fbtch_grn_led_off; fbtch_blu_led_off; fbtch_orange_led_off
#define fbtch_set_led_red      fbtch_red_led_on;  fbtch_grn_led_off;  fbtch_blu_led_off; fbtch_orange_led_off
#define fbtch_set_led_blue     fbtch_red_led_off; fbtch_grn_led_off; fbtch_blu_led_on;  fbtch_orange_led_off
#define fbtch_set_led_orange   fbtch_red_led_off; fbtch_grn_led_off; fbtch_blu_led_off; fbtch_orange_led_on
#define fbtch_set_led_yellow   fbtch_red_led_on;  fbtch_grn_led_on;  fbtch_blu_led_off; fbtch_orange_led_on
#define fbtch_set_led_green    fbtch_red_led_off; fbtch_grn_led_on; fbtch_blu_led_off; fbtch_orange_led_off
#define fbtch_set_led_magenta  fbtch_red_led_on;  fbtch_grn_led_off; fbtch_blu_led_on;  fbtch_orange_led_off
#define fbtch_set_led_cyan     fbtch_red_led_off; fbtch_grn_led_on;  fbtch_blu_led_on;  fbtch_orange_led_on
#define fbtch_set_led_white    fbtch_red_led_on;  fbtch_grn_led_on; fbtch_blu_led_on;  fbtch_orange_led_on

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            fbtch_set_led_off;
            break;
        case 1:
            fbtch_set_led_green;
            break;
        case 2:
            fbtch_set_led_blue;
            break;
        case 3:
            fbtch_set_led_red;
            break;
        default:
            break;
    }
  return state;
}
