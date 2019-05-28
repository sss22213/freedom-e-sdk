/* Copyright 2019 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */
/* ----------------------------------- */
/* [XXXXX] 28-05-2019 10-06-04        */
/* ----------------------------------- */

#ifndef COREIP_S51_ARTY__METAL_PLATFORM_H
#define COREIP_S51_ARTY__METAL_PLATFORM_H

/* From clock@0 */
#define METAL_FIXED_CLOCK_0_CLOCK_FREQUENCY 32500000UL

#define METAL_FIXED_CLOCK

/* From clint@2000000 */
#define METAL_RISCV_CLINT0_2000000_BASE_ADDRESS 33554432UL
#define METAL_RISCV_CLINT0_0_BASE_ADDRESS 33554432UL
#define METAL_RISCV_CLINT0_2000000_SIZE 65536UL
#define METAL_RISCV_CLINT0_0_SIZE 65536UL

#define METAL_RISCV_CLINT0
#define METAL_RISCV_CLINT0_MSIP_BASE 0UL
#define METAL_RISCV_CLINT0_MTIMECMP_BASE 16384UL
#define METAL_RISCV_CLINT0_MTIME 49144UL

/* From interrupt_controller@c000000 */
#define METAL_RISCV_PLIC0_C000000_BASE_ADDRESS 201326592UL
#define METAL_RISCV_PLIC0_0_BASE_ADDRESS 201326592UL
#define METAL_RISCV_PLIC0_C000000_SIZE 67108864UL
#define METAL_RISCV_PLIC0_0_SIZE 67108864UL
#define METAL_RISCV_PLIC0_C000000_RISCV_MAX_PRIORITY 7UL
#define METAL_RISCV_PLIC0_0_RISCV_MAX_PRIORITY 7UL
#define METAL_RISCV_PLIC0_C000000_RISCV_NDEV 27UL
#define METAL_RISCV_PLIC0_0_RISCV_NDEV 27UL

#define METAL_RISCV_PLIC0
#define METAL_RISCV_PLIC0_PRIORITY_BASE 0UL
#define METAL_RISCV_PLIC0_PENDING_BASE 4096UL
#define METAL_RISCV_PLIC0_ENABLE_BASE 8192UL
#define METAL_RISCV_PLIC0_THRESHOLD 2097152UL
#define METAL_RISCV_PLIC0_CLAIM 2097156UL

/* From global_external_interrupts */

#define METAL_SIFIVE_GLOBAL_EXTERNAL_INTERRUPTS0

/* From gpio@20002000 */
#define METAL_SIFIVE_GPIO0_20002000_BASE_ADDRESS 536879104UL
#define METAL_SIFIVE_GPIO0_0_BASE_ADDRESS 536879104UL
#define METAL_SIFIVE_GPIO0_20002000_SIZE 4096UL
#define METAL_SIFIVE_GPIO0_0_SIZE 4096UL

#define METAL_SIFIVE_GPIO0
#define METAL_SIFIVE_GPIO0_VALUE 0UL
#define METAL_SIFIVE_GPIO0_INPUT_EN 4UL
#define METAL_SIFIVE_GPIO0_OUTPUT_EN 8UL
#define METAL_SIFIVE_GPIO0_PORT 12UL
#define METAL_SIFIVE_GPIO0_PUE 16UL
#define METAL_SIFIVE_GPIO0_DS 20UL
#define METAL_SIFIVE_GPIO0_RISE_IE 24UL
#define METAL_SIFIVE_GPIO0_RISE_IP 28UL
#define METAL_SIFIVE_GPIO0_FALL_IE 32UL
#define METAL_SIFIVE_GPIO0_FALL_IP 36UL
#define METAL_SIFIVE_GPIO0_HIGH_IE 40UL
#define METAL_SIFIVE_GPIO0_HIGH_IP 44UL
#define METAL_SIFIVE_GPIO0_LOW_IE 48UL
#define METAL_SIFIVE_GPIO0_LOW_IP 52UL
#define METAL_SIFIVE_GPIO0_IOF_EN 56UL
#define METAL_SIFIVE_GPIO0_IOF_SEL 60UL
#define METAL_SIFIVE_GPIO0_OUT_XOR 64UL

/* From button@0 */

/* From button@1 */

/* From button@2 */

/* From button@3 */

#define METAL_SIFIVE_GPIO_BUTTONS

/* From led@0red */

/* From led@0green */

/* From led@0blue */

#define METAL_SIFIVE_GPIO_LEDS

/* From switch@0 */

/* From switch@1 */

/* From switch@2 */

/* From switch@3 */

#define METAL_SIFIVE_GPIO_SWITCHES

/* From local_external_interrupts_0 */

#define METAL_SIFIVE_LOCAL_EXTERNAL_INTERRUPTS0

/* From pwm@20005000 */
#define METAL_SIFIVE_PWM0_20005000_BASE_ADDRESS 536891392UL
#define METAL_SIFIVE_PWM0_0_BASE_ADDRESS 536891392UL
#define METAL_SIFIVE_PWM0_20005000_SIZE 4096UL
#define METAL_SIFIVE_PWM0_0_SIZE 4096UL

#define METAL_SIFIVE_PWM0
#define METAL_SIFIVE_PWM0_PWMCFG 0UL
#define METAL_SIFIVE_PWM0_PWMCOUNT 8UL
#define METAL_SIFIVE_PWM0_PWMS 16UL
#define METAL_SIFIVE_PWM0_PWMCMP0 32UL
#define METAL_SIFIVE_PWM0_PWMCMP1 36UL
#define METAL_SIFIVE_PWM0_PWMCMP2 40UL
#define METAL_SIFIVE_PWM0_PWMCMP3 44UL

/* From spi@20004000 */
#define METAL_SIFIVE_SPI0_20004000_BASE_ADDRESS 536887296UL
#define METAL_SIFIVE_SPI0_0_BASE_ADDRESS 536887296UL
#define METAL_SIFIVE_SPI0_20004000_SIZE 4096UL
#define METAL_SIFIVE_SPI0_0_SIZE 4096UL

#define METAL_SIFIVE_SPI0
#define METAL_SIFIVE_SPI0_SCKDIV 0UL
#define METAL_SIFIVE_SPI0_SCKMODE 4UL
#define METAL_SIFIVE_SPI0_CSID 16UL
#define METAL_SIFIVE_SPI0_CSDEF 20UL
#define METAL_SIFIVE_SPI0_CSMODE 24UL
#define METAL_SIFIVE_SPI0_DELAY0 40UL
#define METAL_SIFIVE_SPI0_DELAY1 44UL
#define METAL_SIFIVE_SPI0_FMT 64UL
#define METAL_SIFIVE_SPI0_TXDATA 72UL
#define METAL_SIFIVE_SPI0_RXDATA 76UL
#define METAL_SIFIVE_SPI0_TXMARK 80UL
#define METAL_SIFIVE_SPI0_RXMARK 84UL
#define METAL_SIFIVE_SPI0_FCTRL 96UL
#define METAL_SIFIVE_SPI0_FFMT 100UL
#define METAL_SIFIVE_SPI0_IE 112UL
#define METAL_SIFIVE_SPI0_IP 116UL

/* From teststatus@4000 */
#define METAL_SIFIVE_TEST0_4000_BASE_ADDRESS 16384UL
#define METAL_SIFIVE_TEST0_0_BASE_ADDRESS 16384UL
#define METAL_SIFIVE_TEST0_4000_SIZE 4096UL
#define METAL_SIFIVE_TEST0_0_SIZE 4096UL

#define METAL_SIFIVE_TEST0
#define METAL_SIFIVE_TEST0_FINISHER_OFFSET 0UL

/* From serial@20000000 */
#define METAL_SIFIVE_UART0_20000000_BASE_ADDRESS 536870912UL
#define METAL_SIFIVE_UART0_0_BASE_ADDRESS 536870912UL
#define METAL_SIFIVE_UART0_20000000_SIZE 4096UL
#define METAL_SIFIVE_UART0_0_SIZE 4096UL

#define METAL_SIFIVE_UART0
#define METAL_SIFIVE_UART0_TXDATA 0UL
#define METAL_SIFIVE_UART0_RXDATA 4UL
#define METAL_SIFIVE_UART0_TXCTRL 8UL
#define METAL_SIFIVE_UART0_RXCTRL 12UL
#define METAL_SIFIVE_UART0_IE 16UL
#define METAL_SIFIVE_UART0_IP 20UL
#define METAL_SIFIVE_UART0_DIV 24UL

#endif /* COREIP_S51_ARTY__METAL_PLATFORM_H*/