#include "./include/delay.h"
#include "freertos/idf_additions.h"
#include "freertos/projdefs.h"
#include <esp_rom_sys.h>
#include <esp_task.h>

/*
 * @brief genera un delay expresado en milisegundos
 *
 * @param ms    El tiempo del delay en milisegundos
 * @return void
 * */
void delay_ms(uint32_t ms) {
  // us = x10^-6
  // ms = x10^-3
  vTaskDelay(pdMS_TO_TICKS(ms));
}

/*
 * @brief genera un delay expresado en segundos
 *
 * @param s    El tiempo del delay en segundos
 * @return void
 * */
void delay_s(uint32_t s) {
  // us = x10^-6
  // ms = x10^0
  vTaskDelay(pdMS_TO_TICKS(s * 1000));
}
