#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    BASE,  // default layer
    SYMB,  // symbols
    MDIA,  // media keys
};

enum custom_keycodes {
  RESOLVED = ML_SAFE_RANGE,
  AUTOFIL,
  NUMLOCK,
  DALINKY,
};

enum tap_dance_codes {
  EQU_ESC,
  RIG_GUI,
  SPC_PRD,
  UND_PRT,
  ENT_ESC,
  GUI_CTL,
  DANCE_8,
  DANCE_2,
  DANCE_3,
};

#include "g/keymap_combo.h" // Here because it allows custom keycodes in combos.def

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_moonlander(
    TD(EQU_ESC),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TD(UND_PRT),                    AUTOFIL,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(1),                          TG(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DEL,                         RESOLVED,       KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCOLON),TD(DANCE_3),
    KC_LSHIFT,      LCTL_T(KC_Z),   KC_X,           KC_C,           KC_V,           KC_B,                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    LT(1,KC_GRAVE), TO(1),          LALT(KC_LSHIFT),KC_LEFT,        TD(RIG_GUI),        LALT_T(KC_APPLICATION),                     TD(UND_PRT),                    TD(SPC_PRD),    KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    MO(1),
                                                                                 TD(GUI_CTL),KC_BSPACE,KC_LGUI,                     KC_BSPACE,TD(SPC_PRD),KC_SPACE
    ),

    [SYMB] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT,
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_TRANSPARENT,
    KC_TRANSPARENT, TO(2),          RGB_MOD,        KC_TRANSPARENT, KC_TRANSPARENT,                         RGB_MOD,                RGB_TOG,                        KC_TRANSPARENT, KC_DOT,         KC_0,           KC_EQUAL,       KC_TRANSPARENT,
                                                                                  RGB_VAD,RGB_VAI,TOGGLE_LAYER_COLOR,               RGB_SPD,RGB_HUD,RGB_HUI
    ),

    [MDIA] = LAYOUT_moonlander(
    AU_TOG,         CK_DOWN,        CK_UP,          RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, RGB_SPI,        RGB_SPD,        KC_TRANSPARENT, KC_TRANSPARENT, RESET,
    MU_TOG,         KC_AUDIO_VOL_UP,KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_MS_WH_UP,    KC_TRANSPARENT,                 RGB_VAI,        KC_BRIU,        DM_REC1,        DM_REC2,        DM_RSTP,        KC_TRANSPARENT, KC_TRANSPARENT,
    MU_MOD,         KC_AUDIO_VOL_DOWN,KC_MS_LEFT,   KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_DOWN,  KC_TRANSPARENT,                 RGB_VAD,        KC_BRID,        DM_PLY1,        DM_PLY2,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, LCTL(KC_LEFT),  LCTL(KC_RIGHT), LCTL(LGUI(KC_W)), KC_MS_WH_LEFT,  KC_MS_WH_RIGHT,                               KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT,
    RGB_SPD,        TO(3),          RGB_MOD,        KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,                                                        KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    CMB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
    ),
    [3] = LAYOUT_moonlander(
    TD(EQU_ESC),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           DALINKY,                        AUTOFIL,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TG(1),                          TG(1),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DEL,                         RESOLVED,       KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCOLON),TD(DANCE_3),
    KC_LSHIFT,      LCTL_T(KC_Z),   KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    LT(1,KC_GRAVE), TO(4),          LALT(KC_LSHIFT),KC_LEFT,        TD(RIG_GUI),    LALT_T(KC_APPLICATION),                                         TD(UND_PRT),    TD(SPC_PRD),    KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    MO(1),
                                                                    TD(SPC_PRD),    KC_BSPACE,      KC_LGUI,                        KC_BSPACE,      TD(SPC_PRD),    TD(ENT_ESC)
    ),
    [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,        RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    CK_TOGG,        TO(5),          CK_DOWN,        CK_UP,          CK_RST,         KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,        RGB_HUD,        RGB_HUI,        KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    MI_TOG,         MI_C_3,         MI_Cs_3,        MI_Ds_3,        MI_E_3,         MI_Fs_3,        MI_Gs_3,                        MI_As_3,        MI_B_3,         MI_Cs_4,        MI_Ds_4,        MI_E_4,         MI_Fs_4,        MI_Gs_4,
    MI_B_2,         MI_C_3,         MI_D_3,         MI_E_3,         MI_F_3,         MI_G_3,         MI_A_3,                         MI_B_3,         MI_C_4,         MI_D_4,         MI_E_4,         MI_F_4,         MI_G_4,         MI_A_4,
    MI_B_1,         MI_C_2,         MI_D_2,         MI_E_2,         MI_F_2,         MI_G_2,                                                         MI_C_3,         MI_D_3,         MI_E_3,         MI_F_3,         MI_G_3,         MI_A_3,
    CK_TOGG,        TO(0),          CK_DOWN,        CK_UP,          CK_RST,         KC_TRANSPARENT,                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ),
    [6] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,                          KC_6,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_TAB,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                          TG(1),          KC_Y,           KC_U,           KC_UP,          KC_O,           KC_P,           KC_BSPACE,
    KC_LSHIFT,      KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                          RESOLVED,       KC_H,           KC_LEFT,        KC_DOWN,        KC_RIGHT,       LT(2,KC_SCOLON),KC_ENTER,
    KC_LCTL,        KC_LCTL,        KC_Z,           KC_X,           KC_C,           KC_V,                                                          KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    LT(1,KC_GRAVE), TO(0),          LALT(KC_LSHIFT),KC_LEFT,        TD(RIG_GUI),        LALT_T(KC_APPLICATION),                    TD(UND_PRT),                    TD(SPC_PRD),    KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    MO(1),
                                                                                    KC_SPACE,KC_LSHIFT,KC_LGUI,                    KC_BSPACE,KC_LSHIFT,KC_SPACE
    ),


    // [7] = LAYOUT_moonlander(
    //     KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,           KC_RGHT, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    //     KC_DEL,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(SYMB),         TG(SYMB), KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
    //     KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HYPR,           KC_MEH,  KC_H,    KC_J,    KC_K,    KC_L,    LT(MDIA, KC_SCLN), LGUI_T(KC_QUOT),
    //     KC_LSFT, LCTL_T(KC_Z),KC_X,KC_C,    KC_V,    KC_B,                                KC_N,    KC_M,    KC_COMM, KC_DOT,  RCTL_T(KC_SLSH), KC_RSFT,
    // LT(SYMB,KC_GRV),WEBUSB_PAIR,A(KC_LSFT),KC_LEFT, KC_RGHT,  LALT_T(KC_APP),    RCTL_T(KC_ESC),   KC_UP,   KC_DOWN, KC_LBRC, KC_RBRC, MO(SYMB),
    //                                         KC_SPC,  KC_BSPC, KC_LGUI,           KC_LALT,  KC_TAB,  KC_ENT
    // ),
};
// clang-format on

// extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = { // Order is up-to-down, not left-to-right
    [BASE] = { {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {86,250,251}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {86,250,251}, {229,142,255} }, // VAPORWAVE
    // [0] = { {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {141,255,233}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {141,255,233}, {33,255,255}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {141,255,233}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {0,0,142}, {141,255,233}, {33,255,255}, {0,0,142}, {0,0,142} }, // PRACTICAL
    [MDIA] = { {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {86,250,251}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {240,252,253}, {141,252,253}, {141,252,253}, {141,252,253}, {240,252,253}, {141,252,253}, {86,250,251}, {229,142,255} }, // VAPORWAVE (INVERTED)
    [3] = { {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220}, {156,231,220} },
    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {200,200,255}, {200,200,255}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {200,200,255}, {200,200,255}, {200,200,255}, {200,200,255} },
};                                                                                                                                                                                                                                                                                                                               // ^left thumb buttons                         end left thumb^ ^begin right keyboard; starts in reverse order                                                                                                                                                                                                                                                   ^begin right thumb

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (1>0 || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(BASE);
      break;
    case 2:
      set_layer_color(MDIA);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case RESOLVED:
        if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LALT(SS_TAP(X_ENTER))) SS_DELAY(1000) SS_LCTL(SS_LALT(SS_TAP(X_ENTER))) SS_DELAY(1000) SS_TAP(X_DOWN) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_DELAY(1000) SS_TAP(X_ENTER));
        // Set as "Resolved"
        }
        break;
        case AUTOFIL:
        if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LSFT("l")));
        // Autofill
        }
        break;
        case NUMLOCK:
        if (record->event.pressed) {
        register_code(KC_NLCK);
        }
        else {
        unregister_code(KC_NLCK);
        }
        break;
        case DALINKY:
        if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_TAP(X_C)) SS_LCTL(SS_TAP(X_K)) SS_LCTL(SS_TAP(X_V)) SS_TAP(X_TAB) SS_TAP(X_TAB) SS_TAP(X_SPACE) SS_TAP(X_TAB) SS_TAP(X_SPACE));
    // CTRL+C
    // CTRL+K
    // CTRL+V
    // TAB*2
    // SPACE
    // TAB
    // SPACE
        }

        case USER00:
            if (record->event.pressed) {
                SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
            }
            return false;
        case USER01:
            if (record->event.pressed) {
                keyboard_config.led_level ^= 1;
                eeconfig_update_kb(keyboard_config.raw);
                if (keyboard_config.led_level) {
                    layer_state_set_kb(layer_state);
                } else {
                    ML_LED_1(false);
                    ML_LED_2(false);
                    ML_LED_3(false);
                    ML_LED_4(false);
                    ML_LED_5(false);
                    ML_LED_6(false);
                }
            }
            break;
    }
    return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { return TAPPING_TERM; }

static tap dance_state[9];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_equ_esc(qk_tap_dance_state_t *state, void *user_data);
void equ_esc_finished(qk_tap_dance_state_t *state, void *user_data);
void equ_esc_reset(qk_tap_dance_state_t *state, void *user_data);

void on_equ_esc(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void equ_esc_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_EQUAL); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void equ_esc_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_EQUAL); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_rig_gui(qk_tap_dance_state_t *state, void *user_data);
void rig_gui_finished(qk_tap_dance_state_t *state, void *user_data);
void rig_gui_reset(qk_tap_dance_state_t *state, void *user_data);

void on_rig_gui(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void rig_gui_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(KC_LGUI); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void rig_gui_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(KC_LGUI); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[1].step = 0;
}

void on_spc_prd(qk_tap_dance_state_t *state, void *user_data);
void spc_prd_finished(qk_tap_dance_state_t *state, void *user_data);
void spc_prd_reset(qk_tap_dance_state_t *state, void *user_data);

void on_spc_prd(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void spc_prd_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case SINGLE_HOLD: register_code16(KC_UP); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_SPACE); break;  // Double-space period
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void spc_prd_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case SINGLE_HOLD: unregister_code16(KC_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); unregister_code16(KC_SPACE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[4].step = 0;
}
void on_und_prt(qk_tap_dance_state_t *state, void *user_data);
void und_prt_finished(qk_tap_dance_state_t *state, void *user_data);
void und_prt_reset(qk_tap_dance_state_t *state, void *user_data);

void on_und_prt(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void und_prt_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: layer_on(2); break;
        case DOUBLE_TAP: register_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void und_prt_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: layer_off(2); break;
        case DOUBLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[5].step = 0;
}
void on_ent_esc(qk_tap_dance_state_t *state, void *user_data);
void ent_esc_finished(qk_tap_dance_state_t *state, void *user_data);
void ent_esc_reset(qk_tap_dance_state_t *state, void *user_data);

void on_ent_esc(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
        tap_code16(KC_ENTER);
    }
    if(state->count > 3) {
        tap_code16(KC_ENTER);
    }
}

void ent_esc_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_ENTER); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ENTER); register_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ENTER); register_code16(KC_ENTER);
    }
}

void ent_esc_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_ENTER); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ENTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ENTER); break;
    }
    dance_state[6].step = 0;
}
void on_gui_ctl(qk_tap_dance_state_t *state, void *user_data);
void gui_ctl_finished(qk_tap_dance_state_t *state, void *user_data);
void gui_ctl_reset(qk_tap_dance_state_t *state, void *user_data);

void on_gui_ctl(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
        tap_code16(KC_LGUI);
    }
    if(state->count > 3) {
        tap_code16(KC_LGUI);
    }
}

void gui_ctl_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_LGUI); break;
        case SINGLE_HOLD: register_code16(KC_LCTL); break;
        case DOUBLE_TAP: register_code16(KC_LGUI); register_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LGUI); register_code16(KC_LGUI);
    }
}

void gui_ctl_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_LGUI); break;
        case SINGLE_HOLD: unregister_code16(KC_LCTL); break;
        case DOUBLE_TAP: unregister_code16(KC_LGUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LGUI); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[8].step = 0;
}

void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
        tap_code16(KC_SPACE);
    }
    if(state->count > 3) {
        tap_code16(KC_SPACE);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_SPACE); break;
        case DOUBLE_TAP: register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SPACE); register_code16(KC_SPACE);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_SPACE); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SPACE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case DOUBLE_TAP: register_code16(KC_QUOTE); register_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[3].step = 0;
}
qk_tap_dance_action_t tap_dance_actions[] = {
        [EQU_ESC] = ACTION_TAP_DANCE_FN_ADVANCED(on_equ_esc, equ_esc_finished, equ_esc_reset),
        [RIG_GUI] = ACTION_TAP_DANCE_FN_ADVANCED(on_rig_gui, rig_gui_finished, rig_gui_reset),
        [SPC_PRD] = ACTION_TAP_DANCE_FN_ADVANCED(on_spc_prd, spc_prd_finished, spc_prd_reset),
        [UND_PRT] = ACTION_TAP_DANCE_FN_ADVANCED(on_und_prt, und_prt_finished, und_prt_reset),
        [ENT_ESC] = ACTION_TAP_DANCE_FN_ADVANCED(on_ent_esc, ent_esc_finished, ent_esc_reset),
        [GUI_CTL] = ACTION_TAP_DANCE_FN_ADVANCED(on_gui_ctl, gui_ctl_finished, gui_ctl_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),

};
