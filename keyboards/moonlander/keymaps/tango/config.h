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

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
