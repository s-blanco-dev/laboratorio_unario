#include "../components/delay/include/delay.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_log_level.h"
#include "led_strip.h"
#include "sdkconfig.h"
#include <stdint.h>
#include <stdio.h>

#define ARRAY_SIZE 12
#define BLINK_PERIOD_MS 1000

int exampleData;
char exampleArray[ARRAY_SIZE];

led_strip_t *led;

void app_main(void) {
    // probemos
    // int ing = 0;
    // while (true) {
    //   ing++;
    //   ESP_LOGI("", "ho ho ho: %d\n", ing);
    //   delay_s(2);
    // }

    if (led_rgb_init(&led) != ESP_OK) {
        ESP_LOGE("Ojaldre", "Reventó Fermat\n");
    }
    const char* tag = "COLOR_CHANGE";

    while (1) {
        led->set_pixel(led, 0, 255, 0, 0);
        led->refresh(led, 100);
        ESP_LOGI(tag, "RED\n");
        delay_ms(BLINK_PERIOD_MS);
        led->set_pixel(led, 0, 0, 255, 0);
        led->refresh(led, 100);
        ESP_LOGI(tag, "GREEN\n");
        delay_ms(BLINK_PERIOD_MS);
        led->set_pixel(led, 0, 0, 0, 255);
        led->refresh(led, 100);
        ESP_LOGI(tag, "BLUE\n");
        delay_ms(BLINK_PERIOD_MS);
    }
}
