/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 * Copyright (c) 2015 Daniel Campora
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "version.h"

#define WIPY_SD

#define BOARD_NAME                                  "WiPy-SD "
#define MICROPY_HW_BOARD_NAME                       VERSION_E(BOARD_NAME, VERSION_NUMBER)
#define MICROPY_HW_MCU_NAME                         "CC3200"

#define MICROPY_PORT_WLAN_AP_SSID                   "wipy-wlan"
#define MICROPY_PORT_WLAN_AP_KEY                    "www.wipy.io"
#define MICROPY_PORT_WLAN_AP_SECURITY               SL_SEC_TYPE_WPA_WPA2
#define MICROPY_PORT_WLAN_AP_CHANNEL                5

#define MICROPY_HW_HAS_SDCARD                       (1)
#define MICROPY_HW_ENABLE_RNG                       (1)
#define MICROPY_HW_ENABLE_RTC                       (1)

#define MICROPY_STDIO_UART                          PYB_UART_0
#define MICROPY_STDIO_UART_BAUD                     115200
#define MICROPY_STDIO_UART_RX_BUF_SIZE              128

#define MICROPY_SYS_LED_PRCM                        PRCM_GPIOA3
#define MICROPY_SAFE_BOOT_PRCM                      PRCM_GPIOA3
#define MICROPY_SYS_LED_PORT                        GPIOA3_BASE
#define MICROPY_SAFE_BOOT_PORT                      GPIOA3_BASE
#define MICROPY_SYS_LED_GPIO                        pin_GPIO25
#define MICROPY_SYS_LED_PIN_NUM                     PIN_21      // GPIO25   (SOP2)
#define MICROPY_SAFE_BOOT_PIN_NUM                   PIN_18      // GPIO28
#define MICROPY_SYS_LED_PORT_PIN                    GPIO_PIN_1
#define MICROPY_SAFE_BOOT_PORT_PIN                  GPIO_PIN_4

#define MICROPY_PORT_SFLASH_BLOCK_COUNT             96
