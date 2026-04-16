#include "esp_err.h"
#include "led_strip.h"
#include <stdint.h>

#ifndef RGB_LED
#define RGB_LED

esp_err_t led_blink(int delay_ms, led_strip_t *led);

#endif // !RGB_LED
