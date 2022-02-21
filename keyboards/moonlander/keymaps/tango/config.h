/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define RETRO_TAPPING
#define USB_SUSPEND_WAKEUP_DELAY 0

#define MOUSEKEY_INTERVAL           20
#define MOUSEKEY_DELAY              0
#define MOUSEKEY_TIME_TO_MAX        60
#define MOUSEKEY_MAX_SPEED          5
#define MOUSEKEY_WHEEL_DELAY        400

#ifdef MIDI_ENABLE
#    define MIDI_ADVANCED
#endif

#ifdef DYNAMIC_MACRO_ENABLE
#    define DYNAMIC_MACRO_SIZE 512
#endif

#define COMBO_VARIABLE_LEN
#define COMBO_TERM 40

#define TAPPING_TERM 160      // The lowest I can go for TD(SPC_PRD)
#define TAPPING_TERM_PER_KEY  // Working on making this work for TD(SPC_PRD)

#define RGB_MATRIX_EFFECT_GRADIENT_LEFT_RIGHT

#define DISABLE_RGB_MATRIX_DIGITAL_RAIN
#define DISABLE_RGB_MATRIX_ALPHAS_MODS
#define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
#define DISABLE_RGB_MATRIX_RAINDROPS

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
