#ifndef __AIR001xx_HAL_CONF_H
#define __AIR001xx_HAL_CONF_H

#define HAL_MODULE_ENABLED
#define HAL_CORTEX_MODULE_ENABLED
#define HAL_RCC_MODULE_ENABLED
#define HAL_FLASH_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED

#define HSI_VALUE                 ((uint32_t)8000000)
#define HSE_VALUE                 ((uint32_t)24000000)
#define HSE_STARTUP_TIMEOUT       ((uint32_t)200)
#define LSI_VALUE                 ((uint32_t)32768)
#define LSE_VALUE                 ((uint32_t)32768)
#define LSE_STARTUP_TIMEOUT       ((uint32_t)5000)

#define VDD_VALUE                 ((uint32_t)3300)
#define PRIORITY_HIGHEST          0
#define PRIORITY_HIGH             1
#define PRIORITY_LOW              2
#define PRIORITY_LOWEST           3
#define TICK_INT_PRIORITY         ((uint32_t)PRIORITY_LOWEST)
#define USE_RTOS                  0
#define USE_FULL_ASSERT           1

#include "air001xx_hal.h"
#include "air001xx_hal_cortex.h"
#include "air001xx_hal_rcc.h"
#include "air001xx_hal_flash.h"
#include "air001xx_hal_gpio.h"

#if (USE_FULL_ASSERT)
  #define assert_param(expr) ((expr) ? (void)0U : assert_failed((uint8_t *)__FILE__, __LINE__))
  void assert_failed(uint8_t* file, uint32_t line);
#else
  #define assert_param(expr) ((void)0U)
#endif

#endif
