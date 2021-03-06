#define FMC_SDRAM_BANK2_BASE 0xD0000000
#define FMC_SDRAM_BANK1_BASE 0xC0000000
#define FMC_SDRAM_SRAM4_BANK1_BASE_REMAP 0xCC000000
#define FMC_SDRAM_SRAM3_BANK1_BASE_REMAP 0xC8000000
#define FMC_SDRAM_SRAM2_BANK1_BASE_REMAP 0xC4000000
#define FMC_SDRAM_SRAM1_BANK1_BASE_REMAP 0xC0000000
#define QSPI_BASE 0x90000000
#define FMC_NAND_BASE 0x80000000
#define FMC_SDRAM_BANK2_BASE_REMAP 0x70000000
#define FMC_SDRAM_SRAM4_BANK1_BASE 0x6C000000
#define FMC_SDRAM_SRAM3_BANK1_BASE 0x68000000
#define FMC_SDRAM_SRAM2_BANK1_BASE 0x64000000
#define FMC_SDRAM_SRAM1_BANK1_BASE 0x60000000
#define BACKUP_SRAM_BASE 0x38800000
#define SRAM4_BASE 0x38000000
#define SRAM3_BASE 0x30040000
#define SRAM2_BASE 0x30020000
#define SRAM1_BASE 0x30000000
#define AXI_SRAM_BASE 0x24000000
#define DTCM_SRAM_BASE 0x20000000
#define SRAM3_BASE_ALIAS 0x10040000
#define SRAM2_BASE_ALIAS 0x10020000
#define SRAM1_BASE_ALIAS 0x10000000
#define FLASH2_BASE 0x81000000
#define FLASH1_BASE 0x80000000
#define ITCM_BASE 0x00000000
#define VTOR_REMAP 0x00000000

/***********************************************
* Periph addresses
***********************************************/

//AHB4
#define RAMECC3_BASE 0x58027000 
#define HSEM_BASE 0x58026400
#define ADC3_BASE 0x58026000
#define DMAMUX2_BASE 0x58025800
#define BDMA_BASE 0x58025400
#define CRC_BASE 0x58024C00
#define PWR_BASE 0x58024800
#define RCC_BASE 0x58024400
#define GPIOK_BASE 0x58022800
#define GPIOJ_BASE 0x58022400
#define GPIOI_BASE 0x58022000
#define GPIOH_BASE 0x58021C00
#define GPIOG_BASE 0x58021800
#define GPIOF_BASE 0x58021400
#define GPIOE_BASE 0x58021000
#define GPIOD_BASE 0x58020C00
#define GPIOC_BASE 0x58020800
#define GPIOB_BASE 0x58020400
#define GPIOA_BASE 0x58020000

//APB4
#define SAI4_BASE 0x58005400
#define IWDG2_BASE 0x58004C00
#define IWDG1_BASE 0x58004800
#define RTC_BKP_BASE 0x58004000
#define VREF_BASE 0x58003C00
#define COMP_BASE 0x58003800
#define LPTIM5_BASE 0x58003000
#define LPTIM4_BASE 0x58002C00
#define LPTIM3_BASE 0x58002800
#define LPTIM2_BASE 0x58002000
#define I2C4_BASE 0x58001C00
#define SPI6_BASE 0x58001400
#define LPUART1_BASE 0x58000C00
#define SYSCFG_BASE 0x58000400
#define EXTI_BASE 0x58000000

//AHB3
#define RAMECC1_BASE 0x52009000
#define DELAY_SDMMC1_BASE 0x52008000
#define SDMMC1_BASE 0x52007000
#define DELAY_QSPI_BASE 0x52008000
#define QSPI_CTRL_BASE 0x52005000
#define FMC_CTRL_BASE 0x25004000
#define JPEG_BASE 0x52003000
#define FLASH_INTERFACE_BASE 0x52004000
#define DMA2D_BASE 0x52001000
#define MDMA_BASE 0x52000000
#define DPV_BASE 0x51000000

//APB3
#define WWDG1_BASE 0x50003000
#define LTDC_BASE 0x50001000
#define DSIHOST_BASE 0x50000000

//AHB2
#define RAMECC2_BASE 0x48023000
#define DELAY_SDMMC2_BASE 0x48022800
#define SDMMC2_BASE 0x48022400
#define RNG_BASE 0x48021800
#define HASH_BASE 0x48021400
#define CRYPTO_BASE 0x48021000
#define DCMI_BASE 0x48020000

//AHB1
#define USB2_OTG_FS_BASE 0x40080000
#define USB1_OTG_HS_BASE 0x40040000
#define ETH_BASE 0x40028000
#define ART_CTRL_BASE 0x40024400
#define ADC1_ADC2_BASE 0x40022000
#define DMAMUX1_BASE 0x40020800
#define DMA2_BASE 0x40024000
#define DMA1_BASE 0x40020000

//APB2
#define HRTIM_BASE 0x40017400
#define DFSDM1_BASE 0x40017000
#define SAI3_BASE 0x40016000
#define SAI2_BASE 0x40015C00
#define SAI1_BASE 0x40015800
#define SPI5_BASE 0x40015000
#define TIM17_BASE 0x40014800
#define TIM16_BASE 0x40014400
#define TIM15_BASE 0x40014000
#define SPI4_BASE 0x40013400
#define SPI1_I2S1_BASE 0x40013000
#define USART6_BASE 0x40011400
#define USART1_BASE 0x40011000
#define TIM8_BASE 0x40010400
#define TIM1_BASE 0x40010000

//APB1
#define CAN_MESSAGE_RAM_BASE 0x4000AC00
#define CAN_CCU_BASE 0x4000A800
#define FDCAN2_BASE 0x4000A400
#define FDCAN1_BASE 0x4000A000
#define MDIOS_BASE 0x40009400
#define OPAMP_BASE 0x40009000
#define SWPMI_BASE 0x40008800
#define CRS_BASE 0x40008400
#define UART8_BASE 0x40007C00
#define UART7_BASE 0x40007800
#define DAC1_BASE 0x40007400
#define HDMI_CEC_BASE 0x40006C00
#define I2C3_BASE 0x40005C00
#define I2C2_BASE 0x40005800
#define I2C1_BASE 0x40005400
#define UART5_BASE 0x40005000
#define UART4_BASE 0x40004C00
#define USART3_BASE 0x40004800
#define USART2_BASE 0x40004400
#define SPDIFRX_BASE 0x40004000
#define SPI3_I2S3_BASE 0x40003C00
#define SPI2_I2S2_BASE 0x40003800
#define WWDG2_BASE 0x40002C00
#define LPTIM1_BASE 0x40002400
#define TIM14_BASE 0x40002000
#define TIM13_BASE 0x40001C00
#define TIM12_BASE 0x40001800
#define TIM7_BASE 0x40001400
#define TIM6_BASE 0x40001000
#define TIM5_BASE 0x40000C00
#define TIM4_BASE 0x40000800
#define TIM3_BASE 0x40000400
#define TIM2_BASE 0x40000000