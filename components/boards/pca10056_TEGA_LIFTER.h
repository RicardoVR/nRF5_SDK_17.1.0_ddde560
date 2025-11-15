/**
 * Copyright (c) 2014 - 2019, Nordic Semiconductor ASA
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
#ifndef PCA10040_H
#define PCA10040_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// LEDs definitions for PCA10040
#define LEDS_NUMBER    7


#define LED_1          NRF_GPIO_PIN_MAP(0,13) //PLACA NRF52840 DK
#define LED_2          NRF_GPIO_PIN_MAP(0,14) //PLACA NRF52840 DK
#define LED_3          NRF_GPIO_PIN_MAP(0,15) //PLACA NRF52840 DK
#define LED_4          NRF_GPIO_PIN_MAP(0,16) //PLACA NRF52840 DK
#define LED_START      LED_1

//#define LED_START      NRF_GPIO_PIN_MAP(0,18) //17
//#define LED_1          NRF_GPIO_PIN_MAP(0,18) // 17
//#define LED_2          NRF_GPIO_PIN_MAP(0,13) //18
//#define LED_3          NRF_GPIO_PIN_MAP(0,11) //19
//#define LED_4          NRF_GPIO_PIN_MAP(0,26) // Pin enciende LDO de medicion
#define LED_5          NRF_GPIO_PIN_MAP(0,17) // LED 4
#define TX_PA          NRF_GPIO_PIN_MAP(0,24)  // 13
#define RX_PA          NRF_GPIO_PIN_MAP(0,20)  // 13



  
#define Circuito_sensor   2
#define Circuito_1        NRF_SAADC_INPUT_AIN4     
#define Circuito_2        NRF_SAADC_INPUT_AIN5
  
#define ADC_Battery       NRF_SAADC_INPUT_AIN6      //(bateria)
  
#define Gain_Circuit      NRF_SAADC_GAIN1_2 //NRF_SAADC_GAIN1_2
#define Gain_Battery      NRF_SAADC_GAIN1_6
  
#define Circuito_List     {Circuito_1, Circuito_2} 

  
#define LEDS_ACTIVE_STATE 1

#define LEDS_INV_MASK  LEDS_MASK

#define LEDS_LIST { LED_1, LED_2, LED_3, LED_4, LED_5,TX_PA,RX_PA }

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2
#define BSP_LED_2      LED_3
#define BSP_LED_3      LED_4
#define BSP_LED_4      LED_5

#define BUTTONS_NUMBER 1

#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP
#define BUTTON_START   11   //PLACA NRF52840 DK
#define BUTTON_1       11   //PLACA NRF52840 DK

//#define BUTTON_START   NRF_GPIO_PIN_MAP(0,27)  // 13
//#define BUTTON_1       NRF_GPIO_PIN_MAP(0,27)  // 13
#define BUTTONS_ACTIVE_STATE 0
#define BUTTONS_LIST { BUTTON_1 }
#define BSP_BUTTON_0   BUTTON_1


#define RX_PIN_NUMBER  8 // 21
#define TX_PIN_NUMBER  6 // 17 
#define CTS_PIN_NUMBER 7
#define RTS_PIN_NUMBER 5
#define HWFC           true

#define ad5593_8CH_SCL_PIN             NRF_GPIO_PIN_MAP(0,29) // 27    // SCL signal pin
#define ad5593_8CH_SDA_PIN             NRF_GPIO_PIN_MAP(0,30) //2    // SDA signal pin
#define ad5593_8CH_RST_PIN             NRF_GPIO_PIN_MAP(0,31) //2    // SDA signal pin

#ifdef __cplusplus
}
#endif

#endif // PCA10040_H
