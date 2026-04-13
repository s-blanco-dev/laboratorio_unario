#include "../components/delay/include/delay.h"
#include "esp_log.h"
#include "esp_log_level.h"
#include "sdkconfig.h"
#include <stdio.h>

#define ARRAY_SIZE 12

int exampleData;
char exampleArray[ARRAY_SIZE];

void app_main(void) {
  // probemos
  int ing = 0;
  while (true) {
    ing++;
    ESP_LOGI("", "ho ho ho: %d\n", ing);
    delay_s(2);
  }
}
