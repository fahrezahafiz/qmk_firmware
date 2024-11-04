/* 
                                             ▀▀▀▀▀     ▀▀▀▀▀          ▀▀█▀▀
                                             ▄▀▀▀▄  ▄  ▄▀▀▀▄  ▄  ▄▀▀▀▄  █  ▄▀▀▀▄
                                             █   █  █  █   █  █  █   █  █  █   █
                                              ▀▀▀   █   ▀▀▀   █   ▀▀▀   ▀   ▀▀▀
                                                    █      ▄▄▄█▄▄▄    █   █  
                                                    ▀      █  █  █     █▄█
                                                  ▀▀▀▀▀    █  █  █      ▀   
                                                           ▀  ▀  ▀  F A H R E Z A H A F I Z  
                                                                                                                                  
▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
*/

#include QMK_KEYBOARD_H

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ D E F I N I T I O N S                                                                                                  │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   l a y e r s                       │
// └─────────────────────────────────────────────────┘ 

enum totem_layers {
    _QWERTY,
    _MEDIA,
    _NAV,
    _MOUSE,
    _SYMBOL,
    _NUMBER,
    _FUNC
};

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                   │
// └─────────────────────────────────────────────────┘

enum custom_keycodes {
    COLEMAK = SAFE_RANGE,
    QWERTY,
    OS_SWAP,
    MAKE_H,
    SNAP
};

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   m a c r o n a m e s               │
// └─────────────────────────────────────────────────┘

// LEFT HAND HOME ROW MODS QWERTY ├──────────────────┐

#define GUI_A GUI_T(KC_A)
#define ALT_S ALT_T(KC_S)
#define CTL_D CTL_T(KC_D)
#define SHT_F SFT_T(KC_F)

// RIGHT HAND HOME ROW MODS QWERTY ├─────────────────┐

#define SHT_J SFT_T(KC_J)
#define CTL_K CTL_T(KC_K)
#define ALT_L ALT_T(KC_L)
#define GUI_S GUI_T(KC_SCLN)

// CLUTCHES

#define MED LT(_MEDIA, KC_ESC)
#define NAV LT(_NAV, KC_TAB)
#define MOU LT(_MOUSE, KC_ENT)
#define SYM LT(_SYMBOL, KC_SPC)
#define NUM LT(_NUMBER, KC_BSPC)
#define FUN LT(_FUNC, KC_DEL)


// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                          │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /*
   ┌─────────────────────────────────────────────────┐
   │ q w e r t y                                     │      ╭╮╭╮╭╮╭╮
   └─────────────────────────────────────────────────┘      │╰╯╰╯╰╯│
             ┌─────────┬─────────┬─────────┬─────────┬──────╨──┐┌──╨──────┬─────────┬─────────┬─────────┬─────────┐
     ╌┄┈┈───═╡    Q    │    W    │    E    │    R    │    T    ││    Y    │    U    │    I    │    O    │    P    │   
             ├─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┤
             │    A    │    S    │    D    │    F    │    G    ││    H    │    J    │    K    │    L    │    ;    │    
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │   CW    │    Z    │    X    │    C    │    V    │    B    ││    N    │    M    │    ,    │    .    │    /    │    '    │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │  CTRL   │  LOWER  │  SPACE  ││  ENTER  │  RAISE  │  BSPC   │  
                                 └─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┘*/ 

    [_QWERTY] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  
              GUI_A,    ALT_S,    CTL_D,    SHT_F,    KC_G,      KC_H,     SHT_J,    CTL_K,    ALT_L,    GUI_S,    
    CW_TOGG,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,      KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_QUOT,
                                  MED,      NAV,      MOU,       SYM,      NUM,      FUN
    ),

    [_MEDIA] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  
              KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,     KC_NO,    KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MNXT,    
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
                                  KC_NO,    KC_NO,    KC_NO,     KC_MPLY,  KC_MSTP,  KC_MUTE
    ),

    [_NAV] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_PGUP,  KC_HOME,  KC_UP,    KC_DOWN,  KC_UNDO,  
              KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,     KC_PGDN,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_NO,    
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     CW_TOGG,  KC_CUT,   KC_COPY,  KC_PSTE,  KC_INS,   KC_NO,
                                  KC_NO,    KC_NO,    KC_NO,     KC_ENT,   KC_BSPC,  KC_DEL
    ),

    [_MOUSE] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_WH_U,  KC_MS_U,  KC_WH_D,  KC_NO,  
              KC_LGUI,  KC_LALT,  KC_LCTL,  KC_LSFT,  KC_NO,     KC_NO,    KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,    
    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_WH_L,  KC_NO,    KC_WH_R,  KC_NO,    KC_NO,
                                  KC_NO,    KC_NO,    KC_NO,     KC_BTN1,  KC_BTN2,  KC_BTN3
    ),

    [_SYMBOL] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_LCBR,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RCBR,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  
              KC_DQUO,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,   KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,    
    KC_NO,    KC_TILD,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                  KC_LPRN,  KC_RPRN,  KC_UNDS,   KC_NO,    KC_NO,    KC_NO
    ),

    [_NUMBER] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_LBRC,  KC_7,     KC_8,     KC_9,     KC_RBRC,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  
              KC_QUOT,  KC_4,     KC_5,     KC_6,     KC_EQL,    KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,    
    KC_NO,    KC_GRV,   KC_1,     KC_2,     KC_3,     KC_BSLS,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                  KC_NO,    KC_0,     KC_MINS,   KC_NO,    KC_NO,    KC_NO
    ),

    [_FUNC] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_F12,   KC_F7,    KC_F8,    KC_F9,    KC_PSCR,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  
              KC_F11,   KC_F4,    KC_F5,    KC_F6,    KC_SCRL,   KC_NO,    KC_LSFT,  KC_LCTL,  KC_LALT,  KC_LGUI,    
    KC_NO,    KC_F10,   KC_F1,    KC_F2,    KC_F3,    KC_PAUS,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
                                  KC_NO,    KC_NO,    KC_NO,     KC_NO,    KC_NO,    KC_NO
    )

/*
   ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

   ┌─────────────────────────────────────────────────┐
   │ t e m p l a t e                                 │      ╭╮╭╮╭╮╭╮
   └─────────────────────────────────────────────────┘      │╰╯╰╯╰╯│
             ┌─────────┬─────────┬─────────┬─────────┬──────╨──┐┌──╨──────┬─────────┬─────────┬─────────┬─────────┐
     ╌┄┈┈───═╡         │         │         │         │         ││         │         │         │         │         │   
             ├─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┤
             │         │         │         │         │         ││         │         │         │         │         │    
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │         │         │         │         │         │         ││         │         │         │         │         │         │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │         │         │         ││         │         │         │  
                                 └─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┘ 

   [_TEMPLATE] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,  
              _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______,
    _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,   _______, _______,
                                  _______,  _______,   _______,  _______,  _______,  _______,
 ),
*/
};

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
        case KC_MINS:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_1 ... KC_0:
        case KC_BSPC:
        case KC_DEL:
        case KC_UNDS:
            return true;

        default:
            return false;  // Deactivate Caps Word.
    }
}

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ M A C R O S                                                                                                            │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        case OS_SWAP: 
            if (record->event.pressed) {
                if (!keymap_config.swap_lctl_lgui) {
                  keymap_config.swap_lctl_lgui = true;  // ─── MAC
                }
                else {
                  keymap_config.swap_lctl_lgui = false; // ─── WIN
                }
            eeconfig_update_keymap(keymap_config.raw);
            clear_keyboard();  // ──── clear to prevent stuck keys    
            return false;
          }

// ┌─────────────────────────────────────────────────┐
// │ q m k                                           │
// └─────────────────────────────────────────────────┘

        case MAKE_H:
          if (record->event.pressed) {
            SEND_STRING ("qmk compile -kb geigeigeist/totem -km fahrezahafiz");
            tap_code(KC_ENTER); 
          } 
          break;

// ┌─────────────────────────────────────────────────┐
// │ p r o d u c t i v i t y                         │
// └─────────────────────────────────────────────────┘

      case SNAP:
          if (record->event.pressed) {
            if (keymap_config.swap_lctl_lgui) {
              SEND_STRING(SS_LSFT(SS_LCMD(SS_LCTL("4"))));  //MAC           
            } else {
              SEND_STRING(SS_LSFT(SS_LWIN("S")));           //WIN
            }
          }
          break;
    }
    return true;
}
/*
  ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸


                                                          ██████
                                                            ██  ▄▄▄▄
                                                            ██ ██▀▀██
                                                            ▀▀ ██▄▄██
                                                        ██████  ▀▀▀▀
                                                          ██ ▄▄▄▄▄▄
                                                          ██ ██▀▀▀▀
                                                          ██ ██████
                                                             ██▄▄▄▄
                                                             ▀▀▀▀▀▀
                                                           ████████
                                                           ██ ██ ██
                                                           ██ ██ ██
                                                           ▀▀ ▀▀ ▀▀
                                                          ████████

*/



