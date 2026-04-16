#include "../include/rgb_led.h"
#include "esp_err.h"

esp_err_t led_blink(int ms, led_strip_t *led) {
    esp_err_t err = led_rgb_init(&led);
    if (err != ESP_OK) {
        return err;
    }
    return ESP_OK;
}
