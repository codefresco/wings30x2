// Copyright 2022 Diego Palacios (@diepala)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define SERIAL_USART_FULL_DUPLEX // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6   // USART TX pin
#define SERIAL_USART_RX_PIN B7   // USART RX pin
#define EE_HANDS

// // WS2812 RGB LED strip input and number of LEDs
// #define WS2812_PWM_DRIVER   PWMD2  // default: PWMD2
// #define WS2812_PWM_CHANNEL  2      // default: 2
// #define WS2812_PWM_PAL_MODE 1      // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 2
// #define WS2812_EXTERNAL_PULLUP
// //#define WS2812_PWM_COMPLEMENTARY_OUTPUT // Define for a complementary timer output (TIMx_CHyN); omit for a normal timer output (TIMx_CHy).
// #define WS2812_PWM_DMA_STREAM   STM32_DMA1_STREAM1  // DMA Stream for TIMx_UP, see the respective reference manual for the appropriate values for your MCU.
// #define WS2812_PWM_DMA_CHANNEL  3

#define WS2812_PWM_DRIVER PWMD5
#define WS2812_PWM_CHANNEL 2
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM6
#define WS2812_DMA_CHANNEL 6