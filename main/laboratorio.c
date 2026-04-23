#include "../components/delay/include/delay.h"
#include "esp_err.h"
#include "esp_log.h"
#include "rgb_led.h"
#include "led_strip.h"
#include <stdint.h>

#define ARRAY_SIZE 12
#define BLINK_PERIOD_MS 1000

int exampleData;
char exampleArray[ARRAY_SIZE];

led_strip_t *led;

void app_main(void) {
    if (led_rgb_init(&led) != ESP_OK) {
        ESP_LOGE("ERR", "No se pudo inicializar el driver LED.\n");
    }
    const char* tag = "COLOR_CHANGE";

    const color_t red = {255, 0, 0};
    const color_t green = {0, 255, 0};
    const color_t blue = {0, 0, 255};

    while (1) {
        ESP_LOGI(tag, "RED\n");
        delay_ms(BLINK_PERIOD_MS);
        led_set_color(led, red);
        ESP_LOGI(tag, "GREEN\n");
        delay_ms(BLINK_PERIOD_MS);
        led_set_color(led, green);
        ESP_LOGI(tag, "BLUE\n");
        delay_ms(BLINK_PERIOD_MS);
        led_set_color(led, blue);
    }
}
