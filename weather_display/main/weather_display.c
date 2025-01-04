#include <stdio.h>
#include <stdint.h>
#include "freertos/freeRTOS.h"
#include "freertos/task.h"

#include "inc/esp32_registers.h"

#define GPIO18 18
#define DELAY_MS 500

void app_main(void)
{
   volatile uint32_t* gpio_out_w1ts_reg = (volatile uint32_t*) GPIO_OUT_W1TS_REG;
   volatile uint32_t* gpio_out_w1tc_reg = (volatile uint32_t*) GPIO_OUT_W1TC_REG;
   volatile uint32_t* gpio_enable_w1ts_reg = (volatile uint32_t*) GPIO_ENABLE_W1TS_REG;
   volatile uint32_t* gpio_pin18_reg = (volatile uint32_t*) GPIO_PIN18_REG;
   volatile uint32_t* gpio18_in_func_reg = (volatile uint32_t*) GPIO_FUNC18_IN_SEL_CFG_REG;
   volatile uint32_t* gpio18_out_func_reg = (volatile uint32_t*) GPIO_FUNC18_OUT_SEL_CFG_REG;
   volatile uint32_t* gpio18_io_mux_reg = (volatile uint32_t*) IO_MUX_GPIO18_REG;

   *gpio_enable_w1ts_reg = (1 << GPIO18);
   *gpio18_out_func_reg = (1 << GPIO_FUNC_OUT_SEL_CFG_OEN_SEL_Pos) | (256 << GPIO_FUNC_OUT_SEL_CFG_OUT_SEL_Pos);
   *gpio_pin18_reg = 0;
   *gpio18_in_func_reg = 0;
   *gpio18_io_mux_reg = (2 << IO_MUX_FUN_DRV_Pos) | (2 << IO_MUX_MCU_DRV_Pos) | (2 << IO_MUX_MCU_SEL_Pos) | (1 << IO_MUX_MCU_OE_Pos);
   

   while(1) {
      printf("hello world!\r\n");
      *gpio_out_w1ts_reg = (1 << GPIO18);
      vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
      *gpio_out_w1tc_reg = (1 << GPIO18);
      vTaskDelay(pdMS_TO_TICKS(DELAY_MS));
   }
}
