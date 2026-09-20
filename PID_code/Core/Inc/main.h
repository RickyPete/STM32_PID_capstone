/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define PB_ENCA_Pin GPIO_PIN_1
#define PB_ENCA_GPIO_Port GPIOA
#define PB_ENCA_EXTI_IRQn EXTI1_IRQn
#define PB_ENCB_Pin GPIO_PIN_2
#define PB_ENCB_GPIO_Port GPIOA
#define PB_ENCB_EXTI_IRQn EXTI2_IRQn
#define PB_BTN_Pin GPIO_PIN_3
#define PB_BTN_GPIO_Port GPIOA
#define PB_BTN_EXTI_IRQn EXTI3_IRQn
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define SPI1_RST_Pin GPIO_PIN_0
#define SPI1_RST_GPIO_Port GPIOB
#define SPI1_D_C_Pin GPIO_PIN_1
#define SPI1_D_C_GPIO_Port GPIOB
#define NFAULT_Pin GPIO_PIN_10
#define NFAULT_GPIO_Port GPIOB
#define PWM_Pin GPIO_PIN_8
#define PWM_GPIO_Port GPIOA
#define M_ENCA_Pin GPIO_PIN_4
#define M_ENCA_GPIO_Port GPIOB
#define M_ENCB_Pin GPIO_PIN_5
#define M_ENCB_GPIO_Port GPIOB
#define PH_IN2_Pin GPIO_PIN_8
#define PH_IN2_GPIO_Port GPIOB
#define NSLEEP_Pin GPIO_PIN_9
#define NSLEEP_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
