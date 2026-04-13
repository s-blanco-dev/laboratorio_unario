#include "../components/delay/include/delay.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_log_level.h"
#include "led_strip.h"
#include "sdkconfig.h"
#include <stdint.h>
#include <stdio.h>

#define ARRAY_SIZE 12

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

  uint8_t r, g, b = 0;
  r = 255;
  g = 0;

  while (r != g) {
    r--;
    g++;
    b++;
    led->set_pixel(led, 0, r, g, b);
    led->refresh(led, 100);
    delay_ms(100);
  }
}
