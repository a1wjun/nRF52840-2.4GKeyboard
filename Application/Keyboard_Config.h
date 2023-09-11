#ifndef KEYBOARD_CONFIG_H
#define KEYBOARD_CONFIG_H

#include "stdint.h"
#include "custom_usbd_hid_kbd.h"

#define KEY_NUMBER 88 /* 按键总数：取8的倍数 */
#define LAYER 2 /* 键盘按键映射层数 */
#define DEBOUNCE_DELAY 200 /* Debounce Time 消抖时间*/

#define Fn_Position 55

uint8_t KEY_TABLE[LAYER][KEY_NUMBER] ={ 
    // Default Layer
    {MODIFIER_LEFT_CTRL, MODIFIER_LEFT_UI, MODIFIER_LEFT_SHIFT, KEYBOARD_CAPS_LOCK,
    KEYBOARD_TAB, KEYBOARD_TILDE, KEYBOARD_ESCAPE, KEYBOARD_1,
    KEYBOARD_Q, KEYBOARD_A, KEYBOARD_Z, MODIFIER_LEFT_ALT,
    KEYBOARD_X, KEYBOARD_S, KEYBOARD_W, KEYBOARD_2,
    KEYBOARD_F1, KEYBOARD_F2, KEYBOARD_3, KEYBOARD_E,
    KEYBOARD_D, KEYBOARD_C, KEYBOARD_V, KEYBOARD_F,
    KEYBOARD_R, KEYBOARD_4, KEYBOARD_F3, KEYBOARD_F4,
    KEYBOARD_5, KEYBOARD_T, KEYBOARD_G, KEYBOARD_B,
    KEYBOARD_SPACEBAR, KEYBOARD_N, KEYBOARD_H, KEYBOARD_Y,
    KEYBOARD_6, KEYBOARD_F5, KEYBOARD_7,KEYBOARD_U,
    KEYBOARD_J, KEYBOARD_M,MODIFIER_RIGHT_ALT, KEYBOARD_COMMA, 
    KEYBOARD_K, KEYBOARD_I, KEYBOARD_8, KEYBOARD_F6,
    KEYBOARD_F7, KEYBOARD_9, KEYBOARD_O, KEYBOARD_L,
    KEYBOARD_PERIOD, MODIFIER_RIGHT_UI, NULL, KEYBOARD_SLASH,
    KEYBOARD_SEMI_COLON, KEYBOARD_P, KEYBOARD_0, KEYBOARD_F8,
    KEYBOARD_F9, KEYBOARD_MINUS, KEYBOARD_OPEN_BRACKET, KEYBOARD_QUOTE,
    KEYBOARD_CLOSE_BRACKET, KEYBOARD_PLUS, KEYBOARD_F10, KEYBOARD_F11,
    KEYBOARD_F12, KEYBOARD_BACKSPACE, KEYBOARD_BACKSLASH, KEYBOARD_ENTER,
    MODIFIER_RIGHT_SHIFT, MODIFIER_RIGHT_CTRL, KEYBOARD_LEFT, KEYBOARD_DOWN,
    KEYBOARD_UP, KEYBOARD_END, KEYBOARD_HOME, KEYBOARD_DELETE,
    KEYBOARD_INSERT, KEYBOARD_PAGEUP, KEYBOARD_PAGEDOWN, KEYBOARD_RIGHT,
    CONSUMER_MUTE
    },
    // Fn layer 1
    {MODIFIER_LEFT_CTRL, MODIFIER_LEFT_UI, MODIFIER_LEFT_SHIFT, KEYBOARD_CAPS_LOCK,
    KEYBOARD_TAB, KEYBOARD_TILDE, KEYBOARD_ESCAPE, KEYBOARD_1,
    KEYBOARD_Q, KEYBOARD_A, KEYBOARD_Z, MODIFIER_LEFT_ALT,
    KEYBOARD_X, KEYBOARD_S, KEYBOARD_W, KEYBOARD_2,
    KEYBOARD_F1, KEYBOARD_F2, KEYBOARD_3, KEYBOARD_E,
    KEYBOARD_D, KEYBOARD_C, KEYBOARD_V, KEYBOARD_F,
    KEYBOARD_R, KEYBOARD_4, KEYBOARD_F3, KEYBOARD_F4,
    KEYBOARD_5, KEYBOARD_T, KEYBOARD_G, KEYBOARD_B,
    KEYBOARD_SPACEBAR, KEYBOARD_N, KEYBOARD_H, KEYBOARD_Y,
    KEYBOARD_6, KEYBOARD_F5, KEYBOARD_7,KEYBOARD_U,
    KEYBOARD_J, KEYBOARD_M,MODIFIER_RIGHT_ALT, KEYBOARD_COMMA, 
    KEYBOARD_K, KEYBOARD_I, KEYBOARD_8, KEYBOARD_F6,
    KEYBOARD_F7, KEYBOARD_9, KEYBOARD_O, KEYBOARD_L,
    KEYBOARD_PERIOD, MODIFIER_RIGHT_UI, NULL, KEYBOARD_SLASH,
    KEYBOARD_SEMI_COLON, KEYBOARD_P, KEYBOARD_0, KEYBOARD_F8,
    KEYBOARD_F9, KEYBOARD_MINUS, KEYBOARD_OPEN_BRACKET, KEYBOARD_QUOTE,
    KEYBOARD_CLOSE_BRACKET, KEYBOARD_PLUS, KEYBOARD_F10, KEYBOARD_F11,
    KEYBOARD_F12, KEYBOARD_BACKSPACE, KEYBOARD_BACKSLASH, KEYBOARD_ENTER,
    MODIFIER_RIGHT_SHIFT, MODIFIER_RIGHT_CTRL, KEYBOARD_LEFT, KEYBOARD_DOWN,
    KEYBOARD_UP, KEYBOARD_END, KEYBOARD_HOME, KEYBOARD_DELETE,
    CONSUMER_PLAY_PAUSE, KEYBOARD_PAGEUP, KEYBOARD_PAGEDOWN, KEYBOARD_RIGHT,
    CONSUMER_MUTE
    }    
    };

//uint8_t KEY_TABLE[LAYER][KEY_NUMBER] ={ 
//     Default Layer
//    {KEYBOARD_1
//    }, 
//     Fn layer 1
//    {KEYBOARD_1
//    }    
//    };

#endif // KEYBOARD_CONFIG_H;;;