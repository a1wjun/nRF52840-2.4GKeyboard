#ifndef WS2812_EFFECT_H
#define WS2812_EFFECT_H

typedef struct
{
    uint8_t red;
    uint8_t greed;
    uint8_t blue;
} colour;

#define RGB_NUMBER 8

#define TOTAL_FRAME 17

uint8_t WS2812_BUFF[RGB_NUMBER * 24];
const size_t WS2812_BUFF_SIZE = sizeof(WS2812_BUFF);
uint8_t unused_buffer[3];

uint8_t led_code1[3] = {0x00, 0x08, 0x00};
uint8_t led_code2[3] = {0x08, 0x00, 0x00};
uint8_t led_code3[3] = {0x00, 0x00, 0x08};
uint8_t led_code4[3] = {0x08, 0x08, 0x08};

colour breath[TOTAL_FRAME][RGB_NUMBER] = {
    {{0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}},
    {{0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}},
    {{0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}},
    {{0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}},
    {{0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}},
    {{0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}},
    {{0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}},
    {{0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}},
    {{0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}, {0x00, 0x00, 0x00}},
    {{0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}, {0x01, 0x01, 0x01}},
    {{0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}, {0x02, 0x02, 0x02}},
    {{0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}, {0x03, 0x03, 0x03}},
    {{0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}, {0x04, 0x04, 0x04}},
    {{0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}, {0x05, 0x05, 0x05}},
    {{0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}, {0x06, 0x06, 0x06}},
    {{0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}, {0x07, 0x07, 0x07}},
    {{0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}, {0x08, 0x08, 0x08}},
};

#endif // WS2812_EFFECT_H