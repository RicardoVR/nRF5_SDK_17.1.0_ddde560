/**
 * Copyright (c) 2016 - 2021, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
#ifndef PCA10056_H
#define PCA10056_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for PCA10056

#define LEDS_NUMBER    7

#define LED_START      NRF_GPIO_PIN_MAP(1,06) //
#define LED_1          NRF_GPIO_PIN_MAP(1,06) // VERDE
#define LED_2          NRF_GPIO_PIN_MAP(1,02) // VERDE
#define LED_3          NRF_GPIO_PIN_MAP(1,00) // ROJO
#define LED_4          NRF_GPIO_PIN_MAP(1,04) // VERDE
#define LED_5          NRF_GPIO_PIN_MAP(0,07) // Enciende LDO medicion
#define LED_6          NRF_GPIO_PIN_MAP(0,15) // Habilita Lectura de AC/DC 8CH
#define LED_7          NRF_GPIO_PIN_MAP(0,22) // RESET

  
#define Circuito_sensor   3
#define Circuito_1        NRF_SAADC_INPUT_AIN1 // P0.03     1
#define Circuito_2        NRF_SAADC_INPUT_AIN6 // P0.28     0
#define Circuito_3        NRF_SAADC_INPUT_AIN5 // P0.02     4
  
  
// NRF_SAADC_INPUT_AIN5  medicion ok
 
// NRF_SAADC_INPUT_AIN6  medicion ok
  
//NRF_SAADC_INPUT_AIN7 aparentemente extraño

#define ADC_Battery       NRF_SAADC_INPUT_AIN3 // P0.05 (bateria)
  
#define Gain_Circuit      NRF_SAADC_GAIN1_2 
#define Gain_Battery      NRF_SAADC_GAIN1_6
  
#define Circuito_List     {Circuito_1, Circuito_2, Circuito_3} 

#define LEDS_ACTIVE_STATE 1

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_1, LED_2, LED_3, LED_4, LED_5,LED_6, LED_7}

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3
#define BSP_LED_3      LED_4
#define BSP_LED_4      LED_5
#define BSP_LED_5      LED_6
#define BSP_LED_6      LED_7

#define BUTTONS_NUMBER 1

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP
#define BUTTON_START   NRF_GPIO_PIN_MAP(0,8) 
#define BUTTON_1       NRF_GPIO_PIN_MAP(0,8)  
#define BUTTONS_ACTIVE_STATE 0
#define BUTTONS_LIST   { BUTTON_1 }
#define BSP_BUTTON_0   BUTTON_1

#define RX_PIN_NUMBER  NRF_GPIO_PIN_MAP(0, 8) //8
#define TX_PIN_NUMBER  NRF_GPIO_PIN_MAP(0, 6) //6
#define CTS_PIN_NUMBER NRF_GPIO_PIN_MAP(0, 7) //7
#define RTS_PIN_NUMBER NRF_GPIO_PIN_MAP(0, 5) //5
#define HWFC           true
  
// Arduino board mappings
#define AD5593R_SCL_PIN             NRF_GPIO_PIN_MAP(0, 17)    // SCL signal pin
#define AD5593R_SDA_PIN             NRF_GPIO_PIN_MAP(0, 20)    // SDA signal pin
#define AD5593R_AREF_PIN            NRF_GPIO_PIN_MAP(0, 22) //2     // Aref pin
  
  
#ifdef __cplusplus
}
#endif

#endif // PCA10056_H
