#pragma once

#include <stdint.h>
namespace DeviceSupport {

#include "stm32f10x.h"
#undef FLASH_BASE
constexpr auto FLASH_BASE = ((std::uint32_t)0x08000000);
#undef SRAM_BASE
constexpr auto SRAM_BASE = ((std::uint32_t)0x20000000);
#undef PERIPH_BASE
constexpr auto PERIPH_BASE = ((std::uint32_t)0x40000000);

#undef SRAM_BB_BASE
constexpr auto SRAM_BB_BASE = ((std::uint32_t)0x22000000);
#undef PERIPH_BB_BASE
constexpr auto PERIPH_BB_BASE = ((std::uint32_t)0x42000000);

#undef FSMC_R_BASE
constexpr auto FSMC_R_BASE = ((std::uint32_t)0xA0000000);

/*!< Peripheral memory map */
#undef APB1PERIPH_BASE
constexpr auto APB1PERIPH_BASE = PERIPH_BASE;
#undef APB2PERIPH_BASE
constexpr auto APB2PERIPH_BASE = (PERIPH_BASE + 0x10000);
#undef AHBPERIPH_BASE
constexpr auto AHBPERIPH_BASE = (PERIPH_BASE + 0x20000);

#undef TIM2_BASE
constexpr auto TIM2_BASE = (APB1PERIPH_BASE + 0x0000);
#undef TIM3_BASE
constexpr auto TIM3_BASE = (APB1PERIPH_BASE + 0x0400);
#undef TIM4_BASE
constexpr auto TIM4_BASE = (APB1PERIPH_BASE + 0x0800);
#undef TIM5_BASE
constexpr auto TIM5_BASE = (APB1PERIPH_BASE + 0x0C00);
#undef TIM6_BASE
constexpr auto TIM6_BASE = (APB1PERIPH_BASE + 0x1000);
#undef TIM7_BASE
constexpr auto TIM7_BASE = (APB1PERIPH_BASE + 0x1400);
#undef TIM12_BASE
constexpr auto TIM12_BASE = (APB1PERIPH_BASE + 0x1800);
#undef TIM13_BASE
constexpr auto TIM13_BASE = (APB1PERIPH_BASE + 0x1C00);
#undef TIM14_BASE
constexpr auto TIM14_BASE = (APB1PERIPH_BASE + 0x2000);
#undef RTC_BASE
constexpr auto RTC_BASE = (APB1PERIPH_BASE + 0x2800);
#undef WWDG_BASE
constexpr auto WWDG_BASE = (APB1PERIPH_BASE + 0x2C00);
#undef IWDG_BASE
constexpr auto IWDG_BASE = (APB1PERIPH_BASE + 0x3000);
#undef SPI2_BASE
constexpr auto SPI2_BASE = (APB1PERIPH_BASE + 0x3800);
#undef SPI3_BASE
constexpr auto SPI3_BASE = (APB1PERIPH_BASE + 0x3C00);
#undef USART2_BASE
constexpr auto USART2_BASE = (APB1PERIPH_BASE + 0x4400);
#undef USART3_BASE
constexpr auto USART3_BASE = (APB1PERIPH_BASE + 0x4800);
#undef UART4_BASE
constexpr auto UART4_BASE = (APB1PERIPH_BASE + 0x4C00);
#undef UART5_BASE
constexpr auto UART5_BASE = (APB1PERIPH_BASE + 0x5000);
#undef I2C1_BASE
constexpr auto I2C1_BASE = (APB1PERIPH_BASE + 0x5400);
#undef I2C2_BASE
constexpr auto I2C2_BASE = (APB1PERIPH_BASE + 0x5800);
#undef CAN1_BASE
constexpr auto CAN1_BASE = (APB1PERIPH_BASE + 0x6400);
#undef CAN2_BASE
constexpr auto CAN2_BASE = (APB1PERIPH_BASE + 0x6800);
#undef BKP_BASE
constexpr auto BKP_BASE = (APB1PERIPH_BASE + 0x6C00);
#undef PWR_BASE
constexpr auto PWR_BASE = (APB1PERIPH_BASE + 0x7000);
#undef DAC_BASE
constexpr auto DAC_BASE = (APB1PERIPH_BASE + 0x7400);
#undef CEC_BASE
constexpr auto CEC_BASE = (APB1PERIPH_BASE + 0x7800);

#undef AFIO_BASE
constexpr auto AFIO_BASE = (APB2PERIPH_BASE + 0x0000);
#undef EXTI_BASE
constexpr auto EXTI_BASE = (APB2PERIPH_BASE + 0x0400);
#undef GPIOA_BASE
constexpr auto GPIOA_BASE = (APB2PERIPH_BASE + 0x0800);
#undef GPIOB_BASE
constexpr auto GPIOB_BASE = (APB2PERIPH_BASE + 0x0C00);
#undef GPIOC_BASE
constexpr auto GPIOC_BASE = (APB2PERIPH_BASE + 0x1000);
#undef GPIOD_BASE
constexpr auto GPIOD_BASE = (APB2PERIPH_BASE + 0x1400);
#undef GPIOE_BASE
constexpr auto GPIOE_BASE = (APB2PERIPH_BASE + 0x1800);
#undef GPIOF_BASE
constexpr auto GPIOF_BASE = (APB2PERIPH_BASE + 0x1C00);
#undef GPIOG_BASE
constexpr auto GPIOG_BASE = (APB2PERIPH_BASE + 0x2000);
#undef ADC1_BASE
constexpr auto ADC1_BASE = (APB2PERIPH_BASE + 0x2400);
#undef ADC2_BASE
constexpr auto ADC2_BASE = (APB2PERIPH_BASE + 0x2800);
#undef TIM1_BASE
constexpr auto TIM1_BASE = (APB2PERIPH_BASE + 0x2C00);
#undef SPI1_BASE
constexpr auto SPI1_BASE = (APB2PERIPH_BASE + 0x3000);
#undef TIM8_BASE
constexpr auto TIM8_BASE = (APB2PERIPH_BASE + 0x3400);
#undef USART1_BASE
constexpr auto USART1_BASE = (APB2PERIPH_BASE + 0x3800);
#undef ADC3_BASE
constexpr auto ADC3_BASE = (APB2PERIPH_BASE + 0x3C00);
#undef TIM15_BASE
constexpr auto TIM15_BASE = (APB2PERIPH_BASE + 0x4000);
#undef TIM16_BASE
constexpr auto TIM16_BASE = (APB2PERIPH_BASE + 0x4400);
#undef TIM17_BASE
constexpr auto TIM17_BASE = (APB2PERIPH_BASE + 0x4800);
#undef TIM9_BASE
constexpr auto TIM9_BASE = (APB2PERIPH_BASE + 0x4C00);
#undef TIM10_BASE
constexpr auto TIM10_BASE = (APB2PERIPH_BASE + 0x5000);
#undef TIM11_BASE
constexpr auto TIM11_BASE = (APB2PERIPH_BASE + 0x5400);

#undef SDIO_BASE
constexpr auto SDIO_BASE = (PERIPH_BASE + 0x18000);

#undef DMA1_BASE
constexpr auto DMA1_BASE = (AHBPERIPH_BASE + 0x0000);
#undef DMA1_Channel1_BASE
constexpr auto DMA1_Channel1_BASE = (AHBPERIPH_BASE + 0x0008);
#undef DMA1_Channel2_BASE
constexpr auto DMA1_Channel2_BASE = (AHBPERIPH_BASE + 0x001C);
#undef DMA1_Channel3_BASE
constexpr auto DMA1_Channel3_BASE = (AHBPERIPH_BASE + 0x0030);
#undef DMA1_Channel4_BASE
constexpr auto DMA1_Channel4_BASE = (AHBPERIPH_BASE + 0x0044);
#undef DMA1_Channel5_BASE
constexpr auto DMA1_Channel5_BASE = (AHBPERIPH_BASE + 0x0058);
#undef DMA1_Channel6_BASE
constexpr auto DMA1_Channel6_BASE = (AHBPERIPH_BASE + 0x006C);
#undef DMA1_Channel7_BASE
constexpr auto DMA1_Channel7_BASE = (AHBPERIPH_BASE + 0x0080);
#undef DMA2_BASE
constexpr auto DMA2_BASE = (AHBPERIPH_BASE + 0x0400);
#undef DMA2_Channel1_BASE
constexpr auto DMA2_Channel1_BASE = (AHBPERIPH_BASE + 0x0408);
#undef DMA2_Channel2_BASE
constexpr auto DMA2_Channel2_BASE = (AHBPERIPH_BASE + 0x041C);
#undef DMA2_Channel3_BASE
constexpr auto DMA2_Channel3_BASE = (AHBPERIPH_BASE + 0x0430);
#undef DMA2_Channel4_BASE
constexpr auto DMA2_Channel4_BASE = (AHBPERIPH_BASE + 0x0444);
#undef DMA2_Channel5_BASE
constexpr auto DMA2_Channel5_BASE = (AHBPERIPH_BASE + 0x0458);
#undef RCC_BASE
constexpr auto RCC_BASE = (AHBPERIPH_BASE + 0x1000);
#undef CRC_BASE
constexpr auto CRC_BASE = (AHBPERIPH_BASE + 0x3000);

#undef FLASH_R_BASE
constexpr auto FLASH_R_BASE = (AHBPERIPH_BASE + 0x2000);
#undef OB_BASE
constexpr auto OB_BASE = ((std::uint32_t)0x1FFFF800);

#undef ETH_BASE
constexpr auto ETH_BASE = (AHBPERIPH_BASE + 0x8000);
#undef ETH_MAC_BASE
constexpr auto ETH_MAC_BASE = (ETH_BASE);
#undef ETH_MMC_BASE
constexpr auto ETH_MMC_BASE = (ETH_BASE + 0x0100);
#undef ETH_PTP_BASE
constexpr auto ETH_PTP_BASE = (ETH_BASE + 0x0700);
#undef ETH_DMA_BASE
constexpr auto ETH_DMA_BASE = (ETH_BASE + 0x1000);

#undef FSMC_Bank1_R_BASE
constexpr auto FSMC_Bank1_R_BASE = (FSMC_R_BASE + 0x0000);
#undef FSMC_Bank1E_R_BASE
constexpr auto FSMC_Bank1E_R_BASE = (FSMC_R_BASE + 0x0104);
#undef FSMC_Bank2_R_BASE
constexpr auto FSMC_Bank2_R_BASE = (FSMC_R_BASE + 0x0060);
#undef FSMC_Bank3_R_BASE
constexpr auto FSMC_Bank3_R_BASE = (FSMC_R_BASE + 0x0080);
#undef FSMC_Bank4_R_BASE
constexpr auto FSMC_Bank4_R_BASE = (FSMC_R_BASE + 0x00A0);

#undef DBGMCU_BASE
constexpr auto DBGMCU_BASE = ((std::uint32_t)0xE0042000);

/**
 * @}
 */

/** @addtogroup Peripheral_declaration
 * @{
 */

#undef TIM2
const auto TIM2 = ((TIM_TypeDef *)TIM2_BASE);
#undef TIM3
const auto TIM3 = ((TIM_TypeDef *)TIM3_BASE);
#undef TIM4
const auto TIM4 = ((TIM_TypeDef *)TIM4_BASE);
#undef TIM5
const auto TIM5 = ((TIM_TypeDef *)TIM5_BASE);
#undef TIM6
const auto TIM6 = ((TIM_TypeDef *)TIM6_BASE);
#undef TIM7
const auto TIM7 = ((TIM_TypeDef *)TIM7_BASE);
#undef TIM12
const auto TIM12 = ((TIM_TypeDef *)TIM12_BASE);
#undef TIM13
const auto TIM13 = ((TIM_TypeDef *)TIM13_BASE);
#undef TIM14
const auto TIM14 = ((TIM_TypeDef *)TIM14_BASE);
#undef RTC
const auto RTC = ((RTC_TypeDef *)RTC_BASE);
#undef WWDG
const auto WWDG = ((WWDG_TypeDef *)WWDG_BASE);
#undef IWDG
const auto IWDG = ((IWDG_TypeDef *)IWDG_BASE);
#undef SPI2
const auto SPI2 = ((SPI_TypeDef *)SPI2_BASE);
#undef SPI3
const auto SPI3 = ((SPI_TypeDef *)SPI3_BASE);
#undef USART2
const auto USART2 = ((USART_TypeDef *)USART2_BASE);
#undef USART3
const auto USART3 = ((USART_TypeDef *)USART3_BASE);
#undef UART4
const auto UART4 = ((USART_TypeDef *)UART4_BASE);
#undef UART5
const auto UART5 = ((USART_TypeDef *)UART5_BASE);
#undef I2C1
const auto I2C1 = ((I2C_TypeDef *)I2C1_BASE);
#undef I2C2
const auto I2C2 = ((I2C_TypeDef *)I2C2_BASE);
#undef CAN1
const auto CAN1 = ((CAN_TypeDef *)CAN1_BASE);
#undef CAN2
const auto CAN2 = ((CAN_TypeDef *)CAN2_BASE);
#undef BKP
const auto BKP = ((BKP_TypeDef *)BKP_BASE);
#undef PWR
const auto PWR = ((PWR_TypeDef *)PWR_BASE);
#undef DAC
const auto DAC = ((DAC_TypeDef *)DAC_BASE);
#undef CEC
const auto CEC = ((CEC_TypeDef *)CEC_BASE);
#undef AFIO
const auto AFIO = ((AFIO_TypeDef *)AFIO_BASE);
#undef EXTI
const auto EXTI = ((EXTI_TypeDef *)EXTI_BASE);
#undef GPIOA
const auto GPIOA = ((GPIO_TypeDef *)GPIOA_BASE);
#undef GPIOB
const auto GPIOB = ((GPIO_TypeDef *)GPIOB_BASE);
#undef GPIOC
const auto GPIOC = ((GPIO_TypeDef *)GPIOC_BASE);
#undef GPIOD
const auto GPIOD = ((GPIO_TypeDef *)GPIOD_BASE);
#undef GPIOE
const auto GPIOE = ((GPIO_TypeDef *)GPIOE_BASE);
#undef GPIOF
const auto GPIOF = ((GPIO_TypeDef *)GPIOF_BASE);
#undef GPIOG
const auto GPIOG = ((GPIO_TypeDef *)GPIOG_BASE);
#undef ADC1
const auto ADC1 = ((ADC_TypeDef *)ADC1_BASE);
#undef ADC2
const auto ADC2 = ((ADC_TypeDef *)ADC2_BASE);
#undef TIM1
const auto TIM1 = ((TIM_TypeDef *)TIM1_BASE);
#undef SPI1
const auto SPI1 = ((SPI_TypeDef *)SPI1_BASE);
#undef TIM8
const auto TIM8 = ((TIM_TypeDef *)TIM8_BASE);
#undef USART1
const auto USART1 = ((USART_TypeDef *)USART1_BASE);
#undef ADC3
const auto ADC3 = ((ADC_TypeDef *)ADC3_BASE);
#undef TIM15
const auto TIM15 = ((TIM_TypeDef *)TIM15_BASE);
#undef TIM16
const auto TIM16 = ((TIM_TypeDef *)TIM16_BASE);
#undef TIM17
const auto TIM17 = ((TIM_TypeDef *)TIM17_BASE);
#undef TIM9
const auto TIM9 = ((TIM_TypeDef *)TIM9_BASE);
#undef TIM10
const auto TIM10 = ((TIM_TypeDef *)TIM10_BASE);
#undef TIM11
const auto TIM11 = ((TIM_TypeDef *)TIM11_BASE);
#undef SDIO
const auto SDIO = ((SDIO_TypeDef *)SDIO_BASE);
#undef DMA1
const auto DMA1 = ((DMA_TypeDef *)DMA1_BASE);
#undef DMA2
const auto DMA2 = ((DMA_TypeDef *)DMA2_BASE);
#undef DMA1_Channel1
const auto DMA1_Channel1 = ((DMA_Channel_TypeDef *)DMA1_Channel1_BASE);
#undef DMA1_Channel2
const auto DMA1_Channel2 = ((DMA_Channel_TypeDef *)DMA1_Channel2_BASE);
#undef DMA1_Channel3
const auto DMA1_Channel3 = ((DMA_Channel_TypeDef *)DMA1_Channel3_BASE);
#undef DMA1_Channel4
const auto DMA1_Channel4 = ((DMA_Channel_TypeDef *)DMA1_Channel4_BASE);
#undef DMA1_Channel5
const auto DMA1_Channel5 = ((DMA_Channel_TypeDef *)DMA1_Channel5_BASE);
#undef DMA1_Channel6
const auto DMA1_Channel6 = ((DMA_Channel_TypeDef *)DMA1_Channel6_BASE);
#undef DMA1_Channel7
const auto DMA1_Channel7 = ((DMA_Channel_TypeDef *)DMA1_Channel7_BASE);
#undef DMA2_Channel1
const auto DMA2_Channel1 = ((DMA_Channel_TypeDef *)DMA2_Channel1_BASE);
#undef DMA2_Channel2
const auto DMA2_Channel2 = ((DMA_Channel_TypeDef *)DMA2_Channel2_BASE);
#undef DMA2_Channel3
const auto DMA2_Channel3 = ((DMA_Channel_TypeDef *)DMA2_Channel3_BASE);
#undef DMA2_Channel4
const auto DMA2_Channel4 = ((DMA_Channel_TypeDef *)DMA2_Channel4_BASE);
#undef DMA2_Channel5
const auto DMA2_Channel5 = ((DMA_Channel_TypeDef *)DMA2_Channel5_BASE);
#undef RCC
const auto RCC = ((RCC_TypeDef *)RCC_BASE);
#undef CRC
const auto CRC = ((CRC_TypeDef *)CRC_BASE);
#undef FLASH
const auto FLASH = ((FLASH_TypeDef *)FLASH_R_BASE);
#undef OB
const auto OB = ((OB_TypeDef *)OB_BASE);
#undef ETH
const auto ETH = ((ETH_TypeDef *)ETH_BASE);
#undef FSMC_Bank1
const auto FSMC_Bank1 = ((FSMC_Bank1_TypeDef *)FSMC_Bank1_R_BASE);
#undef FSMC_Bank1E
const auto FSMC_Bank1E = ((FSMC_Bank1E_TypeDef *)FSMC_Bank1E_R_BASE);
#undef FSMC_Bank2
const auto FSMC_Bank2 = ((FSMC_Bank2_TypeDef *)FSMC_Bank2_R_BASE);
#undef FSMC_Bank3
const auto FSMC_Bank3 = ((FSMC_Bank3_TypeDef *)FSMC_Bank3_R_BASE);
#undef FSMC_Bank4
const auto FSMC_Bank4 = ((FSMC_Bank4_TypeDef *)FSMC_Bank4_R_BASE);
#undef DBGMCU
const auto DBGMCU = ((DBGMCU_TypeDef *)DBGMCU_BASE);

/**
 * @}
 */

/** @addtogroup Exported_constants
 * @{
 */

/** @addtogroup Peripheral_Registers_Bits_Definition
 * @{
 */

/******************************************************************************/
/*                         Peripheral Registers_Bits_Definition               */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*                          CRC calculation unit                              */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for CRC_DR register  *********************/
#undef CRC_DR_DR
constexpr auto CRC_DR_DR = ((std::uint32_t)0xFFFFFFFF);

/*******************  Bit definition for CRC_IDR register  ********************/
#undef CRC_IDR_IDR
constexpr auto CRC_IDR_IDR = ((std::uint8_t)0xFF);

/********************  Bit definition for CRC_CR register  ********************/
#undef CRC_CR_RESET
constexpr auto CRC_CR_RESET = ((std::uint8_t)0x01);

/******************************************************************************/
/*                                                                            */
/*                             Power Control                                  */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for PWR_CR register  ********************/
#undef PWR_CR_LPDS
constexpr auto PWR_CR_LPDS = ((std::uint16_t)0x0001);
#undef PWR_CR_PDDS
constexpr auto PWR_CR_PDDS = ((std::uint16_t)0x0002);
#undef PWR_CR_CWUF
constexpr auto PWR_CR_CWUF = ((std::uint16_t)0x0004);
#undef PWR_CR_CSBF
constexpr auto PWR_CR_CSBF = ((std::uint16_t)0x0008);
#undef PWR_CR_PVDE
constexpr auto PWR_CR_PVDE = ((std::uint16_t)0x0010);

#undef PWR_CR_PLS
constexpr auto PWR_CR_PLS = ((std::uint16_t)0x00E0);
#undef PWR_CR_PLS_0
constexpr auto PWR_CR_PLS_0 = ((std::uint16_t)0x0020);
#undef PWR_CR_PLS_1
constexpr auto PWR_CR_PLS_1 = ((std::uint16_t)0x0040);
#undef PWR_CR_PLS_2
constexpr auto PWR_CR_PLS_2 = ((std::uint16_t)0x0080);

/*!< PVD level configuration */
#undef PWR_CR_PLS_2V2
constexpr auto PWR_CR_PLS_2V2 = ((std::uint16_t)0x0000);
#undef PWR_CR_PLS_2V3
constexpr auto PWR_CR_PLS_2V3 = ((std::uint16_t)0x0020);
#undef PWR_CR_PLS_2V4
constexpr auto PWR_CR_PLS_2V4 = ((std::uint16_t)0x0040);
#undef PWR_CR_PLS_2V5
constexpr auto PWR_CR_PLS_2V5 = ((std::uint16_t)0x0060);
#undef PWR_CR_PLS_2V6
constexpr auto PWR_CR_PLS_2V6 = ((std::uint16_t)0x0080);
#undef PWR_CR_PLS_2V7
constexpr auto PWR_CR_PLS_2V7 = ((std::uint16_t)0x00A0);
#undef PWR_CR_PLS_2V8
constexpr auto PWR_CR_PLS_2V8 = ((std::uint16_t)0x00C0);
#undef PWR_CR_PLS_2V9
constexpr auto PWR_CR_PLS_2V9 = ((std::uint16_t)0x00E0);

#undef PWR_CR_DBP
constexpr auto PWR_CR_DBP = ((std::uint16_t)0x0100);

/*******************  Bit definition for PWR_CSR register  ********************/
#undef PWR_CSR_WUF
constexpr auto PWR_CSR_WUF = ((std::uint16_t)0x0001);
#undef PWR_CSR_SBF
constexpr auto PWR_CSR_SBF = ((std::uint16_t)0x0002);
#undef PWR_CSR_PVDO
constexpr auto PWR_CSR_PVDO = ((std::uint16_t)0x0004);
#undef PWR_CSR_EWUP
constexpr auto PWR_CSR_EWUP = ((std::uint16_t)0x0100);

/******************************************************************************/
/*                                                                            */
/*                            Backup registers                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for BKP_DR1 register  ********************/
#undef BKP_DR1_D
constexpr auto BKP_DR1_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR2 register  ********************/
#undef BKP_DR2_D
constexpr auto BKP_DR2_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR3 register  ********************/
#undef BKP_DR3_D
constexpr auto BKP_DR3_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR4 register  ********************/
#undef BKP_DR4_D
constexpr auto BKP_DR4_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR5 register  ********************/
#undef BKP_DR5_D
constexpr auto BKP_DR5_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR6 register  ********************/
#undef BKP_DR6_D
constexpr auto BKP_DR6_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR7 register  ********************/
#undef BKP_DR7_D
constexpr auto BKP_DR7_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR8 register  ********************/
#undef BKP_DR8_D
constexpr auto BKP_DR8_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR9 register  ********************/
#undef BKP_DR9_D
constexpr auto BKP_DR9_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR10 register  *******************/
#undef BKP_DR10_D
constexpr auto BKP_DR10_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR11 register  *******************/
#undef BKP_DR11_D
constexpr auto BKP_DR11_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR12 register  *******************/
#undef BKP_DR12_D
constexpr auto BKP_DR12_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR13 register  *******************/
#undef BKP_DR13_D
constexpr auto BKP_DR13_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR14 register  *******************/
#undef BKP_DR14_D
constexpr auto BKP_DR14_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR15 register  *******************/
#undef BKP_DR15_D
constexpr auto BKP_DR15_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR16 register  *******************/
#undef BKP_DR16_D
constexpr auto BKP_DR16_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR17 register  *******************/
#undef BKP_DR17_D
constexpr auto BKP_DR17_D = ((std::uint16_t)0xFFFF);

/******************  Bit definition for BKP_DR18 register  ********************/
#undef BKP_DR18_D
constexpr auto BKP_DR18_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR19 register  *******************/
#undef BKP_DR19_D
constexpr auto BKP_DR19_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR20 register  *******************/
#undef BKP_DR20_D
constexpr auto BKP_DR20_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR21 register  *******************/
#undef BKP_DR21_D
constexpr auto BKP_DR21_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR22 register  *******************/
#undef BKP_DR22_D
constexpr auto BKP_DR22_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR23 register  *******************/
#undef BKP_DR23_D
constexpr auto BKP_DR23_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR24 register  *******************/
#undef BKP_DR24_D
constexpr auto BKP_DR24_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR25 register  *******************/
#undef BKP_DR25_D
constexpr auto BKP_DR25_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR26 register  *******************/
#undef BKP_DR26_D
constexpr auto BKP_DR26_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR27 register  *******************/
#undef BKP_DR27_D
constexpr auto BKP_DR27_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR28 register  *******************/
#undef BKP_DR28_D
constexpr auto BKP_DR28_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR29 register  *******************/
#undef BKP_DR29_D
constexpr auto BKP_DR29_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR30 register  *******************/
#undef BKP_DR30_D
constexpr auto BKP_DR30_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR31 register  *******************/
#undef BKP_DR31_D
constexpr auto BKP_DR31_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR32 register  *******************/
#undef BKP_DR32_D
constexpr auto BKP_DR32_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR33 register  *******************/
#undef BKP_DR33_D
constexpr auto BKP_DR33_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR34 register  *******************/
#undef BKP_DR34_D
constexpr auto BKP_DR34_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR35 register  *******************/
#undef BKP_DR35_D
constexpr auto BKP_DR35_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR36 register  *******************/
#undef BKP_DR36_D
constexpr auto BKP_DR36_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR37 register  *******************/
#undef BKP_DR37_D
constexpr auto BKP_DR37_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR38 register  *******************/
#undef BKP_DR38_D
constexpr auto BKP_DR38_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR39 register  *******************/
#undef BKP_DR39_D
constexpr auto BKP_DR39_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR40 register  *******************/
#undef BKP_DR40_D
constexpr auto BKP_DR40_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR41 register  *******************/
#undef BKP_DR41_D
constexpr auto BKP_DR41_D = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for BKP_DR42 register  *******************/
#undef BKP_DR42_D
constexpr auto BKP_DR42_D = ((std::uint16_t)0xFFFF);

/******************  Bit definition for BKP_RTCCR register  *******************/
#undef BKP_RTCCR_CAL
constexpr auto BKP_RTCCR_CAL = ((std::uint16_t)0x007F);
#undef BKP_RTCCR_CCO
constexpr auto BKP_RTCCR_CCO = ((std::uint16_t)0x0080);
#undef BKP_RTCCR_ASOE
constexpr auto BKP_RTCCR_ASOE = ((std::uint16_t)0x0100);
#undef BKP_RTCCR_ASOS
constexpr auto BKP_RTCCR_ASOS = ((std::uint16_t)0x0200);

/********************  Bit definition for BKP_CR register  ********************/
#undef BKP_CR_TPE
constexpr auto BKP_CR_TPE = ((std::uint8_t)0x01);
#undef BKP_CR_TPAL
constexpr auto BKP_CR_TPAL = ((std::uint8_t)0x02);

/*******************  Bit definition for BKP_CSR register  ********************/
#undef BKP_CSR_CTE
constexpr auto BKP_CSR_CTE = ((std::uint16_t)0x0001);
#undef BKP_CSR_CTI
constexpr auto BKP_CSR_CTI = ((std::uint16_t)0x0002);
#undef BKP_CSR_TPIE
constexpr auto BKP_CSR_TPIE = ((std::uint16_t)0x0004);
#undef BKP_CSR_TEF
constexpr auto BKP_CSR_TEF = ((std::uint16_t)0x0100);
#undef BKP_CSR_TIF
constexpr auto BKP_CSR_TIF = ((std::uint16_t)0x0200);

/******************************************************************************/
/*                                                                            */
/*                         Reset and Clock Control                            */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for RCC_CR register  ********************/
#undef RCC_CR_HSION
constexpr auto RCC_CR_HSION = ((std::uint32_t)0x00000001);
#undef RCC_CR_HSIRDY
constexpr auto RCC_CR_HSIRDY = ((std::uint32_t)0x00000002);
#undef RCC_CR_HSITRIM
constexpr auto RCC_CR_HSITRIM = ((std::uint32_t)0x000000F8);
#undef RCC_CR_HSICAL
constexpr auto RCC_CR_HSICAL = ((std::uint32_t)0x0000FF00);
#undef RCC_CR_HSEON
constexpr auto RCC_CR_HSEON = ((std::uint32_t)0x00010000);
#undef RCC_CR_HSERDY
constexpr auto RCC_CR_HSERDY = ((std::uint32_t)0x00020000);
#undef RCC_CR_HSEBYP
constexpr auto RCC_CR_HSEBYP = ((std::uint32_t)0x00040000);
#undef RCC_CR_CSSON
constexpr auto RCC_CR_CSSON = ((std::uint32_t)0x00080000);
#undef RCC_CR_PLLON
constexpr auto RCC_CR_PLLON = ((std::uint32_t)0x01000000);
#undef RCC_CR_PLLRDY
constexpr auto RCC_CR_PLLRDY = ((std::uint32_t)0x02000000);

#ifdef STM32F10X_CL
#undef RCC_CR_PLL2ON
constexpr auto RCC_CR_PLL2ON = ((std::uint32_t)0x04000000);
#undef RCC_CR_PLL2RDY
constexpr auto RCC_CR_PLL2RDY = ((std::uint32_t)0x08000000);
#undef RCC_CR_PLL3ON
constexpr auto RCC_CR_PLL3ON = ((std::uint32_t)0x10000000);
#undef RCC_CR_PLL3RDY
constexpr auto RCC_CR_PLL3RDY = ((std::uint32_t)0x20000000);
#endif /* STM32F10X_CL */

/*******************  Bit definition for RCC_CFGR register  *******************/
/*!< SW configuration */
#undef RCC_CFGR_SW
constexpr auto RCC_CFGR_SW = ((std::uint32_t)0x00000003);
#undef RCC_CFGR_SW_0
constexpr auto RCC_CFGR_SW_0 = ((std::uint32_t)0x00000001);
#undef RCC_CFGR_SW_1
constexpr auto RCC_CFGR_SW_1 = ((std::uint32_t)0x00000002);

#undef RCC_CFGR_SW_HSI
constexpr auto RCC_CFGR_SW_HSI = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_SW_HSE
constexpr auto RCC_CFGR_SW_HSE = ((std::uint32_t)0x00000001);
#undef RCC_CFGR_SW_PLL
constexpr auto RCC_CFGR_SW_PLL = ((std::uint32_t)0x00000002);

/*!< SWS configuration */
#undef RCC_CFGR_SWS
constexpr auto RCC_CFGR_SWS = ((std::uint32_t)0x0000000C);
#undef RCC_CFGR_SWS_0
constexpr auto RCC_CFGR_SWS_0 = ((std::uint32_t)0x00000004);
#undef RCC_CFGR_SWS_1
constexpr auto RCC_CFGR_SWS_1 = ((std::uint32_t)0x00000008);

#undef RCC_CFGR_SWS_HSI
constexpr auto RCC_CFGR_SWS_HSI = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_SWS_HSE
constexpr auto RCC_CFGR_SWS_HSE = ((std::uint32_t)0x00000004);
#undef RCC_CFGR_SWS_PLL
constexpr auto RCC_CFGR_SWS_PLL = ((std::uint32_t)0x00000008);

/*!< HPRE configuration */
#undef RCC_CFGR_HPRE
constexpr auto RCC_CFGR_HPRE = ((std::uint32_t)0x000000F0);
#undef RCC_CFGR_HPRE_0
constexpr auto RCC_CFGR_HPRE_0 = ((std::uint32_t)0x00000010);
#undef RCC_CFGR_HPRE_1
constexpr auto RCC_CFGR_HPRE_1 = ((std::uint32_t)0x00000020);
#undef RCC_CFGR_HPRE_2
constexpr auto RCC_CFGR_HPRE_2 = ((std::uint32_t)0x00000040);
#undef RCC_CFGR_HPRE_3
constexpr auto RCC_CFGR_HPRE_3 = ((std::uint32_t)0x00000080);

#undef RCC_CFGR_HPRE_DIV1
constexpr auto RCC_CFGR_HPRE_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_HPRE_DIV2
constexpr auto RCC_CFGR_HPRE_DIV2 = ((std::uint32_t)0x00000080);
#undef RCC_CFGR_HPRE_DIV4
constexpr auto RCC_CFGR_HPRE_DIV4 = ((std::uint32_t)0x00000090);
#undef RCC_CFGR_HPRE_DIV8
constexpr auto RCC_CFGR_HPRE_DIV8 = ((std::uint32_t)0x000000A0);
#undef RCC_CFGR_HPRE_DIV16
constexpr auto RCC_CFGR_HPRE_DIV16 = ((std::uint32_t)0x000000B0);
#undef RCC_CFGR_HPRE_DIV64
constexpr auto RCC_CFGR_HPRE_DIV64 = ((std::uint32_t)0x000000C0);
#undef RCC_CFGR_HPRE_DIV128
constexpr auto RCC_CFGR_HPRE_DIV128 = ((std::uint32_t)0x000000D0);
#undef RCC_CFGR_HPRE_DIV256
constexpr auto RCC_CFGR_HPRE_DIV256 = ((std::uint32_t)0x000000E0);
#undef RCC_CFGR_HPRE_DIV512
constexpr auto RCC_CFGR_HPRE_DIV512 = ((std::uint32_t)0x000000F0);

/*!< PPRE1 configuration */
#undef RCC_CFGR_PPRE1
constexpr auto RCC_CFGR_PPRE1 = ((std::uint32_t)0x00000700);
#undef RCC_CFGR_PPRE1_0
constexpr auto RCC_CFGR_PPRE1_0 = ((std::uint32_t)0x00000100);
#undef RCC_CFGR_PPRE1_1
constexpr auto RCC_CFGR_PPRE1_1 = ((std::uint32_t)0x00000200);
#undef RCC_CFGR_PPRE1_2
constexpr auto RCC_CFGR_PPRE1_2 = ((std::uint32_t)0x00000400);

#undef RCC_CFGR_PPRE1_DIV1
constexpr auto RCC_CFGR_PPRE1_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PPRE1_DIV2
constexpr auto RCC_CFGR_PPRE1_DIV2 = ((std::uint32_t)0x00000400);
#undef RCC_CFGR_PPRE1_DIV4
constexpr auto RCC_CFGR_PPRE1_DIV4 = ((std::uint32_t)0x00000500);
#undef RCC_CFGR_PPRE1_DIV8
constexpr auto RCC_CFGR_PPRE1_DIV8 = ((std::uint32_t)0x00000600);
#undef RCC_CFGR_PPRE1_DIV16
constexpr auto RCC_CFGR_PPRE1_DIV16 = ((std::uint32_t)0x00000700);

/*!< PPRE2 configuration */
#undef RCC_CFGR_PPRE2
constexpr auto RCC_CFGR_PPRE2 = ((std::uint32_t)0x00003800);
#undef RCC_CFGR_PPRE2_0
constexpr auto RCC_CFGR_PPRE2_0 = ((std::uint32_t)0x00000800);
#undef RCC_CFGR_PPRE2_1
constexpr auto RCC_CFGR_PPRE2_1 = ((std::uint32_t)0x00001000);
#undef RCC_CFGR_PPRE2_2
constexpr auto RCC_CFGR_PPRE2_2 = ((std::uint32_t)0x00002000);

#undef RCC_CFGR_PPRE2_DIV1
constexpr auto RCC_CFGR_PPRE2_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PPRE2_DIV2
constexpr auto RCC_CFGR_PPRE2_DIV2 = ((std::uint32_t)0x00002000);
#undef RCC_CFGR_PPRE2_DIV4
constexpr auto RCC_CFGR_PPRE2_DIV4 = ((std::uint32_t)0x00002800);
#undef RCC_CFGR_PPRE2_DIV8
constexpr auto RCC_CFGR_PPRE2_DIV8 = ((std::uint32_t)0x00003000);
#undef RCC_CFGR_PPRE2_DIV16
constexpr auto RCC_CFGR_PPRE2_DIV16 = ((std::uint32_t)0x00003800);

/*!< ADCPPRE configuration */
#undef RCC_CFGR_ADCPRE
constexpr auto RCC_CFGR_ADCPRE = ((std::uint32_t)0x0000C000);
#undef RCC_CFGR_ADCPRE_0
constexpr auto RCC_CFGR_ADCPRE_0 = ((std::uint32_t)0x00004000);
#undef RCC_CFGR_ADCPRE_1
constexpr auto RCC_CFGR_ADCPRE_1 = ((std::uint32_t)0x00008000);

#undef RCC_CFGR_ADCPRE_DIV2
constexpr auto RCC_CFGR_ADCPRE_DIV2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_ADCPRE_DIV4
constexpr auto RCC_CFGR_ADCPRE_DIV4 = ((std::uint32_t)0x00004000);
#undef RCC_CFGR_ADCPRE_DIV6
constexpr auto RCC_CFGR_ADCPRE_DIV6 = ((std::uint32_t)0x00008000);
#undef RCC_CFGR_ADCPRE_DIV8
constexpr auto RCC_CFGR_ADCPRE_DIV8 = ((std::uint32_t)0x0000C000);

#undef RCC_CFGR_PLLSRC
constexpr auto RCC_CFGR_PLLSRC = ((std::uint32_t)0x00010000);

#undef RCC_CFGR_PLLXTPRE
constexpr auto RCC_CFGR_PLLXTPRE = ((std::uint32_t)0x00020000);

/*!< PLLMUL configuration */
#undef RCC_CFGR_PLLMULL
constexpr auto RCC_CFGR_PLLMULL = ((std::uint32_t)0x003C0000);
#undef RCC_CFGR_PLLMULL_0
constexpr auto RCC_CFGR_PLLMULL_0 = ((std::uint32_t)0x00040000);
#undef RCC_CFGR_PLLMULL_1
constexpr auto RCC_CFGR_PLLMULL_1 = ((std::uint32_t)0x00080000);
#undef RCC_CFGR_PLLMULL_2
constexpr auto RCC_CFGR_PLLMULL_2 = ((std::uint32_t)0x00100000);
#undef RCC_CFGR_PLLMULL_3
constexpr auto RCC_CFGR_PLLMULL_3 = ((std::uint32_t)0x00200000);

#ifdef STM32F10X_CL
#undef RCC_CFGR_PLLSRC_HSI_Div2
constexpr auto RCC_CFGR_PLLSRC_HSI_Div2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLSRC_PREDIV1
constexpr auto RCC_CFGR_PLLSRC_PREDIV1 = ((std::uint32_t)0x00010000);

#undef RCC_CFGR_PLLXTPRE_PREDIV1
constexpr auto RCC_CFGR_PLLXTPRE_PREDIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLXTPRE_PREDIV1_Div2
constexpr auto RCC_CFGR_PLLXTPRE_PREDIV1_Div2 = ((std::uint32_t)0x00020000);

#undef RCC_CFGR_PLLMULL4
constexpr auto RCC_CFGR_PLLMULL4 = ((std::uint32_t)0x00080000);
#undef RCC_CFGR_PLLMULL5
constexpr auto RCC_CFGR_PLLMULL5 = ((std::uint32_t)0x000C0000);
#undef RCC_CFGR_PLLMULL6
constexpr auto RCC_CFGR_PLLMULL6 = ((std::uint32_t)0x00100000);
#undef RCC_CFGR_PLLMULL7
constexpr auto RCC_CFGR_PLLMULL7 = ((std::uint32_t)0x00140000);
#undef RCC_CFGR_PLLMULL8
constexpr auto RCC_CFGR_PLLMULL8 = ((std::uint32_t)0x00180000);
#undef RCC_CFGR_PLLMULL9
constexpr auto RCC_CFGR_PLLMULL9 = ((std::uint32_t)0x001C0000);
#undef RCC_CFGR_PLLMULL6_5
constexpr auto RCC_CFGR_PLLMULL6_5 = ((std::uint32_t)0x00340000);

#undef RCC_CFGR_OTGFSPRE
constexpr auto RCC_CFGR_OTGFSPRE = ((std::uint32_t)0x00400000);

/*!< MCO configuration */
#undef RCC_CFGR_MCO
constexpr auto RCC_CFGR_MCO = ((std::uint32_t)0x0F000000);
#undef RCC_CFGR_MCO_0
constexpr auto RCC_CFGR_MCO_0 = ((std::uint32_t)0x01000000);
#undef RCC_CFGR_MCO_1
constexpr auto RCC_CFGR_MCO_1 = ((std::uint32_t)0x02000000);
#undef RCC_CFGR_MCO_2
constexpr auto RCC_CFGR_MCO_2 = ((std::uint32_t)0x04000000);
#undef RCC_CFGR_MCO_3
constexpr auto RCC_CFGR_MCO_3 = ((std::uint32_t)0x08000000);

#undef RCC_CFGR_MCO_NOCLOCK
constexpr auto RCC_CFGR_MCO_NOCLOCK = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_MCO_SYSCLK
constexpr auto RCC_CFGR_MCO_SYSCLK = ((std::uint32_t)0x04000000);
#undef RCC_CFGR_MCO_HSI
constexpr auto RCC_CFGR_MCO_HSI = ((std::uint32_t)0x05000000);
#undef RCC_CFGR_MCO_HSE
constexpr auto RCC_CFGR_MCO_HSE = ((std::uint32_t)0x06000000);
#undef RCC_CFGR_MCO_PLLCLK_Div2
constexpr auto RCC_CFGR_MCO_PLLCLK_Div2 = ((std::uint32_t)0x07000000);
#undef RCC_CFGR_MCO_PLL2CLK
constexpr auto RCC_CFGR_MCO_PLL2CLK = ((std::uint32_t)0x08000000);
#undef RCC_CFGR_MCO_PLL3CLK_Div2
constexpr auto RCC_CFGR_MCO_PLL3CLK_Div2 = ((std::uint32_t)0x09000000);
#undef RCC_CFGR_MCO_Ext_HSE
constexpr auto RCC_CFGR_MCO_Ext_HSE = ((std::uint32_t)0x0A000000);
#undef RCC_CFGR_MCO_PLL3CLK
constexpr auto RCC_CFGR_MCO_PLL3CLK = ((std::uint32_t)0x0B000000);
#elif defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef RCC_CFGR_PLLSRC_HSI_Div2
constexpr auto RCC_CFGR_PLLSRC_HSI_Div2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLSRC_PREDIV1
constexpr auto RCC_CFGR_PLLSRC_PREDIV1 = ((std::uint32_t)0x00010000);

#undef RCC_CFGR_PLLXTPRE_PREDIV1
constexpr auto RCC_CFGR_PLLXTPRE_PREDIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLXTPRE_PREDIV1_Div2
constexpr auto RCC_CFGR_PLLXTPRE_PREDIV1_Div2 = ((std::uint32_t)0x00020000);

#undef RCC_CFGR_PLLMULL2
constexpr auto RCC_CFGR_PLLMULL2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLMULL3
constexpr auto RCC_CFGR_PLLMULL3 = ((std::uint32_t)0x00040000);
#undef RCC_CFGR_PLLMULL4
constexpr auto RCC_CFGR_PLLMULL4 = ((std::uint32_t)0x00080000);
#undef RCC_CFGR_PLLMULL5
constexpr auto RCC_CFGR_PLLMULL5 = ((std::uint32_t)0x000C0000);
#undef RCC_CFGR_PLLMULL6
constexpr auto RCC_CFGR_PLLMULL6 = ((std::uint32_t)0x00100000);
#undef RCC_CFGR_PLLMULL7
constexpr auto RCC_CFGR_PLLMULL7 = ((std::uint32_t)0x00140000);
#undef RCC_CFGR_PLLMULL8
constexpr auto RCC_CFGR_PLLMULL8 = ((std::uint32_t)0x00180000);
#undef RCC_CFGR_PLLMULL9
constexpr auto RCC_CFGR_PLLMULL9 = ((std::uint32_t)0x001C0000);
#undef RCC_CFGR_PLLMULL10
constexpr auto RCC_CFGR_PLLMULL10 = ((std::uint32_t)0x00200000);
#undef RCC_CFGR_PLLMULL11
constexpr auto RCC_CFGR_PLLMULL11 = ((std::uint32_t)0x00240000);
#undef RCC_CFGR_PLLMULL12
constexpr auto RCC_CFGR_PLLMULL12 = ((std::uint32_t)0x00280000);
#undef RCC_CFGR_PLLMULL13
constexpr auto RCC_CFGR_PLLMULL13 = ((std::uint32_t)0x002C0000);
#undef RCC_CFGR_PLLMULL14
constexpr auto RCC_CFGR_PLLMULL14 = ((std::uint32_t)0x00300000);
#undef RCC_CFGR_PLLMULL15
constexpr auto RCC_CFGR_PLLMULL15 = ((std::uint32_t)0x00340000);
#undef RCC_CFGR_PLLMULL16
constexpr auto RCC_CFGR_PLLMULL16 = ((std::uint32_t)0x00380000);

/*!< MCO configuration */
#undef RCC_CFGR_MCO
constexpr auto RCC_CFGR_MCO = ((std::uint32_t)0x07000000);
#undef RCC_CFGR_MCO_0
constexpr auto RCC_CFGR_MCO_0 = ((std::uint32_t)0x01000000);
#undef RCC_CFGR_MCO_1
constexpr auto RCC_CFGR_MCO_1 = ((std::uint32_t)0x02000000);
#undef RCC_CFGR_MCO_2
constexpr auto RCC_CFGR_MCO_2 = ((std::uint32_t)0x04000000);

#undef RCC_CFGR_MCO_NOCLOCK
constexpr auto RCC_CFGR_MCO_NOCLOCK = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_MCO_SYSCLK
constexpr auto RCC_CFGR_MCO_SYSCLK = ((std::uint32_t)0x04000000);
#undef RCC_CFGR_MCO_HSI
constexpr auto RCC_CFGR_MCO_HSI = ((std::uint32_t)0x05000000);
#undef RCC_CFGR_MCO_HSE
constexpr auto RCC_CFGR_MCO_HSE = ((std::uint32_t)0x06000000);
#undef RCC_CFGR_MCO_PLL
constexpr auto RCC_CFGR_MCO_PLL = ((std::uint32_t)0x07000000);
#else
#undef RCC_CFGR_PLLSRC_HSI_Div2
constexpr auto RCC_CFGR_PLLSRC_HSI_Div2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLSRC_HSE
constexpr auto RCC_CFGR_PLLSRC_HSE = ((std::uint32_t)0x00010000);

#undef RCC_CFGR_PLLXTPRE_HSE
constexpr auto RCC_CFGR_PLLXTPRE_HSE = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLXTPRE_HSE_Div2
constexpr auto RCC_CFGR_PLLXTPRE_HSE_Div2 = ((std::uint32_t)0x00020000);

#undef RCC_CFGR_PLLMULL2
constexpr auto RCC_CFGR_PLLMULL2 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_PLLMULL3
constexpr auto RCC_CFGR_PLLMULL3 = ((std::uint32_t)0x00040000);
#undef RCC_CFGR_PLLMULL4
constexpr auto RCC_CFGR_PLLMULL4 = ((std::uint32_t)0x00080000);
#undef RCC_CFGR_PLLMULL5
constexpr auto RCC_CFGR_PLLMULL5 = ((std::uint32_t)0x000C0000);
#undef RCC_CFGR_PLLMULL6
constexpr auto RCC_CFGR_PLLMULL6 = ((std::uint32_t)0x00100000);
#undef RCC_CFGR_PLLMULL7
constexpr auto RCC_CFGR_PLLMULL7 = ((std::uint32_t)0x00140000);
#undef RCC_CFGR_PLLMULL8
constexpr auto RCC_CFGR_PLLMULL8 = ((std::uint32_t)0x00180000);
#undef RCC_CFGR_PLLMULL9
constexpr auto RCC_CFGR_PLLMULL9 = ((std::uint32_t)0x001C0000);
#undef RCC_CFGR_PLLMULL10
constexpr auto RCC_CFGR_PLLMULL10 = ((std::uint32_t)0x00200000);
#undef RCC_CFGR_PLLMULL11
constexpr auto RCC_CFGR_PLLMULL11 = ((std::uint32_t)0x00240000);
#undef RCC_CFGR_PLLMULL12
constexpr auto RCC_CFGR_PLLMULL12 = ((std::uint32_t)0x00280000);
#undef RCC_CFGR_PLLMULL13
constexpr auto RCC_CFGR_PLLMULL13 = ((std::uint32_t)0x002C0000);
#undef RCC_CFGR_PLLMULL14
constexpr auto RCC_CFGR_PLLMULL14 = ((std::uint32_t)0x00300000);
#undef RCC_CFGR_PLLMULL15
constexpr auto RCC_CFGR_PLLMULL15 = ((std::uint32_t)0x00340000);
#undef RCC_CFGR_PLLMULL16
constexpr auto RCC_CFGR_PLLMULL16 = ((std::uint32_t)0x00380000);
#undef RCC_CFGR_USBPRE
constexpr auto RCC_CFGR_USBPRE = ((std::uint32_t)0x00400000);

/*!< MCO configuration */
#undef RCC_CFGR_MCO
constexpr auto RCC_CFGR_MCO = ((std::uint32_t)0x07000000);
#undef RCC_CFGR_MCO_0
constexpr auto RCC_CFGR_MCO_0 = ((std::uint32_t)0x01000000);
#undef RCC_CFGR_MCO_1
constexpr auto RCC_CFGR_MCO_1 = ((std::uint32_t)0x02000000);
#undef RCC_CFGR_MCO_2
constexpr auto RCC_CFGR_MCO_2 = ((std::uint32_t)0x04000000);

#undef RCC_CFGR_MCO_NOCLOCK
constexpr auto RCC_CFGR_MCO_NOCLOCK = ((std::uint32_t)0x00000000);
#undef RCC_CFGR_MCO_SYSCLK
constexpr auto RCC_CFGR_MCO_SYSCLK = ((std::uint32_t)0x04000000);
#undef RCC_CFGR_MCO_HSI
constexpr auto RCC_CFGR_MCO_HSI = ((std::uint32_t)0x05000000);
#undef RCC_CFGR_MCO_HSE
constexpr auto RCC_CFGR_MCO_HSE = ((std::uint32_t)0x06000000);
#undef RCC_CFGR_MCO_PLL
constexpr auto RCC_CFGR_MCO_PLL = ((std::uint32_t)0x07000000);
#endif /* STM32F10X_CL */

/*!<******************  Bit definition for RCC_CIR register  ********************/
#undef RCC_CIR_LSIRDYF
constexpr auto RCC_CIR_LSIRDYF = ((std::uint32_t)0x00000001);
#undef RCC_CIR_LSERDYF
constexpr auto RCC_CIR_LSERDYF = ((std::uint32_t)0x00000002);
#undef RCC_CIR_HSIRDYF
constexpr auto RCC_CIR_HSIRDYF = ((std::uint32_t)0x00000004);
#undef RCC_CIR_HSERDYF
constexpr auto RCC_CIR_HSERDYF = ((std::uint32_t)0x00000008);
#undef RCC_CIR_PLLRDYF
constexpr auto RCC_CIR_PLLRDYF = ((std::uint32_t)0x00000010);
#undef RCC_CIR_CSSF
constexpr auto RCC_CIR_CSSF = ((std::uint32_t)0x00000080);
#undef RCC_CIR_LSIRDYIE
constexpr auto RCC_CIR_LSIRDYIE = ((std::uint32_t)0x00000100);
#undef RCC_CIR_LSERDYIE
constexpr auto RCC_CIR_LSERDYIE = ((std::uint32_t)0x00000200);
#undef RCC_CIR_HSIRDYIE
constexpr auto RCC_CIR_HSIRDYIE = ((std::uint32_t)0x00000400);
#undef RCC_CIR_HSERDYIE
constexpr auto RCC_CIR_HSERDYIE = ((std::uint32_t)0x00000800);
#undef RCC_CIR_PLLRDYIE
constexpr auto RCC_CIR_PLLRDYIE = ((std::uint32_t)0x00001000);
#undef RCC_CIR_LSIRDYC
constexpr auto RCC_CIR_LSIRDYC = ((std::uint32_t)0x00010000);
#undef RCC_CIR_LSERDYC
constexpr auto RCC_CIR_LSERDYC = ((std::uint32_t)0x00020000);
#undef RCC_CIR_HSIRDYC
constexpr auto RCC_CIR_HSIRDYC = ((std::uint32_t)0x00040000);
#undef RCC_CIR_HSERDYC
constexpr auto RCC_CIR_HSERDYC = ((std::uint32_t)0x00080000);
#undef RCC_CIR_PLLRDYC
constexpr auto RCC_CIR_PLLRDYC = ((std::uint32_t)0x00100000);
#undef RCC_CIR_CSSC
constexpr auto RCC_CIR_CSSC = ((std::uint32_t)0x00800000);

#ifdef STM32F10X_CL
#undef RCC_CIR_PLL2RDYF
constexpr auto RCC_CIR_PLL2RDYF = ((std::uint32_t)0x00000020);
#undef RCC_CIR_PLL3RDYF
constexpr auto RCC_CIR_PLL3RDYF = ((std::uint32_t)0x00000040);
#undef RCC_CIR_PLL2RDYIE
constexpr auto RCC_CIR_PLL2RDYIE = ((std::uint32_t)0x00002000);
#undef RCC_CIR_PLL3RDYIE
constexpr auto RCC_CIR_PLL3RDYIE = ((std::uint32_t)0x00004000);
#undef RCC_CIR_PLL2RDYC
constexpr auto RCC_CIR_PLL2RDYC = ((std::uint32_t)0x00200000);
#undef RCC_CIR_PLL3RDYC
constexpr auto RCC_CIR_PLL3RDYC = ((std::uint32_t)0x00400000);
#endif /* STM32F10X_CL */

/*****************  Bit definition for RCC_APB2RSTR register  *****************/
#undef RCC_APB2RSTR_AFIORST
constexpr auto RCC_APB2RSTR_AFIORST = ((std::uint32_t)0x00000001);
#undef RCC_APB2RSTR_IOPARST
constexpr auto RCC_APB2RSTR_IOPARST = ((std::uint32_t)0x00000004);
#undef RCC_APB2RSTR_IOPBRST
constexpr auto RCC_APB2RSTR_IOPBRST = ((std::uint32_t)0x00000008);
#undef RCC_APB2RSTR_IOPCRST
constexpr auto RCC_APB2RSTR_IOPCRST = ((std::uint32_t)0x00000010);
#undef RCC_APB2RSTR_IOPDRST
constexpr auto RCC_APB2RSTR_IOPDRST = ((std::uint32_t)0x00000020);
#undef RCC_APB2RSTR_ADC1RST
constexpr auto RCC_APB2RSTR_ADC1RST = ((std::uint32_t)0x00000200);

#if !defined(STM32F10X_LD_VL) && !defined(STM32F10X_MD_VL) && !defined(STM32F10X_HD_VL)
#undef RCC_APB2RSTR_ADC2RST
constexpr auto RCC_APB2RSTR_ADC2RST = ((std::uint32_t)0x00000400);
#endif

#undef RCC_APB2RSTR_TIM1RST
constexpr auto RCC_APB2RSTR_TIM1RST = ((std::uint32_t)0x00000800);
#undef RCC_APB2RSTR_SPI1RST
constexpr auto RCC_APB2RSTR_SPI1RST = ((std::uint32_t)0x00001000);
#undef RCC_APB2RSTR_USART1RST
constexpr auto RCC_APB2RSTR_USART1RST = ((std::uint32_t)0x00004000);

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef RCC_APB2RSTR_TIM15RST
constexpr auto RCC_APB2RSTR_TIM15RST = ((std::uint32_t)0x00010000);
#undef RCC_APB2RSTR_TIM16RST
constexpr auto RCC_APB2RSTR_TIM16RST = ((std::uint32_t)0x00020000);
#undef RCC_APB2RSTR_TIM17RST
constexpr auto RCC_APB2RSTR_TIM17RST = ((std::uint32_t)0x00040000);
#endif

#if !defined(STM32F10X_LD) && !defined(STM32F10X_LD_VL)
#undef RCC_APB2RSTR_IOPERST
constexpr auto RCC_APB2RSTR_IOPERST = ((std::uint32_t)0x00000040);
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined(STM32F10X_HD) || defined(STM32F10X_XL)
#undef RCC_APB2RSTR_IOPFRST
constexpr auto RCC_APB2RSTR_IOPFRST = ((std::uint32_t)0x00000080);
#undef RCC_APB2RSTR_IOPGRST
constexpr auto RCC_APB2RSTR_IOPGRST = ((std::uint32_t)0x00000100);
#undef RCC_APB2RSTR_TIM8RST
constexpr auto RCC_APB2RSTR_TIM8RST = ((std::uint32_t)0x00002000);
#undef RCC_APB2RSTR_ADC3RST
constexpr auto RCC_APB2RSTR_ADC3RST = ((std::uint32_t)0x00008000);
#endif

#if defined(STM32F10X_HD_VL)
#undef RCC_APB2RSTR_IOPFRST
constexpr auto RCC_APB2RSTR_IOPFRST = ((std::uint32_t)0x00000080);
#undef RCC_APB2RSTR_IOPGRST
constexpr auto RCC_APB2RSTR_IOPGRST = ((std::uint32_t)0x00000100);
#endif

#ifdef STM32F10X_XL
#undef RCC_APB2RSTR_TIM9RST
constexpr auto RCC_APB2RSTR_TIM9RST = ((std::uint32_t)0x00080000);
#undef RCC_APB2RSTR_TIM10RST
constexpr auto RCC_APB2RSTR_TIM10RST = ((std::uint32_t)0x00100000);
#undef RCC_APB2RSTR_TIM11RST
constexpr auto RCC_APB2RSTR_TIM11RST = ((std::uint32_t)0x00200000);
#endif /* STM32F10X_XL */

/*****************  Bit definition for RCC_APB1RSTR register  *****************/
#undef RCC_APB1RSTR_TIM2RST
constexpr auto RCC_APB1RSTR_TIM2RST = ((std::uint32_t)0x00000001);
#undef RCC_APB1RSTR_TIM3RST
constexpr auto RCC_APB1RSTR_TIM3RST = ((std::uint32_t)0x00000002);
#undef RCC_APB1RSTR_WWDGRST
constexpr auto RCC_APB1RSTR_WWDGRST = ((std::uint32_t)0x00000800);
#undef RCC_APB1RSTR_USART2RST
constexpr auto RCC_APB1RSTR_USART2RST = ((std::uint32_t)0x00020000);
#undef RCC_APB1RSTR_I2C1RST
constexpr auto RCC_APB1RSTR_I2C1RST = ((std::uint32_t)0x00200000);

#if !defined(STM32F10X_LD_VL) && !defined(STM32F10X_MD_VL) && !defined(STM32F10X_HD_VL)
#undef RCC_APB1RSTR_CAN1RST
constexpr auto RCC_APB1RSTR_CAN1RST = ((std::uint32_t)0x02000000);
#endif

#undef RCC_APB1RSTR_BKPRST
constexpr auto RCC_APB1RSTR_BKPRST = ((std::uint32_t)0x08000000);
#undef RCC_APB1RSTR_PWRRST
constexpr auto RCC_APB1RSTR_PWRRST = ((std::uint32_t)0x10000000);

#if !defined(STM32F10X_LD) && !defined(STM32F10X_LD_VL)
#undef RCC_APB1RSTR_TIM4RST
constexpr auto RCC_APB1RSTR_TIM4RST = ((std::uint32_t)0x00000004);
#undef RCC_APB1RSTR_SPI2RST
constexpr auto RCC_APB1RSTR_SPI2RST = ((std::uint32_t)0x00004000);
#undef RCC_APB1RSTR_USART3RST
constexpr auto RCC_APB1RSTR_USART3RST = ((std::uint32_t)0x00040000);
#undef RCC_APB1RSTR_I2C2RST
constexpr auto RCC_APB1RSTR_I2C2RST = ((std::uint32_t)0x00400000);
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined(STM32F10X_HD) || defined(STM32F10X_MD) || defined(STM32F10X_LD) || defined(STM32F10X_XL)
#undef RCC_APB1RSTR_USBRST
constexpr auto RCC_APB1RSTR_USBRST = ((std::uint32_t)0x00800000);
#endif

#if defined(STM32F10X_HD) || defined(STM32F10X_CL) || defined(STM32F10X_XL)
#undef RCC_APB1RSTR_TIM5RST
constexpr auto RCC_APB1RSTR_TIM5RST = ((std::uint32_t)0x00000008);
#undef RCC_APB1RSTR_TIM6RST
constexpr auto RCC_APB1RSTR_TIM6RST = ((std::uint32_t)0x00000010);
#undef RCC_APB1RSTR_TIM7RST
constexpr auto RCC_APB1RSTR_TIM7RST = ((std::uint32_t)0x00000020);
#undef RCC_APB1RSTR_SPI3RST
constexpr auto RCC_APB1RSTR_SPI3RST = ((std::uint32_t)0x00008000);
#undef RCC_APB1RSTR_UART4RST
constexpr auto RCC_APB1RSTR_UART4RST = ((std::uint32_t)0x00080000);
#undef RCC_APB1RSTR_UART5RST
constexpr auto RCC_APB1RSTR_UART5RST = ((std::uint32_t)0x00100000);
#undef RCC_APB1RSTR_DACRST
constexpr auto RCC_APB1RSTR_DACRST = ((std::uint32_t)0x20000000);
#endif

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef RCC_APB1RSTR_TIM6RST
constexpr auto RCC_APB1RSTR_TIM6RST = ((std::uint32_t)0x00000010);
#undef RCC_APB1RSTR_TIM7RST
constexpr auto RCC_APB1RSTR_TIM7RST = ((std::uint32_t)0x00000020);
#undef RCC_APB1RSTR_DACRST
constexpr auto RCC_APB1RSTR_DACRST = ((std::uint32_t)0x20000000);
#undef RCC_APB1RSTR_CECRST
constexpr auto RCC_APB1RSTR_CECRST = ((std::uint32_t)0x40000000);
#endif

#if defined(STM32F10X_HD_VL)
#undef RCC_APB1RSTR_TIM5RST
constexpr auto RCC_APB1RSTR_TIM5RST = ((std::uint32_t)0x00000008);
#undef RCC_APB1RSTR_TIM12RST
constexpr auto RCC_APB1RSTR_TIM12RST = ((std::uint32_t)0x00000040);
#undef RCC_APB1RSTR_TIM13RST
constexpr auto RCC_APB1RSTR_TIM13RST = ((std::uint32_t)0x00000080);
#undef RCC_APB1RSTR_TIM14RST
constexpr auto RCC_APB1RSTR_TIM14RST = ((std::uint32_t)0x00000100);
#undef RCC_APB1RSTR_SPI3RST
constexpr auto RCC_APB1RSTR_SPI3RST = ((std::uint32_t)0x00008000);
#undef RCC_APB1RSTR_UART4RST
constexpr auto RCC_APB1RSTR_UART4RST = ((std::uint32_t)0x00080000);
#undef RCC_APB1RSTR_UART5RST
constexpr auto RCC_APB1RSTR_UART5RST = ((std::uint32_t)0x00100000);
#endif

#ifdef STM32F10X_CL
#undef RCC_APB1RSTR_CAN2RST
constexpr auto RCC_APB1RSTR_CAN2RST = ((std::uint32_t)0x04000000);
#endif /* STM32F10X_CL */

#ifdef STM32F10X_XL
#undef RCC_APB1RSTR_TIM12RST
constexpr auto RCC_APB1RSTR_TIM12RST = ((std::uint32_t)0x00000040);
#undef RCC_APB1RSTR_TIM13RST
constexpr auto RCC_APB1RSTR_TIM13RST = ((std::uint32_t)0x00000080);
#undef RCC_APB1RSTR_TIM14RST
constexpr auto RCC_APB1RSTR_TIM14RST = ((std::uint32_t)0x00000100);
#endif /* STM32F10X_XL */

/******************  Bit definition for RCC_AHBENR register  ******************/
#undef RCC_AHBENR_DMA1EN
constexpr auto RCC_AHBENR_DMA1EN = ((std::uint16_t)0x0001);
#undef RCC_AHBENR_SRAMEN
constexpr auto RCC_AHBENR_SRAMEN = ((std::uint16_t)0x0004);
#undef RCC_AHBENR_FLITFEN
constexpr auto RCC_AHBENR_FLITFEN = ((std::uint16_t)0x0010);
#undef RCC_AHBENR_CRCEN
constexpr auto RCC_AHBENR_CRCEN = ((std::uint16_t)0x0040);

#if defined(STM32F10X_HD) || defined(STM32F10X_XL) || defined(STM32F10X_CL) || defined(STM32F10X_HD_VL)
#undef RCC_AHBENR_DMA2EN
constexpr auto RCC_AHBENR_DMA2EN = ((std::uint16_t)0x0002);
#endif

#if defined(STM32F10X_HD) || defined(STM32F10X_XL)
#undef RCC_AHBENR_FSMCEN
constexpr auto RCC_AHBENR_FSMCEN = ((std::uint16_t)0x0100);
#undef RCC_AHBENR_SDIOEN
constexpr auto RCC_AHBENR_SDIOEN = ((std::uint16_t)0x0400);
#endif

#if defined(STM32F10X_HD_VL)
#undef RCC_AHBENR_FSMCEN
constexpr auto RCC_AHBENR_FSMCEN = ((std::uint16_t)0x0100);
#endif

#ifdef STM32F10X_CL
#undef RCC_AHBENR_OTGFSEN
constexpr auto RCC_AHBENR_OTGFSEN = ((std::uint32_t)0x00001000);
#undef RCC_AHBENR_ETHMACEN
constexpr auto RCC_AHBENR_ETHMACEN = ((std::uint32_t)0x00004000);
#undef RCC_AHBENR_ETHMACTXEN
constexpr auto RCC_AHBENR_ETHMACTXEN = ((std::uint32_t)0x00008000);
#undef RCC_AHBENR_ETHMACRXEN
constexpr auto RCC_AHBENR_ETHMACRXEN = ((std::uint32_t)0x00010000);
#endif /* STM32F10X_CL */

/******************  Bit definition for RCC_APB2ENR register  *****************/
#undef RCC_APB2ENR_AFIOEN
constexpr auto RCC_APB2ENR_AFIOEN = ((std::uint32_t)0x00000001);
#undef RCC_APB2ENR_IOPAEN
constexpr auto RCC_APB2ENR_IOPAEN = ((std::uint32_t)0x00000004);
#undef RCC_APB2ENR_IOPBEN
constexpr auto RCC_APB2ENR_IOPBEN = ((std::uint32_t)0x00000008);
#undef RCC_APB2ENR_IOPCEN
constexpr auto RCC_APB2ENR_IOPCEN = ((std::uint32_t)0x00000010);
#undef RCC_APB2ENR_IOPDEN
constexpr auto RCC_APB2ENR_IOPDEN = ((std::uint32_t)0x00000020);
#undef RCC_APB2ENR_ADC1EN
constexpr auto RCC_APB2ENR_ADC1EN = ((std::uint32_t)0x00000200);

#if !defined(STM32F10X_LD_VL) && !defined(STM32F10X_MD_VL) && !defined(STM32F10X_HD_VL)
#undef RCC_APB2ENR_ADC2EN
constexpr auto RCC_APB2ENR_ADC2EN = ((std::uint32_t)0x00000400);
#endif

#undef RCC_APB2ENR_TIM1EN
constexpr auto RCC_APB2ENR_TIM1EN = ((std::uint32_t)0x00000800);
#undef RCC_APB2ENR_SPI1EN
constexpr auto RCC_APB2ENR_SPI1EN = ((std::uint32_t)0x00001000);
#undef RCC_APB2ENR_USART1EN
constexpr auto RCC_APB2ENR_USART1EN = ((std::uint32_t)0x00004000);

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef RCC_APB2ENR_TIM15EN
constexpr auto RCC_APB2ENR_TIM15EN = ((std::uint32_t)0x00010000);
#undef RCC_APB2ENR_TIM16EN
constexpr auto RCC_APB2ENR_TIM16EN = ((std::uint32_t)0x00020000);
#undef RCC_APB2ENR_TIM17EN
constexpr auto RCC_APB2ENR_TIM17EN = ((std::uint32_t)0x00040000);
#endif

#if !defined(STM32F10X_LD) && !defined(STM32F10X_LD_VL)
#undef RCC_APB2ENR_IOPEEN
constexpr auto RCC_APB2ENR_IOPEEN = ((std::uint32_t)0x00000040);
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined(STM32F10X_HD) || defined(STM32F10X_XL)
#undef RCC_APB2ENR_IOPFEN
constexpr auto RCC_APB2ENR_IOPFEN = ((std::uint32_t)0x00000080);
#undef RCC_APB2ENR_IOPGEN
constexpr auto RCC_APB2ENR_IOPGEN = ((std::uint32_t)0x00000100);
#undef RCC_APB2ENR_TIM8EN
constexpr auto RCC_APB2ENR_TIM8EN = ((std::uint32_t)0x00002000);
#undef RCC_APB2ENR_ADC3EN
constexpr auto RCC_APB2ENR_ADC3EN = ((std::uint32_t)0x00008000);
#endif

#if defined(STM32F10X_HD_VL)
#undef RCC_APB2ENR_IOPFEN
constexpr auto RCC_APB2ENR_IOPFEN = ((std::uint32_t)0x00000080);
#undef RCC_APB2ENR_IOPGEN
constexpr auto RCC_APB2ENR_IOPGEN = ((std::uint32_t)0x00000100);
#endif

#ifdef STM32F10X_XL
#undef RCC_APB2ENR_TIM9EN
constexpr auto RCC_APB2ENR_TIM9EN = ((std::uint32_t)0x00080000);
#undef RCC_APB2ENR_TIM10EN
constexpr auto RCC_APB2ENR_TIM10EN = ((std::uint32_t)0x00100000);
#undef RCC_APB2ENR_TIM11EN
constexpr auto RCC_APB2ENR_TIM11EN = ((std::uint32_t)0x00200000);
#endif

/*****************  Bit definition for RCC_APB1ENR register  ******************/
#undef RCC_APB1ENR_TIM2EN
constexpr auto RCC_APB1ENR_TIM2EN = ((std::uint32_t)0x00000001);
#undef RCC_APB1ENR_TIM3EN
constexpr auto RCC_APB1ENR_TIM3EN = ((std::uint32_t)0x00000002);
#undef RCC_APB1ENR_WWDGEN
constexpr auto RCC_APB1ENR_WWDGEN = ((std::uint32_t)0x00000800);
#undef RCC_APB1ENR_USART2EN
constexpr auto RCC_APB1ENR_USART2EN = ((std::uint32_t)0x00020000);
#undef RCC_APB1ENR_I2C1EN
constexpr auto RCC_APB1ENR_I2C1EN = ((std::uint32_t)0x00200000);

#if !defined(STM32F10X_LD_VL) && !defined(STM32F10X_MD_VL) && !defined(STM32F10X_HD_VL)
#undef RCC_APB1ENR_CAN1EN
constexpr auto RCC_APB1ENR_CAN1EN = ((std::uint32_t)0x02000000);
#endif

#undef RCC_APB1ENR_BKPEN
constexpr auto RCC_APB1ENR_BKPEN = ((std::uint32_t)0x08000000);
#undef RCC_APB1ENR_PWREN
constexpr auto RCC_APB1ENR_PWREN = ((std::uint32_t)0x10000000);

#if !defined(STM32F10X_LD) && !defined(STM32F10X_LD_VL)
#undef RCC_APB1ENR_TIM4EN
constexpr auto RCC_APB1ENR_TIM4EN = ((std::uint32_t)0x00000004);
#undef RCC_APB1ENR_SPI2EN
constexpr auto RCC_APB1ENR_SPI2EN = ((std::uint32_t)0x00004000);
#undef RCC_APB1ENR_USART3EN
constexpr auto RCC_APB1ENR_USART3EN = ((std::uint32_t)0x00040000);
#undef RCC_APB1ENR_I2C2EN
constexpr auto RCC_APB1ENR_I2C2EN = ((std::uint32_t)0x00400000);
#endif /* STM32F10X_LD && STM32F10X_LD_VL */

#if defined(STM32F10X_HD) || defined(STM32F10X_MD) || defined(STM32F10X_LD)
#undef RCC_APB1ENR_USBEN
constexpr auto RCC_APB1ENR_USBEN = ((std::uint32_t)0x00800000);
#endif

#if defined(STM32F10X_HD) || defined(STM32F10X_CL)
#undef RCC_APB1ENR_TIM5EN
constexpr auto RCC_APB1ENR_TIM5EN = ((std::uint32_t)0x00000008);
#undef RCC_APB1ENR_TIM6EN
constexpr auto RCC_APB1ENR_TIM6EN = ((std::uint32_t)0x00000010);
#undef RCC_APB1ENR_TIM7EN
constexpr auto RCC_APB1ENR_TIM7EN = ((std::uint32_t)0x00000020);
#undef RCC_APB1ENR_SPI3EN
constexpr auto RCC_APB1ENR_SPI3EN = ((std::uint32_t)0x00008000);
#undef RCC_APB1ENR_UART4EN
constexpr auto RCC_APB1ENR_UART4EN = ((std::uint32_t)0x00080000);
#undef RCC_APB1ENR_UART5EN
constexpr auto RCC_APB1ENR_UART5EN = ((std::uint32_t)0x00100000);
#undef RCC_APB1ENR_DACEN
constexpr auto RCC_APB1ENR_DACEN = ((std::uint32_t)0x20000000);
#endif

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef RCC_APB1ENR_TIM6EN
constexpr auto RCC_APB1ENR_TIM6EN = ((std::uint32_t)0x00000010);
#undef RCC_APB1ENR_TIM7EN
constexpr auto RCC_APB1ENR_TIM7EN = ((std::uint32_t)0x00000020);
#undef RCC_APB1ENR_DACEN
constexpr auto RCC_APB1ENR_DACEN = ((std::uint32_t)0x20000000);
#undef RCC_APB1ENR_CECEN
constexpr auto RCC_APB1ENR_CECEN = ((std::uint32_t)0x40000000);
#endif

#ifdef STM32F10X_HD_VL
#undef RCC_APB1ENR_TIM5EN
constexpr auto RCC_APB1ENR_TIM5EN = ((std::uint32_t)0x00000008);
#undef RCC_APB1ENR_TIM12EN
constexpr auto RCC_APB1ENR_TIM12EN = ((std::uint32_t)0x00000040);
#undef RCC_APB1ENR_TIM13EN
constexpr auto RCC_APB1ENR_TIM13EN = ((std::uint32_t)0x00000080);
#undef RCC_APB1ENR_TIM14EN
constexpr auto RCC_APB1ENR_TIM14EN = ((std::uint32_t)0x00000100);
#undef RCC_APB1ENR_SPI3EN
constexpr auto RCC_APB1ENR_SPI3EN = ((std::uint32_t)0x00008000);
#undef RCC_APB1ENR_UART4EN
constexpr auto RCC_APB1ENR_UART4EN = ((std::uint32_t)0x00080000);
#undef RCC_APB1ENR_UART5EN
constexpr auto RCC_APB1ENR_UART5EN = ((std::uint32_t)0x00100000);
#endif /* STM32F10X_HD_VL */

#ifdef STM32F10X_CL
#undef RCC_APB1ENR_CAN2EN
constexpr auto RCC_APB1ENR_CAN2EN = ((std::uint32_t)0x04000000);
#endif /* STM32F10X_CL */

#ifdef STM32F10X_XL
#undef RCC_APB1ENR_TIM12EN
constexpr auto RCC_APB1ENR_TIM12EN = ((std::uint32_t)0x00000040);
#undef RCC_APB1ENR_TIM13EN
constexpr auto RCC_APB1ENR_TIM13EN = ((std::uint32_t)0x00000080);
#undef RCC_APB1ENR_TIM14EN
constexpr auto RCC_APB1ENR_TIM14EN = ((std::uint32_t)0x00000100);
#endif /* STM32F10X_XL */

/*******************  Bit definition for RCC_BDCR register  *******************/
#undef RCC_BDCR_LSEON
constexpr auto RCC_BDCR_LSEON = ((std::uint32_t)0x00000001);
#undef RCC_BDCR_LSERDY
constexpr auto RCC_BDCR_LSERDY = ((std::uint32_t)0x00000002);
#undef RCC_BDCR_LSEBYP
constexpr auto RCC_BDCR_LSEBYP = ((std::uint32_t)0x00000004);

#undef RCC_BDCR_RTCSEL
constexpr auto RCC_BDCR_RTCSEL = ((std::uint32_t)0x00000300);
#undef RCC_BDCR_RTCSEL_0
constexpr auto RCC_BDCR_RTCSEL_0 = ((std::uint32_t)0x00000100);
#undef RCC_BDCR_RTCSEL_1
constexpr auto RCC_BDCR_RTCSEL_1 = ((std::uint32_t)0x00000200);

/*!< RTC congiguration */
#undef RCC_BDCR_RTCSEL_NOCLOCK
constexpr auto RCC_BDCR_RTCSEL_NOCLOCK = ((std::uint32_t)0x00000000);
#undef RCC_BDCR_RTCSEL_LSE
constexpr auto RCC_BDCR_RTCSEL_LSE = ((std::uint32_t)0x00000100);
#undef RCC_BDCR_RTCSEL_LSI
constexpr auto RCC_BDCR_RTCSEL_LSI = ((std::uint32_t)0x00000200);
#undef RCC_BDCR_RTCSEL_HSE
constexpr auto RCC_BDCR_RTCSEL_HSE = ((std::uint32_t)0x00000300);

#undef RCC_BDCR_RTCEN
constexpr auto RCC_BDCR_RTCEN = ((std::uint32_t)0x00008000);
#undef RCC_BDCR_BDRST
constexpr auto RCC_BDCR_BDRST = ((std::uint32_t)0x00010000);

/*******************  Bit definition for RCC_CSR register  ********************/
#undef RCC_CSR_LSION
constexpr auto RCC_CSR_LSION = ((std::uint32_t)0x00000001);
#undef RCC_CSR_LSIRDY
constexpr auto RCC_CSR_LSIRDY = ((std::uint32_t)0x00000002);
#undef RCC_CSR_RMVF
constexpr auto RCC_CSR_RMVF = ((std::uint32_t)0x01000000);
#undef RCC_CSR_PINRSTF
constexpr auto RCC_CSR_PINRSTF = ((std::uint32_t)0x04000000);
#undef RCC_CSR_PORRSTF
constexpr auto RCC_CSR_PORRSTF = ((std::uint32_t)0x08000000);
#undef RCC_CSR_SFTRSTF
constexpr auto RCC_CSR_SFTRSTF = ((std::uint32_t)0x10000000);
#undef RCC_CSR_IWDGRSTF
constexpr auto RCC_CSR_IWDGRSTF = ((std::uint32_t)0x20000000);
#undef RCC_CSR_WWDGRSTF
constexpr auto RCC_CSR_WWDGRSTF = ((std::uint32_t)0x40000000);
#undef RCC_CSR_LPWRRSTF
constexpr auto RCC_CSR_LPWRRSTF = ((std::uint32_t)0x80000000);

#ifdef STM32F10X_CL
/*******************  Bit definition for RCC_AHBRSTR register  ****************/
#undef RCC_AHBRSTR_OTGFSRST
constexpr auto RCC_AHBRSTR_OTGFSRST = ((std::uint32_t)0x00001000);
#undef RCC_AHBRSTR_ETHMACRST
constexpr auto RCC_AHBRSTR_ETHMACRST = ((std::uint32_t)0x00004000);

/*******************  Bit definition for RCC_CFGR2 register  ******************/
/*!< PREDIV1 configuration */
#undef RCC_CFGR2_PREDIV1
constexpr auto RCC_CFGR2_PREDIV1 = ((std::uint32_t)0x0000000F);
#undef RCC_CFGR2_PREDIV1_0
constexpr auto RCC_CFGR2_PREDIV1_0 = ((std::uint32_t)0x00000001);
#undef RCC_CFGR2_PREDIV1_1
constexpr auto RCC_CFGR2_PREDIV1_1 = ((std::uint32_t)0x00000002);
#undef RCC_CFGR2_PREDIV1_2
constexpr auto RCC_CFGR2_PREDIV1_2 = ((std::uint32_t)0x00000004);
#undef RCC_CFGR2_PREDIV1_3
constexpr auto RCC_CFGR2_PREDIV1_3 = ((std::uint32_t)0x00000008);

#undef RCC_CFGR2_PREDIV1_DIV1
constexpr auto RCC_CFGR2_PREDIV1_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR2_PREDIV1_DIV2
constexpr auto RCC_CFGR2_PREDIV1_DIV2 = ((std::uint32_t)0x00000001);
#undef RCC_CFGR2_PREDIV1_DIV3
constexpr auto RCC_CFGR2_PREDIV1_DIV3 = ((std::uint32_t)0x00000002);
#undef RCC_CFGR2_PREDIV1_DIV4
constexpr auto RCC_CFGR2_PREDIV1_DIV4 = ((std::uint32_t)0x00000003);
#undef RCC_CFGR2_PREDIV1_DIV5
constexpr auto RCC_CFGR2_PREDIV1_DIV5 = ((std::uint32_t)0x00000004);
#undef RCC_CFGR2_PREDIV1_DIV6
constexpr auto RCC_CFGR2_PREDIV1_DIV6 = ((std::uint32_t)0x00000005);
#undef RCC_CFGR2_PREDIV1_DIV7
constexpr auto RCC_CFGR2_PREDIV1_DIV7 = ((std::uint32_t)0x00000006);
#undef RCC_CFGR2_PREDIV1_DIV8
constexpr auto RCC_CFGR2_PREDIV1_DIV8 = ((std::uint32_t)0x00000007);
#undef RCC_CFGR2_PREDIV1_DIV9
constexpr auto RCC_CFGR2_PREDIV1_DIV9 = ((std::uint32_t)0x00000008);
#undef RCC_CFGR2_PREDIV1_DIV10
constexpr auto RCC_CFGR2_PREDIV1_DIV10 = ((std::uint32_t)0x00000009);
#undef RCC_CFGR2_PREDIV1_DIV11
constexpr auto RCC_CFGR2_PREDIV1_DIV11 = ((std::uint32_t)0x0000000A);
#undef RCC_CFGR2_PREDIV1_DIV12
constexpr auto RCC_CFGR2_PREDIV1_DIV12 = ((std::uint32_t)0x0000000B);
#undef RCC_CFGR2_PREDIV1_DIV13
constexpr auto RCC_CFGR2_PREDIV1_DIV13 = ((std::uint32_t)0x0000000C);
#undef RCC_CFGR2_PREDIV1_DIV14
constexpr auto RCC_CFGR2_PREDIV1_DIV14 = ((std::uint32_t)0x0000000D);
#undef RCC_CFGR2_PREDIV1_DIV15
constexpr auto RCC_CFGR2_PREDIV1_DIV15 = ((std::uint32_t)0x0000000E);
#undef RCC_CFGR2_PREDIV1_DIV16
constexpr auto RCC_CFGR2_PREDIV1_DIV16 = ((std::uint32_t)0x0000000F);

/*!< PREDIV2 configuration */
#undef RCC_CFGR2_PREDIV2
constexpr auto RCC_CFGR2_PREDIV2 = ((std::uint32_t)0x000000F0);
#undef RCC_CFGR2_PREDIV2_0
constexpr auto RCC_CFGR2_PREDIV2_0 = ((std::uint32_t)0x00000010);
#undef RCC_CFGR2_PREDIV2_1
constexpr auto RCC_CFGR2_PREDIV2_1 = ((std::uint32_t)0x00000020);
#undef RCC_CFGR2_PREDIV2_2
constexpr auto RCC_CFGR2_PREDIV2_2 = ((std::uint32_t)0x00000040);
#undef RCC_CFGR2_PREDIV2_3
constexpr auto RCC_CFGR2_PREDIV2_3 = ((std::uint32_t)0x00000080);

#undef RCC_CFGR2_PREDIV2_DIV1
constexpr auto RCC_CFGR2_PREDIV2_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR2_PREDIV2_DIV2
constexpr auto RCC_CFGR2_PREDIV2_DIV2 = ((std::uint32_t)0x00000010);
#undef RCC_CFGR2_PREDIV2_DIV3
constexpr auto RCC_CFGR2_PREDIV2_DIV3 = ((std::uint32_t)0x00000020);
#undef RCC_CFGR2_PREDIV2_DIV4
constexpr auto RCC_CFGR2_PREDIV2_DIV4 = ((std::uint32_t)0x00000030);
#undef RCC_CFGR2_PREDIV2_DIV5
constexpr auto RCC_CFGR2_PREDIV2_DIV5 = ((std::uint32_t)0x00000040);
#undef RCC_CFGR2_PREDIV2_DIV6
constexpr auto RCC_CFGR2_PREDIV2_DIV6 = ((std::uint32_t)0x00000050);
#undef RCC_CFGR2_PREDIV2_DIV7
constexpr auto RCC_CFGR2_PREDIV2_DIV7 = ((std::uint32_t)0x00000060);
#undef RCC_CFGR2_PREDIV2_DIV8
constexpr auto RCC_CFGR2_PREDIV2_DIV8 = ((std::uint32_t)0x00000070);
#undef RCC_CFGR2_PREDIV2_DIV9
constexpr auto RCC_CFGR2_PREDIV2_DIV9 = ((std::uint32_t)0x00000080);
#undef RCC_CFGR2_PREDIV2_DIV10
constexpr auto RCC_CFGR2_PREDIV2_DIV10 = ((std::uint32_t)0x00000090);
#undef RCC_CFGR2_PREDIV2_DIV11
constexpr auto RCC_CFGR2_PREDIV2_DIV11 = ((std::uint32_t)0x000000A0);
#undef RCC_CFGR2_PREDIV2_DIV12
constexpr auto RCC_CFGR2_PREDIV2_DIV12 = ((std::uint32_t)0x000000B0);
#undef RCC_CFGR2_PREDIV2_DIV13
constexpr auto RCC_CFGR2_PREDIV2_DIV13 = ((std::uint32_t)0x000000C0);
#undef RCC_CFGR2_PREDIV2_DIV14
constexpr auto RCC_CFGR2_PREDIV2_DIV14 = ((std::uint32_t)0x000000D0);
#undef RCC_CFGR2_PREDIV2_DIV15
constexpr auto RCC_CFGR2_PREDIV2_DIV15 = ((std::uint32_t)0x000000E0);
#undef RCC_CFGR2_PREDIV2_DIV16
constexpr auto RCC_CFGR2_PREDIV2_DIV16 = ((std::uint32_t)0x000000F0);

/*!< PLL2MUL configuration */
#undef RCC_CFGR2_PLL2MUL
constexpr auto RCC_CFGR2_PLL2MUL = ((std::uint32_t)0x00000F00);
#undef RCC_CFGR2_PLL2MUL_0
constexpr auto RCC_CFGR2_PLL2MUL_0 = ((std::uint32_t)0x00000100);
#undef RCC_CFGR2_PLL2MUL_1
constexpr auto RCC_CFGR2_PLL2MUL_1 = ((std::uint32_t)0x00000200);
#undef RCC_CFGR2_PLL2MUL_2
constexpr auto RCC_CFGR2_PLL2MUL_2 = ((std::uint32_t)0x00000400);
#undef RCC_CFGR2_PLL2MUL_3
constexpr auto RCC_CFGR2_PLL2MUL_3 = ((std::uint32_t)0x00000800);

#undef RCC_CFGR2_PLL2MUL8
constexpr auto RCC_CFGR2_PLL2MUL8 = ((std::uint32_t)0x00000600);
#undef RCC_CFGR2_PLL2MUL9
constexpr auto RCC_CFGR2_PLL2MUL9 = ((std::uint32_t)0x00000700);
#undef RCC_CFGR2_PLL2MUL10
constexpr auto RCC_CFGR2_PLL2MUL10 = ((std::uint32_t)0x00000800);
#undef RCC_CFGR2_PLL2MUL11
constexpr auto RCC_CFGR2_PLL2MUL11 = ((std::uint32_t)0x00000900);
#undef RCC_CFGR2_PLL2MUL12
constexpr auto RCC_CFGR2_PLL2MUL12 = ((std::uint32_t)0x00000A00);
#undef RCC_CFGR2_PLL2MUL13
constexpr auto RCC_CFGR2_PLL2MUL13 = ((std::uint32_t)0x00000B00);
#undef RCC_CFGR2_PLL2MUL14
constexpr auto RCC_CFGR2_PLL2MUL14 = ((std::uint32_t)0x00000C00);
#undef RCC_CFGR2_PLL2MUL16
constexpr auto RCC_CFGR2_PLL2MUL16 = ((std::uint32_t)0x00000E00);
#undef RCC_CFGR2_PLL2MUL20
constexpr auto RCC_CFGR2_PLL2MUL20 = ((std::uint32_t)0x00000F00);

/*!< PLL3MUL configuration */
#undef RCC_CFGR2_PLL3MUL
constexpr auto RCC_CFGR2_PLL3MUL = ((std::uint32_t)0x0000F000);
#undef RCC_CFGR2_PLL3MUL_0
constexpr auto RCC_CFGR2_PLL3MUL_0 = ((std::uint32_t)0x00001000);
#undef RCC_CFGR2_PLL3MUL_1
constexpr auto RCC_CFGR2_PLL3MUL_1 = ((std::uint32_t)0x00002000);
#undef RCC_CFGR2_PLL3MUL_2
constexpr auto RCC_CFGR2_PLL3MUL_2 = ((std::uint32_t)0x00004000);
#undef RCC_CFGR2_PLL3MUL_3
constexpr auto RCC_CFGR2_PLL3MUL_3 = ((std::uint32_t)0x00008000);

#undef RCC_CFGR2_PLL3MUL8
constexpr auto RCC_CFGR2_PLL3MUL8 = ((std::uint32_t)0x00006000);
#undef RCC_CFGR2_PLL3MUL9
constexpr auto RCC_CFGR2_PLL3MUL9 = ((std::uint32_t)0x00007000);
#undef RCC_CFGR2_PLL3MUL10
constexpr auto RCC_CFGR2_PLL3MUL10 = ((std::uint32_t)0x00008000);
#undef RCC_CFGR2_PLL3MUL11
constexpr auto RCC_CFGR2_PLL3MUL11 = ((std::uint32_t)0x00009000);
#undef RCC_CFGR2_PLL3MUL12
constexpr auto RCC_CFGR2_PLL3MUL12 = ((std::uint32_t)0x0000A000);
#undef RCC_CFGR2_PLL3MUL13
constexpr auto RCC_CFGR2_PLL3MUL13 = ((std::uint32_t)0x0000B000);
#undef RCC_CFGR2_PLL3MUL14
constexpr auto RCC_CFGR2_PLL3MUL14 = ((std::uint32_t)0x0000C000);
#undef RCC_CFGR2_PLL3MUL16
constexpr auto RCC_CFGR2_PLL3MUL16 = ((std::uint32_t)0x0000E000);
#undef RCC_CFGR2_PLL3MUL20
constexpr auto RCC_CFGR2_PLL3MUL20 = ((std::uint32_t)0x0000F000);

#undef RCC_CFGR2_PREDIV1SRC
constexpr auto RCC_CFGR2_PREDIV1SRC = ((std::uint32_t)0x00010000);
#undef RCC_CFGR2_PREDIV1SRC_PLL2
constexpr auto RCC_CFGR2_PREDIV1SRC_PLL2 = ((std::uint32_t)0x00010000);
#undef RCC_CFGR2_PREDIV1SRC_HSE
constexpr auto RCC_CFGR2_PREDIV1SRC_HSE = ((std::uint32_t)0x00000000);
#undef RCC_CFGR2_I2S2SRC
constexpr auto RCC_CFGR2_I2S2SRC = ((std::uint32_t)0x00020000);
#undef RCC_CFGR2_I2S3SRC
constexpr auto RCC_CFGR2_I2S3SRC = ((std::uint32_t)0x00040000);
#endif /* STM32F10X_CL */

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
/*******************  Bit definition for RCC_CFGR2 register  ******************/
/*!< PREDIV1 configuration */
#undef RCC_CFGR2_PREDIV1
constexpr auto RCC_CFGR2_PREDIV1 = ((std::uint32_t)0x0000000F);
#undef RCC_CFGR2_PREDIV1_0
constexpr auto RCC_CFGR2_PREDIV1_0 = ((std::uint32_t)0x00000001);
#undef RCC_CFGR2_PREDIV1_1
constexpr auto RCC_CFGR2_PREDIV1_1 = ((std::uint32_t)0x00000002);
#undef RCC_CFGR2_PREDIV1_2
constexpr auto RCC_CFGR2_PREDIV1_2 = ((std::uint32_t)0x00000004);
#undef RCC_CFGR2_PREDIV1_3
constexpr auto RCC_CFGR2_PREDIV1_3 = ((std::uint32_t)0x00000008);

#undef RCC_CFGR2_PREDIV1_DIV1
constexpr auto RCC_CFGR2_PREDIV1_DIV1 = ((std::uint32_t)0x00000000);
#undef RCC_CFGR2_PREDIV1_DIV2
constexpr auto RCC_CFGR2_PREDIV1_DIV2 = ((std::uint32_t)0x00000001);
#undef RCC_CFGR2_PREDIV1_DIV3
constexpr auto RCC_CFGR2_PREDIV1_DIV3 = ((std::uint32_t)0x00000002);
#undef RCC_CFGR2_PREDIV1_DIV4
constexpr auto RCC_CFGR2_PREDIV1_DIV4 = ((std::uint32_t)0x00000003);
#undef RCC_CFGR2_PREDIV1_DIV5
constexpr auto RCC_CFGR2_PREDIV1_DIV5 = ((std::uint32_t)0x00000004);
#undef RCC_CFGR2_PREDIV1_DIV6
constexpr auto RCC_CFGR2_PREDIV1_DIV6 = ((std::uint32_t)0x00000005);
#undef RCC_CFGR2_PREDIV1_DIV7
constexpr auto RCC_CFGR2_PREDIV1_DIV7 = ((std::uint32_t)0x00000006);
#undef RCC_CFGR2_PREDIV1_DIV8
constexpr auto RCC_CFGR2_PREDIV1_DIV8 = ((std::uint32_t)0x00000007);
#undef RCC_CFGR2_PREDIV1_DIV9
constexpr auto RCC_CFGR2_PREDIV1_DIV9 = ((std::uint32_t)0x00000008);
#undef RCC_CFGR2_PREDIV1_DIV10
constexpr auto RCC_CFGR2_PREDIV1_DIV10 = ((std::uint32_t)0x00000009);
#undef RCC_CFGR2_PREDIV1_DIV11
constexpr auto RCC_CFGR2_PREDIV1_DIV11 = ((std::uint32_t)0x0000000A);
#undef RCC_CFGR2_PREDIV1_DIV12
constexpr auto RCC_CFGR2_PREDIV1_DIV12 = ((std::uint32_t)0x0000000B);
#undef RCC_CFGR2_PREDIV1_DIV13
constexpr auto RCC_CFGR2_PREDIV1_DIV13 = ((std::uint32_t)0x0000000C);
#undef RCC_CFGR2_PREDIV1_DIV14
constexpr auto RCC_CFGR2_PREDIV1_DIV14 = ((std::uint32_t)0x0000000D);
#undef RCC_CFGR2_PREDIV1_DIV15
constexpr auto RCC_CFGR2_PREDIV1_DIV15 = ((std::uint32_t)0x0000000E);
#undef RCC_CFGR2_PREDIV1_DIV16
constexpr auto RCC_CFGR2_PREDIV1_DIV16 = ((std::uint32_t)0x0000000F);
#endif

/******************************************************************************/
/*                                                                            */
/*                General Purpose and Alternate Function I/O                  */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GPIO_CRL register  *******************/
#undef GPIO_CRL_MODE
constexpr auto GPIO_CRL_MODE = ((std::uint32_t)0x33333333);

#undef GPIO_CRL_MODE0
constexpr auto GPIO_CRL_MODE0 = ((std::uint32_t)0x00000003);
#undef GPIO_CRL_MODE0_0
constexpr auto GPIO_CRL_MODE0_0 = ((std::uint32_t)0x00000001);
#undef GPIO_CRL_MODE0_1
constexpr auto GPIO_CRL_MODE0_1 = ((std::uint32_t)0x00000002);

#undef GPIO_CRL_MODE1
constexpr auto GPIO_CRL_MODE1 = ((std::uint32_t)0x00000030);
#undef GPIO_CRL_MODE1_0
constexpr auto GPIO_CRL_MODE1_0 = ((std::uint32_t)0x00000010);
#undef GPIO_CRL_MODE1_1
constexpr auto GPIO_CRL_MODE1_1 = ((std::uint32_t)0x00000020);

#undef GPIO_CRL_MODE2
constexpr auto GPIO_CRL_MODE2 = ((std::uint32_t)0x00000300);
#undef GPIO_CRL_MODE2_0
constexpr auto GPIO_CRL_MODE2_0 = ((std::uint32_t)0x00000100);
#undef GPIO_CRL_MODE2_1
constexpr auto GPIO_CRL_MODE2_1 = ((std::uint32_t)0x00000200);

#undef GPIO_CRL_MODE3
constexpr auto GPIO_CRL_MODE3 = ((std::uint32_t)0x00003000);
#undef GPIO_CRL_MODE3_0
constexpr auto GPIO_CRL_MODE3_0 = ((std::uint32_t)0x00001000);
#undef GPIO_CRL_MODE3_1
constexpr auto GPIO_CRL_MODE3_1 = ((std::uint32_t)0x00002000);

#undef GPIO_CRL_MODE4
constexpr auto GPIO_CRL_MODE4 = ((std::uint32_t)0x00030000);
#undef GPIO_CRL_MODE4_0
constexpr auto GPIO_CRL_MODE4_0 = ((std::uint32_t)0x00010000);
#undef GPIO_CRL_MODE4_1
constexpr auto GPIO_CRL_MODE4_1 = ((std::uint32_t)0x00020000);

#undef GPIO_CRL_MODE5
constexpr auto GPIO_CRL_MODE5 = ((std::uint32_t)0x00300000);
#undef GPIO_CRL_MODE5_0
constexpr auto GPIO_CRL_MODE5_0 = ((std::uint32_t)0x00100000);
#undef GPIO_CRL_MODE5_1
constexpr auto GPIO_CRL_MODE5_1 = ((std::uint32_t)0x00200000);

#undef GPIO_CRL_MODE6
constexpr auto GPIO_CRL_MODE6 = ((std::uint32_t)0x03000000);
#undef GPIO_CRL_MODE6_0
constexpr auto GPIO_CRL_MODE6_0 = ((std::uint32_t)0x01000000);
#undef GPIO_CRL_MODE6_1
constexpr auto GPIO_CRL_MODE6_1 = ((std::uint32_t)0x02000000);

#undef GPIO_CRL_MODE7
constexpr auto GPIO_CRL_MODE7 = ((std::uint32_t)0x30000000);
#undef GPIO_CRL_MODE7_0
constexpr auto GPIO_CRL_MODE7_0 = ((std::uint32_t)0x10000000);
#undef GPIO_CRL_MODE7_1
constexpr auto GPIO_CRL_MODE7_1 = ((std::uint32_t)0x20000000);

#undef GPIO_CRL_CNF
constexpr auto GPIO_CRL_CNF = ((std::uint32_t)0xCCCCCCCC);

#undef GPIO_CRL_CNF0
constexpr auto GPIO_CRL_CNF0 = ((std::uint32_t)0x0000000C);
#undef GPIO_CRL_CNF0_0
constexpr auto GPIO_CRL_CNF0_0 = ((std::uint32_t)0x00000004);
#undef GPIO_CRL_CNF0_1
constexpr auto GPIO_CRL_CNF0_1 = ((std::uint32_t)0x00000008);

#undef GPIO_CRL_CNF1
constexpr auto GPIO_CRL_CNF1 = ((std::uint32_t)0x000000C0);
#undef GPIO_CRL_CNF1_0
constexpr auto GPIO_CRL_CNF1_0 = ((std::uint32_t)0x00000040);
#undef GPIO_CRL_CNF1_1
constexpr auto GPIO_CRL_CNF1_1 = ((std::uint32_t)0x00000080);

#undef GPIO_CRL_CNF2
constexpr auto GPIO_CRL_CNF2 = ((std::uint32_t)0x00000C00);
#undef GPIO_CRL_CNF2_0
constexpr auto GPIO_CRL_CNF2_0 = ((std::uint32_t)0x00000400);
#undef GPIO_CRL_CNF2_1
constexpr auto GPIO_CRL_CNF2_1 = ((std::uint32_t)0x00000800);

#undef GPIO_CRL_CNF3
constexpr auto GPIO_CRL_CNF3 = ((std::uint32_t)0x0000C000);
#undef GPIO_CRL_CNF3_0
constexpr auto GPIO_CRL_CNF3_0 = ((std::uint32_t)0x00004000);
#undef GPIO_CRL_CNF3_1
constexpr auto GPIO_CRL_CNF3_1 = ((std::uint32_t)0x00008000);

#undef GPIO_CRL_CNF4
constexpr auto GPIO_CRL_CNF4 = ((std::uint32_t)0x000C0000);
#undef GPIO_CRL_CNF4_0
constexpr auto GPIO_CRL_CNF4_0 = ((std::uint32_t)0x00040000);
#undef GPIO_CRL_CNF4_1
constexpr auto GPIO_CRL_CNF4_1 = ((std::uint32_t)0x00080000);

#undef GPIO_CRL_CNF5
constexpr auto GPIO_CRL_CNF5 = ((std::uint32_t)0x00C00000);
#undef GPIO_CRL_CNF5_0
constexpr auto GPIO_CRL_CNF5_0 = ((std::uint32_t)0x00400000);
#undef GPIO_CRL_CNF5_1
constexpr auto GPIO_CRL_CNF5_1 = ((std::uint32_t)0x00800000);

#undef GPIO_CRL_CNF6
constexpr auto GPIO_CRL_CNF6 = ((std::uint32_t)0x0C000000);
#undef GPIO_CRL_CNF6_0
constexpr auto GPIO_CRL_CNF6_0 = ((std::uint32_t)0x04000000);
#undef GPIO_CRL_CNF6_1
constexpr auto GPIO_CRL_CNF6_1 = ((std::uint32_t)0x08000000);

#undef GPIO_CRL_CNF7
constexpr auto GPIO_CRL_CNF7 = ((std::uint32_t)0xC0000000);
#undef GPIO_CRL_CNF7_0
constexpr auto GPIO_CRL_CNF7_0 = ((std::uint32_t)0x40000000);
#undef GPIO_CRL_CNF7_1
constexpr auto GPIO_CRL_CNF7_1 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for GPIO_CRH register  *******************/
#undef GPIO_CRH_MODE
constexpr auto GPIO_CRH_MODE = ((std::uint32_t)0x33333333);

#undef GPIO_CRH_MODE8
constexpr auto GPIO_CRH_MODE8 = ((std::uint32_t)0x00000003);
#undef GPIO_CRH_MODE8_0
constexpr auto GPIO_CRH_MODE8_0 = ((std::uint32_t)0x00000001);
#undef GPIO_CRH_MODE8_1
constexpr auto GPIO_CRH_MODE8_1 = ((std::uint32_t)0x00000002);

#undef GPIO_CRH_MODE9
constexpr auto GPIO_CRH_MODE9 = ((std::uint32_t)0x00000030);
#undef GPIO_CRH_MODE9_0
constexpr auto GPIO_CRH_MODE9_0 = ((std::uint32_t)0x00000010);
#undef GPIO_CRH_MODE9_1
constexpr auto GPIO_CRH_MODE9_1 = ((std::uint32_t)0x00000020);

#undef GPIO_CRH_MODE10
constexpr auto GPIO_CRH_MODE10 = ((std::uint32_t)0x00000300);
#undef GPIO_CRH_MODE10_0
constexpr auto GPIO_CRH_MODE10_0 = ((std::uint32_t)0x00000100);
#undef GPIO_CRH_MODE10_1
constexpr auto GPIO_CRH_MODE10_1 = ((std::uint32_t)0x00000200);

#undef GPIO_CRH_MODE11
constexpr auto GPIO_CRH_MODE11 = ((std::uint32_t)0x00003000);
#undef GPIO_CRH_MODE11_0
constexpr auto GPIO_CRH_MODE11_0 = ((std::uint32_t)0x00001000);
#undef GPIO_CRH_MODE11_1
constexpr auto GPIO_CRH_MODE11_1 = ((std::uint32_t)0x00002000);

#undef GPIO_CRH_MODE12
constexpr auto GPIO_CRH_MODE12 = ((std::uint32_t)0x00030000);
#undef GPIO_CRH_MODE12_0
constexpr auto GPIO_CRH_MODE12_0 = ((std::uint32_t)0x00010000);
#undef GPIO_CRH_MODE12_1
constexpr auto GPIO_CRH_MODE12_1 = ((std::uint32_t)0x00020000);

#undef GPIO_CRH_MODE13
constexpr auto GPIO_CRH_MODE13 = ((std::uint32_t)0x00300000);
#undef GPIO_CRH_MODE13_0
constexpr auto GPIO_CRH_MODE13_0 = ((std::uint32_t)0x00100000);
#undef GPIO_CRH_MODE13_1
constexpr auto GPIO_CRH_MODE13_1 = ((std::uint32_t)0x00200000);

#undef GPIO_CRH_MODE14
constexpr auto GPIO_CRH_MODE14 = ((std::uint32_t)0x03000000);
#undef GPIO_CRH_MODE14_0
constexpr auto GPIO_CRH_MODE14_0 = ((std::uint32_t)0x01000000);
#undef GPIO_CRH_MODE14_1
constexpr auto GPIO_CRH_MODE14_1 = ((std::uint32_t)0x02000000);

#undef GPIO_CRH_MODE15
constexpr auto GPIO_CRH_MODE15 = ((std::uint32_t)0x30000000);
#undef GPIO_CRH_MODE15_0
constexpr auto GPIO_CRH_MODE15_0 = ((std::uint32_t)0x10000000);
#undef GPIO_CRH_MODE15_1
constexpr auto GPIO_CRH_MODE15_1 = ((std::uint32_t)0x20000000);

#undef GPIO_CRH_CNF
constexpr auto GPIO_CRH_CNF = ((std::uint32_t)0xCCCCCCCC);

#undef GPIO_CRH_CNF8
constexpr auto GPIO_CRH_CNF8 = ((std::uint32_t)0x0000000C);
#undef GPIO_CRH_CNF8_0
constexpr auto GPIO_CRH_CNF8_0 = ((std::uint32_t)0x00000004);
#undef GPIO_CRH_CNF8_1
constexpr auto GPIO_CRH_CNF8_1 = ((std::uint32_t)0x00000008);

#undef GPIO_CRH_CNF9
constexpr auto GPIO_CRH_CNF9 = ((std::uint32_t)0x000000C0);
#undef GPIO_CRH_CNF9_0
constexpr auto GPIO_CRH_CNF9_0 = ((std::uint32_t)0x00000040);
#undef GPIO_CRH_CNF9_1
constexpr auto GPIO_CRH_CNF9_1 = ((std::uint32_t)0x00000080);

#undef GPIO_CRH_CNF10
constexpr auto GPIO_CRH_CNF10 = ((std::uint32_t)0x00000C00);
#undef GPIO_CRH_CNF10_0
constexpr auto GPIO_CRH_CNF10_0 = ((std::uint32_t)0x00000400);
#undef GPIO_CRH_CNF10_1
constexpr auto GPIO_CRH_CNF10_1 = ((std::uint32_t)0x00000800);

#undef GPIO_CRH_CNF11
constexpr auto GPIO_CRH_CNF11 = ((std::uint32_t)0x0000C000);
#undef GPIO_CRH_CNF11_0
constexpr auto GPIO_CRH_CNF11_0 = ((std::uint32_t)0x00004000);
#undef GPIO_CRH_CNF11_1
constexpr auto GPIO_CRH_CNF11_1 = ((std::uint32_t)0x00008000);

#undef GPIO_CRH_CNF12
constexpr auto GPIO_CRH_CNF12 = ((std::uint32_t)0x000C0000);
#undef GPIO_CRH_CNF12_0
constexpr auto GPIO_CRH_CNF12_0 = ((std::uint32_t)0x00040000);
#undef GPIO_CRH_CNF12_1
constexpr auto GPIO_CRH_CNF12_1 = ((std::uint32_t)0x00080000);

#undef GPIO_CRH_CNF13
constexpr auto GPIO_CRH_CNF13 = ((std::uint32_t)0x00C00000);
#undef GPIO_CRH_CNF13_0
constexpr auto GPIO_CRH_CNF13_0 = ((std::uint32_t)0x00400000);
#undef GPIO_CRH_CNF13_1
constexpr auto GPIO_CRH_CNF13_1 = ((std::uint32_t)0x00800000);

#undef GPIO_CRH_CNF14
constexpr auto GPIO_CRH_CNF14 = ((std::uint32_t)0x0C000000);
#undef GPIO_CRH_CNF14_0
constexpr auto GPIO_CRH_CNF14_0 = ((std::uint32_t)0x04000000);
#undef GPIO_CRH_CNF14_1
constexpr auto GPIO_CRH_CNF14_1 = ((std::uint32_t)0x08000000);

#undef GPIO_CRH_CNF15
constexpr auto GPIO_CRH_CNF15 = ((std::uint32_t)0xC0000000);
#undef GPIO_CRH_CNF15_0
constexpr auto GPIO_CRH_CNF15_0 = ((std::uint32_t)0x40000000);
#undef GPIO_CRH_CNF15_1
constexpr auto GPIO_CRH_CNF15_1 = ((std::uint32_t)0x80000000);

/*!<******************  Bit definition for GPIO_IDR register  *******************/
#undef GPIO_IDR_IDR0
constexpr auto GPIO_IDR_IDR0 = ((std::uint16_t)0x0001);
#undef GPIO_IDR_IDR1
constexpr auto GPIO_IDR_IDR1 = ((std::uint16_t)0x0002);
#undef GPIO_IDR_IDR2
constexpr auto GPIO_IDR_IDR2 = ((std::uint16_t)0x0004);
#undef GPIO_IDR_IDR3
constexpr auto GPIO_IDR_IDR3 = ((std::uint16_t)0x0008);
#undef GPIO_IDR_IDR4
constexpr auto GPIO_IDR_IDR4 = ((std::uint16_t)0x0010);
#undef GPIO_IDR_IDR5
constexpr auto GPIO_IDR_IDR5 = ((std::uint16_t)0x0020);
#undef GPIO_IDR_IDR6
constexpr auto GPIO_IDR_IDR6 = ((std::uint16_t)0x0040);
#undef GPIO_IDR_IDR7
constexpr auto GPIO_IDR_IDR7 = ((std::uint16_t)0x0080);
#undef GPIO_IDR_IDR8
constexpr auto GPIO_IDR_IDR8 = ((std::uint16_t)0x0100);
#undef GPIO_IDR_IDR9
constexpr auto GPIO_IDR_IDR9 = ((std::uint16_t)0x0200);
#undef GPIO_IDR_IDR10
constexpr auto GPIO_IDR_IDR10 = ((std::uint16_t)0x0400);
#undef GPIO_IDR_IDR11
constexpr auto GPIO_IDR_IDR11 = ((std::uint16_t)0x0800);
#undef GPIO_IDR_IDR12
constexpr auto GPIO_IDR_IDR12 = ((std::uint16_t)0x1000);
#undef GPIO_IDR_IDR13
constexpr auto GPIO_IDR_IDR13 = ((std::uint16_t)0x2000);
#undef GPIO_IDR_IDR14
constexpr auto GPIO_IDR_IDR14 = ((std::uint16_t)0x4000);
#undef GPIO_IDR_IDR15
constexpr auto GPIO_IDR_IDR15 = ((std::uint16_t)0x8000);

/*******************  Bit definition for GPIO_ODR register  *******************/
#undef GPIO_ODR_ODR0
constexpr auto GPIO_ODR_ODR0 = ((std::uint16_t)0x0001);
#undef GPIO_ODR_ODR1
constexpr auto GPIO_ODR_ODR1 = ((std::uint16_t)0x0002);
#undef GPIO_ODR_ODR2
constexpr auto GPIO_ODR_ODR2 = ((std::uint16_t)0x0004);
#undef GPIO_ODR_ODR3
constexpr auto GPIO_ODR_ODR3 = ((std::uint16_t)0x0008);
#undef GPIO_ODR_ODR4
constexpr auto GPIO_ODR_ODR4 = ((std::uint16_t)0x0010);
#undef GPIO_ODR_ODR5
constexpr auto GPIO_ODR_ODR5 = ((std::uint16_t)0x0020);
#undef GPIO_ODR_ODR6
constexpr auto GPIO_ODR_ODR6 = ((std::uint16_t)0x0040);
#undef GPIO_ODR_ODR7
constexpr auto GPIO_ODR_ODR7 = ((std::uint16_t)0x0080);
#undef GPIO_ODR_ODR8
constexpr auto GPIO_ODR_ODR8 = ((std::uint16_t)0x0100);
#undef GPIO_ODR_ODR9
constexpr auto GPIO_ODR_ODR9 = ((std::uint16_t)0x0200);
#undef GPIO_ODR_ODR10
constexpr auto GPIO_ODR_ODR10 = ((std::uint16_t)0x0400);
#undef GPIO_ODR_ODR11
constexpr auto GPIO_ODR_ODR11 = ((std::uint16_t)0x0800);
#undef GPIO_ODR_ODR12
constexpr auto GPIO_ODR_ODR12 = ((std::uint16_t)0x1000);
#undef GPIO_ODR_ODR13
constexpr auto GPIO_ODR_ODR13 = ((std::uint16_t)0x2000);
#undef GPIO_ODR_ODR14
constexpr auto GPIO_ODR_ODR14 = ((std::uint16_t)0x4000);
#undef GPIO_ODR_ODR15
constexpr auto GPIO_ODR_ODR15 = ((std::uint16_t)0x8000);

/******************  Bit definition for GPIO_BSRR register  *******************/
#undef GPIO_BSRR_BS0
constexpr auto GPIO_BSRR_BS0 = ((std::uint32_t)0x00000001);
#undef GPIO_BSRR_BS1
constexpr auto GPIO_BSRR_BS1 = ((std::uint32_t)0x00000002);
#undef GPIO_BSRR_BS2
constexpr auto GPIO_BSRR_BS2 = ((std::uint32_t)0x00000004);
#undef GPIO_BSRR_BS3
constexpr auto GPIO_BSRR_BS3 = ((std::uint32_t)0x00000008);
#undef GPIO_BSRR_BS4
constexpr auto GPIO_BSRR_BS4 = ((std::uint32_t)0x00000010);
#undef GPIO_BSRR_BS5
constexpr auto GPIO_BSRR_BS5 = ((std::uint32_t)0x00000020);
#undef GPIO_BSRR_BS6
constexpr auto GPIO_BSRR_BS6 = ((std::uint32_t)0x00000040);
#undef GPIO_BSRR_BS7
constexpr auto GPIO_BSRR_BS7 = ((std::uint32_t)0x00000080);
#undef GPIO_BSRR_BS8
constexpr auto GPIO_BSRR_BS8 = ((std::uint32_t)0x00000100);
#undef GPIO_BSRR_BS9
constexpr auto GPIO_BSRR_BS9 = ((std::uint32_t)0x00000200);
#undef GPIO_BSRR_BS10
constexpr auto GPIO_BSRR_BS10 = ((std::uint32_t)0x00000400);
#undef GPIO_BSRR_BS11
constexpr auto GPIO_BSRR_BS11 = ((std::uint32_t)0x00000800);
#undef GPIO_BSRR_BS12
constexpr auto GPIO_BSRR_BS12 = ((std::uint32_t)0x00001000);
#undef GPIO_BSRR_BS13
constexpr auto GPIO_BSRR_BS13 = ((std::uint32_t)0x00002000);
#undef GPIO_BSRR_BS14
constexpr auto GPIO_BSRR_BS14 = ((std::uint32_t)0x00004000);
#undef GPIO_BSRR_BS15
constexpr auto GPIO_BSRR_BS15 = ((std::uint32_t)0x00008000);

#undef GPIO_BSRR_BR0
constexpr auto GPIO_BSRR_BR0 = ((std::uint32_t)0x00010000);
#undef GPIO_BSRR_BR1
constexpr auto GPIO_BSRR_BR1 = ((std::uint32_t)0x00020000);
#undef GPIO_BSRR_BR2
constexpr auto GPIO_BSRR_BR2 = ((std::uint32_t)0x00040000);
#undef GPIO_BSRR_BR3
constexpr auto GPIO_BSRR_BR3 = ((std::uint32_t)0x00080000);
#undef GPIO_BSRR_BR4
constexpr auto GPIO_BSRR_BR4 = ((std::uint32_t)0x00100000);
#undef GPIO_BSRR_BR5
constexpr auto GPIO_BSRR_BR5 = ((std::uint32_t)0x00200000);
#undef GPIO_BSRR_BR6
constexpr auto GPIO_BSRR_BR6 = ((std::uint32_t)0x00400000);
#undef GPIO_BSRR_BR7
constexpr auto GPIO_BSRR_BR7 = ((std::uint32_t)0x00800000);
#undef GPIO_BSRR_BR8
constexpr auto GPIO_BSRR_BR8 = ((std::uint32_t)0x01000000);
#undef GPIO_BSRR_BR9
constexpr auto GPIO_BSRR_BR9 = ((std::uint32_t)0x02000000);
#undef GPIO_BSRR_BR10
constexpr auto GPIO_BSRR_BR10 = ((std::uint32_t)0x04000000);
#undef GPIO_BSRR_BR11
constexpr auto GPIO_BSRR_BR11 = ((std::uint32_t)0x08000000);
#undef GPIO_BSRR_BR12
constexpr auto GPIO_BSRR_BR12 = ((std::uint32_t)0x10000000);
#undef GPIO_BSRR_BR13
constexpr auto GPIO_BSRR_BR13 = ((std::uint32_t)0x20000000);
#undef GPIO_BSRR_BR14
constexpr auto GPIO_BSRR_BR14 = ((std::uint32_t)0x40000000);
#undef GPIO_BSRR_BR15
constexpr auto GPIO_BSRR_BR15 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for GPIO_BRR register  *******************/
#undef GPIO_BRR_BR0
constexpr auto GPIO_BRR_BR0 = ((std::uint16_t)0x0001);
#undef GPIO_BRR_BR1
constexpr auto GPIO_BRR_BR1 = ((std::uint16_t)0x0002);
#undef GPIO_BRR_BR2
constexpr auto GPIO_BRR_BR2 = ((std::uint16_t)0x0004);
#undef GPIO_BRR_BR3
constexpr auto GPIO_BRR_BR3 = ((std::uint16_t)0x0008);
#undef GPIO_BRR_BR4
constexpr auto GPIO_BRR_BR4 = ((std::uint16_t)0x0010);
#undef GPIO_BRR_BR5
constexpr auto GPIO_BRR_BR5 = ((std::uint16_t)0x0020);
#undef GPIO_BRR_BR6
constexpr auto GPIO_BRR_BR6 = ((std::uint16_t)0x0040);
#undef GPIO_BRR_BR7
constexpr auto GPIO_BRR_BR7 = ((std::uint16_t)0x0080);
#undef GPIO_BRR_BR8
constexpr auto GPIO_BRR_BR8 = ((std::uint16_t)0x0100);
#undef GPIO_BRR_BR9
constexpr auto GPIO_BRR_BR9 = ((std::uint16_t)0x0200);
#undef GPIO_BRR_BR10
constexpr auto GPIO_BRR_BR10 = ((std::uint16_t)0x0400);
#undef GPIO_BRR_BR11
constexpr auto GPIO_BRR_BR11 = ((std::uint16_t)0x0800);
#undef GPIO_BRR_BR12
constexpr auto GPIO_BRR_BR12 = ((std::uint16_t)0x1000);
#undef GPIO_BRR_BR13
constexpr auto GPIO_BRR_BR13 = ((std::uint16_t)0x2000);
#undef GPIO_BRR_BR14
constexpr auto GPIO_BRR_BR14 = ((std::uint16_t)0x4000);
#undef GPIO_BRR_BR15
constexpr auto GPIO_BRR_BR15 = ((std::uint16_t)0x8000);

/******************  Bit definition for GPIO_LCKR register  *******************/
#undef GPIO_LCKR_LCK0
constexpr auto GPIO_LCKR_LCK0 = ((std::uint32_t)0x00000001);
#undef GPIO_LCKR_LCK1
constexpr auto GPIO_LCKR_LCK1 = ((std::uint32_t)0x00000002);
#undef GPIO_LCKR_LCK2
constexpr auto GPIO_LCKR_LCK2 = ((std::uint32_t)0x00000004);
#undef GPIO_LCKR_LCK3
constexpr auto GPIO_LCKR_LCK3 = ((std::uint32_t)0x00000008);
#undef GPIO_LCKR_LCK4
constexpr auto GPIO_LCKR_LCK4 = ((std::uint32_t)0x00000010);
#undef GPIO_LCKR_LCK5
constexpr auto GPIO_LCKR_LCK5 = ((std::uint32_t)0x00000020);
#undef GPIO_LCKR_LCK6
constexpr auto GPIO_LCKR_LCK6 = ((std::uint32_t)0x00000040);
#undef GPIO_LCKR_LCK7
constexpr auto GPIO_LCKR_LCK7 = ((std::uint32_t)0x00000080);
#undef GPIO_LCKR_LCK8
constexpr auto GPIO_LCKR_LCK8 = ((std::uint32_t)0x00000100);
#undef GPIO_LCKR_LCK9
constexpr auto GPIO_LCKR_LCK9 = ((std::uint32_t)0x00000200);
#undef GPIO_LCKR_LCK10
constexpr auto GPIO_LCKR_LCK10 = ((std::uint32_t)0x00000400);
#undef GPIO_LCKR_LCK11
constexpr auto GPIO_LCKR_LCK11 = ((std::uint32_t)0x00000800);
#undef GPIO_LCKR_LCK12
constexpr auto GPIO_LCKR_LCK12 = ((std::uint32_t)0x00001000);
#undef GPIO_LCKR_LCK13
constexpr auto GPIO_LCKR_LCK13 = ((std::uint32_t)0x00002000);
#undef GPIO_LCKR_LCK14
constexpr auto GPIO_LCKR_LCK14 = ((std::uint32_t)0x00004000);
#undef GPIO_LCKR_LCK15
constexpr auto GPIO_LCKR_LCK15 = ((std::uint32_t)0x00008000);
#undef GPIO_LCKR_LCKK
constexpr auto GPIO_LCKR_LCKK = ((std::uint32_t)0x00010000);

/*----------------------------------------------------------------------------*/

/******************  Bit definition for AFIO_EVCR register  *******************/
#undef AFIO_EVCR_PIN
constexpr auto AFIO_EVCR_PIN = ((std::uint8_t)0x0F);
#undef AFIO_EVCR_PIN_0
constexpr auto AFIO_EVCR_PIN_0 = ((std::uint8_t)0x01);
#undef AFIO_EVCR_PIN_1
constexpr auto AFIO_EVCR_PIN_1 = ((std::uint8_t)0x02);
#undef AFIO_EVCR_PIN_2
constexpr auto AFIO_EVCR_PIN_2 = ((std::uint8_t)0x04);
#undef AFIO_EVCR_PIN_3
constexpr auto AFIO_EVCR_PIN_3 = ((std::uint8_t)0x08);

/*!< PIN configuration */
#undef AFIO_EVCR_PIN_PX0
constexpr auto AFIO_EVCR_PIN_PX0 = ((std::uint8_t)0x00);
#undef AFIO_EVCR_PIN_PX1
constexpr auto AFIO_EVCR_PIN_PX1 = ((std::uint8_t)0x01);
#undef AFIO_EVCR_PIN_PX2
constexpr auto AFIO_EVCR_PIN_PX2 = ((std::uint8_t)0x02);
#undef AFIO_EVCR_PIN_PX3
constexpr auto AFIO_EVCR_PIN_PX3 = ((std::uint8_t)0x03);
#undef AFIO_EVCR_PIN_PX4
constexpr auto AFIO_EVCR_PIN_PX4 = ((std::uint8_t)0x04);
#undef AFIO_EVCR_PIN_PX5
constexpr auto AFIO_EVCR_PIN_PX5 = ((std::uint8_t)0x05);
#undef AFIO_EVCR_PIN_PX6
constexpr auto AFIO_EVCR_PIN_PX6 = ((std::uint8_t)0x06);
#undef AFIO_EVCR_PIN_PX7
constexpr auto AFIO_EVCR_PIN_PX7 = ((std::uint8_t)0x07);
#undef AFIO_EVCR_PIN_PX8
constexpr auto AFIO_EVCR_PIN_PX8 = ((std::uint8_t)0x08);
#undef AFIO_EVCR_PIN_PX9
constexpr auto AFIO_EVCR_PIN_PX9 = ((std::uint8_t)0x09);
#undef AFIO_EVCR_PIN_PX10
constexpr auto AFIO_EVCR_PIN_PX10 = ((std::uint8_t)0x0A);
#undef AFIO_EVCR_PIN_PX11
constexpr auto AFIO_EVCR_PIN_PX11 = ((std::uint8_t)0x0B);
#undef AFIO_EVCR_PIN_PX12
constexpr auto AFIO_EVCR_PIN_PX12 = ((std::uint8_t)0x0C);
#undef AFIO_EVCR_PIN_PX13
constexpr auto AFIO_EVCR_PIN_PX13 = ((std::uint8_t)0x0D);
#undef AFIO_EVCR_PIN_PX14
constexpr auto AFIO_EVCR_PIN_PX14 = ((std::uint8_t)0x0E);
#undef AFIO_EVCR_PIN_PX15
constexpr auto AFIO_EVCR_PIN_PX15 = ((std::uint8_t)0x0F);

#undef AFIO_EVCR_PORT
constexpr auto AFIO_EVCR_PORT = ((std::uint8_t)0x70);
#undef AFIO_EVCR_PORT_0
constexpr auto AFIO_EVCR_PORT_0 = ((std::uint8_t)0x10);
#undef AFIO_EVCR_PORT_1
constexpr auto AFIO_EVCR_PORT_1 = ((std::uint8_t)0x20);
#undef AFIO_EVCR_PORT_2
constexpr auto AFIO_EVCR_PORT_2 = ((std::uint8_t)0x40);

/*!< PORT configuration */
#undef AFIO_EVCR_PORT_PA
constexpr auto AFIO_EVCR_PORT_PA = ((std::uint8_t)0x00);
#undef AFIO_EVCR_PORT_PB
constexpr auto AFIO_EVCR_PORT_PB = ((std::uint8_t)0x10);
#undef AFIO_EVCR_PORT_PC
constexpr auto AFIO_EVCR_PORT_PC = ((std::uint8_t)0x20);
#undef AFIO_EVCR_PORT_PD
constexpr auto AFIO_EVCR_PORT_PD = ((std::uint8_t)0x30);
#undef AFIO_EVCR_PORT_PE
constexpr auto AFIO_EVCR_PORT_PE = ((std::uint8_t)0x40);

#undef AFIO_EVCR_EVOE
constexpr auto AFIO_EVCR_EVOE = ((std::uint8_t)0x80);

/******************  Bit definition for AFIO_MAPR register  *******************/
#undef AFIO_MAPR_SPI1_REMAP
constexpr auto AFIO_MAPR_SPI1_REMAP = ((std::uint32_t)0x00000001);
#undef AFIO_MAPR_I2C1_REMAP
constexpr auto AFIO_MAPR_I2C1_REMAP = ((std::uint32_t)0x00000002);
#undef AFIO_MAPR_USART1_REMAP
constexpr auto AFIO_MAPR_USART1_REMAP = ((std::uint32_t)0x00000004);
#undef AFIO_MAPR_USART2_REMAP
constexpr auto AFIO_MAPR_USART2_REMAP = ((std::uint32_t)0x00000008);

#undef AFIO_MAPR_USART3_REMAP
constexpr auto AFIO_MAPR_USART3_REMAP = ((std::uint32_t)0x00000030);
#undef AFIO_MAPR_USART3_REMAP_0
constexpr auto AFIO_MAPR_USART3_REMAP_0 = ((std::uint32_t)0x00000010);
#undef AFIO_MAPR_USART3_REMAP_1
constexpr auto AFIO_MAPR_USART3_REMAP_1 = ((std::uint32_t)0x00000020);

/* USART3_REMAP configuration */
#undef AFIO_MAPR_USART3_REMAP_NOREMAP
constexpr auto AFIO_MAPR_USART3_REMAP_NOREMAP = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_USART3_REMAP_PARTIALREMAP
constexpr auto AFIO_MAPR_USART3_REMAP_PARTIALREMAP = ((std::uint32_t)0x00000010);
#undef AFIO_MAPR_USART3_REMAP_FULLREMAP
constexpr auto AFIO_MAPR_USART3_REMAP_FULLREMAP = ((std::uint32_t)0x00000030);

#undef AFIO_MAPR_TIM1_REMAP
constexpr auto AFIO_MAPR_TIM1_REMAP = ((std::uint32_t)0x000000C0);
#undef AFIO_MAPR_TIM1_REMAP_0
constexpr auto AFIO_MAPR_TIM1_REMAP_0 = ((std::uint32_t)0x00000040);
#undef AFIO_MAPR_TIM1_REMAP_1
constexpr auto AFIO_MAPR_TIM1_REMAP_1 = ((std::uint32_t)0x00000080);

/*!< TIM1_REMAP configuration */
#undef AFIO_MAPR_TIM1_REMAP_NOREMAP
constexpr auto AFIO_MAPR_TIM1_REMAP_NOREMAP = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_TIM1_REMAP_PARTIALREMAP
constexpr auto AFIO_MAPR_TIM1_REMAP_PARTIALREMAP = ((std::uint32_t)0x00000040);
#undef AFIO_MAPR_TIM1_REMAP_FULLREMAP
constexpr auto AFIO_MAPR_TIM1_REMAP_FULLREMAP = ((std::uint32_t)0x000000C0);

#undef AFIO_MAPR_TIM2_REMAP
constexpr auto AFIO_MAPR_TIM2_REMAP = ((std::uint32_t)0x00000300);
#undef AFIO_MAPR_TIM2_REMAP_0
constexpr auto AFIO_MAPR_TIM2_REMAP_0 = ((std::uint32_t)0x00000100);
#undef AFIO_MAPR_TIM2_REMAP_1
constexpr auto AFIO_MAPR_TIM2_REMAP_1 = ((std::uint32_t)0x00000200);

/*!< TIM2_REMAP configuration */
#undef AFIO_MAPR_TIM2_REMAP_NOREMAP
constexpr auto AFIO_MAPR_TIM2_REMAP_NOREMAP = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1
constexpr auto AFIO_MAPR_TIM2_REMAP_PARTIALREMAP1 = ((std::uint32_t)0x00000100);
#undef AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2
constexpr auto AFIO_MAPR_TIM2_REMAP_PARTIALREMAP2 = ((std::uint32_t)0x00000200);
#undef AFIO_MAPR_TIM2_REMAP_FULLREMAP
constexpr auto AFIO_MAPR_TIM2_REMAP_FULLREMAP = ((std::uint32_t)0x00000300);

#undef AFIO_MAPR_TIM3_REMAP
constexpr auto AFIO_MAPR_TIM3_REMAP = ((std::uint32_t)0x00000C00);
#undef AFIO_MAPR_TIM3_REMAP_0
constexpr auto AFIO_MAPR_TIM3_REMAP_0 = ((std::uint32_t)0x00000400);
#undef AFIO_MAPR_TIM3_REMAP_1
constexpr auto AFIO_MAPR_TIM3_REMAP_1 = ((std::uint32_t)0x00000800);

/*!< TIM3_REMAP configuration */
#undef AFIO_MAPR_TIM3_REMAP_NOREMAP
constexpr auto AFIO_MAPR_TIM3_REMAP_NOREMAP = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_TIM3_REMAP_PARTIALREMAP
constexpr auto AFIO_MAPR_TIM3_REMAP_PARTIALREMAP = ((std::uint32_t)0x00000800);
#undef AFIO_MAPR_TIM3_REMAP_FULLREMAP
constexpr auto AFIO_MAPR_TIM3_REMAP_FULLREMAP = ((std::uint32_t)0x00000C00);

#undef AFIO_MAPR_TIM4_REMAP
constexpr auto AFIO_MAPR_TIM4_REMAP = ((std::uint32_t)0x00001000);

#undef AFIO_MAPR_CAN_REMAP
constexpr auto AFIO_MAPR_CAN_REMAP = ((std::uint32_t)0x00006000);
#undef AFIO_MAPR_CAN_REMAP_0
constexpr auto AFIO_MAPR_CAN_REMAP_0 = ((std::uint32_t)0x00002000);
#undef AFIO_MAPR_CAN_REMAP_1
constexpr auto AFIO_MAPR_CAN_REMAP_1 = ((std::uint32_t)0x00004000);

/*!< CAN_REMAP configuration */
#undef AFIO_MAPR_CAN_REMAP_REMAP1
constexpr auto AFIO_MAPR_CAN_REMAP_REMAP1 = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_CAN_REMAP_REMAP2
constexpr auto AFIO_MAPR_CAN_REMAP_REMAP2 = ((std::uint32_t)0x00004000);
#undef AFIO_MAPR_CAN_REMAP_REMAP3
constexpr auto AFIO_MAPR_CAN_REMAP_REMAP3 = ((std::uint32_t)0x00006000);

#undef AFIO_MAPR_PD01_REMAP
constexpr auto AFIO_MAPR_PD01_REMAP = ((std::uint32_t)0x00008000);
#undef AFIO_MAPR_TIM5CH4_IREMAP
constexpr auto AFIO_MAPR_TIM5CH4_IREMAP = ((std::uint32_t)0x00010000);
#undef AFIO_MAPR_ADC1_ETRGINJ_REMAP
constexpr auto AFIO_MAPR_ADC1_ETRGINJ_REMAP = ((std::uint32_t)0x00020000);
#undef AFIO_MAPR_ADC1_ETRGREG_REMAP
constexpr auto AFIO_MAPR_ADC1_ETRGREG_REMAP = ((std::uint32_t)0x00040000);
#undef AFIO_MAPR_ADC2_ETRGINJ_REMAP
constexpr auto AFIO_MAPR_ADC2_ETRGINJ_REMAP = ((std::uint32_t)0x00080000);
#undef AFIO_MAPR_ADC2_ETRGREG_REMAP
constexpr auto AFIO_MAPR_ADC2_ETRGREG_REMAP = ((std::uint32_t)0x00100000);

/*!< SWJ_CFG configuration */
#undef AFIO_MAPR_SWJ_CFG
constexpr auto AFIO_MAPR_SWJ_CFG = ((std::uint32_t)0x07000000);
#undef AFIO_MAPR_SWJ_CFG_0
constexpr auto AFIO_MAPR_SWJ_CFG_0 = ((std::uint32_t)0x01000000);
#undef AFIO_MAPR_SWJ_CFG_1
constexpr auto AFIO_MAPR_SWJ_CFG_1 = ((std::uint32_t)0x02000000);
#undef AFIO_MAPR_SWJ_CFG_2
constexpr auto AFIO_MAPR_SWJ_CFG_2 = ((std::uint32_t)0x04000000);

#undef AFIO_MAPR_SWJ_CFG_RESET
constexpr auto AFIO_MAPR_SWJ_CFG_RESET = ((std::uint32_t)0x00000000);
#undef AFIO_MAPR_SWJ_CFG_NOJNTRST
constexpr auto AFIO_MAPR_SWJ_CFG_NOJNTRST = ((std::uint32_t)0x01000000);
#undef AFIO_MAPR_SWJ_CFG_JTAGDISABLE
constexpr auto AFIO_MAPR_SWJ_CFG_JTAGDISABLE = ((std::uint32_t)0x02000000);
#undef AFIO_MAPR_SWJ_CFG_DISABLE
constexpr auto AFIO_MAPR_SWJ_CFG_DISABLE = ((std::uint32_t)0x04000000);

#ifdef STM32F10X_CL
/*!< ETH_REMAP configuration */
#undef AFIO_MAPR_ETH_REMAP
constexpr auto AFIO_MAPR_ETH_REMAP = ((std::uint32_t)0x00200000);

/*!< CAN2_REMAP configuration */
#undef AFIO_MAPR_CAN2_REMAP
constexpr auto AFIO_MAPR_CAN2_REMAP = ((std::uint32_t)0x00400000);

/*!< MII_RMII_SEL configuration */
#undef AFIO_MAPR_MII_RMII_SEL
constexpr auto AFIO_MAPR_MII_RMII_SEL = ((std::uint32_t)0x00800000);

/*!< SPI3_REMAP configuration */
#undef AFIO_MAPR_SPI3_REMAP
constexpr auto AFIO_MAPR_SPI3_REMAP = ((std::uint32_t)0x10000000);

/*!< TIM2ITR1_IREMAP configuration */
#undef AFIO_MAPR_TIM2ITR1_IREMAP
constexpr auto AFIO_MAPR_TIM2ITR1_IREMAP = ((std::uint32_t)0x20000000);

/*!< PTP_PPS_REMAP configuration */
#undef AFIO_MAPR_PTP_PPS_REMAP
constexpr auto AFIO_MAPR_PTP_PPS_REMAP = ((std::uint32_t)0x40000000);
#endif

/*****************  Bit definition for AFIO_EXTICR1 register  *****************/
#undef AFIO_EXTICR1_EXTI0
constexpr auto AFIO_EXTICR1_EXTI0 = ((std::uint16_t)0x000F);
#undef AFIO_EXTICR1_EXTI1
constexpr auto AFIO_EXTICR1_EXTI1 = ((std::uint16_t)0x00F0);
#undef AFIO_EXTICR1_EXTI2
constexpr auto AFIO_EXTICR1_EXTI2 = ((std::uint16_t)0x0F00);
#undef AFIO_EXTICR1_EXTI3
constexpr auto AFIO_EXTICR1_EXTI3 = ((std::uint16_t)0xF000);

/*!< EXTI0 configuration */
#undef AFIO_EXTICR1_EXTI0_PA
constexpr auto AFIO_EXTICR1_EXTI0_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR1_EXTI0_PB
constexpr auto AFIO_EXTICR1_EXTI0_PB = ((std::uint16_t)0x0001);
#undef AFIO_EXTICR1_EXTI0_PC
constexpr auto AFIO_EXTICR1_EXTI0_PC = ((std::uint16_t)0x0002);
#undef AFIO_EXTICR1_EXTI0_PD
constexpr auto AFIO_EXTICR1_EXTI0_PD = ((std::uint16_t)0x0003);
#undef AFIO_EXTICR1_EXTI0_PE
constexpr auto AFIO_EXTICR1_EXTI0_PE = ((std::uint16_t)0x0004);
#undef AFIO_EXTICR1_EXTI0_PF
constexpr auto AFIO_EXTICR1_EXTI0_PF = ((std::uint16_t)0x0005);
#undef AFIO_EXTICR1_EXTI0_PG
constexpr auto AFIO_EXTICR1_EXTI0_PG = ((std::uint16_t)0x0006);

/*!< EXTI1 configuration */
#undef AFIO_EXTICR1_EXTI1_PA
constexpr auto AFIO_EXTICR1_EXTI1_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR1_EXTI1_PB
constexpr auto AFIO_EXTICR1_EXTI1_PB = ((std::uint16_t)0x0010);
#undef AFIO_EXTICR1_EXTI1_PC
constexpr auto AFIO_EXTICR1_EXTI1_PC = ((std::uint16_t)0x0020);
#undef AFIO_EXTICR1_EXTI1_PD
constexpr auto AFIO_EXTICR1_EXTI1_PD = ((std::uint16_t)0x0030);
#undef AFIO_EXTICR1_EXTI1_PE
constexpr auto AFIO_EXTICR1_EXTI1_PE = ((std::uint16_t)0x0040);
#undef AFIO_EXTICR1_EXTI1_PF
constexpr auto AFIO_EXTICR1_EXTI1_PF = ((std::uint16_t)0x0050);
#undef AFIO_EXTICR1_EXTI1_PG
constexpr auto AFIO_EXTICR1_EXTI1_PG = ((std::uint16_t)0x0060);

/*!< EXTI2 configuration */
#undef AFIO_EXTICR1_EXTI2_PA
constexpr auto AFIO_EXTICR1_EXTI2_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR1_EXTI2_PB
constexpr auto AFIO_EXTICR1_EXTI2_PB = ((std::uint16_t)0x0100);
#undef AFIO_EXTICR1_EXTI2_PC
constexpr auto AFIO_EXTICR1_EXTI2_PC = ((std::uint16_t)0x0200);
#undef AFIO_EXTICR1_EXTI2_PD
constexpr auto AFIO_EXTICR1_EXTI2_PD = ((std::uint16_t)0x0300);
#undef AFIO_EXTICR1_EXTI2_PE
constexpr auto AFIO_EXTICR1_EXTI2_PE = ((std::uint16_t)0x0400);
#undef AFIO_EXTICR1_EXTI2_PF
constexpr auto AFIO_EXTICR1_EXTI2_PF = ((std::uint16_t)0x0500);
#undef AFIO_EXTICR1_EXTI2_PG
constexpr auto AFIO_EXTICR1_EXTI2_PG = ((std::uint16_t)0x0600);

/*!< EXTI3 configuration */
#undef AFIO_EXTICR1_EXTI3_PA
constexpr auto AFIO_EXTICR1_EXTI3_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR1_EXTI3_PB
constexpr auto AFIO_EXTICR1_EXTI3_PB = ((std::uint16_t)0x1000);
#undef AFIO_EXTICR1_EXTI3_PC
constexpr auto AFIO_EXTICR1_EXTI3_PC = ((std::uint16_t)0x2000);
#undef AFIO_EXTICR1_EXTI3_PD
constexpr auto AFIO_EXTICR1_EXTI3_PD = ((std::uint16_t)0x3000);
#undef AFIO_EXTICR1_EXTI3_PE
constexpr auto AFIO_EXTICR1_EXTI3_PE = ((std::uint16_t)0x4000);
#undef AFIO_EXTICR1_EXTI3_PF
constexpr auto AFIO_EXTICR1_EXTI3_PF = ((std::uint16_t)0x5000);
#undef AFIO_EXTICR1_EXTI3_PG
constexpr auto AFIO_EXTICR1_EXTI3_PG = ((std::uint16_t)0x6000);

/*****************  Bit definition for AFIO_EXTICR2 register  *****************/
#undef AFIO_EXTICR2_EXTI4
constexpr auto AFIO_EXTICR2_EXTI4 = ((std::uint16_t)0x000F);
#undef AFIO_EXTICR2_EXTI5
constexpr auto AFIO_EXTICR2_EXTI5 = ((std::uint16_t)0x00F0);
#undef AFIO_EXTICR2_EXTI6
constexpr auto AFIO_EXTICR2_EXTI6 = ((std::uint16_t)0x0F00);
#undef AFIO_EXTICR2_EXTI7
constexpr auto AFIO_EXTICR2_EXTI7 = ((std::uint16_t)0xF000);

/*!< EXTI4 configuration */
#undef AFIO_EXTICR2_EXTI4_PA
constexpr auto AFIO_EXTICR2_EXTI4_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR2_EXTI4_PB
constexpr auto AFIO_EXTICR2_EXTI4_PB = ((std::uint16_t)0x0001);
#undef AFIO_EXTICR2_EXTI4_PC
constexpr auto AFIO_EXTICR2_EXTI4_PC = ((std::uint16_t)0x0002);
#undef AFIO_EXTICR2_EXTI4_PD
constexpr auto AFIO_EXTICR2_EXTI4_PD = ((std::uint16_t)0x0003);
#undef AFIO_EXTICR2_EXTI4_PE
constexpr auto AFIO_EXTICR2_EXTI4_PE = ((std::uint16_t)0x0004);
#undef AFIO_EXTICR2_EXTI4_PF
constexpr auto AFIO_EXTICR2_EXTI4_PF = ((std::uint16_t)0x0005);
#undef AFIO_EXTICR2_EXTI4_PG
constexpr auto AFIO_EXTICR2_EXTI4_PG = ((std::uint16_t)0x0006);

/* EXTI5 configuration */
#undef AFIO_EXTICR2_EXTI5_PA
constexpr auto AFIO_EXTICR2_EXTI5_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR2_EXTI5_PB
constexpr auto AFIO_EXTICR2_EXTI5_PB = ((std::uint16_t)0x0010);
#undef AFIO_EXTICR2_EXTI5_PC
constexpr auto AFIO_EXTICR2_EXTI5_PC = ((std::uint16_t)0x0020);
#undef AFIO_EXTICR2_EXTI5_PD
constexpr auto AFIO_EXTICR2_EXTI5_PD = ((std::uint16_t)0x0030);
#undef AFIO_EXTICR2_EXTI5_PE
constexpr auto AFIO_EXTICR2_EXTI5_PE = ((std::uint16_t)0x0040);
#undef AFIO_EXTICR2_EXTI5_PF
constexpr auto AFIO_EXTICR2_EXTI5_PF = ((std::uint16_t)0x0050);
#undef AFIO_EXTICR2_EXTI5_PG
constexpr auto AFIO_EXTICR2_EXTI5_PG = ((std::uint16_t)0x0060);

/*!< EXTI6 configuration */
#undef AFIO_EXTICR2_EXTI6_PA
constexpr auto AFIO_EXTICR2_EXTI6_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR2_EXTI6_PB
constexpr auto AFIO_EXTICR2_EXTI6_PB = ((std::uint16_t)0x0100);
#undef AFIO_EXTICR2_EXTI6_PC
constexpr auto AFIO_EXTICR2_EXTI6_PC = ((std::uint16_t)0x0200);
#undef AFIO_EXTICR2_EXTI6_PD
constexpr auto AFIO_EXTICR2_EXTI6_PD = ((std::uint16_t)0x0300);
#undef AFIO_EXTICR2_EXTI6_PE
constexpr auto AFIO_EXTICR2_EXTI6_PE = ((std::uint16_t)0x0400);
#undef AFIO_EXTICR2_EXTI6_PF
constexpr auto AFIO_EXTICR2_EXTI6_PF = ((std::uint16_t)0x0500);
#undef AFIO_EXTICR2_EXTI6_PG
constexpr auto AFIO_EXTICR2_EXTI6_PG = ((std::uint16_t)0x0600);

/*!< EXTI7 configuration */
#undef AFIO_EXTICR2_EXTI7_PA
constexpr auto AFIO_EXTICR2_EXTI7_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR2_EXTI7_PB
constexpr auto AFIO_EXTICR2_EXTI7_PB = ((std::uint16_t)0x1000);
#undef AFIO_EXTICR2_EXTI7_PC
constexpr auto AFIO_EXTICR2_EXTI7_PC = ((std::uint16_t)0x2000);
#undef AFIO_EXTICR2_EXTI7_PD
constexpr auto AFIO_EXTICR2_EXTI7_PD = ((std::uint16_t)0x3000);
#undef AFIO_EXTICR2_EXTI7_PE
constexpr auto AFIO_EXTICR2_EXTI7_PE = ((std::uint16_t)0x4000);
#undef AFIO_EXTICR2_EXTI7_PF
constexpr auto AFIO_EXTICR2_EXTI7_PF = ((std::uint16_t)0x5000);
#undef AFIO_EXTICR2_EXTI7_PG
constexpr auto AFIO_EXTICR2_EXTI7_PG = ((std::uint16_t)0x6000);

/*****************  Bit definition for AFIO_EXTICR3 register  *****************/
#undef AFIO_EXTICR3_EXTI8
constexpr auto AFIO_EXTICR3_EXTI8 = ((std::uint16_t)0x000F);
#undef AFIO_EXTICR3_EXTI9
constexpr auto AFIO_EXTICR3_EXTI9 = ((std::uint16_t)0x00F0);
#undef AFIO_EXTICR3_EXTI10
constexpr auto AFIO_EXTICR3_EXTI10 = ((std::uint16_t)0x0F00);
#undef AFIO_EXTICR3_EXTI11
constexpr auto AFIO_EXTICR3_EXTI11 = ((std::uint16_t)0xF000);

/*!< EXTI8 configuration */
#undef AFIO_EXTICR3_EXTI8_PA
constexpr auto AFIO_EXTICR3_EXTI8_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR3_EXTI8_PB
constexpr auto AFIO_EXTICR3_EXTI8_PB = ((std::uint16_t)0x0001);
#undef AFIO_EXTICR3_EXTI8_PC
constexpr auto AFIO_EXTICR3_EXTI8_PC = ((std::uint16_t)0x0002);
#undef AFIO_EXTICR3_EXTI8_PD
constexpr auto AFIO_EXTICR3_EXTI8_PD = ((std::uint16_t)0x0003);
#undef AFIO_EXTICR3_EXTI8_PE
constexpr auto AFIO_EXTICR3_EXTI8_PE = ((std::uint16_t)0x0004);
#undef AFIO_EXTICR3_EXTI8_PF
constexpr auto AFIO_EXTICR3_EXTI8_PF = ((std::uint16_t)0x0005);
#undef AFIO_EXTICR3_EXTI8_PG
constexpr auto AFIO_EXTICR3_EXTI8_PG = ((std::uint16_t)0x0006);

/*!< EXTI9 configuration */
#undef AFIO_EXTICR3_EXTI9_PA
constexpr auto AFIO_EXTICR3_EXTI9_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR3_EXTI9_PB
constexpr auto AFIO_EXTICR3_EXTI9_PB = ((std::uint16_t)0x0010);
#undef AFIO_EXTICR3_EXTI9_PC
constexpr auto AFIO_EXTICR3_EXTI9_PC = ((std::uint16_t)0x0020);
#undef AFIO_EXTICR3_EXTI9_PD
constexpr auto AFIO_EXTICR3_EXTI9_PD = ((std::uint16_t)0x0030);
#undef AFIO_EXTICR3_EXTI9_PE
constexpr auto AFIO_EXTICR3_EXTI9_PE = ((std::uint16_t)0x0040);
#undef AFIO_EXTICR3_EXTI9_PF
constexpr auto AFIO_EXTICR3_EXTI9_PF = ((std::uint16_t)0x0050);
#undef AFIO_EXTICR3_EXTI9_PG
constexpr auto AFIO_EXTICR3_EXTI9_PG = ((std::uint16_t)0x0060);

/*!< EXTI10 configuration */
#undef AFIO_EXTICR3_EXTI10_PA
constexpr auto AFIO_EXTICR3_EXTI10_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR3_EXTI10_PB
constexpr auto AFIO_EXTICR3_EXTI10_PB = ((std::uint16_t)0x0100);
#undef AFIO_EXTICR3_EXTI10_PC
constexpr auto AFIO_EXTICR3_EXTI10_PC = ((std::uint16_t)0x0200);
#undef AFIO_EXTICR3_EXTI10_PD
constexpr auto AFIO_EXTICR3_EXTI10_PD = ((std::uint16_t)0x0300);
#undef AFIO_EXTICR3_EXTI10_PE
constexpr auto AFIO_EXTICR3_EXTI10_PE = ((std::uint16_t)0x0400);
#undef AFIO_EXTICR3_EXTI10_PF
constexpr auto AFIO_EXTICR3_EXTI10_PF = ((std::uint16_t)0x0500);
#undef AFIO_EXTICR3_EXTI10_PG
constexpr auto AFIO_EXTICR3_EXTI10_PG = ((std::uint16_t)0x0600);

/*!< EXTI11 configuration */
#undef AFIO_EXTICR3_EXTI11_PA
constexpr auto AFIO_EXTICR3_EXTI11_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR3_EXTI11_PB
constexpr auto AFIO_EXTICR3_EXTI11_PB = ((std::uint16_t)0x1000);
#undef AFIO_EXTICR3_EXTI11_PC
constexpr auto AFIO_EXTICR3_EXTI11_PC = ((std::uint16_t)0x2000);
#undef AFIO_EXTICR3_EXTI11_PD
constexpr auto AFIO_EXTICR3_EXTI11_PD = ((std::uint16_t)0x3000);
#undef AFIO_EXTICR3_EXTI11_PE
constexpr auto AFIO_EXTICR3_EXTI11_PE = ((std::uint16_t)0x4000);
#undef AFIO_EXTICR3_EXTI11_PF
constexpr auto AFIO_EXTICR3_EXTI11_PF = ((std::uint16_t)0x5000);
#undef AFIO_EXTICR3_EXTI11_PG
constexpr auto AFIO_EXTICR3_EXTI11_PG = ((std::uint16_t)0x6000);

/*****************  Bit definition for AFIO_EXTICR4 register  *****************/
#undef AFIO_EXTICR4_EXTI12
constexpr auto AFIO_EXTICR4_EXTI12 = ((std::uint16_t)0x000F);
#undef AFIO_EXTICR4_EXTI13
constexpr auto AFIO_EXTICR4_EXTI13 = ((std::uint16_t)0x00F0);
#undef AFIO_EXTICR4_EXTI14
constexpr auto AFIO_EXTICR4_EXTI14 = ((std::uint16_t)0x0F00);
#undef AFIO_EXTICR4_EXTI15
constexpr auto AFIO_EXTICR4_EXTI15 = ((std::uint16_t)0xF000);

/* EXTI12 configuration */
#undef AFIO_EXTICR4_EXTI12_PA
constexpr auto AFIO_EXTICR4_EXTI12_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR4_EXTI12_PB
constexpr auto AFIO_EXTICR4_EXTI12_PB = ((std::uint16_t)0x0001);
#undef AFIO_EXTICR4_EXTI12_PC
constexpr auto AFIO_EXTICR4_EXTI12_PC = ((std::uint16_t)0x0002);
#undef AFIO_EXTICR4_EXTI12_PD
constexpr auto AFIO_EXTICR4_EXTI12_PD = ((std::uint16_t)0x0003);
#undef AFIO_EXTICR4_EXTI12_PE
constexpr auto AFIO_EXTICR4_EXTI12_PE = ((std::uint16_t)0x0004);
#undef AFIO_EXTICR4_EXTI12_PF
constexpr auto AFIO_EXTICR4_EXTI12_PF = ((std::uint16_t)0x0005);
#undef AFIO_EXTICR4_EXTI12_PG
constexpr auto AFIO_EXTICR4_EXTI12_PG = ((std::uint16_t)0x0006);

/* EXTI13 configuration */
#undef AFIO_EXTICR4_EXTI13_PA
constexpr auto AFIO_EXTICR4_EXTI13_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR4_EXTI13_PB
constexpr auto AFIO_EXTICR4_EXTI13_PB = ((std::uint16_t)0x0010);
#undef AFIO_EXTICR4_EXTI13_PC
constexpr auto AFIO_EXTICR4_EXTI13_PC = ((std::uint16_t)0x0020);
#undef AFIO_EXTICR4_EXTI13_PD
constexpr auto AFIO_EXTICR4_EXTI13_PD = ((std::uint16_t)0x0030);
#undef AFIO_EXTICR4_EXTI13_PE
constexpr auto AFIO_EXTICR4_EXTI13_PE = ((std::uint16_t)0x0040);
#undef AFIO_EXTICR4_EXTI13_PF
constexpr auto AFIO_EXTICR4_EXTI13_PF = ((std::uint16_t)0x0050);
#undef AFIO_EXTICR4_EXTI13_PG
constexpr auto AFIO_EXTICR4_EXTI13_PG = ((std::uint16_t)0x0060);

/*!< EXTI14 configuration */
#undef AFIO_EXTICR4_EXTI14_PA
constexpr auto AFIO_EXTICR4_EXTI14_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR4_EXTI14_PB
constexpr auto AFIO_EXTICR4_EXTI14_PB = ((std::uint16_t)0x0100);
#undef AFIO_EXTICR4_EXTI14_PC
constexpr auto AFIO_EXTICR4_EXTI14_PC = ((std::uint16_t)0x0200);
#undef AFIO_EXTICR4_EXTI14_PD
constexpr auto AFIO_EXTICR4_EXTI14_PD = ((std::uint16_t)0x0300);
#undef AFIO_EXTICR4_EXTI14_PE
constexpr auto AFIO_EXTICR4_EXTI14_PE = ((std::uint16_t)0x0400);
#undef AFIO_EXTICR4_EXTI14_PF
constexpr auto AFIO_EXTICR4_EXTI14_PF = ((std::uint16_t)0x0500);
#undef AFIO_EXTICR4_EXTI14_PG
constexpr auto AFIO_EXTICR4_EXTI14_PG = ((std::uint16_t)0x0600);

/*!< EXTI15 configuration */
#undef AFIO_EXTICR4_EXTI15_PA
constexpr auto AFIO_EXTICR4_EXTI15_PA = ((std::uint16_t)0x0000);
#undef AFIO_EXTICR4_EXTI15_PB
constexpr auto AFIO_EXTICR4_EXTI15_PB = ((std::uint16_t)0x1000);
#undef AFIO_EXTICR4_EXTI15_PC
constexpr auto AFIO_EXTICR4_EXTI15_PC = ((std::uint16_t)0x2000);
#undef AFIO_EXTICR4_EXTI15_PD
constexpr auto AFIO_EXTICR4_EXTI15_PD = ((std::uint16_t)0x3000);
#undef AFIO_EXTICR4_EXTI15_PE
constexpr auto AFIO_EXTICR4_EXTI15_PE = ((std::uint16_t)0x4000);
#undef AFIO_EXTICR4_EXTI15_PF
constexpr auto AFIO_EXTICR4_EXTI15_PF = ((std::uint16_t)0x5000);
#undef AFIO_EXTICR4_EXTI15_PG
constexpr auto AFIO_EXTICR4_EXTI15_PG = ((std::uint16_t)0x6000);

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
/******************  Bit definition for AFIO_MAPR2 register  ******************/
#undef AFIO_MAPR2_TIM15_REMAP
constexpr auto AFIO_MAPR2_TIM15_REMAP = ((std::uint32_t)0x00000001);
#undef AFIO_MAPR2_TIM16_REMAP
constexpr auto AFIO_MAPR2_TIM16_REMAP = ((std::uint32_t)0x00000002);
#undef AFIO_MAPR2_TIM17_REMAP
constexpr auto AFIO_MAPR2_TIM17_REMAP = ((std::uint32_t)0x00000004);
#undef AFIO_MAPR2_CEC_REMAP
constexpr auto AFIO_MAPR2_CEC_REMAP = ((std::uint32_t)0x00000008);
#undef AFIO_MAPR2_TIM1_DMA_REMAP
constexpr auto AFIO_MAPR2_TIM1_DMA_REMAP = ((std::uint32_t)0x00000010);
#endif

#ifdef STM32F10X_HD_VL
#undef AFIO_MAPR2_TIM13_REMAP
constexpr auto AFIO_MAPR2_TIM13_REMAP = ((std::uint32_t)0x00000100);
#undef AFIO_MAPR2_TIM14_REMAP
constexpr auto AFIO_MAPR2_TIM14_REMAP = ((std::uint32_t)0x00000200);
#undef AFIO_MAPR2_FSMC_NADV_REMAP
constexpr auto AFIO_MAPR2_FSMC_NADV_REMAP = ((std::uint32_t)0x00000400);
#undef AFIO_MAPR2_TIM67_DAC_DMA_REMAP
constexpr auto AFIO_MAPR2_TIM67_DAC_DMA_REMAP = ((std::uint32_t)0x00000800);
#undef AFIO_MAPR2_TIM12_REMAP
constexpr auto AFIO_MAPR2_TIM12_REMAP = ((std::uint32_t)0x00001000);
#undef AFIO_MAPR2_MISC_REMAP
constexpr auto AFIO_MAPR2_MISC_REMAP = ((std::uint32_t)0x00002000);
#endif

#ifdef STM32F10X_XL
/******************  Bit definition for AFIO_MAPR2 register  ******************/
#undef AFIO_MAPR2_TIM9_REMAP
constexpr auto AFIO_MAPR2_TIM9_REMAP = ((std::uint32_t)0x00000020);
#undef AFIO_MAPR2_TIM10_REMAP
constexpr auto AFIO_MAPR2_TIM10_REMAP = ((std::uint32_t)0x00000040);
#undef AFIO_MAPR2_TIM11_REMAP
constexpr auto AFIO_MAPR2_TIM11_REMAP = ((std::uint32_t)0x00000080);
#undef AFIO_MAPR2_TIM13_REMAP
constexpr auto AFIO_MAPR2_TIM13_REMAP = ((std::uint32_t)0x00000100);
#undef AFIO_MAPR2_TIM14_REMAP
constexpr auto AFIO_MAPR2_TIM14_REMAP = ((std::uint32_t)0x00000200);
#undef AFIO_MAPR2_FSMC_NADV_REMAP
constexpr auto AFIO_MAPR2_FSMC_NADV_REMAP = ((std::uint32_t)0x00000400);
#endif

/******************************************************************************/
/*                                                                            */
/*                               SystemTick                                   */
/*                                                                            */
/******************************************************************************/

/*****************  Bit definition for SysTick_CTRL register  *****************/
#undef SysTick_CTRL_ENABLE
constexpr auto SysTick_CTRL_ENABLE = ((std::uint32_t)0x00000001);
#undef SysTick_CTRL_TICKINT
constexpr auto SysTick_CTRL_TICKINT = ((std::uint32_t)0x00000002);
#undef SysTick_CTRL_CLKSOURCE
constexpr auto SysTick_CTRL_CLKSOURCE = ((std::uint32_t)0x00000004);
#undef SysTick_CTRL_COUNTFLAG
constexpr auto SysTick_CTRL_COUNTFLAG = ((std::uint32_t)0x00010000);

/*****************  Bit definition for SysTick_LOAD register  *****************/
#undef SysTick_LOAD_RELOAD
constexpr auto SysTick_LOAD_RELOAD = ((std::uint32_t)0x00FFFFFF);

/*****************  Bit definition for SysTick_VAL register  ******************/
#undef SysTick_VAL_CURRENT
constexpr auto SysTick_VAL_CURRENT = ((std::uint32_t)0x00FFFFFF);

/*****************  Bit definition for SysTick_CALIB register  ****************/
#undef SysTick_CALIB_TENMS
constexpr auto SysTick_CALIB_TENMS = ((std::uint32_t)0x00FFFFFF);
#undef SysTick_CALIB_SKEW
constexpr auto SysTick_CALIB_SKEW = ((std::uint32_t)0x40000000);
#undef SysTick_CALIB_NOREF
constexpr auto SysTick_CALIB_NOREF = ((std::uint32_t)0x80000000);

/******************************************************************************/
/*                                                                            */
/*                  Nested Vectored Interrupt Controller                      */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for NVIC_ISER register  *******************/
#undef NVIC_ISER_SETENA
constexpr auto NVIC_ISER_SETENA = ((std::uint32_t)0xFFFFFFFF);
#undef NVIC_ISER_SETENA_0
constexpr auto NVIC_ISER_SETENA_0 = ((std::uint32_t)0x00000001);
#undef NVIC_ISER_SETENA_1
constexpr auto NVIC_ISER_SETENA_1 = ((std::uint32_t)0x00000002);
#undef NVIC_ISER_SETENA_2
constexpr auto NVIC_ISER_SETENA_2 = ((std::uint32_t)0x00000004);
#undef NVIC_ISER_SETENA_3
constexpr auto NVIC_ISER_SETENA_3 = ((std::uint32_t)0x00000008);
#undef NVIC_ISER_SETENA_4
constexpr auto NVIC_ISER_SETENA_4 = ((std::uint32_t)0x00000010);
#undef NVIC_ISER_SETENA_5
constexpr auto NVIC_ISER_SETENA_5 = ((std::uint32_t)0x00000020);
#undef NVIC_ISER_SETENA_6
constexpr auto NVIC_ISER_SETENA_6 = ((std::uint32_t)0x00000040);
#undef NVIC_ISER_SETENA_7
constexpr auto NVIC_ISER_SETENA_7 = ((std::uint32_t)0x00000080);
#undef NVIC_ISER_SETENA_8
constexpr auto NVIC_ISER_SETENA_8 = ((std::uint32_t)0x00000100);
#undef NVIC_ISER_SETENA_9
constexpr auto NVIC_ISER_SETENA_9 = ((std::uint32_t)0x00000200);
#undef NVIC_ISER_SETENA_10
constexpr auto NVIC_ISER_SETENA_10 = ((std::uint32_t)0x00000400);
#undef NVIC_ISER_SETENA_11
constexpr auto NVIC_ISER_SETENA_11 = ((std::uint32_t)0x00000800);
#undef NVIC_ISER_SETENA_12
constexpr auto NVIC_ISER_SETENA_12 = ((std::uint32_t)0x00001000);
#undef NVIC_ISER_SETENA_13
constexpr auto NVIC_ISER_SETENA_13 = ((std::uint32_t)0x00002000);
#undef NVIC_ISER_SETENA_14
constexpr auto NVIC_ISER_SETENA_14 = ((std::uint32_t)0x00004000);
#undef NVIC_ISER_SETENA_15
constexpr auto NVIC_ISER_SETENA_15 = ((std::uint32_t)0x00008000);
#undef NVIC_ISER_SETENA_16
constexpr auto NVIC_ISER_SETENA_16 = ((std::uint32_t)0x00010000);
#undef NVIC_ISER_SETENA_17
constexpr auto NVIC_ISER_SETENA_17 = ((std::uint32_t)0x00020000);
#undef NVIC_ISER_SETENA_18
constexpr auto NVIC_ISER_SETENA_18 = ((std::uint32_t)0x00040000);
#undef NVIC_ISER_SETENA_19
constexpr auto NVIC_ISER_SETENA_19 = ((std::uint32_t)0x00080000);
#undef NVIC_ISER_SETENA_20
constexpr auto NVIC_ISER_SETENA_20 = ((std::uint32_t)0x00100000);
#undef NVIC_ISER_SETENA_21
constexpr auto NVIC_ISER_SETENA_21 = ((std::uint32_t)0x00200000);
#undef NVIC_ISER_SETENA_22
constexpr auto NVIC_ISER_SETENA_22 = ((std::uint32_t)0x00400000);
#undef NVIC_ISER_SETENA_23
constexpr auto NVIC_ISER_SETENA_23 = ((std::uint32_t)0x00800000);
#undef NVIC_ISER_SETENA_24
constexpr auto NVIC_ISER_SETENA_24 = ((std::uint32_t)0x01000000);
#undef NVIC_ISER_SETENA_25
constexpr auto NVIC_ISER_SETENA_25 = ((std::uint32_t)0x02000000);
#undef NVIC_ISER_SETENA_26
constexpr auto NVIC_ISER_SETENA_26 = ((std::uint32_t)0x04000000);
#undef NVIC_ISER_SETENA_27
constexpr auto NVIC_ISER_SETENA_27 = ((std::uint32_t)0x08000000);
#undef NVIC_ISER_SETENA_28
constexpr auto NVIC_ISER_SETENA_28 = ((std::uint32_t)0x10000000);
#undef NVIC_ISER_SETENA_29
constexpr auto NVIC_ISER_SETENA_29 = ((std::uint32_t)0x20000000);
#undef NVIC_ISER_SETENA_30
constexpr auto NVIC_ISER_SETENA_30 = ((std::uint32_t)0x40000000);
#undef NVIC_ISER_SETENA_31
constexpr auto NVIC_ISER_SETENA_31 = ((std::uint32_t)0x80000000);

/******************  Bit definition for NVIC_ICER register  *******************/
#undef NVIC_ICER_CLRENA
constexpr auto NVIC_ICER_CLRENA = ((std::uint32_t)0xFFFFFFFF);
#undef NVIC_ICER_CLRENA_0
constexpr auto NVIC_ICER_CLRENA_0 = ((std::uint32_t)0x00000001);
#undef NVIC_ICER_CLRENA_1
constexpr auto NVIC_ICER_CLRENA_1 = ((std::uint32_t)0x00000002);
#undef NVIC_ICER_CLRENA_2
constexpr auto NVIC_ICER_CLRENA_2 = ((std::uint32_t)0x00000004);
#undef NVIC_ICER_CLRENA_3
constexpr auto NVIC_ICER_CLRENA_3 = ((std::uint32_t)0x00000008);
#undef NVIC_ICER_CLRENA_4
constexpr auto NVIC_ICER_CLRENA_4 = ((std::uint32_t)0x00000010);
#undef NVIC_ICER_CLRENA_5
constexpr auto NVIC_ICER_CLRENA_5 = ((std::uint32_t)0x00000020);
#undef NVIC_ICER_CLRENA_6
constexpr auto NVIC_ICER_CLRENA_6 = ((std::uint32_t)0x00000040);
#undef NVIC_ICER_CLRENA_7
constexpr auto NVIC_ICER_CLRENA_7 = ((std::uint32_t)0x00000080);
#undef NVIC_ICER_CLRENA_8
constexpr auto NVIC_ICER_CLRENA_8 = ((std::uint32_t)0x00000100);
#undef NVIC_ICER_CLRENA_9
constexpr auto NVIC_ICER_CLRENA_9 = ((std::uint32_t)0x00000200);
#undef NVIC_ICER_CLRENA_10
constexpr auto NVIC_ICER_CLRENA_10 = ((std::uint32_t)0x00000400);
#undef NVIC_ICER_CLRENA_11
constexpr auto NVIC_ICER_CLRENA_11 = ((std::uint32_t)0x00000800);
#undef NVIC_ICER_CLRENA_12
constexpr auto NVIC_ICER_CLRENA_12 = ((std::uint32_t)0x00001000);
#undef NVIC_ICER_CLRENA_13
constexpr auto NVIC_ICER_CLRENA_13 = ((std::uint32_t)0x00002000);
#undef NVIC_ICER_CLRENA_14
constexpr auto NVIC_ICER_CLRENA_14 = ((std::uint32_t)0x00004000);
#undef NVIC_ICER_CLRENA_15
constexpr auto NVIC_ICER_CLRENA_15 = ((std::uint32_t)0x00008000);
#undef NVIC_ICER_CLRENA_16
constexpr auto NVIC_ICER_CLRENA_16 = ((std::uint32_t)0x00010000);
#undef NVIC_ICER_CLRENA_17
constexpr auto NVIC_ICER_CLRENA_17 = ((std::uint32_t)0x00020000);
#undef NVIC_ICER_CLRENA_18
constexpr auto NVIC_ICER_CLRENA_18 = ((std::uint32_t)0x00040000);
#undef NVIC_ICER_CLRENA_19
constexpr auto NVIC_ICER_CLRENA_19 = ((std::uint32_t)0x00080000);
#undef NVIC_ICER_CLRENA_20
constexpr auto NVIC_ICER_CLRENA_20 = ((std::uint32_t)0x00100000);
#undef NVIC_ICER_CLRENA_21
constexpr auto NVIC_ICER_CLRENA_21 = ((std::uint32_t)0x00200000);
#undef NVIC_ICER_CLRENA_22
constexpr auto NVIC_ICER_CLRENA_22 = ((std::uint32_t)0x00400000);
#undef NVIC_ICER_CLRENA_23
constexpr auto NVIC_ICER_CLRENA_23 = ((std::uint32_t)0x00800000);
#undef NVIC_ICER_CLRENA_24
constexpr auto NVIC_ICER_CLRENA_24 = ((std::uint32_t)0x01000000);
#undef NVIC_ICER_CLRENA_25
constexpr auto NVIC_ICER_CLRENA_25 = ((std::uint32_t)0x02000000);
#undef NVIC_ICER_CLRENA_26
constexpr auto NVIC_ICER_CLRENA_26 = ((std::uint32_t)0x04000000);
#undef NVIC_ICER_CLRENA_27
constexpr auto NVIC_ICER_CLRENA_27 = ((std::uint32_t)0x08000000);
#undef NVIC_ICER_CLRENA_28
constexpr auto NVIC_ICER_CLRENA_28 = ((std::uint32_t)0x10000000);
#undef NVIC_ICER_CLRENA_29
constexpr auto NVIC_ICER_CLRENA_29 = ((std::uint32_t)0x20000000);
#undef NVIC_ICER_CLRENA_30
constexpr auto NVIC_ICER_CLRENA_30 = ((std::uint32_t)0x40000000);
#undef NVIC_ICER_CLRENA_31
constexpr auto NVIC_ICER_CLRENA_31 = ((std::uint32_t)0x80000000);

/******************  Bit definition for NVIC_ISPR register  *******************/
#undef NVIC_ISPR_SETPEND
constexpr auto NVIC_ISPR_SETPEND = ((std::uint32_t)0xFFFFFFFF);
#undef NVIC_ISPR_SETPEND_0
constexpr auto NVIC_ISPR_SETPEND_0 = ((std::uint32_t)0x00000001);
#undef NVIC_ISPR_SETPEND_1
constexpr auto NVIC_ISPR_SETPEND_1 = ((std::uint32_t)0x00000002);
#undef NVIC_ISPR_SETPEND_2
constexpr auto NVIC_ISPR_SETPEND_2 = ((std::uint32_t)0x00000004);
#undef NVIC_ISPR_SETPEND_3
constexpr auto NVIC_ISPR_SETPEND_3 = ((std::uint32_t)0x00000008);
#undef NVIC_ISPR_SETPEND_4
constexpr auto NVIC_ISPR_SETPEND_4 = ((std::uint32_t)0x00000010);
#undef NVIC_ISPR_SETPEND_5
constexpr auto NVIC_ISPR_SETPEND_5 = ((std::uint32_t)0x00000020);
#undef NVIC_ISPR_SETPEND_6
constexpr auto NVIC_ISPR_SETPEND_6 = ((std::uint32_t)0x00000040);
#undef NVIC_ISPR_SETPEND_7
constexpr auto NVIC_ISPR_SETPEND_7 = ((std::uint32_t)0x00000080);
#undef NVIC_ISPR_SETPEND_8
constexpr auto NVIC_ISPR_SETPEND_8 = ((std::uint32_t)0x00000100);
#undef NVIC_ISPR_SETPEND_9
constexpr auto NVIC_ISPR_SETPEND_9 = ((std::uint32_t)0x00000200);
#undef NVIC_ISPR_SETPEND_10
constexpr auto NVIC_ISPR_SETPEND_10 = ((std::uint32_t)0x00000400);
#undef NVIC_ISPR_SETPEND_11
constexpr auto NVIC_ISPR_SETPEND_11 = ((std::uint32_t)0x00000800);
#undef NVIC_ISPR_SETPEND_12
constexpr auto NVIC_ISPR_SETPEND_12 = ((std::uint32_t)0x00001000);
#undef NVIC_ISPR_SETPEND_13
constexpr auto NVIC_ISPR_SETPEND_13 = ((std::uint32_t)0x00002000);
#undef NVIC_ISPR_SETPEND_14
constexpr auto NVIC_ISPR_SETPEND_14 = ((std::uint32_t)0x00004000);
#undef NVIC_ISPR_SETPEND_15
constexpr auto NVIC_ISPR_SETPEND_15 = ((std::uint32_t)0x00008000);
#undef NVIC_ISPR_SETPEND_16
constexpr auto NVIC_ISPR_SETPEND_16 = ((std::uint32_t)0x00010000);
#undef NVIC_ISPR_SETPEND_17
constexpr auto NVIC_ISPR_SETPEND_17 = ((std::uint32_t)0x00020000);
#undef NVIC_ISPR_SETPEND_18
constexpr auto NVIC_ISPR_SETPEND_18 = ((std::uint32_t)0x00040000);
#undef NVIC_ISPR_SETPEND_19
constexpr auto NVIC_ISPR_SETPEND_19 = ((std::uint32_t)0x00080000);
#undef NVIC_ISPR_SETPEND_20
constexpr auto NVIC_ISPR_SETPEND_20 = ((std::uint32_t)0x00100000);
#undef NVIC_ISPR_SETPEND_21
constexpr auto NVIC_ISPR_SETPEND_21 = ((std::uint32_t)0x00200000);
#undef NVIC_ISPR_SETPEND_22
constexpr auto NVIC_ISPR_SETPEND_22 = ((std::uint32_t)0x00400000);
#undef NVIC_ISPR_SETPEND_23
constexpr auto NVIC_ISPR_SETPEND_23 = ((std::uint32_t)0x00800000);
#undef NVIC_ISPR_SETPEND_24
constexpr auto NVIC_ISPR_SETPEND_24 = ((std::uint32_t)0x01000000);
#undef NVIC_ISPR_SETPEND_25
constexpr auto NVIC_ISPR_SETPEND_25 = ((std::uint32_t)0x02000000);
#undef NVIC_ISPR_SETPEND_26
constexpr auto NVIC_ISPR_SETPEND_26 = ((std::uint32_t)0x04000000);
#undef NVIC_ISPR_SETPEND_27
constexpr auto NVIC_ISPR_SETPEND_27 = ((std::uint32_t)0x08000000);
#undef NVIC_ISPR_SETPEND_28
constexpr auto NVIC_ISPR_SETPEND_28 = ((std::uint32_t)0x10000000);
#undef NVIC_ISPR_SETPEND_29
constexpr auto NVIC_ISPR_SETPEND_29 = ((std::uint32_t)0x20000000);
#undef NVIC_ISPR_SETPEND_30
constexpr auto NVIC_ISPR_SETPEND_30 = ((std::uint32_t)0x40000000);
#undef NVIC_ISPR_SETPEND_31
constexpr auto NVIC_ISPR_SETPEND_31 = ((std::uint32_t)0x80000000);

/******************  Bit definition for NVIC_ICPR register  *******************/
#undef NVIC_ICPR_CLRPEND
constexpr auto NVIC_ICPR_CLRPEND = ((std::uint32_t)0xFFFFFFFF);
#undef NVIC_ICPR_CLRPEND_0
constexpr auto NVIC_ICPR_CLRPEND_0 = ((std::uint32_t)0x00000001);
#undef NVIC_ICPR_CLRPEND_1
constexpr auto NVIC_ICPR_CLRPEND_1 = ((std::uint32_t)0x00000002);
#undef NVIC_ICPR_CLRPEND_2
constexpr auto NVIC_ICPR_CLRPEND_2 = ((std::uint32_t)0x00000004);
#undef NVIC_ICPR_CLRPEND_3
constexpr auto NVIC_ICPR_CLRPEND_3 = ((std::uint32_t)0x00000008);
#undef NVIC_ICPR_CLRPEND_4
constexpr auto NVIC_ICPR_CLRPEND_4 = ((std::uint32_t)0x00000010);
#undef NVIC_ICPR_CLRPEND_5
constexpr auto NVIC_ICPR_CLRPEND_5 = ((std::uint32_t)0x00000020);
#undef NVIC_ICPR_CLRPEND_6
constexpr auto NVIC_ICPR_CLRPEND_6 = ((std::uint32_t)0x00000040);
#undef NVIC_ICPR_CLRPEND_7
constexpr auto NVIC_ICPR_CLRPEND_7 = ((std::uint32_t)0x00000080);
#undef NVIC_ICPR_CLRPEND_8
constexpr auto NVIC_ICPR_CLRPEND_8 = ((std::uint32_t)0x00000100);
#undef NVIC_ICPR_CLRPEND_9
constexpr auto NVIC_ICPR_CLRPEND_9 = ((std::uint32_t)0x00000200);
#undef NVIC_ICPR_CLRPEND_10
constexpr auto NVIC_ICPR_CLRPEND_10 = ((std::uint32_t)0x00000400);
#undef NVIC_ICPR_CLRPEND_11
constexpr auto NVIC_ICPR_CLRPEND_11 = ((std::uint32_t)0x00000800);
#undef NVIC_ICPR_CLRPEND_12
constexpr auto NVIC_ICPR_CLRPEND_12 = ((std::uint32_t)0x00001000);
#undef NVIC_ICPR_CLRPEND_13
constexpr auto NVIC_ICPR_CLRPEND_13 = ((std::uint32_t)0x00002000);
#undef NVIC_ICPR_CLRPEND_14
constexpr auto NVIC_ICPR_CLRPEND_14 = ((std::uint32_t)0x00004000);
#undef NVIC_ICPR_CLRPEND_15
constexpr auto NVIC_ICPR_CLRPEND_15 = ((std::uint32_t)0x00008000);
#undef NVIC_ICPR_CLRPEND_16
constexpr auto NVIC_ICPR_CLRPEND_16 = ((std::uint32_t)0x00010000);
#undef NVIC_ICPR_CLRPEND_17
constexpr auto NVIC_ICPR_CLRPEND_17 = ((std::uint32_t)0x00020000);
#undef NVIC_ICPR_CLRPEND_18
constexpr auto NVIC_ICPR_CLRPEND_18 = ((std::uint32_t)0x00040000);
#undef NVIC_ICPR_CLRPEND_19
constexpr auto NVIC_ICPR_CLRPEND_19 = ((std::uint32_t)0x00080000);
#undef NVIC_ICPR_CLRPEND_20
constexpr auto NVIC_ICPR_CLRPEND_20 = ((std::uint32_t)0x00100000);
#undef NVIC_ICPR_CLRPEND_21
constexpr auto NVIC_ICPR_CLRPEND_21 = ((std::uint32_t)0x00200000);
#undef NVIC_ICPR_CLRPEND_22
constexpr auto NVIC_ICPR_CLRPEND_22 = ((std::uint32_t)0x00400000);
#undef NVIC_ICPR_CLRPEND_23
constexpr auto NVIC_ICPR_CLRPEND_23 = ((std::uint32_t)0x00800000);
#undef NVIC_ICPR_CLRPEND_24
constexpr auto NVIC_ICPR_CLRPEND_24 = ((std::uint32_t)0x01000000);
#undef NVIC_ICPR_CLRPEND_25
constexpr auto NVIC_ICPR_CLRPEND_25 = ((std::uint32_t)0x02000000);
#undef NVIC_ICPR_CLRPEND_26
constexpr auto NVIC_ICPR_CLRPEND_26 = ((std::uint32_t)0x04000000);
#undef NVIC_ICPR_CLRPEND_27
constexpr auto NVIC_ICPR_CLRPEND_27 = ((std::uint32_t)0x08000000);
#undef NVIC_ICPR_CLRPEND_28
constexpr auto NVIC_ICPR_CLRPEND_28 = ((std::uint32_t)0x10000000);
#undef NVIC_ICPR_CLRPEND_29
constexpr auto NVIC_ICPR_CLRPEND_29 = ((std::uint32_t)0x20000000);
#undef NVIC_ICPR_CLRPEND_30
constexpr auto NVIC_ICPR_CLRPEND_30 = ((std::uint32_t)0x40000000);
#undef NVIC_ICPR_CLRPEND_31
constexpr auto NVIC_ICPR_CLRPEND_31 = ((std::uint32_t)0x80000000);

/******************  Bit definition for NVIC_IABR register  *******************/
#undef NVIC_IABR_ACTIVE
constexpr auto NVIC_IABR_ACTIVE = ((std::uint32_t)0xFFFFFFFF);
#undef NVIC_IABR_ACTIVE_0
constexpr auto NVIC_IABR_ACTIVE_0 = ((std::uint32_t)0x00000001);
#undef NVIC_IABR_ACTIVE_1
constexpr auto NVIC_IABR_ACTIVE_1 = ((std::uint32_t)0x00000002);
#undef NVIC_IABR_ACTIVE_2
constexpr auto NVIC_IABR_ACTIVE_2 = ((std::uint32_t)0x00000004);
#undef NVIC_IABR_ACTIVE_3
constexpr auto NVIC_IABR_ACTIVE_3 = ((std::uint32_t)0x00000008);
#undef NVIC_IABR_ACTIVE_4
constexpr auto NVIC_IABR_ACTIVE_4 = ((std::uint32_t)0x00000010);
#undef NVIC_IABR_ACTIVE_5
constexpr auto NVIC_IABR_ACTIVE_5 = ((std::uint32_t)0x00000020);
#undef NVIC_IABR_ACTIVE_6
constexpr auto NVIC_IABR_ACTIVE_6 = ((std::uint32_t)0x00000040);
#undef NVIC_IABR_ACTIVE_7
constexpr auto NVIC_IABR_ACTIVE_7 = ((std::uint32_t)0x00000080);
#undef NVIC_IABR_ACTIVE_8
constexpr auto NVIC_IABR_ACTIVE_8 = ((std::uint32_t)0x00000100);
#undef NVIC_IABR_ACTIVE_9
constexpr auto NVIC_IABR_ACTIVE_9 = ((std::uint32_t)0x00000200);
#undef NVIC_IABR_ACTIVE_10
constexpr auto NVIC_IABR_ACTIVE_10 = ((std::uint32_t)0x00000400);
#undef NVIC_IABR_ACTIVE_11
constexpr auto NVIC_IABR_ACTIVE_11 = ((std::uint32_t)0x00000800);
#undef NVIC_IABR_ACTIVE_12
constexpr auto NVIC_IABR_ACTIVE_12 = ((std::uint32_t)0x00001000);
#undef NVIC_IABR_ACTIVE_13
constexpr auto NVIC_IABR_ACTIVE_13 = ((std::uint32_t)0x00002000);
#undef NVIC_IABR_ACTIVE_14
constexpr auto NVIC_IABR_ACTIVE_14 = ((std::uint32_t)0x00004000);
#undef NVIC_IABR_ACTIVE_15
constexpr auto NVIC_IABR_ACTIVE_15 = ((std::uint32_t)0x00008000);
#undef NVIC_IABR_ACTIVE_16
constexpr auto NVIC_IABR_ACTIVE_16 = ((std::uint32_t)0x00010000);
#undef NVIC_IABR_ACTIVE_17
constexpr auto NVIC_IABR_ACTIVE_17 = ((std::uint32_t)0x00020000);
#undef NVIC_IABR_ACTIVE_18
constexpr auto NVIC_IABR_ACTIVE_18 = ((std::uint32_t)0x00040000);
#undef NVIC_IABR_ACTIVE_19
constexpr auto NVIC_IABR_ACTIVE_19 = ((std::uint32_t)0x00080000);
#undef NVIC_IABR_ACTIVE_20
constexpr auto NVIC_IABR_ACTIVE_20 = ((std::uint32_t)0x00100000);
#undef NVIC_IABR_ACTIVE_21
constexpr auto NVIC_IABR_ACTIVE_21 = ((std::uint32_t)0x00200000);
#undef NVIC_IABR_ACTIVE_22
constexpr auto NVIC_IABR_ACTIVE_22 = ((std::uint32_t)0x00400000);
#undef NVIC_IABR_ACTIVE_23
constexpr auto NVIC_IABR_ACTIVE_23 = ((std::uint32_t)0x00800000);
#undef NVIC_IABR_ACTIVE_24
constexpr auto NVIC_IABR_ACTIVE_24 = ((std::uint32_t)0x01000000);
#undef NVIC_IABR_ACTIVE_25
constexpr auto NVIC_IABR_ACTIVE_25 = ((std::uint32_t)0x02000000);
#undef NVIC_IABR_ACTIVE_26
constexpr auto NVIC_IABR_ACTIVE_26 = ((std::uint32_t)0x04000000);
#undef NVIC_IABR_ACTIVE_27
constexpr auto NVIC_IABR_ACTIVE_27 = ((std::uint32_t)0x08000000);
#undef NVIC_IABR_ACTIVE_28
constexpr auto NVIC_IABR_ACTIVE_28 = ((std::uint32_t)0x10000000);
#undef NVIC_IABR_ACTIVE_29
constexpr auto NVIC_IABR_ACTIVE_29 = ((std::uint32_t)0x20000000);
#undef NVIC_IABR_ACTIVE_30
constexpr auto NVIC_IABR_ACTIVE_30 = ((std::uint32_t)0x40000000);
#undef NVIC_IABR_ACTIVE_31
constexpr auto NVIC_IABR_ACTIVE_31 = ((std::uint32_t)0x80000000);

/******************  Bit definition for NVIC_PRI0 register  *******************/
#undef NVIC_IPR0_PRI_0
constexpr auto NVIC_IPR0_PRI_0 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR0_PRI_1
constexpr auto NVIC_IPR0_PRI_1 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR0_PRI_2
constexpr auto NVIC_IPR0_PRI_2 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR0_PRI_3
constexpr auto NVIC_IPR0_PRI_3 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI1 register  *******************/
#undef NVIC_IPR1_PRI_4
constexpr auto NVIC_IPR1_PRI_4 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR1_PRI_5
constexpr auto NVIC_IPR1_PRI_5 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR1_PRI_6
constexpr auto NVIC_IPR1_PRI_6 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR1_PRI_7
constexpr auto NVIC_IPR1_PRI_7 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI2 register  *******************/
#undef NVIC_IPR2_PRI_8
constexpr auto NVIC_IPR2_PRI_8 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR2_PRI_9
constexpr auto NVIC_IPR2_PRI_9 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR2_PRI_10
constexpr auto NVIC_IPR2_PRI_10 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR2_PRI_11
constexpr auto NVIC_IPR2_PRI_11 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI3 register  *******************/
#undef NVIC_IPR3_PRI_12
constexpr auto NVIC_IPR3_PRI_12 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR3_PRI_13
constexpr auto NVIC_IPR3_PRI_13 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR3_PRI_14
constexpr auto NVIC_IPR3_PRI_14 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR3_PRI_15
constexpr auto NVIC_IPR3_PRI_15 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI4 register  *******************/
#undef NVIC_IPR4_PRI_16
constexpr auto NVIC_IPR4_PRI_16 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR4_PRI_17
constexpr auto NVIC_IPR4_PRI_17 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR4_PRI_18
constexpr auto NVIC_IPR4_PRI_18 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR4_PRI_19
constexpr auto NVIC_IPR4_PRI_19 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI5 register  *******************/
#undef NVIC_IPR5_PRI_20
constexpr auto NVIC_IPR5_PRI_20 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR5_PRI_21
constexpr auto NVIC_IPR5_PRI_21 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR5_PRI_22
constexpr auto NVIC_IPR5_PRI_22 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR5_PRI_23
constexpr auto NVIC_IPR5_PRI_23 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI6 register  *******************/
#undef NVIC_IPR6_PRI_24
constexpr auto NVIC_IPR6_PRI_24 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR6_PRI_25
constexpr auto NVIC_IPR6_PRI_25 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR6_PRI_26
constexpr auto NVIC_IPR6_PRI_26 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR6_PRI_27
constexpr auto NVIC_IPR6_PRI_27 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for NVIC_PRI7 register  *******************/
#undef NVIC_IPR7_PRI_28
constexpr auto NVIC_IPR7_PRI_28 = ((std::uint32_t)0x000000FF);
#undef NVIC_IPR7_PRI_29
constexpr auto NVIC_IPR7_PRI_29 = ((std::uint32_t)0x0000FF00);
#undef NVIC_IPR7_PRI_30
constexpr auto NVIC_IPR7_PRI_30 = ((std::uint32_t)0x00FF0000);
#undef NVIC_IPR7_PRI_31
constexpr auto NVIC_IPR7_PRI_31 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for SCB_CPUID register  *******************/
#undef SCB_CPUID_REVISION
constexpr auto SCB_CPUID_REVISION = ((std::uint32_t)0x0000000F);
#undef SCB_CPUID_PARTNO
constexpr auto SCB_CPUID_PARTNO = ((std::uint32_t)0x0000FFF0);
#undef SCB_CPUID_Constant
constexpr auto SCB_CPUID_Constant = ((std::uint32_t)0x000F0000);
#undef SCB_CPUID_VARIANT
constexpr auto SCB_CPUID_VARIANT = ((std::uint32_t)0x00F00000);
#undef SCB_CPUID_IMPLEMENTER
constexpr auto SCB_CPUID_IMPLEMENTER = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for SCB_ICSR register  *******************/
#undef SCB_ICSR_VECTACTIVE
constexpr auto SCB_ICSR_VECTACTIVE = ((std::uint32_t)0x000001FF);
#undef SCB_ICSR_RETTOBASE
constexpr auto SCB_ICSR_RETTOBASE = ((std::uint32_t)0x00000800);
#undef SCB_ICSR_VECTPENDING
constexpr auto SCB_ICSR_VECTPENDING = ((std::uint32_t)0x003FF000);
#undef SCB_ICSR_ISRPENDING
constexpr auto SCB_ICSR_ISRPENDING = ((std::uint32_t)0x00400000);
#undef SCB_ICSR_ISRPREEMPT
constexpr auto SCB_ICSR_ISRPREEMPT = ((std::uint32_t)0x00800000);
#undef SCB_ICSR_PENDSTCLR
constexpr auto SCB_ICSR_PENDSTCLR = ((std::uint32_t)0x02000000);
#undef SCB_ICSR_PENDSTSET
constexpr auto SCB_ICSR_PENDSTSET = ((std::uint32_t)0x04000000);
#undef SCB_ICSR_PENDSVCLR
constexpr auto SCB_ICSR_PENDSVCLR = ((std::uint32_t)0x08000000);
#undef SCB_ICSR_PENDSVSET
constexpr auto SCB_ICSR_PENDSVSET = ((std::uint32_t)0x10000000);
#undef SCB_ICSR_NMIPENDSET
constexpr auto SCB_ICSR_NMIPENDSET = ((std::uint32_t)0x80000000);

/*******************  Bit definition for SCB_VTOR register  *******************/
#undef SCB_VTOR_TBLOFF
constexpr auto SCB_VTOR_TBLOFF = ((std::uint32_t)0x1FFFFF80);
#undef SCB_VTOR_TBLBASE
constexpr auto SCB_VTOR_TBLBASE = ((std::uint32_t)0x20000000);

/*!<*****************  Bit definition for SCB_AIRCR register  *******************/
#undef SCB_AIRCR_VECTRESET
constexpr auto SCB_AIRCR_VECTRESET = ((std::uint32_t)0x00000001);
#undef SCB_AIRCR_VECTCLRACTIVE
constexpr auto SCB_AIRCR_VECTCLRACTIVE = ((std::uint32_t)0x00000002);
#undef SCB_AIRCR_SYSRESETREQ
constexpr auto SCB_AIRCR_SYSRESETREQ = ((std::uint32_t)0x00000004);

#undef SCB_AIRCR_PRIGROUP
constexpr auto SCB_AIRCR_PRIGROUP = ((std::uint32_t)0x00000700);
#undef SCB_AIRCR_PRIGROUP_0
constexpr auto SCB_AIRCR_PRIGROUP_0 = ((std::uint32_t)0x00000100);
#undef SCB_AIRCR_PRIGROUP_1
constexpr auto SCB_AIRCR_PRIGROUP_1 = ((std::uint32_t)0x00000200);
#undef SCB_AIRCR_PRIGROUP_2
constexpr auto SCB_AIRCR_PRIGROUP_2 = ((std::uint32_t)0x00000400);

/* prority group configuration */
#undef SCB_AIRCR_PRIGROUP0
constexpr auto SCB_AIRCR_PRIGROUP0 = ((std::uint32_t)0x00000000);
#undef SCB_AIRCR_PRIGROUP1
constexpr auto SCB_AIRCR_PRIGROUP1 = ((std::uint32_t)0x00000100);
#undef SCB_AIRCR_PRIGROUP2
constexpr auto SCB_AIRCR_PRIGROUP2 = ((std::uint32_t)0x00000200);
#undef SCB_AIRCR_PRIGROUP3
constexpr auto SCB_AIRCR_PRIGROUP3 = ((std::uint32_t)0x00000300);
#undef SCB_AIRCR_PRIGROUP4
constexpr auto SCB_AIRCR_PRIGROUP4 = ((std::uint32_t)0x00000400);
#undef SCB_AIRCR_PRIGROUP5
constexpr auto SCB_AIRCR_PRIGROUP5 = ((std::uint32_t)0x00000500);
#undef SCB_AIRCR_PRIGROUP6
constexpr auto SCB_AIRCR_PRIGROUP6 = ((std::uint32_t)0x00000600);
#undef SCB_AIRCR_PRIGROUP7
constexpr auto SCB_AIRCR_PRIGROUP7 = ((std::uint32_t)0x00000700);

#undef SCB_AIRCR_ENDIANESS
constexpr auto SCB_AIRCR_ENDIANESS = ((std::uint32_t)0x00008000);
#undef SCB_AIRCR_VECTKEY
constexpr auto SCB_AIRCR_VECTKEY = ((std::uint32_t)0xFFFF0000);

/*******************  Bit definition for SCB_SCR register  ********************/
#undef SCB_SCR_SLEEPONEXIT
constexpr auto SCB_SCR_SLEEPONEXIT = ((std::uint8_t)0x02);
#undef SCB_SCR_SLEEPDEEP
constexpr auto SCB_SCR_SLEEPDEEP = ((std::uint8_t)0x04);
#undef SCB_SCR_SEVONPEND
constexpr auto SCB_SCR_SEVONPEND = ((std::uint8_t)0x10);

/********************  Bit definition for SCB_CCR register  *******************/
#undef SCB_CCR_NONBASETHRDENA
constexpr auto SCB_CCR_NONBASETHRDENA = ((std::uint16_t)0x0001);
#undef SCB_CCR_USERSETMPEND
constexpr auto SCB_CCR_USERSETMPEND = ((std::uint16_t)0x0002);
#undef SCB_CCR_UNALIGN_TRP
constexpr auto SCB_CCR_UNALIGN_TRP = ((std::uint16_t)0x0008);
#undef SCB_CCR_DIV_0_TRP
constexpr auto SCB_CCR_DIV_0_TRP = ((std::uint16_t)0x0010);
#undef SCB_CCR_BFHFNMIGN
constexpr auto SCB_CCR_BFHFNMIGN = ((std::uint16_t)0x0100);
#undef SCB_CCR_STKALIGN
constexpr auto SCB_CCR_STKALIGN = ((std::uint16_t)0x0200);

/*******************  Bit definition for SCB_SHPR register ********************/
#undef SCB_SHPR_PRI_N
constexpr auto SCB_SHPR_PRI_N = ((std::uint32_t)0x000000FF);
#undef SCB_SHPR_PRI_N1
constexpr auto SCB_SHPR_PRI_N1 = ((std::uint32_t)0x0000FF00);
#undef SCB_SHPR_PRI_N2
constexpr auto SCB_SHPR_PRI_N2 = ((std::uint32_t)0x00FF0000);
#undef SCB_SHPR_PRI_N3
constexpr auto SCB_SHPR_PRI_N3 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for SCB_SHCSR register  *******************/
#undef SCB_SHCSR_MEMFAULTACT
constexpr auto SCB_SHCSR_MEMFAULTACT = ((std::uint32_t)0x00000001);
#undef SCB_SHCSR_BUSFAULTACT
constexpr auto SCB_SHCSR_BUSFAULTACT = ((std::uint32_t)0x00000002);
#undef SCB_SHCSR_USGFAULTACT
constexpr auto SCB_SHCSR_USGFAULTACT = ((std::uint32_t)0x00000008);
#undef SCB_SHCSR_SVCALLACT
constexpr auto SCB_SHCSR_SVCALLACT = ((std::uint32_t)0x00000080);
#undef SCB_SHCSR_MONITORACT
constexpr auto SCB_SHCSR_MONITORACT = ((std::uint32_t)0x00000100);
#undef SCB_SHCSR_PENDSVACT
constexpr auto SCB_SHCSR_PENDSVACT = ((std::uint32_t)0x00000400);
#undef SCB_SHCSR_SYSTICKACT
constexpr auto SCB_SHCSR_SYSTICKACT = ((std::uint32_t)0x00000800);
#undef SCB_SHCSR_USGFAULTPENDED
constexpr auto SCB_SHCSR_USGFAULTPENDED = ((std::uint32_t)0x00001000);
#undef SCB_SHCSR_MEMFAULTPENDED
constexpr auto SCB_SHCSR_MEMFAULTPENDED = ((std::uint32_t)0x00002000);
#undef SCB_SHCSR_BUSFAULTPENDED
constexpr auto SCB_SHCSR_BUSFAULTPENDED = ((std::uint32_t)0x00004000);
#undef SCB_SHCSR_SVCALLPENDED
constexpr auto SCB_SHCSR_SVCALLPENDED = ((std::uint32_t)0x00008000);
#undef SCB_SHCSR_MEMFAULTENA
constexpr auto SCB_SHCSR_MEMFAULTENA = ((std::uint32_t)0x00010000);
#undef SCB_SHCSR_BUSFAULTENA
constexpr auto SCB_SHCSR_BUSFAULTENA = ((std::uint32_t)0x00020000);
#undef SCB_SHCSR_USGFAULTENA
constexpr auto SCB_SHCSR_USGFAULTENA = ((std::uint32_t)0x00040000);

/*******************  Bit definition for SCB_CFSR register  *******************/
/*!< MFSR */
#undef SCB_CFSR_IACCVIOL
constexpr auto SCB_CFSR_IACCVIOL = ((std::uint32_t)0x00000001);
#undef SCB_CFSR_DACCVIOL
constexpr auto SCB_CFSR_DACCVIOL = ((std::uint32_t)0x00000002);
#undef SCB_CFSR_MUNSTKERR
constexpr auto SCB_CFSR_MUNSTKERR = ((std::uint32_t)0x00000008);
#undef SCB_CFSR_MSTKERR
constexpr auto SCB_CFSR_MSTKERR = ((std::uint32_t)0x00000010);
#undef SCB_CFSR_MMARVALID
constexpr auto SCB_CFSR_MMARVALID = ((std::uint32_t)0x00000080);
/*!< BFSR */
#undef SCB_CFSR_IBUSERR
constexpr auto SCB_CFSR_IBUSERR = ((std::uint32_t)0x00000100);
#undef SCB_CFSR_PRECISERR
constexpr auto SCB_CFSR_PRECISERR = ((std::uint32_t)0x00000200);
#undef SCB_CFSR_IMPRECISERR
constexpr auto SCB_CFSR_IMPRECISERR = ((std::uint32_t)0x00000400);
#undef SCB_CFSR_UNSTKERR
constexpr auto SCB_CFSR_UNSTKERR = ((std::uint32_t)0x00000800);
#undef SCB_CFSR_STKERR
constexpr auto SCB_CFSR_STKERR = ((std::uint32_t)0x00001000);
#undef SCB_CFSR_BFARVALID
constexpr auto SCB_CFSR_BFARVALID = ((std::uint32_t)0x00008000);
/*!< UFSR */
#undef SCB_CFSR_UNDEFINSTR
constexpr auto SCB_CFSR_UNDEFINSTR = ((std::uint32_t)0x00010000);
#undef SCB_CFSR_INVSTATE
constexpr auto SCB_CFSR_INVSTATE = ((std::uint32_t)0x00020000);
#undef SCB_CFSR_INVPC
constexpr auto SCB_CFSR_INVPC = ((std::uint32_t)0x00040000);
#undef SCB_CFSR_NOCP
constexpr auto SCB_CFSR_NOCP = ((std::uint32_t)0x00080000);
#undef SCB_CFSR_UNALIGNED
constexpr auto SCB_CFSR_UNALIGNED = ((std::uint32_t)0x01000000);
#undef SCB_CFSR_DIVBYZERO
constexpr auto SCB_CFSR_DIVBYZERO = ((std::uint32_t)0x02000000);

/*******************  Bit definition for SCB_HFSR register  *******************/
#undef SCB_HFSR_VECTTBL
constexpr auto SCB_HFSR_VECTTBL = ((std::uint32_t)0x00000002);
#undef SCB_HFSR_FORCED
constexpr auto SCB_HFSR_FORCED = ((std::uint32_t)0x40000000);
#undef SCB_HFSR_DEBUGEVT
constexpr auto SCB_HFSR_DEBUGEVT = ((std::uint32_t)0x80000000);

/*******************  Bit definition for SCB_DFSR register  *******************/
#undef SCB_DFSR_HALTED
constexpr auto SCB_DFSR_HALTED = ((std::uint8_t)0x01);
#undef SCB_DFSR_BKPT
constexpr auto SCB_DFSR_BKPT = ((std::uint8_t)0x02);
#undef SCB_DFSR_DWTTRAP
constexpr auto SCB_DFSR_DWTTRAP = ((std::uint8_t)0x04);
#undef SCB_DFSR_VCATCH
constexpr auto SCB_DFSR_VCATCH = ((std::uint8_t)0x08);
#undef SCB_DFSR_EXTERNAL
constexpr auto SCB_DFSR_EXTERNAL = ((std::uint8_t)0x10);

/*******************  Bit definition for SCB_MMFAR register  ******************/
#undef SCB_MMFAR_ADDRESS
constexpr auto SCB_MMFAR_ADDRESS = ((std::uint32_t)0xFFFFFFFF);

/*******************  Bit definition for SCB_BFAR register  *******************/
#undef SCB_BFAR_ADDRESS
constexpr auto SCB_BFAR_ADDRESS = ((std::uint32_t)0xFFFFFFFF);

/*******************  Bit definition for SCB_afsr register  *******************/
#undef SCB_AFSR_IMPDEF
constexpr auto SCB_AFSR_IMPDEF = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                                                                            */
/*                    External Interrupt/Event Controller                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for EXTI_IMR register  *******************/
#undef EXTI_IMR_MR0
constexpr auto EXTI_IMR_MR0 = ((std::uint32_t)0x00000001);
#undef EXTI_IMR_MR1
constexpr auto EXTI_IMR_MR1 = ((std::uint32_t)0x00000002);
#undef EXTI_IMR_MR2
constexpr auto EXTI_IMR_MR2 = ((std::uint32_t)0x00000004);
#undef EXTI_IMR_MR3
constexpr auto EXTI_IMR_MR3 = ((std::uint32_t)0x00000008);
#undef EXTI_IMR_MR4
constexpr auto EXTI_IMR_MR4 = ((std::uint32_t)0x00000010);
#undef EXTI_IMR_MR5
constexpr auto EXTI_IMR_MR5 = ((std::uint32_t)0x00000020);
#undef EXTI_IMR_MR6
constexpr auto EXTI_IMR_MR6 = ((std::uint32_t)0x00000040);
#undef EXTI_IMR_MR7
constexpr auto EXTI_IMR_MR7 = ((std::uint32_t)0x00000080);
#undef EXTI_IMR_MR8
constexpr auto EXTI_IMR_MR8 = ((std::uint32_t)0x00000100);
#undef EXTI_IMR_MR9
constexpr auto EXTI_IMR_MR9 = ((std::uint32_t)0x00000200);
#undef EXTI_IMR_MR10
constexpr auto EXTI_IMR_MR10 = ((std::uint32_t)0x00000400);
#undef EXTI_IMR_MR11
constexpr auto EXTI_IMR_MR11 = ((std::uint32_t)0x00000800);
#undef EXTI_IMR_MR12
constexpr auto EXTI_IMR_MR12 = ((std::uint32_t)0x00001000);
#undef EXTI_IMR_MR13
constexpr auto EXTI_IMR_MR13 = ((std::uint32_t)0x00002000);
#undef EXTI_IMR_MR14
constexpr auto EXTI_IMR_MR14 = ((std::uint32_t)0x00004000);
#undef EXTI_IMR_MR15
constexpr auto EXTI_IMR_MR15 = ((std::uint32_t)0x00008000);
#undef EXTI_IMR_MR16
constexpr auto EXTI_IMR_MR16 = ((std::uint32_t)0x00010000);
#undef EXTI_IMR_MR17
constexpr auto EXTI_IMR_MR17 = ((std::uint32_t)0x00020000);
#undef EXTI_IMR_MR18
constexpr auto EXTI_IMR_MR18 = ((std::uint32_t)0x00040000);
#undef EXTI_IMR_MR19
constexpr auto EXTI_IMR_MR19 = ((std::uint32_t)0x00080000);

/*******************  Bit definition for EXTI_EMR register  *******************/
#undef EXTI_EMR_MR0
constexpr auto EXTI_EMR_MR0 = ((std::uint32_t)0x00000001);
#undef EXTI_EMR_MR1
constexpr auto EXTI_EMR_MR1 = ((std::uint32_t)0x00000002);
#undef EXTI_EMR_MR2
constexpr auto EXTI_EMR_MR2 = ((std::uint32_t)0x00000004);
#undef EXTI_EMR_MR3
constexpr auto EXTI_EMR_MR3 = ((std::uint32_t)0x00000008);
#undef EXTI_EMR_MR4
constexpr auto EXTI_EMR_MR4 = ((std::uint32_t)0x00000010);
#undef EXTI_EMR_MR5
constexpr auto EXTI_EMR_MR5 = ((std::uint32_t)0x00000020);
#undef EXTI_EMR_MR6
constexpr auto EXTI_EMR_MR6 = ((std::uint32_t)0x00000040);
#undef EXTI_EMR_MR7
constexpr auto EXTI_EMR_MR7 = ((std::uint32_t)0x00000080);
#undef EXTI_EMR_MR8
constexpr auto EXTI_EMR_MR8 = ((std::uint32_t)0x00000100);
#undef EXTI_EMR_MR9
constexpr auto EXTI_EMR_MR9 = ((std::uint32_t)0x00000200);
#undef EXTI_EMR_MR10
constexpr auto EXTI_EMR_MR10 = ((std::uint32_t)0x00000400);
#undef EXTI_EMR_MR11
constexpr auto EXTI_EMR_MR11 = ((std::uint32_t)0x00000800);
#undef EXTI_EMR_MR12
constexpr auto EXTI_EMR_MR12 = ((std::uint32_t)0x00001000);
#undef EXTI_EMR_MR13
constexpr auto EXTI_EMR_MR13 = ((std::uint32_t)0x00002000);
#undef EXTI_EMR_MR14
constexpr auto EXTI_EMR_MR14 = ((std::uint32_t)0x00004000);
#undef EXTI_EMR_MR15
constexpr auto EXTI_EMR_MR15 = ((std::uint32_t)0x00008000);
#undef EXTI_EMR_MR16
constexpr auto EXTI_EMR_MR16 = ((std::uint32_t)0x00010000);
#undef EXTI_EMR_MR17
constexpr auto EXTI_EMR_MR17 = ((std::uint32_t)0x00020000);
#undef EXTI_EMR_MR18
constexpr auto EXTI_EMR_MR18 = ((std::uint32_t)0x00040000);
#undef EXTI_EMR_MR19
constexpr auto EXTI_EMR_MR19 = ((std::uint32_t)0x00080000);

/******************  Bit definition for EXTI_RTSR register  *******************/
#undef EXTI_RTSR_TR0
constexpr auto EXTI_RTSR_TR0 = ((std::uint32_t)0x00000001);
#undef EXTI_RTSR_TR1
constexpr auto EXTI_RTSR_TR1 = ((std::uint32_t)0x00000002);
#undef EXTI_RTSR_TR2
constexpr auto EXTI_RTSR_TR2 = ((std::uint32_t)0x00000004);
#undef EXTI_RTSR_TR3
constexpr auto EXTI_RTSR_TR3 = ((std::uint32_t)0x00000008);
#undef EXTI_RTSR_TR4
constexpr auto EXTI_RTSR_TR4 = ((std::uint32_t)0x00000010);
#undef EXTI_RTSR_TR5
constexpr auto EXTI_RTSR_TR5 = ((std::uint32_t)0x00000020);
#undef EXTI_RTSR_TR6
constexpr auto EXTI_RTSR_TR6 = ((std::uint32_t)0x00000040);
#undef EXTI_RTSR_TR7
constexpr auto EXTI_RTSR_TR7 = ((std::uint32_t)0x00000080);
#undef EXTI_RTSR_TR8
constexpr auto EXTI_RTSR_TR8 = ((std::uint32_t)0x00000100);
#undef EXTI_RTSR_TR9
constexpr auto EXTI_RTSR_TR9 = ((std::uint32_t)0x00000200);
#undef EXTI_RTSR_TR10
constexpr auto EXTI_RTSR_TR10 = ((std::uint32_t)0x00000400);
#undef EXTI_RTSR_TR11
constexpr auto EXTI_RTSR_TR11 = ((std::uint32_t)0x00000800);
#undef EXTI_RTSR_TR12
constexpr auto EXTI_RTSR_TR12 = ((std::uint32_t)0x00001000);
#undef EXTI_RTSR_TR13
constexpr auto EXTI_RTSR_TR13 = ((std::uint32_t)0x00002000);
#undef EXTI_RTSR_TR14
constexpr auto EXTI_RTSR_TR14 = ((std::uint32_t)0x00004000);
#undef EXTI_RTSR_TR15
constexpr auto EXTI_RTSR_TR15 = ((std::uint32_t)0x00008000);
#undef EXTI_RTSR_TR16
constexpr auto EXTI_RTSR_TR16 = ((std::uint32_t)0x00010000);
#undef EXTI_RTSR_TR17
constexpr auto EXTI_RTSR_TR17 = ((std::uint32_t)0x00020000);
#undef EXTI_RTSR_TR18
constexpr auto EXTI_RTSR_TR18 = ((std::uint32_t)0x00040000);
#undef EXTI_RTSR_TR19
constexpr auto EXTI_RTSR_TR19 = ((std::uint32_t)0x00080000);

/******************  Bit definition for EXTI_FTSR register  *******************/
#undef EXTI_FTSR_TR0
constexpr auto EXTI_FTSR_TR0 = ((std::uint32_t)0x00000001);
#undef EXTI_FTSR_TR1
constexpr auto EXTI_FTSR_TR1 = ((std::uint32_t)0x00000002);
#undef EXTI_FTSR_TR2
constexpr auto EXTI_FTSR_TR2 = ((std::uint32_t)0x00000004);
#undef EXTI_FTSR_TR3
constexpr auto EXTI_FTSR_TR3 = ((std::uint32_t)0x00000008);
#undef EXTI_FTSR_TR4
constexpr auto EXTI_FTSR_TR4 = ((std::uint32_t)0x00000010);
#undef EXTI_FTSR_TR5
constexpr auto EXTI_FTSR_TR5 = ((std::uint32_t)0x00000020);
#undef EXTI_FTSR_TR6
constexpr auto EXTI_FTSR_TR6 = ((std::uint32_t)0x00000040);
#undef EXTI_FTSR_TR7
constexpr auto EXTI_FTSR_TR7 = ((std::uint32_t)0x00000080);
#undef EXTI_FTSR_TR8
constexpr auto EXTI_FTSR_TR8 = ((std::uint32_t)0x00000100);
#undef EXTI_FTSR_TR9
constexpr auto EXTI_FTSR_TR9 = ((std::uint32_t)0x00000200);
#undef EXTI_FTSR_TR10
constexpr auto EXTI_FTSR_TR10 = ((std::uint32_t)0x00000400);
#undef EXTI_FTSR_TR11
constexpr auto EXTI_FTSR_TR11 = ((std::uint32_t)0x00000800);
#undef EXTI_FTSR_TR12
constexpr auto EXTI_FTSR_TR12 = ((std::uint32_t)0x00001000);
#undef EXTI_FTSR_TR13
constexpr auto EXTI_FTSR_TR13 = ((std::uint32_t)0x00002000);
#undef EXTI_FTSR_TR14
constexpr auto EXTI_FTSR_TR14 = ((std::uint32_t)0x00004000);
#undef EXTI_FTSR_TR15
constexpr auto EXTI_FTSR_TR15 = ((std::uint32_t)0x00008000);
#undef EXTI_FTSR_TR16
constexpr auto EXTI_FTSR_TR16 = ((std::uint32_t)0x00010000);
#undef EXTI_FTSR_TR17
constexpr auto EXTI_FTSR_TR17 = ((std::uint32_t)0x00020000);
#undef EXTI_FTSR_TR18
constexpr auto EXTI_FTSR_TR18 = ((std::uint32_t)0x00040000);
#undef EXTI_FTSR_TR19
constexpr auto EXTI_FTSR_TR19 = ((std::uint32_t)0x00080000);

/******************  Bit definition for EXTI_SWIER register  ******************/
#undef EXTI_SWIER_SWIER0
constexpr auto EXTI_SWIER_SWIER0 = ((std::uint32_t)0x00000001);
#undef EXTI_SWIER_SWIER1
constexpr auto EXTI_SWIER_SWIER1 = ((std::uint32_t)0x00000002);
#undef EXTI_SWIER_SWIER2
constexpr auto EXTI_SWIER_SWIER2 = ((std::uint32_t)0x00000004);
#undef EXTI_SWIER_SWIER3
constexpr auto EXTI_SWIER_SWIER3 = ((std::uint32_t)0x00000008);
#undef EXTI_SWIER_SWIER4
constexpr auto EXTI_SWIER_SWIER4 = ((std::uint32_t)0x00000010);
#undef EXTI_SWIER_SWIER5
constexpr auto EXTI_SWIER_SWIER5 = ((std::uint32_t)0x00000020);
#undef EXTI_SWIER_SWIER6
constexpr auto EXTI_SWIER_SWIER6 = ((std::uint32_t)0x00000040);
#undef EXTI_SWIER_SWIER7
constexpr auto EXTI_SWIER_SWIER7 = ((std::uint32_t)0x00000080);
#undef EXTI_SWIER_SWIER8
constexpr auto EXTI_SWIER_SWIER8 = ((std::uint32_t)0x00000100);
#undef EXTI_SWIER_SWIER9
constexpr auto EXTI_SWIER_SWIER9 = ((std::uint32_t)0x00000200);
#undef EXTI_SWIER_SWIER10
constexpr auto EXTI_SWIER_SWIER10 = ((std::uint32_t)0x00000400);
#undef EXTI_SWIER_SWIER11
constexpr auto EXTI_SWIER_SWIER11 = ((std::uint32_t)0x00000800);
#undef EXTI_SWIER_SWIER12
constexpr auto EXTI_SWIER_SWIER12 = ((std::uint32_t)0x00001000);
#undef EXTI_SWIER_SWIER13
constexpr auto EXTI_SWIER_SWIER13 = ((std::uint32_t)0x00002000);
#undef EXTI_SWIER_SWIER14
constexpr auto EXTI_SWIER_SWIER14 = ((std::uint32_t)0x00004000);
#undef EXTI_SWIER_SWIER15
constexpr auto EXTI_SWIER_SWIER15 = ((std::uint32_t)0x00008000);
#undef EXTI_SWIER_SWIER16
constexpr auto EXTI_SWIER_SWIER16 = ((std::uint32_t)0x00010000);
#undef EXTI_SWIER_SWIER17
constexpr auto EXTI_SWIER_SWIER17 = ((std::uint32_t)0x00020000);
#undef EXTI_SWIER_SWIER18
constexpr auto EXTI_SWIER_SWIER18 = ((std::uint32_t)0x00040000);
#undef EXTI_SWIER_SWIER19
constexpr auto EXTI_SWIER_SWIER19 = ((std::uint32_t)0x00080000);

/*******************  Bit definition for EXTI_PR register  ********************/
#undef EXTI_PR_PR0
constexpr auto EXTI_PR_PR0 = ((std::uint32_t)0x00000001);
#undef EXTI_PR_PR1
constexpr auto EXTI_PR_PR1 = ((std::uint32_t)0x00000002);
#undef EXTI_PR_PR2
constexpr auto EXTI_PR_PR2 = ((std::uint32_t)0x00000004);
#undef EXTI_PR_PR3
constexpr auto EXTI_PR_PR3 = ((std::uint32_t)0x00000008);
#undef EXTI_PR_PR4
constexpr auto EXTI_PR_PR4 = ((std::uint32_t)0x00000010);
#undef EXTI_PR_PR5
constexpr auto EXTI_PR_PR5 = ((std::uint32_t)0x00000020);
#undef EXTI_PR_PR6
constexpr auto EXTI_PR_PR6 = ((std::uint32_t)0x00000040);
#undef EXTI_PR_PR7
constexpr auto EXTI_PR_PR7 = ((std::uint32_t)0x00000080);
#undef EXTI_PR_PR8
constexpr auto EXTI_PR_PR8 = ((std::uint32_t)0x00000100);
#undef EXTI_PR_PR9
constexpr auto EXTI_PR_PR9 = ((std::uint32_t)0x00000200);
#undef EXTI_PR_PR10
constexpr auto EXTI_PR_PR10 = ((std::uint32_t)0x00000400);
#undef EXTI_PR_PR11
constexpr auto EXTI_PR_PR11 = ((std::uint32_t)0x00000800);
#undef EXTI_PR_PR12
constexpr auto EXTI_PR_PR12 = ((std::uint32_t)0x00001000);
#undef EXTI_PR_PR13
constexpr auto EXTI_PR_PR13 = ((std::uint32_t)0x00002000);
#undef EXTI_PR_PR14
constexpr auto EXTI_PR_PR14 = ((std::uint32_t)0x00004000);
#undef EXTI_PR_PR15
constexpr auto EXTI_PR_PR15 = ((std::uint32_t)0x00008000);
#undef EXTI_PR_PR16
constexpr auto EXTI_PR_PR16 = ((std::uint32_t)0x00010000);
#undef EXTI_PR_PR17
constexpr auto EXTI_PR_PR17 = ((std::uint32_t)0x00020000);
#undef EXTI_PR_PR18
constexpr auto EXTI_PR_PR18 = ((std::uint32_t)0x00040000);
#undef EXTI_PR_PR19
constexpr auto EXTI_PR_PR19 = ((std::uint32_t)0x00080000);

/******************************************************************************/
/*                                                                            */
/*                             DMA Controller                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for DMA_ISR register  ********************/
#undef DMA_ISR_GIF1
constexpr auto DMA_ISR_GIF1 = ((std::uint32_t)0x00000001);
#undef DMA_ISR_TCIF1
constexpr auto DMA_ISR_TCIF1 = ((std::uint32_t)0x00000002);
#undef DMA_ISR_HTIF1
constexpr auto DMA_ISR_HTIF1 = ((std::uint32_t)0x00000004);
#undef DMA_ISR_TEIF1
constexpr auto DMA_ISR_TEIF1 = ((std::uint32_t)0x00000008);
#undef DMA_ISR_GIF2
constexpr auto DMA_ISR_GIF2 = ((std::uint32_t)0x00000010);
#undef DMA_ISR_TCIF2
constexpr auto DMA_ISR_TCIF2 = ((std::uint32_t)0x00000020);
#undef DMA_ISR_HTIF2
constexpr auto DMA_ISR_HTIF2 = ((std::uint32_t)0x00000040);
#undef DMA_ISR_TEIF2
constexpr auto DMA_ISR_TEIF2 = ((std::uint32_t)0x00000080);
#undef DMA_ISR_GIF3
constexpr auto DMA_ISR_GIF3 = ((std::uint32_t)0x00000100);
#undef DMA_ISR_TCIF3
constexpr auto DMA_ISR_TCIF3 = ((std::uint32_t)0x00000200);
#undef DMA_ISR_HTIF3
constexpr auto DMA_ISR_HTIF3 = ((std::uint32_t)0x00000400);
#undef DMA_ISR_TEIF3
constexpr auto DMA_ISR_TEIF3 = ((std::uint32_t)0x00000800);
#undef DMA_ISR_GIF4
constexpr auto DMA_ISR_GIF4 = ((std::uint32_t)0x00001000);
#undef DMA_ISR_TCIF4
constexpr auto DMA_ISR_TCIF4 = ((std::uint32_t)0x00002000);
#undef DMA_ISR_HTIF4
constexpr auto DMA_ISR_HTIF4 = ((std::uint32_t)0x00004000);
#undef DMA_ISR_TEIF4
constexpr auto DMA_ISR_TEIF4 = ((std::uint32_t)0x00008000);
#undef DMA_ISR_GIF5
constexpr auto DMA_ISR_GIF5 = ((std::uint32_t)0x00010000);
#undef DMA_ISR_TCIF5
constexpr auto DMA_ISR_TCIF5 = ((std::uint32_t)0x00020000);
#undef DMA_ISR_HTIF5
constexpr auto DMA_ISR_HTIF5 = ((std::uint32_t)0x00040000);
#undef DMA_ISR_TEIF5
constexpr auto DMA_ISR_TEIF5 = ((std::uint32_t)0x00080000);
#undef DMA_ISR_GIF6
constexpr auto DMA_ISR_GIF6 = ((std::uint32_t)0x00100000);
#undef DMA_ISR_TCIF6
constexpr auto DMA_ISR_TCIF6 = ((std::uint32_t)0x00200000);
#undef DMA_ISR_HTIF6
constexpr auto DMA_ISR_HTIF6 = ((std::uint32_t)0x00400000);
#undef DMA_ISR_TEIF6
constexpr auto DMA_ISR_TEIF6 = ((std::uint32_t)0x00800000);
#undef DMA_ISR_GIF7
constexpr auto DMA_ISR_GIF7 = ((std::uint32_t)0x01000000);
#undef DMA_ISR_TCIF7
constexpr auto DMA_ISR_TCIF7 = ((std::uint32_t)0x02000000);
#undef DMA_ISR_HTIF7
constexpr auto DMA_ISR_HTIF7 = ((std::uint32_t)0x04000000);
#undef DMA_ISR_TEIF7
constexpr auto DMA_ISR_TEIF7 = ((std::uint32_t)0x08000000);

/*******************  Bit definition for DMA_IFCR register  *******************/
#undef DMA_IFCR_CGIF1
constexpr auto DMA_IFCR_CGIF1 = ((std::uint32_t)0x00000001);
#undef DMA_IFCR_CTCIF1
constexpr auto DMA_IFCR_CTCIF1 = ((std::uint32_t)0x00000002);
#undef DMA_IFCR_CHTIF1
constexpr auto DMA_IFCR_CHTIF1 = ((std::uint32_t)0x00000004);
#undef DMA_IFCR_CTEIF1
constexpr auto DMA_IFCR_CTEIF1 = ((std::uint32_t)0x00000008);
#undef DMA_IFCR_CGIF2
constexpr auto DMA_IFCR_CGIF2 = ((std::uint32_t)0x00000010);
#undef DMA_IFCR_CTCIF2
constexpr auto DMA_IFCR_CTCIF2 = ((std::uint32_t)0x00000020);
#undef DMA_IFCR_CHTIF2
constexpr auto DMA_IFCR_CHTIF2 = ((std::uint32_t)0x00000040);
#undef DMA_IFCR_CTEIF2
constexpr auto DMA_IFCR_CTEIF2 = ((std::uint32_t)0x00000080);
#undef DMA_IFCR_CGIF3
constexpr auto DMA_IFCR_CGIF3 = ((std::uint32_t)0x00000100);
#undef DMA_IFCR_CTCIF3
constexpr auto DMA_IFCR_CTCIF3 = ((std::uint32_t)0x00000200);
#undef DMA_IFCR_CHTIF3
constexpr auto DMA_IFCR_CHTIF3 = ((std::uint32_t)0x00000400);
#undef DMA_IFCR_CTEIF3
constexpr auto DMA_IFCR_CTEIF3 = ((std::uint32_t)0x00000800);
#undef DMA_IFCR_CGIF4
constexpr auto DMA_IFCR_CGIF4 = ((std::uint32_t)0x00001000);
#undef DMA_IFCR_CTCIF4
constexpr auto DMA_IFCR_CTCIF4 = ((std::uint32_t)0x00002000);
#undef DMA_IFCR_CHTIF4
constexpr auto DMA_IFCR_CHTIF4 = ((std::uint32_t)0x00004000);
#undef DMA_IFCR_CTEIF4
constexpr auto DMA_IFCR_CTEIF4 = ((std::uint32_t)0x00008000);
#undef DMA_IFCR_CGIF5
constexpr auto DMA_IFCR_CGIF5 = ((std::uint32_t)0x00010000);
#undef DMA_IFCR_CTCIF5
constexpr auto DMA_IFCR_CTCIF5 = ((std::uint32_t)0x00020000);
#undef DMA_IFCR_CHTIF5
constexpr auto DMA_IFCR_CHTIF5 = ((std::uint32_t)0x00040000);
#undef DMA_IFCR_CTEIF5
constexpr auto DMA_IFCR_CTEIF5 = ((std::uint32_t)0x00080000);
#undef DMA_IFCR_CGIF6
constexpr auto DMA_IFCR_CGIF6 = ((std::uint32_t)0x00100000);
#undef DMA_IFCR_CTCIF6
constexpr auto DMA_IFCR_CTCIF6 = ((std::uint32_t)0x00200000);
#undef DMA_IFCR_CHTIF6
constexpr auto DMA_IFCR_CHTIF6 = ((std::uint32_t)0x00400000);
#undef DMA_IFCR_CTEIF6
constexpr auto DMA_IFCR_CTEIF6 = ((std::uint32_t)0x00800000);
#undef DMA_IFCR_CGIF7
constexpr auto DMA_IFCR_CGIF7 = ((std::uint32_t)0x01000000);
#undef DMA_IFCR_CTCIF7
constexpr auto DMA_IFCR_CTCIF7 = ((std::uint32_t)0x02000000);
#undef DMA_IFCR_CHTIF7
constexpr auto DMA_IFCR_CHTIF7 = ((std::uint32_t)0x04000000);
#undef DMA_IFCR_CTEIF7
constexpr auto DMA_IFCR_CTEIF7 = ((std::uint32_t)0x08000000);

/*******************  Bit definition for DMA_CCR1 register  *******************/
#undef DMA_CCR1_EN
constexpr auto DMA_CCR1_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR1_TCIE
constexpr auto DMA_CCR1_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR1_HTIE
constexpr auto DMA_CCR1_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR1_TEIE
constexpr auto DMA_CCR1_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR1_DIR
constexpr auto DMA_CCR1_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR1_CIRC
constexpr auto DMA_CCR1_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR1_PINC
constexpr auto DMA_CCR1_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR1_MINC
constexpr auto DMA_CCR1_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR1_PSIZE
constexpr auto DMA_CCR1_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR1_PSIZE_0
constexpr auto DMA_CCR1_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR1_PSIZE_1
constexpr auto DMA_CCR1_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR1_MSIZE
constexpr auto DMA_CCR1_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR1_MSIZE_0
constexpr auto DMA_CCR1_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR1_MSIZE_1
constexpr auto DMA_CCR1_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR1_PL
constexpr auto DMA_CCR1_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR1_PL_0
constexpr auto DMA_CCR1_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR1_PL_1
constexpr auto DMA_CCR1_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR1_MEM2MEM
constexpr auto DMA_CCR1_MEM2MEM = ((std::uint16_t)0x4000);

/*******************  Bit definition for DMA_CCR2 register  *******************/
#undef DMA_CCR2_EN
constexpr auto DMA_CCR2_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR2_TCIE
constexpr auto DMA_CCR2_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR2_HTIE
constexpr auto DMA_CCR2_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR2_TEIE
constexpr auto DMA_CCR2_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR2_DIR
constexpr auto DMA_CCR2_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR2_CIRC
constexpr auto DMA_CCR2_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR2_PINC
constexpr auto DMA_CCR2_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR2_MINC
constexpr auto DMA_CCR2_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR2_PSIZE
constexpr auto DMA_CCR2_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR2_PSIZE_0
constexpr auto DMA_CCR2_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR2_PSIZE_1
constexpr auto DMA_CCR2_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR2_MSIZE
constexpr auto DMA_CCR2_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR2_MSIZE_0
constexpr auto DMA_CCR2_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR2_MSIZE_1
constexpr auto DMA_CCR2_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR2_PL
constexpr auto DMA_CCR2_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR2_PL_0
constexpr auto DMA_CCR2_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR2_PL_1
constexpr auto DMA_CCR2_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR2_MEM2MEM
constexpr auto DMA_CCR2_MEM2MEM = ((std::uint16_t)0x4000);

/*******************  Bit definition for DMA_CCR3 register  *******************/
#undef DMA_CCR3_EN
constexpr auto DMA_CCR3_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR3_TCIE
constexpr auto DMA_CCR3_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR3_HTIE
constexpr auto DMA_CCR3_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR3_TEIE
constexpr auto DMA_CCR3_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR3_DIR
constexpr auto DMA_CCR3_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR3_CIRC
constexpr auto DMA_CCR3_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR3_PINC
constexpr auto DMA_CCR3_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR3_MINC
constexpr auto DMA_CCR3_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR3_PSIZE
constexpr auto DMA_CCR3_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR3_PSIZE_0
constexpr auto DMA_CCR3_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR3_PSIZE_1
constexpr auto DMA_CCR3_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR3_MSIZE
constexpr auto DMA_CCR3_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR3_MSIZE_0
constexpr auto DMA_CCR3_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR3_MSIZE_1
constexpr auto DMA_CCR3_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR3_PL
constexpr auto DMA_CCR3_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR3_PL_0
constexpr auto DMA_CCR3_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR3_PL_1
constexpr auto DMA_CCR3_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR3_MEM2MEM
constexpr auto DMA_CCR3_MEM2MEM = ((std::uint16_t)0x4000);

/*!<******************  Bit definition for DMA_CCR4 register  *******************/
#undef DMA_CCR4_EN
constexpr auto DMA_CCR4_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR4_TCIE
constexpr auto DMA_CCR4_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR4_HTIE
constexpr auto DMA_CCR4_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR4_TEIE
constexpr auto DMA_CCR4_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR4_DIR
constexpr auto DMA_CCR4_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR4_CIRC
constexpr auto DMA_CCR4_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR4_PINC
constexpr auto DMA_CCR4_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR4_MINC
constexpr auto DMA_CCR4_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR4_PSIZE
constexpr auto DMA_CCR4_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR4_PSIZE_0
constexpr auto DMA_CCR4_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR4_PSIZE_1
constexpr auto DMA_CCR4_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR4_MSIZE
constexpr auto DMA_CCR4_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR4_MSIZE_0
constexpr auto DMA_CCR4_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR4_MSIZE_1
constexpr auto DMA_CCR4_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR4_PL
constexpr auto DMA_CCR4_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR4_PL_0
constexpr auto DMA_CCR4_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR4_PL_1
constexpr auto DMA_CCR4_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR4_MEM2MEM
constexpr auto DMA_CCR4_MEM2MEM = ((std::uint16_t)0x4000);

/******************  Bit definition for DMA_CCR5 register  *******************/
#undef DMA_CCR5_EN
constexpr auto DMA_CCR5_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR5_TCIE
constexpr auto DMA_CCR5_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR5_HTIE
constexpr auto DMA_CCR5_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR5_TEIE
constexpr auto DMA_CCR5_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR5_DIR
constexpr auto DMA_CCR5_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR5_CIRC
constexpr auto DMA_CCR5_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR5_PINC
constexpr auto DMA_CCR5_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR5_MINC
constexpr auto DMA_CCR5_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR5_PSIZE
constexpr auto DMA_CCR5_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR5_PSIZE_0
constexpr auto DMA_CCR5_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR5_PSIZE_1
constexpr auto DMA_CCR5_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR5_MSIZE
constexpr auto DMA_CCR5_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR5_MSIZE_0
constexpr auto DMA_CCR5_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR5_MSIZE_1
constexpr auto DMA_CCR5_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR5_PL
constexpr auto DMA_CCR5_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR5_PL_0
constexpr auto DMA_CCR5_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR5_PL_1
constexpr auto DMA_CCR5_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR5_MEM2MEM
constexpr auto DMA_CCR5_MEM2MEM = ((std::uint16_t)0x4000);

/*******************  Bit definition for DMA_CCR6 register  *******************/
#undef DMA_CCR6_EN
constexpr auto DMA_CCR6_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR6_TCIE
constexpr auto DMA_CCR6_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR6_HTIE
constexpr auto DMA_CCR6_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR6_TEIE
constexpr auto DMA_CCR6_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR6_DIR
constexpr auto DMA_CCR6_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR6_CIRC
constexpr auto DMA_CCR6_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR6_PINC
constexpr auto DMA_CCR6_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR6_MINC
constexpr auto DMA_CCR6_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR6_PSIZE
constexpr auto DMA_CCR6_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR6_PSIZE_0
constexpr auto DMA_CCR6_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR6_PSIZE_1
constexpr auto DMA_CCR6_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR6_MSIZE
constexpr auto DMA_CCR6_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR6_MSIZE_0
constexpr auto DMA_CCR6_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR6_MSIZE_1
constexpr auto DMA_CCR6_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR6_PL
constexpr auto DMA_CCR6_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR6_PL_0
constexpr auto DMA_CCR6_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR6_PL_1
constexpr auto DMA_CCR6_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR6_MEM2MEM
constexpr auto DMA_CCR6_MEM2MEM = ((std::uint16_t)0x4000);

/*******************  Bit definition for DMA_CCR7 register  *******************/
#undef DMA_CCR7_EN
constexpr auto DMA_CCR7_EN = ((std::uint16_t)0x0001);
#undef DMA_CCR7_TCIE
constexpr auto DMA_CCR7_TCIE = ((std::uint16_t)0x0002);
#undef DMA_CCR7_HTIE
constexpr auto DMA_CCR7_HTIE = ((std::uint16_t)0x0004);
#undef DMA_CCR7_TEIE
constexpr auto DMA_CCR7_TEIE = ((std::uint16_t)0x0008);
#undef DMA_CCR7_DIR
constexpr auto DMA_CCR7_DIR = ((std::uint16_t)0x0010);
#undef DMA_CCR7_CIRC
constexpr auto DMA_CCR7_CIRC = ((std::uint16_t)0x0020);
#undef DMA_CCR7_PINC
constexpr auto DMA_CCR7_PINC = ((std::uint16_t)0x0040);
#undef DMA_CCR7_MINC
constexpr auto DMA_CCR7_MINC = ((std::uint16_t)0x0080);

#undef DMA_CCR7_PSIZE
constexpr auto DMA_CCR7_PSIZE = ((std::uint16_t)0x0300);
#undef DMA_CCR7_PSIZE_0
constexpr auto DMA_CCR7_PSIZE_0 = ((std::uint16_t)0x0100);
#undef DMA_CCR7_PSIZE_1
constexpr auto DMA_CCR7_PSIZE_1 = ((std::uint16_t)0x0200);

#undef DMA_CCR7_MSIZE
constexpr auto DMA_CCR7_MSIZE = ((std::uint16_t)0x0C00);
#undef DMA_CCR7_MSIZE_0
constexpr auto DMA_CCR7_MSIZE_0 = ((std::uint16_t)0x0400);
#undef DMA_CCR7_MSIZE_1
constexpr auto DMA_CCR7_MSIZE_1 = ((std::uint16_t)0x0800);

#undef DMA_CCR7_PL
constexpr auto DMA_CCR7_PL = ((std::uint16_t)0x3000);
#undef DMA_CCR7_PL_0
constexpr auto DMA_CCR7_PL_0 = ((std::uint16_t)0x1000);
#undef DMA_CCR7_PL_1
constexpr auto DMA_CCR7_PL_1 = ((std::uint16_t)0x2000);

#undef DMA_CCR7_MEM2MEM
constexpr auto DMA_CCR7_MEM2MEM = ((std::uint16_t)0x4000);

/******************  Bit definition for DMA_CNDTR1 register  ******************/
#undef DMA_CNDTR1_NDT
constexpr auto DMA_CNDTR1_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR2 register  ******************/
#undef DMA_CNDTR2_NDT
constexpr auto DMA_CNDTR2_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR3 register  ******************/
#undef DMA_CNDTR3_NDT
constexpr auto DMA_CNDTR3_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR4 register  ******************/
#undef DMA_CNDTR4_NDT
constexpr auto DMA_CNDTR4_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR5 register  ******************/
#undef DMA_CNDTR5_NDT
constexpr auto DMA_CNDTR5_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR6 register  ******************/
#undef DMA_CNDTR6_NDT
constexpr auto DMA_CNDTR6_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CNDTR7 register  ******************/
#undef DMA_CNDTR7_NDT
constexpr auto DMA_CNDTR7_NDT = ((std::uint16_t)0xFFFF);

/******************  Bit definition for DMA_CPAR1 register  *******************/
#undef DMA_CPAR1_PA
constexpr auto DMA_CPAR1_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR2 register  *******************/
#undef DMA_CPAR2_PA
constexpr auto DMA_CPAR2_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR3 register  *******************/
#undef DMA_CPAR3_PA
constexpr auto DMA_CPAR3_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR4 register  *******************/
#undef DMA_CPAR4_PA
constexpr auto DMA_CPAR4_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR5 register  *******************/
#undef DMA_CPAR5_PA
constexpr auto DMA_CPAR5_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR6 register  *******************/
#undef DMA_CPAR6_PA
constexpr auto DMA_CPAR6_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CPAR7 register  *******************/
#undef DMA_CPAR7_PA
constexpr auto DMA_CPAR7_PA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR1 register  *******************/
#undef DMA_CMAR1_MA
constexpr auto DMA_CMAR1_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR2 register  *******************/
#undef DMA_CMAR2_MA
constexpr auto DMA_CMAR2_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR3 register  *******************/
#undef DMA_CMAR3_MA
constexpr auto DMA_CMAR3_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR4 register  *******************/
#undef DMA_CMAR4_MA
constexpr auto DMA_CMAR4_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR5 register  *******************/
#undef DMA_CMAR5_MA
constexpr auto DMA_CMAR5_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR6 register  *******************/
#undef DMA_CMAR6_MA
constexpr auto DMA_CMAR6_MA = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for DMA_CMAR7 register  *******************/
#undef DMA_CMAR7_MA
constexpr auto DMA_CMAR7_MA = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                                                                            */
/*                        Analog to Digital Converter                         */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for ADC_SR register  ********************/
#undef ADC_SR_AWD
constexpr auto ADC_SR_AWD = ((std::uint8_t)0x01);
#undef ADC_SR_EOC
constexpr auto ADC_SR_EOC = ((std::uint8_t)0x02);
#undef ADC_SR_JEOC
constexpr auto ADC_SR_JEOC = ((std::uint8_t)0x04);
#undef ADC_SR_JSTRT
constexpr auto ADC_SR_JSTRT = ((std::uint8_t)0x08);
#undef ADC_SR_STRT
constexpr auto ADC_SR_STRT = ((std::uint8_t)0x10);

/*******************  Bit definition for ADC_CR1 register  ********************/
#undef ADC_CR1_AWDCH
constexpr auto ADC_CR1_AWDCH = ((std::uint32_t)0x0000001F);
#undef ADC_CR1_AWDCH_0
constexpr auto ADC_CR1_AWDCH_0 = ((std::uint32_t)0x00000001);
#undef ADC_CR1_AWDCH_1
constexpr auto ADC_CR1_AWDCH_1 = ((std::uint32_t)0x00000002);
#undef ADC_CR1_AWDCH_2
constexpr auto ADC_CR1_AWDCH_2 = ((std::uint32_t)0x00000004);
#undef ADC_CR1_AWDCH_3
constexpr auto ADC_CR1_AWDCH_3 = ((std::uint32_t)0x00000008);
#undef ADC_CR1_AWDCH_4
constexpr auto ADC_CR1_AWDCH_4 = ((std::uint32_t)0x00000010);

#undef ADC_CR1_EOCIE
constexpr auto ADC_CR1_EOCIE = ((std::uint32_t)0x00000020);
#undef ADC_CR1_AWDIE
constexpr auto ADC_CR1_AWDIE = ((std::uint32_t)0x00000040);
#undef ADC_CR1_JEOCIE
constexpr auto ADC_CR1_JEOCIE = ((std::uint32_t)0x00000080);
#undef ADC_CR1_SCAN
constexpr auto ADC_CR1_SCAN = ((std::uint32_t)0x00000100);
#undef ADC_CR1_AWDSGL
constexpr auto ADC_CR1_AWDSGL = ((std::uint32_t)0x00000200);
#undef ADC_CR1_JAUTO
constexpr auto ADC_CR1_JAUTO = ((std::uint32_t)0x00000400);
#undef ADC_CR1_DISCEN
constexpr auto ADC_CR1_DISCEN = ((std::uint32_t)0x00000800);
#undef ADC_CR1_JDISCEN
constexpr auto ADC_CR1_JDISCEN = ((std::uint32_t)0x00001000);

#undef ADC_CR1_DISCNUM
constexpr auto ADC_CR1_DISCNUM = ((std::uint32_t)0x0000E000);
#undef ADC_CR1_DISCNUM_0
constexpr auto ADC_CR1_DISCNUM_0 = ((std::uint32_t)0x00002000);
#undef ADC_CR1_DISCNUM_1
constexpr auto ADC_CR1_DISCNUM_1 = ((std::uint32_t)0x00004000);
#undef ADC_CR1_DISCNUM_2
constexpr auto ADC_CR1_DISCNUM_2 = ((std::uint32_t)0x00008000);

#undef ADC_CR1_DUALMOD
constexpr auto ADC_CR1_DUALMOD = ((std::uint32_t)0x000F0000);
#undef ADC_CR1_DUALMOD_0
constexpr auto ADC_CR1_DUALMOD_0 = ((std::uint32_t)0x00010000);
#undef ADC_CR1_DUALMOD_1
constexpr auto ADC_CR1_DUALMOD_1 = ((std::uint32_t)0x00020000);
#undef ADC_CR1_DUALMOD_2
constexpr auto ADC_CR1_DUALMOD_2 = ((std::uint32_t)0x00040000);
#undef ADC_CR1_DUALMOD_3
constexpr auto ADC_CR1_DUALMOD_3 = ((std::uint32_t)0x00080000);

#undef ADC_CR1_JAWDEN
constexpr auto ADC_CR1_JAWDEN = ((std::uint32_t)0x00400000);
#undef ADC_CR1_AWDEN
constexpr auto ADC_CR1_AWDEN = ((std::uint32_t)0x00800000);

/*******************  Bit definition for ADC_CR2 register  ********************/
#undef ADC_CR2_ADON
constexpr auto ADC_CR2_ADON = ((std::uint32_t)0x00000001);
#undef ADC_CR2_CONT
constexpr auto ADC_CR2_CONT = ((std::uint32_t)0x00000002);
#undef ADC_CR2_CAL
constexpr auto ADC_CR2_CAL = ((std::uint32_t)0x00000004);
#undef ADC_CR2_RSTCAL
constexpr auto ADC_CR2_RSTCAL = ((std::uint32_t)0x00000008);
#undef ADC_CR2_DMA
constexpr auto ADC_CR2_DMA = ((std::uint32_t)0x00000100);
#undef ADC_CR2_ALIGN
constexpr auto ADC_CR2_ALIGN = ((std::uint32_t)0x00000800);

#undef ADC_CR2_JEXTSEL
constexpr auto ADC_CR2_JEXTSEL = ((std::uint32_t)0x00007000);
#undef ADC_CR2_JEXTSEL_0
constexpr auto ADC_CR2_JEXTSEL_0 = ((std::uint32_t)0x00001000);
#undef ADC_CR2_JEXTSEL_1
constexpr auto ADC_CR2_JEXTSEL_1 = ((std::uint32_t)0x00002000);
#undef ADC_CR2_JEXTSEL_2
constexpr auto ADC_CR2_JEXTSEL_2 = ((std::uint32_t)0x00004000);

#undef ADC_CR2_JEXTTRIG
constexpr auto ADC_CR2_JEXTTRIG = ((std::uint32_t)0x00008000);

#undef ADC_CR2_EXTSEL
constexpr auto ADC_CR2_EXTSEL = ((std::uint32_t)0x000E0000);
#undef ADC_CR2_EXTSEL_0
constexpr auto ADC_CR2_EXTSEL_0 = ((std::uint32_t)0x00020000);
#undef ADC_CR2_EXTSEL_1
constexpr auto ADC_CR2_EXTSEL_1 = ((std::uint32_t)0x00040000);
#undef ADC_CR2_EXTSEL_2
constexpr auto ADC_CR2_EXTSEL_2 = ((std::uint32_t)0x00080000);

#undef ADC_CR2_EXTTRIG
constexpr auto ADC_CR2_EXTTRIG = ((std::uint32_t)0x00100000);
#undef ADC_CR2_JSWSTART
constexpr auto ADC_CR2_JSWSTART = ((std::uint32_t)0x00200000);
#undef ADC_CR2_SWSTART
constexpr auto ADC_CR2_SWSTART = ((std::uint32_t)0x00400000);
#undef ADC_CR2_TSVREFE
constexpr auto ADC_CR2_TSVREFE = ((std::uint32_t)0x00800000);

/******************  Bit definition for ADC_SMPR1 register  *******************/
#undef ADC_SMPR1_SMP10
constexpr auto ADC_SMPR1_SMP10 = ((std::uint32_t)0x00000007);
#undef ADC_SMPR1_SMP10_0
constexpr auto ADC_SMPR1_SMP10_0 = ((std::uint32_t)0x00000001);
#undef ADC_SMPR1_SMP10_1
constexpr auto ADC_SMPR1_SMP10_1 = ((std::uint32_t)0x00000002);
#undef ADC_SMPR1_SMP10_2
constexpr auto ADC_SMPR1_SMP10_2 = ((std::uint32_t)0x00000004);

#undef ADC_SMPR1_SMP11
constexpr auto ADC_SMPR1_SMP11 = ((std::uint32_t)0x00000038);
#undef ADC_SMPR1_SMP11_0
constexpr auto ADC_SMPR1_SMP11_0 = ((std::uint32_t)0x00000008);
#undef ADC_SMPR1_SMP11_1
constexpr auto ADC_SMPR1_SMP11_1 = ((std::uint32_t)0x00000010);
#undef ADC_SMPR1_SMP11_2
constexpr auto ADC_SMPR1_SMP11_2 = ((std::uint32_t)0x00000020);

#undef ADC_SMPR1_SMP12
constexpr auto ADC_SMPR1_SMP12 = ((std::uint32_t)0x000001C0);
#undef ADC_SMPR1_SMP12_0
constexpr auto ADC_SMPR1_SMP12_0 = ((std::uint32_t)0x00000040);
#undef ADC_SMPR1_SMP12_1
constexpr auto ADC_SMPR1_SMP12_1 = ((std::uint32_t)0x00000080);
#undef ADC_SMPR1_SMP12_2
constexpr auto ADC_SMPR1_SMP12_2 = ((std::uint32_t)0x00000100);

#undef ADC_SMPR1_SMP13
constexpr auto ADC_SMPR1_SMP13 = ((std::uint32_t)0x00000E00);
#undef ADC_SMPR1_SMP13_0
constexpr auto ADC_SMPR1_SMP13_0 = ((std::uint32_t)0x00000200);
#undef ADC_SMPR1_SMP13_1
constexpr auto ADC_SMPR1_SMP13_1 = ((std::uint32_t)0x00000400);
#undef ADC_SMPR1_SMP13_2
constexpr auto ADC_SMPR1_SMP13_2 = ((std::uint32_t)0x00000800);

#undef ADC_SMPR1_SMP14
constexpr auto ADC_SMPR1_SMP14 = ((std::uint32_t)0x00007000);
#undef ADC_SMPR1_SMP14_0
constexpr auto ADC_SMPR1_SMP14_0 = ((std::uint32_t)0x00001000);
#undef ADC_SMPR1_SMP14_1
constexpr auto ADC_SMPR1_SMP14_1 = ((std::uint32_t)0x00002000);
#undef ADC_SMPR1_SMP14_2
constexpr auto ADC_SMPR1_SMP14_2 = ((std::uint32_t)0x00004000);

#undef ADC_SMPR1_SMP15
constexpr auto ADC_SMPR1_SMP15 = ((std::uint32_t)0x00038000);
#undef ADC_SMPR1_SMP15_0
constexpr auto ADC_SMPR1_SMP15_0 = ((std::uint32_t)0x00008000);
#undef ADC_SMPR1_SMP15_1
constexpr auto ADC_SMPR1_SMP15_1 = ((std::uint32_t)0x00010000);
#undef ADC_SMPR1_SMP15_2
constexpr auto ADC_SMPR1_SMP15_2 = ((std::uint32_t)0x00020000);

#undef ADC_SMPR1_SMP16
constexpr auto ADC_SMPR1_SMP16 = ((std::uint32_t)0x001C0000);
#undef ADC_SMPR1_SMP16_0
constexpr auto ADC_SMPR1_SMP16_0 = ((std::uint32_t)0x00040000);
#undef ADC_SMPR1_SMP16_1
constexpr auto ADC_SMPR1_SMP16_1 = ((std::uint32_t)0x00080000);
#undef ADC_SMPR1_SMP16_2
constexpr auto ADC_SMPR1_SMP16_2 = ((std::uint32_t)0x00100000);

#undef ADC_SMPR1_SMP17
constexpr auto ADC_SMPR1_SMP17 = ((std::uint32_t)0x00E00000);
#undef ADC_SMPR1_SMP17_0
constexpr auto ADC_SMPR1_SMP17_0 = ((std::uint32_t)0x00200000);
#undef ADC_SMPR1_SMP17_1
constexpr auto ADC_SMPR1_SMP17_1 = ((std::uint32_t)0x00400000);
#undef ADC_SMPR1_SMP17_2
constexpr auto ADC_SMPR1_SMP17_2 = ((std::uint32_t)0x00800000);

/******************  Bit definition for ADC_SMPR2 register  *******************/
#undef ADC_SMPR2_SMP0
constexpr auto ADC_SMPR2_SMP0 = ((std::uint32_t)0x00000007);
#undef ADC_SMPR2_SMP0_0
constexpr auto ADC_SMPR2_SMP0_0 = ((std::uint32_t)0x00000001);
#undef ADC_SMPR2_SMP0_1
constexpr auto ADC_SMPR2_SMP0_1 = ((std::uint32_t)0x00000002);
#undef ADC_SMPR2_SMP0_2
constexpr auto ADC_SMPR2_SMP0_2 = ((std::uint32_t)0x00000004);

#undef ADC_SMPR2_SMP1
constexpr auto ADC_SMPR2_SMP1 = ((std::uint32_t)0x00000038);
#undef ADC_SMPR2_SMP1_0
constexpr auto ADC_SMPR2_SMP1_0 = ((std::uint32_t)0x00000008);
#undef ADC_SMPR2_SMP1_1
constexpr auto ADC_SMPR2_SMP1_1 = ((std::uint32_t)0x00000010);
#undef ADC_SMPR2_SMP1_2
constexpr auto ADC_SMPR2_SMP1_2 = ((std::uint32_t)0x00000020);

#undef ADC_SMPR2_SMP2
constexpr auto ADC_SMPR2_SMP2 = ((std::uint32_t)0x000001C0);
#undef ADC_SMPR2_SMP2_0
constexpr auto ADC_SMPR2_SMP2_0 = ((std::uint32_t)0x00000040);
#undef ADC_SMPR2_SMP2_1
constexpr auto ADC_SMPR2_SMP2_1 = ((std::uint32_t)0x00000080);
#undef ADC_SMPR2_SMP2_2
constexpr auto ADC_SMPR2_SMP2_2 = ((std::uint32_t)0x00000100);

#undef ADC_SMPR2_SMP3
constexpr auto ADC_SMPR2_SMP3 = ((std::uint32_t)0x00000E00);
#undef ADC_SMPR2_SMP3_0
constexpr auto ADC_SMPR2_SMP3_0 = ((std::uint32_t)0x00000200);
#undef ADC_SMPR2_SMP3_1
constexpr auto ADC_SMPR2_SMP3_1 = ((std::uint32_t)0x00000400);
#undef ADC_SMPR2_SMP3_2
constexpr auto ADC_SMPR2_SMP3_2 = ((std::uint32_t)0x00000800);

#undef ADC_SMPR2_SMP4
constexpr auto ADC_SMPR2_SMP4 = ((std::uint32_t)0x00007000);
#undef ADC_SMPR2_SMP4_0
constexpr auto ADC_SMPR2_SMP4_0 = ((std::uint32_t)0x00001000);
#undef ADC_SMPR2_SMP4_1
constexpr auto ADC_SMPR2_SMP4_1 = ((std::uint32_t)0x00002000);
#undef ADC_SMPR2_SMP4_2
constexpr auto ADC_SMPR2_SMP4_2 = ((std::uint32_t)0x00004000);

#undef ADC_SMPR2_SMP5
constexpr auto ADC_SMPR2_SMP5 = ((std::uint32_t)0x00038000);
#undef ADC_SMPR2_SMP5_0
constexpr auto ADC_SMPR2_SMP5_0 = ((std::uint32_t)0x00008000);
#undef ADC_SMPR2_SMP5_1
constexpr auto ADC_SMPR2_SMP5_1 = ((std::uint32_t)0x00010000);
#undef ADC_SMPR2_SMP5_2
constexpr auto ADC_SMPR2_SMP5_2 = ((std::uint32_t)0x00020000);

#undef ADC_SMPR2_SMP6
constexpr auto ADC_SMPR2_SMP6 = ((std::uint32_t)0x001C0000);
#undef ADC_SMPR2_SMP6_0
constexpr auto ADC_SMPR2_SMP6_0 = ((std::uint32_t)0x00040000);
#undef ADC_SMPR2_SMP6_1
constexpr auto ADC_SMPR2_SMP6_1 = ((std::uint32_t)0x00080000);
#undef ADC_SMPR2_SMP6_2
constexpr auto ADC_SMPR2_SMP6_2 = ((std::uint32_t)0x00100000);

#undef ADC_SMPR2_SMP7
constexpr auto ADC_SMPR2_SMP7 = ((std::uint32_t)0x00E00000);
#undef ADC_SMPR2_SMP7_0
constexpr auto ADC_SMPR2_SMP7_0 = ((std::uint32_t)0x00200000);
#undef ADC_SMPR2_SMP7_1
constexpr auto ADC_SMPR2_SMP7_1 = ((std::uint32_t)0x00400000);
#undef ADC_SMPR2_SMP7_2
constexpr auto ADC_SMPR2_SMP7_2 = ((std::uint32_t)0x00800000);

#undef ADC_SMPR2_SMP8
constexpr auto ADC_SMPR2_SMP8 = ((std::uint32_t)0x07000000);
#undef ADC_SMPR2_SMP8_0
constexpr auto ADC_SMPR2_SMP8_0 = ((std::uint32_t)0x01000000);
#undef ADC_SMPR2_SMP8_1
constexpr auto ADC_SMPR2_SMP8_1 = ((std::uint32_t)0x02000000);
#undef ADC_SMPR2_SMP8_2
constexpr auto ADC_SMPR2_SMP8_2 = ((std::uint32_t)0x04000000);

#undef ADC_SMPR2_SMP9
constexpr auto ADC_SMPR2_SMP9 = ((std::uint32_t)0x38000000);
#undef ADC_SMPR2_SMP9_0
constexpr auto ADC_SMPR2_SMP9_0 = ((std::uint32_t)0x08000000);
#undef ADC_SMPR2_SMP9_1
constexpr auto ADC_SMPR2_SMP9_1 = ((std::uint32_t)0x10000000);
#undef ADC_SMPR2_SMP9_2
constexpr auto ADC_SMPR2_SMP9_2 = ((std::uint32_t)0x20000000);

/******************  Bit definition for ADC_JOFR1 register  *******************/
#undef ADC_JOFR1_JOFFSET1
constexpr auto ADC_JOFR1_JOFFSET1 = ((std::uint16_t)0x0FFF);

/******************  Bit definition for ADC_JOFR2 register  *******************/
#undef ADC_JOFR2_JOFFSET2
constexpr auto ADC_JOFR2_JOFFSET2 = ((std::uint16_t)0x0FFF);

/******************  Bit definition for ADC_JOFR3 register  *******************/
#undef ADC_JOFR3_JOFFSET3
constexpr auto ADC_JOFR3_JOFFSET3 = ((std::uint16_t)0x0FFF);

/******************  Bit definition for ADC_JOFR4 register  *******************/
#undef ADC_JOFR4_JOFFSET4
constexpr auto ADC_JOFR4_JOFFSET4 = ((std::uint16_t)0x0FFF);

/*******************  Bit definition for ADC_HTR register  ********************/
#undef ADC_HTR_HT
constexpr auto ADC_HTR_HT = ((std::uint16_t)0x0FFF);

/*******************  Bit definition for ADC_LTR register  ********************/
#undef ADC_LTR_LT
constexpr auto ADC_LTR_LT = ((std::uint16_t)0x0FFF);

/*******************  Bit definition for ADC_SQR1 register  *******************/
#undef ADC_SQR1_SQ13
constexpr auto ADC_SQR1_SQ13 = ((std::uint32_t)0x0000001F);
#undef ADC_SQR1_SQ13_0
constexpr auto ADC_SQR1_SQ13_0 = ((std::uint32_t)0x00000001);
#undef ADC_SQR1_SQ13_1
constexpr auto ADC_SQR1_SQ13_1 = ((std::uint32_t)0x00000002);
#undef ADC_SQR1_SQ13_2
constexpr auto ADC_SQR1_SQ13_2 = ((std::uint32_t)0x00000004);
#undef ADC_SQR1_SQ13_3
constexpr auto ADC_SQR1_SQ13_3 = ((std::uint32_t)0x00000008);
#undef ADC_SQR1_SQ13_4
constexpr auto ADC_SQR1_SQ13_4 = ((std::uint32_t)0x00000010);

#undef ADC_SQR1_SQ14
constexpr auto ADC_SQR1_SQ14 = ((std::uint32_t)0x000003E0);
#undef ADC_SQR1_SQ14_0
constexpr auto ADC_SQR1_SQ14_0 = ((std::uint32_t)0x00000020);
#undef ADC_SQR1_SQ14_1
constexpr auto ADC_SQR1_SQ14_1 = ((std::uint32_t)0x00000040);
#undef ADC_SQR1_SQ14_2
constexpr auto ADC_SQR1_SQ14_2 = ((std::uint32_t)0x00000080);
#undef ADC_SQR1_SQ14_3
constexpr auto ADC_SQR1_SQ14_3 = ((std::uint32_t)0x00000100);
#undef ADC_SQR1_SQ14_4
constexpr auto ADC_SQR1_SQ14_4 = ((std::uint32_t)0x00000200);

#undef ADC_SQR1_SQ15
constexpr auto ADC_SQR1_SQ15 = ((std::uint32_t)0x00007C00);
#undef ADC_SQR1_SQ15_0
constexpr auto ADC_SQR1_SQ15_0 = ((std::uint32_t)0x00000400);
#undef ADC_SQR1_SQ15_1
constexpr auto ADC_SQR1_SQ15_1 = ((std::uint32_t)0x00000800);
#undef ADC_SQR1_SQ15_2
constexpr auto ADC_SQR1_SQ15_2 = ((std::uint32_t)0x00001000);
#undef ADC_SQR1_SQ15_3
constexpr auto ADC_SQR1_SQ15_3 = ((std::uint32_t)0x00002000);
#undef ADC_SQR1_SQ15_4
constexpr auto ADC_SQR1_SQ15_4 = ((std::uint32_t)0x00004000);

#undef ADC_SQR1_SQ16
constexpr auto ADC_SQR1_SQ16 = ((std::uint32_t)0x000F8000);
#undef ADC_SQR1_SQ16_0
constexpr auto ADC_SQR1_SQ16_0 = ((std::uint32_t)0x00008000);
#undef ADC_SQR1_SQ16_1
constexpr auto ADC_SQR1_SQ16_1 = ((std::uint32_t)0x00010000);
#undef ADC_SQR1_SQ16_2
constexpr auto ADC_SQR1_SQ16_2 = ((std::uint32_t)0x00020000);
#undef ADC_SQR1_SQ16_3
constexpr auto ADC_SQR1_SQ16_3 = ((std::uint32_t)0x00040000);
#undef ADC_SQR1_SQ16_4
constexpr auto ADC_SQR1_SQ16_4 = ((std::uint32_t)0x00080000);

#undef ADC_SQR1_L
constexpr auto ADC_SQR1_L = ((std::uint32_t)0x00F00000);
#undef ADC_SQR1_L_0
constexpr auto ADC_SQR1_L_0 = ((std::uint32_t)0x00100000);
#undef ADC_SQR1_L_1
constexpr auto ADC_SQR1_L_1 = ((std::uint32_t)0x00200000);
#undef ADC_SQR1_L_2
constexpr auto ADC_SQR1_L_2 = ((std::uint32_t)0x00400000);
#undef ADC_SQR1_L_3
constexpr auto ADC_SQR1_L_3 = ((std::uint32_t)0x00800000);

/*******************  Bit definition for ADC_SQR2 register  *******************/
#undef ADC_SQR2_SQ7
constexpr auto ADC_SQR2_SQ7 = ((std::uint32_t)0x0000001F);
#undef ADC_SQR2_SQ7_0
constexpr auto ADC_SQR2_SQ7_0 = ((std::uint32_t)0x00000001);
#undef ADC_SQR2_SQ7_1
constexpr auto ADC_SQR2_SQ7_1 = ((std::uint32_t)0x00000002);
#undef ADC_SQR2_SQ7_2
constexpr auto ADC_SQR2_SQ7_2 = ((std::uint32_t)0x00000004);
#undef ADC_SQR2_SQ7_3
constexpr auto ADC_SQR2_SQ7_3 = ((std::uint32_t)0x00000008);
#undef ADC_SQR2_SQ7_4
constexpr auto ADC_SQR2_SQ7_4 = ((std::uint32_t)0x00000010);

#undef ADC_SQR2_SQ8
constexpr auto ADC_SQR2_SQ8 = ((std::uint32_t)0x000003E0);
#undef ADC_SQR2_SQ8_0
constexpr auto ADC_SQR2_SQ8_0 = ((std::uint32_t)0x00000020);
#undef ADC_SQR2_SQ8_1
constexpr auto ADC_SQR2_SQ8_1 = ((std::uint32_t)0x00000040);
#undef ADC_SQR2_SQ8_2
constexpr auto ADC_SQR2_SQ8_2 = ((std::uint32_t)0x00000080);
#undef ADC_SQR2_SQ8_3
constexpr auto ADC_SQR2_SQ8_3 = ((std::uint32_t)0x00000100);
#undef ADC_SQR2_SQ8_4
constexpr auto ADC_SQR2_SQ8_4 = ((std::uint32_t)0x00000200);

#undef ADC_SQR2_SQ9
constexpr auto ADC_SQR2_SQ9 = ((std::uint32_t)0x00007C00);
#undef ADC_SQR2_SQ9_0
constexpr auto ADC_SQR2_SQ9_0 = ((std::uint32_t)0x00000400);
#undef ADC_SQR2_SQ9_1
constexpr auto ADC_SQR2_SQ9_1 = ((std::uint32_t)0x00000800);
#undef ADC_SQR2_SQ9_2
constexpr auto ADC_SQR2_SQ9_2 = ((std::uint32_t)0x00001000);
#undef ADC_SQR2_SQ9_3
constexpr auto ADC_SQR2_SQ9_3 = ((std::uint32_t)0x00002000);
#undef ADC_SQR2_SQ9_4
constexpr auto ADC_SQR2_SQ9_4 = ((std::uint32_t)0x00004000);

#undef ADC_SQR2_SQ10
constexpr auto ADC_SQR2_SQ10 = ((std::uint32_t)0x000F8000);
#undef ADC_SQR2_SQ10_0
constexpr auto ADC_SQR2_SQ10_0 = ((std::uint32_t)0x00008000);
#undef ADC_SQR2_SQ10_1
constexpr auto ADC_SQR2_SQ10_1 = ((std::uint32_t)0x00010000);
#undef ADC_SQR2_SQ10_2
constexpr auto ADC_SQR2_SQ10_2 = ((std::uint32_t)0x00020000);
#undef ADC_SQR2_SQ10_3
constexpr auto ADC_SQR2_SQ10_3 = ((std::uint32_t)0x00040000);
#undef ADC_SQR2_SQ10_4
constexpr auto ADC_SQR2_SQ10_4 = ((std::uint32_t)0x00080000);

#undef ADC_SQR2_SQ11
constexpr auto ADC_SQR2_SQ11 = ((std::uint32_t)0x01F00000);
#undef ADC_SQR2_SQ11_0
constexpr auto ADC_SQR2_SQ11_0 = ((std::uint32_t)0x00100000);
#undef ADC_SQR2_SQ11_1
constexpr auto ADC_SQR2_SQ11_1 = ((std::uint32_t)0x00200000);
#undef ADC_SQR2_SQ11_2
constexpr auto ADC_SQR2_SQ11_2 = ((std::uint32_t)0x00400000);
#undef ADC_SQR2_SQ11_3
constexpr auto ADC_SQR2_SQ11_3 = ((std::uint32_t)0x00800000);
#undef ADC_SQR2_SQ11_4
constexpr auto ADC_SQR2_SQ11_4 = ((std::uint32_t)0x01000000);

#undef ADC_SQR2_SQ12
constexpr auto ADC_SQR2_SQ12 = ((std::uint32_t)0x3E000000);
#undef ADC_SQR2_SQ12_0
constexpr auto ADC_SQR2_SQ12_0 = ((std::uint32_t)0x02000000);
#undef ADC_SQR2_SQ12_1
constexpr auto ADC_SQR2_SQ12_1 = ((std::uint32_t)0x04000000);
#undef ADC_SQR2_SQ12_2
constexpr auto ADC_SQR2_SQ12_2 = ((std::uint32_t)0x08000000);
#undef ADC_SQR2_SQ12_3
constexpr auto ADC_SQR2_SQ12_3 = ((std::uint32_t)0x10000000);
#undef ADC_SQR2_SQ12_4
constexpr auto ADC_SQR2_SQ12_4 = ((std::uint32_t)0x20000000);

/*******************  Bit definition for ADC_SQR3 register  *******************/
#undef ADC_SQR3_SQ1
constexpr auto ADC_SQR3_SQ1 = ((std::uint32_t)0x0000001F);
#undef ADC_SQR3_SQ1_0
constexpr auto ADC_SQR3_SQ1_0 = ((std::uint32_t)0x00000001);
#undef ADC_SQR3_SQ1_1
constexpr auto ADC_SQR3_SQ1_1 = ((std::uint32_t)0x00000002);
#undef ADC_SQR3_SQ1_2
constexpr auto ADC_SQR3_SQ1_2 = ((std::uint32_t)0x00000004);
#undef ADC_SQR3_SQ1_3
constexpr auto ADC_SQR3_SQ1_3 = ((std::uint32_t)0x00000008);
#undef ADC_SQR3_SQ1_4
constexpr auto ADC_SQR3_SQ1_4 = ((std::uint32_t)0x00000010);

#undef ADC_SQR3_SQ2
constexpr auto ADC_SQR3_SQ2 = ((std::uint32_t)0x000003E0);
#undef ADC_SQR3_SQ2_0
constexpr auto ADC_SQR3_SQ2_0 = ((std::uint32_t)0x00000020);
#undef ADC_SQR3_SQ2_1
constexpr auto ADC_SQR3_SQ2_1 = ((std::uint32_t)0x00000040);
#undef ADC_SQR3_SQ2_2
constexpr auto ADC_SQR3_SQ2_2 = ((std::uint32_t)0x00000080);
#undef ADC_SQR3_SQ2_3
constexpr auto ADC_SQR3_SQ2_3 = ((std::uint32_t)0x00000100);
#undef ADC_SQR3_SQ2_4
constexpr auto ADC_SQR3_SQ2_4 = ((std::uint32_t)0x00000200);

#undef ADC_SQR3_SQ3
constexpr auto ADC_SQR3_SQ3 = ((std::uint32_t)0x00007C00);
#undef ADC_SQR3_SQ3_0
constexpr auto ADC_SQR3_SQ3_0 = ((std::uint32_t)0x00000400);
#undef ADC_SQR3_SQ3_1
constexpr auto ADC_SQR3_SQ3_1 = ((std::uint32_t)0x00000800);
#undef ADC_SQR3_SQ3_2
constexpr auto ADC_SQR3_SQ3_2 = ((std::uint32_t)0x00001000);
#undef ADC_SQR3_SQ3_3
constexpr auto ADC_SQR3_SQ3_3 = ((std::uint32_t)0x00002000);
#undef ADC_SQR3_SQ3_4
constexpr auto ADC_SQR3_SQ3_4 = ((std::uint32_t)0x00004000);

#undef ADC_SQR3_SQ4
constexpr auto ADC_SQR3_SQ4 = ((std::uint32_t)0x000F8000);
#undef ADC_SQR3_SQ4_0
constexpr auto ADC_SQR3_SQ4_0 = ((std::uint32_t)0x00008000);
#undef ADC_SQR3_SQ4_1
constexpr auto ADC_SQR3_SQ4_1 = ((std::uint32_t)0x00010000);
#undef ADC_SQR3_SQ4_2
constexpr auto ADC_SQR3_SQ4_2 = ((std::uint32_t)0x00020000);
#undef ADC_SQR3_SQ4_3
constexpr auto ADC_SQR3_SQ4_3 = ((std::uint32_t)0x00040000);
#undef ADC_SQR3_SQ4_4
constexpr auto ADC_SQR3_SQ4_4 = ((std::uint32_t)0x00080000);

#undef ADC_SQR3_SQ5
constexpr auto ADC_SQR3_SQ5 = ((std::uint32_t)0x01F00000);
#undef ADC_SQR3_SQ5_0
constexpr auto ADC_SQR3_SQ5_0 = ((std::uint32_t)0x00100000);
#undef ADC_SQR3_SQ5_1
constexpr auto ADC_SQR3_SQ5_1 = ((std::uint32_t)0x00200000);
#undef ADC_SQR3_SQ5_2
constexpr auto ADC_SQR3_SQ5_2 = ((std::uint32_t)0x00400000);
#undef ADC_SQR3_SQ5_3
constexpr auto ADC_SQR3_SQ5_3 = ((std::uint32_t)0x00800000);
#undef ADC_SQR3_SQ5_4
constexpr auto ADC_SQR3_SQ5_4 = ((std::uint32_t)0x01000000);

#undef ADC_SQR3_SQ6
constexpr auto ADC_SQR3_SQ6 = ((std::uint32_t)0x3E000000);
#undef ADC_SQR3_SQ6_0
constexpr auto ADC_SQR3_SQ6_0 = ((std::uint32_t)0x02000000);
#undef ADC_SQR3_SQ6_1
constexpr auto ADC_SQR3_SQ6_1 = ((std::uint32_t)0x04000000);
#undef ADC_SQR3_SQ6_2
constexpr auto ADC_SQR3_SQ6_2 = ((std::uint32_t)0x08000000);
#undef ADC_SQR3_SQ6_3
constexpr auto ADC_SQR3_SQ6_3 = ((std::uint32_t)0x10000000);
#undef ADC_SQR3_SQ6_4
constexpr auto ADC_SQR3_SQ6_4 = ((std::uint32_t)0x20000000);

/*******************  Bit definition for ADC_JSQR register  *******************/
#undef ADC_JSQR_JSQ1
constexpr auto ADC_JSQR_JSQ1 = ((std::uint32_t)0x0000001F);
#undef ADC_JSQR_JSQ1_0
constexpr auto ADC_JSQR_JSQ1_0 = ((std::uint32_t)0x00000001);
#undef ADC_JSQR_JSQ1_1
constexpr auto ADC_JSQR_JSQ1_1 = ((std::uint32_t)0x00000002);
#undef ADC_JSQR_JSQ1_2
constexpr auto ADC_JSQR_JSQ1_2 = ((std::uint32_t)0x00000004);
#undef ADC_JSQR_JSQ1_3
constexpr auto ADC_JSQR_JSQ1_3 = ((std::uint32_t)0x00000008);
#undef ADC_JSQR_JSQ1_4
constexpr auto ADC_JSQR_JSQ1_4 = ((std::uint32_t)0x00000010);

#undef ADC_JSQR_JSQ2
constexpr auto ADC_JSQR_JSQ2 = ((std::uint32_t)0x000003E0);
#undef ADC_JSQR_JSQ2_0
constexpr auto ADC_JSQR_JSQ2_0 = ((std::uint32_t)0x00000020);
#undef ADC_JSQR_JSQ2_1
constexpr auto ADC_JSQR_JSQ2_1 = ((std::uint32_t)0x00000040);
#undef ADC_JSQR_JSQ2_2
constexpr auto ADC_JSQR_JSQ2_2 = ((std::uint32_t)0x00000080);
#undef ADC_JSQR_JSQ2_3
constexpr auto ADC_JSQR_JSQ2_3 = ((std::uint32_t)0x00000100);
#undef ADC_JSQR_JSQ2_4
constexpr auto ADC_JSQR_JSQ2_4 = ((std::uint32_t)0x00000200);

#undef ADC_JSQR_JSQ3
constexpr auto ADC_JSQR_JSQ3 = ((std::uint32_t)0x00007C00);
#undef ADC_JSQR_JSQ3_0
constexpr auto ADC_JSQR_JSQ3_0 = ((std::uint32_t)0x00000400);
#undef ADC_JSQR_JSQ3_1
constexpr auto ADC_JSQR_JSQ3_1 = ((std::uint32_t)0x00000800);
#undef ADC_JSQR_JSQ3_2
constexpr auto ADC_JSQR_JSQ3_2 = ((std::uint32_t)0x00001000);
#undef ADC_JSQR_JSQ3_3
constexpr auto ADC_JSQR_JSQ3_3 = ((std::uint32_t)0x00002000);
#undef ADC_JSQR_JSQ3_4
constexpr auto ADC_JSQR_JSQ3_4 = ((std::uint32_t)0x00004000);

#undef ADC_JSQR_JSQ4
constexpr auto ADC_JSQR_JSQ4 = ((std::uint32_t)0x000F8000);
#undef ADC_JSQR_JSQ4_0
constexpr auto ADC_JSQR_JSQ4_0 = ((std::uint32_t)0x00008000);
#undef ADC_JSQR_JSQ4_1
constexpr auto ADC_JSQR_JSQ4_1 = ((std::uint32_t)0x00010000);
#undef ADC_JSQR_JSQ4_2
constexpr auto ADC_JSQR_JSQ4_2 = ((std::uint32_t)0x00020000);
#undef ADC_JSQR_JSQ4_3
constexpr auto ADC_JSQR_JSQ4_3 = ((std::uint32_t)0x00040000);
#undef ADC_JSQR_JSQ4_4
constexpr auto ADC_JSQR_JSQ4_4 = ((std::uint32_t)0x00080000);

#undef ADC_JSQR_JL
constexpr auto ADC_JSQR_JL = ((std::uint32_t)0x00300000);
#undef ADC_JSQR_JL_0
constexpr auto ADC_JSQR_JL_0 = ((std::uint32_t)0x00100000);
#undef ADC_JSQR_JL_1
constexpr auto ADC_JSQR_JL_1 = ((std::uint32_t)0x00200000);

/*******************  Bit definition for ADC_JDR1 register  *******************/
#undef ADC_JDR1_JDATA
constexpr auto ADC_JDR1_JDATA = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for ADC_JDR2 register  *******************/
#undef ADC_JDR2_JDATA
constexpr auto ADC_JDR2_JDATA = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for ADC_JDR3 register  *******************/
#undef ADC_JDR3_JDATA
constexpr auto ADC_JDR3_JDATA = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for ADC_JDR4 register  *******************/
#undef ADC_JDR4_JDATA
constexpr auto ADC_JDR4_JDATA = ((std::uint16_t)0xFFFF);

/********************  Bit definition for ADC_DR register  ********************/
#undef ADC_DR_DATA
constexpr auto ADC_DR_DATA = ((std::uint32_t)0x0000FFFF);
#undef ADC_DR_ADC2DATA
constexpr auto ADC_DR_ADC2DATA = ((std::uint32_t)0xFFFF0000);

/******************************************************************************/
/*                                                                            */
/*                      Digital to Analog Converter                           */
/*                                                                            */
/******************************************************************************/

/********************  Bit definition for DAC_CR register  ********************/
#undef DAC_CR_EN1
constexpr auto DAC_CR_EN1 = ((std::uint32_t)0x00000001);
#undef DAC_CR_BOFF1
constexpr auto DAC_CR_BOFF1 = ((std::uint32_t)0x00000002);
#undef DAC_CR_TEN1
constexpr auto DAC_CR_TEN1 = ((std::uint32_t)0x00000004);

#undef DAC_CR_TSEL1
constexpr auto DAC_CR_TSEL1 = ((std::uint32_t)0x00000038);
#undef DAC_CR_TSEL1_0
constexpr auto DAC_CR_TSEL1_0 = ((std::uint32_t)0x00000008);
#undef DAC_CR_TSEL1_1
constexpr auto DAC_CR_TSEL1_1 = ((std::uint32_t)0x00000010);
#undef DAC_CR_TSEL1_2
constexpr auto DAC_CR_TSEL1_2 = ((std::uint32_t)0x00000020);

#undef DAC_CR_WAVE1
constexpr auto DAC_CR_WAVE1 = ((std::uint32_t)0x000000C0);
#undef DAC_CR_WAVE1_0
constexpr auto DAC_CR_WAVE1_0 = ((std::uint32_t)0x00000040);
#undef DAC_CR_WAVE1_1
constexpr auto DAC_CR_WAVE1_1 = ((std::uint32_t)0x00000080);

#undef DAC_CR_MAMP1
constexpr auto DAC_CR_MAMP1 = ((std::uint32_t)0x00000F00);
#undef DAC_CR_MAMP1_0
constexpr auto DAC_CR_MAMP1_0 = ((std::uint32_t)0x00000100);
#undef DAC_CR_MAMP1_1
constexpr auto DAC_CR_MAMP1_1 = ((std::uint32_t)0x00000200);
#undef DAC_CR_MAMP1_2
constexpr auto DAC_CR_MAMP1_2 = ((std::uint32_t)0x00000400);
#undef DAC_CR_MAMP1_3
constexpr auto DAC_CR_MAMP1_3 = ((std::uint32_t)0x00000800);

#undef DAC_CR_DMAEN1
constexpr auto DAC_CR_DMAEN1 = ((std::uint32_t)0x00001000);
#undef DAC_CR_EN2
constexpr auto DAC_CR_EN2 = ((std::uint32_t)0x00010000);
#undef DAC_CR_BOFF2
constexpr auto DAC_CR_BOFF2 = ((std::uint32_t)0x00020000);
#undef DAC_CR_TEN2
constexpr auto DAC_CR_TEN2 = ((std::uint32_t)0x00040000);

#undef DAC_CR_TSEL2
constexpr auto DAC_CR_TSEL2 = ((std::uint32_t)0x00380000);
#undef DAC_CR_TSEL2_0
constexpr auto DAC_CR_TSEL2_0 = ((std::uint32_t)0x00080000);
#undef DAC_CR_TSEL2_1
constexpr auto DAC_CR_TSEL2_1 = ((std::uint32_t)0x00100000);
#undef DAC_CR_TSEL2_2
constexpr auto DAC_CR_TSEL2_2 = ((std::uint32_t)0x00200000);

#undef DAC_CR_WAVE2
constexpr auto DAC_CR_WAVE2 = ((std::uint32_t)0x00C00000);
#undef DAC_CR_WAVE2_0
constexpr auto DAC_CR_WAVE2_0 = ((std::uint32_t)0x00400000);
#undef DAC_CR_WAVE2_1
constexpr auto DAC_CR_WAVE2_1 = ((std::uint32_t)0x00800000);

#undef DAC_CR_MAMP2
constexpr auto DAC_CR_MAMP2 = ((std::uint32_t)0x0F000000);
#undef DAC_CR_MAMP2_0
constexpr auto DAC_CR_MAMP2_0 = ((std::uint32_t)0x01000000);
#undef DAC_CR_MAMP2_1
constexpr auto DAC_CR_MAMP2_1 = ((std::uint32_t)0x02000000);
#undef DAC_CR_MAMP2_2
constexpr auto DAC_CR_MAMP2_2 = ((std::uint32_t)0x04000000);
#undef DAC_CR_MAMP2_3
constexpr auto DAC_CR_MAMP2_3 = ((std::uint32_t)0x08000000);

#undef DAC_CR_DMAEN2
constexpr auto DAC_CR_DMAEN2 = ((std::uint32_t)0x10000000);

#if defined(STM32F10X_LD_VL) || defined(STM32F10X_MD_VL) || defined(STM32F10X_HD_VL)
#undef DAC_CR_DMAUDRIE1
constexpr auto DAC_CR_DMAUDRIE1 = ((std::uint32_t)0x00002000);
#undef DAC_CR_DMAUDRIE2
constexpr auto DAC_CR_DMAUDRIE2 = ((std::uint32_t)0x20000000);
#endif

/*****************  Bit definition for DAC_SWTRIGR register  ******************/
#undef DAC_SWTRIGR_SWTRIG1
constexpr auto DAC_SWTRIGR_SWTRIG1 = ((std::uint8_t)0x01);
#undef DAC_SWTRIGR_SWTRIG2
constexpr auto DAC_SWTRIGR_SWTRIG2 = ((std::uint8_t)0x02);

/*****************  Bit definition for DAC_DHR12R1 register  ******************/
#undef DAC_DHR12R1_DACC1DHR
constexpr auto DAC_DHR12R1_DACC1DHR = ((std::uint16_t)0x0FFF);

/*****************  Bit definition for DAC_DHR12L1 register  ******************/
#undef DAC_DHR12L1_DACC1DHR
constexpr auto DAC_DHR12L1_DACC1DHR = ((std::uint16_t)0xFFF0);

/******************  Bit definition for DAC_DHR8R1 register  ******************/
#undef DAC_DHR8R1_DACC1DHR
constexpr auto DAC_DHR8R1_DACC1DHR = ((std::uint8_t)0xFF);

/*****************  Bit definition for DAC_DHR12R2 register  ******************/
#undef DAC_DHR12R2_DACC2DHR
constexpr auto DAC_DHR12R2_DACC2DHR = ((std::uint16_t)0x0FFF);

/*****************  Bit definition for DAC_DHR12L2 register  ******************/
#undef DAC_DHR12L2_DACC2DHR
constexpr auto DAC_DHR12L2_DACC2DHR = ((std::uint16_t)0xFFF0);

/******************  Bit definition for DAC_DHR8R2 register  ******************/
#undef DAC_DHR8R2_DACC2DHR
constexpr auto DAC_DHR8R2_DACC2DHR = ((std::uint8_t)0xFF);

/*****************  Bit definition for DAC_DHR12RD register  ******************/
#undef DAC_DHR12RD_DACC1DHR
constexpr auto DAC_DHR12RD_DACC1DHR = ((std::uint32_t)0x00000FFF);
#undef DAC_DHR12RD_DACC2DHR
constexpr auto DAC_DHR12RD_DACC2DHR = ((std::uint32_t)0x0FFF0000);

/*****************  Bit definition for DAC_DHR12LD register  ******************/
#undef DAC_DHR12LD_DACC1DHR
constexpr auto DAC_DHR12LD_DACC1DHR = ((std::uint32_t)0x0000FFF0);
#undef DAC_DHR12LD_DACC2DHR
constexpr auto DAC_DHR12LD_DACC2DHR = ((std::uint32_t)0xFFF00000);

/******************  Bit definition for DAC_DHR8RD register  ******************/
#undef DAC_DHR8RD_DACC1DHR
constexpr auto DAC_DHR8RD_DACC1DHR = ((std::uint16_t)0x00FF);
#undef DAC_DHR8RD_DACC2DHR
constexpr auto DAC_DHR8RD_DACC2DHR = ((std::uint16_t)0xFF00);

/*******************  Bit definition for DAC_DOR1 register  *******************/
#undef DAC_DOR1_DACC1DOR
constexpr auto DAC_DOR1_DACC1DOR = ((std::uint16_t)0x0FFF);

/*******************  Bit definition for DAC_DOR2 register  *******************/
#undef DAC_DOR2_DACC2DOR
constexpr auto DAC_DOR2_DACC2DOR = ((std::uint16_t)0x0FFF);

/********************  Bit definition for DAC_SR register  ********************/
#undef DAC_SR_DMAUDR1
constexpr auto DAC_SR_DMAUDR1 = ((std::uint32_t)0x00002000);
#undef DAC_SR_DMAUDR2
constexpr auto DAC_SR_DMAUDR2 = ((std::uint32_t)0x20000000);

/******************************************************************************/
/*                                                                            */
/*                                    CEC                                     */
/*                                                                            */
/******************************************************************************/
/********************  Bit definition for CEC_CFGR register  ******************/
#undef CEC_CFGR_PE
constexpr auto CEC_CFGR_PE = ((std::uint16_t)0x0001);
#undef CEC_CFGR_IE
constexpr auto CEC_CFGR_IE = ((std::uint16_t)0x0002);
#undef CEC_CFGR_BTEM
constexpr auto CEC_CFGR_BTEM = ((std::uint16_t)0x0004);
#undef CEC_CFGR_BPEM
constexpr auto CEC_CFGR_BPEM = ((std::uint16_t)0x0008);

/********************  Bit definition for CEC_OAR register  ******************/
#undef CEC_OAR_OA
constexpr auto CEC_OAR_OA = ((std::uint16_t)0x000F);
#undef CEC_OAR_OA_0
constexpr auto CEC_OAR_OA_0 = ((std::uint16_t)0x0001);
#undef CEC_OAR_OA_1
constexpr auto CEC_OAR_OA_1 = ((std::uint16_t)0x0002);
#undef CEC_OAR_OA_2
constexpr auto CEC_OAR_OA_2 = ((std::uint16_t)0x0004);
#undef CEC_OAR_OA_3
constexpr auto CEC_OAR_OA_3 = ((std::uint16_t)0x0008);

/********************  Bit definition for CEC_PRES register  ******************/
#undef CEC_PRES_PRES
constexpr auto CEC_PRES_PRES = ((std::uint16_t)0x3FFF);

/********************  Bit definition for CEC_ESR register  ******************/
#undef CEC_ESR_BTE
constexpr auto CEC_ESR_BTE = ((std::uint16_t)0x0001);
#undef CEC_ESR_BPE
constexpr auto CEC_ESR_BPE = ((std::uint16_t)0x0002);
#undef CEC_ESR_RBTFE
constexpr auto CEC_ESR_RBTFE = ((std::uint16_t)0x0004);
#undef CEC_ESR_SBE
constexpr auto CEC_ESR_SBE = ((std::uint16_t)0x0008);
#undef CEC_ESR_ACKE
constexpr auto CEC_ESR_ACKE = ((std::uint16_t)0x0010);
#undef CEC_ESR_LINE
constexpr auto CEC_ESR_LINE = ((std::uint16_t)0x0020);
#undef CEC_ESR_TBTFE
constexpr auto CEC_ESR_TBTFE = ((std::uint16_t)0x0040);

/********************  Bit definition for CEC_CSR register  ******************/
#undef CEC_CSR_TSOM
constexpr auto CEC_CSR_TSOM = ((std::uint16_t)0x0001);
#undef CEC_CSR_TEOM
constexpr auto CEC_CSR_TEOM = ((std::uint16_t)0x0002);
#undef CEC_CSR_TERR
constexpr auto CEC_CSR_TERR = ((std::uint16_t)0x0004);
#undef CEC_CSR_TBTRF
constexpr auto CEC_CSR_TBTRF = ((std::uint16_t)0x0008);
#undef CEC_CSR_RSOM
constexpr auto CEC_CSR_RSOM = ((std::uint16_t)0x0010);
#undef CEC_CSR_REOM
constexpr auto CEC_CSR_REOM = ((std::uint16_t)0x0020);
#undef CEC_CSR_RERR
constexpr auto CEC_CSR_RERR = ((std::uint16_t)0x0040);
#undef CEC_CSR_RBTF
constexpr auto CEC_CSR_RBTF = ((std::uint16_t)0x0080);

/********************  Bit definition for CEC_TXD register  ******************/
#undef CEC_TXD_TXD
constexpr auto CEC_TXD_TXD = ((std::uint16_t)0x00FF);

/********************  Bit definition for CEC_RXD register  ******************/
#undef CEC_RXD_RXD
constexpr auto CEC_RXD_RXD = ((std::uint16_t)0x00FF);

/******************************************************************************/
/*                                                                            */
/*                                    TIM                                     */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for TIM_CR1 register  ********************/
#undef TIM_CR1_CEN
constexpr auto TIM_CR1_CEN = ((std::uint16_t)0x0001);
#undef TIM_CR1_UDIS
constexpr auto TIM_CR1_UDIS = ((std::uint16_t)0x0002);
#undef TIM_CR1_URS
constexpr auto TIM_CR1_URS = ((std::uint16_t)0x0004);
#undef TIM_CR1_OPM
constexpr auto TIM_CR1_OPM = ((std::uint16_t)0x0008);
#undef TIM_CR1_DIR
constexpr auto TIM_CR1_DIR = ((std::uint16_t)0x0010);

#undef TIM_CR1_CMS
constexpr auto TIM_CR1_CMS = ((std::uint16_t)0x0060);
#undef TIM_CR1_CMS_0
constexpr auto TIM_CR1_CMS_0 = ((std::uint16_t)0x0020);
#undef TIM_CR1_CMS_1
constexpr auto TIM_CR1_CMS_1 = ((std::uint16_t)0x0040);

#undef TIM_CR1_ARPE
constexpr auto TIM_CR1_ARPE = ((std::uint16_t)0x0080);

#undef TIM_CR1_CKD
constexpr auto TIM_CR1_CKD = ((std::uint16_t)0x0300);
#undef TIM_CR1_CKD_0
constexpr auto TIM_CR1_CKD_0 = ((std::uint16_t)0x0100);
#undef TIM_CR1_CKD_1
constexpr auto TIM_CR1_CKD_1 = ((std::uint16_t)0x0200);

/*******************  Bit definition for TIM_CR2 register  ********************/
#undef TIM_CR2_CCPC
constexpr auto TIM_CR2_CCPC = ((std::uint16_t)0x0001);
#undef TIM_CR2_CCUS
constexpr auto TIM_CR2_CCUS = ((std::uint16_t)0x0004);
#undef TIM_CR2_CCDS
constexpr auto TIM_CR2_CCDS = ((std::uint16_t)0x0008);

#undef TIM_CR2_MMS
constexpr auto TIM_CR2_MMS = ((std::uint16_t)0x0070);
#undef TIM_CR2_MMS_0
constexpr auto TIM_CR2_MMS_0 = ((std::uint16_t)0x0010);
#undef TIM_CR2_MMS_1
constexpr auto TIM_CR2_MMS_1 = ((std::uint16_t)0x0020);
#undef TIM_CR2_MMS_2
constexpr auto TIM_CR2_MMS_2 = ((std::uint16_t)0x0040);

#undef TIM_CR2_TI1S
constexpr auto TIM_CR2_TI1S = ((std::uint16_t)0x0080);
#undef TIM_CR2_OIS1
constexpr auto TIM_CR2_OIS1 = ((std::uint16_t)0x0100);
#undef TIM_CR2_OIS1N
constexpr auto TIM_CR2_OIS1N = ((std::uint16_t)0x0200);
#undef TIM_CR2_OIS2
constexpr auto TIM_CR2_OIS2 = ((std::uint16_t)0x0400);
#undef TIM_CR2_OIS2N
constexpr auto TIM_CR2_OIS2N = ((std::uint16_t)0x0800);
#undef TIM_CR2_OIS3
constexpr auto TIM_CR2_OIS3 = ((std::uint16_t)0x1000);
#undef TIM_CR2_OIS3N
constexpr auto TIM_CR2_OIS3N = ((std::uint16_t)0x2000);
#undef TIM_CR2_OIS4
constexpr auto TIM_CR2_OIS4 = ((std::uint16_t)0x4000);

/*******************  Bit definition for TIM_SMCR register  *******************/
#undef TIM_SMCR_SMS
constexpr auto TIM_SMCR_SMS = ((std::uint16_t)0x0007);
#undef TIM_SMCR_SMS_0
constexpr auto TIM_SMCR_SMS_0 = ((std::uint16_t)0x0001);
#undef TIM_SMCR_SMS_1
constexpr auto TIM_SMCR_SMS_1 = ((std::uint16_t)0x0002);
#undef TIM_SMCR_SMS_2
constexpr auto TIM_SMCR_SMS_2 = ((std::uint16_t)0x0004);

#undef TIM_SMCR_TS
constexpr auto TIM_SMCR_TS = ((std::uint16_t)0x0070);
#undef TIM_SMCR_TS_0
constexpr auto TIM_SMCR_TS_0 = ((std::uint16_t)0x0010);
#undef TIM_SMCR_TS_1
constexpr auto TIM_SMCR_TS_1 = ((std::uint16_t)0x0020);
#undef TIM_SMCR_TS_2
constexpr auto TIM_SMCR_TS_2 = ((std::uint16_t)0x0040);

#undef TIM_SMCR_MSM
constexpr auto TIM_SMCR_MSM = ((std::uint16_t)0x0080);

#undef TIM_SMCR_ETF
constexpr auto TIM_SMCR_ETF = ((std::uint16_t)0x0F00);
#undef TIM_SMCR_ETF_0
constexpr auto TIM_SMCR_ETF_0 = ((std::uint16_t)0x0100);
#undef TIM_SMCR_ETF_1
constexpr auto TIM_SMCR_ETF_1 = ((std::uint16_t)0x0200);
#undef TIM_SMCR_ETF_2
constexpr auto TIM_SMCR_ETF_2 = ((std::uint16_t)0x0400);
#undef TIM_SMCR_ETF_3
constexpr auto TIM_SMCR_ETF_3 = ((std::uint16_t)0x0800);

#undef TIM_SMCR_ETPS
constexpr auto TIM_SMCR_ETPS = ((std::uint16_t)0x3000);
#undef TIM_SMCR_ETPS_0
constexpr auto TIM_SMCR_ETPS_0 = ((std::uint16_t)0x1000);
#undef TIM_SMCR_ETPS_1
constexpr auto TIM_SMCR_ETPS_1 = ((std::uint16_t)0x2000);

#undef TIM_SMCR_ECE
constexpr auto TIM_SMCR_ECE = ((std::uint16_t)0x4000);
#undef TIM_SMCR_ETP
constexpr auto TIM_SMCR_ETP = ((std::uint16_t)0x8000);

/*******************  Bit definition for TIM_DIER register  *******************/
#undef TIM_DIER_UIE
constexpr auto TIM_DIER_UIE = ((std::uint16_t)0x0001);
#undef TIM_DIER_CC1IE
constexpr auto TIM_DIER_CC1IE = ((std::uint16_t)0x0002);
#undef TIM_DIER_CC2IE
constexpr auto TIM_DIER_CC2IE = ((std::uint16_t)0x0004);
#undef TIM_DIER_CC3IE
constexpr auto TIM_DIER_CC3IE = ((std::uint16_t)0x0008);
#undef TIM_DIER_CC4IE
constexpr auto TIM_DIER_CC4IE = ((std::uint16_t)0x0010);
#undef TIM_DIER_COMIE
constexpr auto TIM_DIER_COMIE = ((std::uint16_t)0x0020);
#undef TIM_DIER_TIE
constexpr auto TIM_DIER_TIE = ((std::uint16_t)0x0040);
#undef TIM_DIER_BIE
constexpr auto TIM_DIER_BIE = ((std::uint16_t)0x0080);
#undef TIM_DIER_UDE
constexpr auto TIM_DIER_UDE = ((std::uint16_t)0x0100);
#undef TIM_DIER_CC1DE
constexpr auto TIM_DIER_CC1DE = ((std::uint16_t)0x0200);
#undef TIM_DIER_CC2DE
constexpr auto TIM_DIER_CC2DE = ((std::uint16_t)0x0400);
#undef TIM_DIER_CC3DE
constexpr auto TIM_DIER_CC3DE = ((std::uint16_t)0x0800);
#undef TIM_DIER_CC4DE
constexpr auto TIM_DIER_CC4DE = ((std::uint16_t)0x1000);
#undef TIM_DIER_COMDE
constexpr auto TIM_DIER_COMDE = ((std::uint16_t)0x2000);
#undef TIM_DIER_TDE
constexpr auto TIM_DIER_TDE = ((std::uint16_t)0x4000);

/********************  Bit definition for TIM_SR register  ********************/
#undef TIM_SR_UIF
constexpr auto TIM_SR_UIF = ((std::uint16_t)0x0001);
#undef TIM_SR_CC1IF
constexpr auto TIM_SR_CC1IF = ((std::uint16_t)0x0002);
#undef TIM_SR_CC2IF
constexpr auto TIM_SR_CC2IF = ((std::uint16_t)0x0004);
#undef TIM_SR_CC3IF
constexpr auto TIM_SR_CC3IF = ((std::uint16_t)0x0008);
#undef TIM_SR_CC4IF
constexpr auto TIM_SR_CC4IF = ((std::uint16_t)0x0010);
#undef TIM_SR_COMIF
constexpr auto TIM_SR_COMIF = ((std::uint16_t)0x0020);
#undef TIM_SR_TIF
constexpr auto TIM_SR_TIF = ((std::uint16_t)0x0040);
#undef TIM_SR_BIF
constexpr auto TIM_SR_BIF = ((std::uint16_t)0x0080);
#undef TIM_SR_CC1OF
constexpr auto TIM_SR_CC1OF = ((std::uint16_t)0x0200);
#undef TIM_SR_CC2OF
constexpr auto TIM_SR_CC2OF = ((std::uint16_t)0x0400);
#undef TIM_SR_CC3OF
constexpr auto TIM_SR_CC3OF = ((std::uint16_t)0x0800);
#undef TIM_SR_CC4OF
constexpr auto TIM_SR_CC4OF = ((std::uint16_t)0x1000);

/*******************  Bit definition for TIM_EGR register  ********************/
#undef TIM_EGR_UG
constexpr auto TIM_EGR_UG = ((std::uint8_t)0x01);
#undef TIM_EGR_CC1G
constexpr auto TIM_EGR_CC1G = ((std::uint8_t)0x02);
#undef TIM_EGR_CC2G
constexpr auto TIM_EGR_CC2G = ((std::uint8_t)0x04);
#undef TIM_EGR_CC3G
constexpr auto TIM_EGR_CC3G = ((std::uint8_t)0x08);
#undef TIM_EGR_CC4G
constexpr auto TIM_EGR_CC4G = ((std::uint8_t)0x10);
#undef TIM_EGR_COMG
constexpr auto TIM_EGR_COMG = ((std::uint8_t)0x20);
#undef TIM_EGR_TG
constexpr auto TIM_EGR_TG = ((std::uint8_t)0x40);
#undef TIM_EGR_BG
constexpr auto TIM_EGR_BG = ((std::uint8_t)0x80);

/******************  Bit definition for TIM_CCMR1 register  *******************/
#undef TIM_CCMR1_CC1S
constexpr auto TIM_CCMR1_CC1S = ((std::uint16_t)0x0003);
#undef TIM_CCMR1_CC1S_0
constexpr auto TIM_CCMR1_CC1S_0 = ((std::uint16_t)0x0001);
#undef TIM_CCMR1_CC1S_1
constexpr auto TIM_CCMR1_CC1S_1 = ((std::uint16_t)0x0002);

#undef TIM_CCMR1_OC1FE
constexpr auto TIM_CCMR1_OC1FE = ((std::uint16_t)0x0004);
#undef TIM_CCMR1_OC1PE
constexpr auto TIM_CCMR1_OC1PE = ((std::uint16_t)0x0008);

#undef TIM_CCMR1_OC1M
constexpr auto TIM_CCMR1_OC1M = ((std::uint16_t)0x0070);
#undef TIM_CCMR1_OC1M_0
constexpr auto TIM_CCMR1_OC1M_0 = ((std::uint16_t)0x0010);
#undef TIM_CCMR1_OC1M_1
constexpr auto TIM_CCMR1_OC1M_1 = ((std::uint16_t)0x0020);
#undef TIM_CCMR1_OC1M_2
constexpr auto TIM_CCMR1_OC1M_2 = ((std::uint16_t)0x0040);

#undef TIM_CCMR1_OC1CE
constexpr auto TIM_CCMR1_OC1CE = ((std::uint16_t)0x0080);

#undef TIM_CCMR1_CC2S
constexpr auto TIM_CCMR1_CC2S = ((std::uint16_t)0x0300);
#undef TIM_CCMR1_CC2S_0
constexpr auto TIM_CCMR1_CC2S_0 = ((std::uint16_t)0x0100);
#undef TIM_CCMR1_CC2S_1
constexpr auto TIM_CCMR1_CC2S_1 = ((std::uint16_t)0x0200);

#undef TIM_CCMR1_OC2FE
constexpr auto TIM_CCMR1_OC2FE = ((std::uint16_t)0x0400);
#undef TIM_CCMR1_OC2PE
constexpr auto TIM_CCMR1_OC2PE = ((std::uint16_t)0x0800);

#undef TIM_CCMR1_OC2M
constexpr auto TIM_CCMR1_OC2M = ((std::uint16_t)0x7000);
#undef TIM_CCMR1_OC2M_0
constexpr auto TIM_CCMR1_OC2M_0 = ((std::uint16_t)0x1000);
#undef TIM_CCMR1_OC2M_1
constexpr auto TIM_CCMR1_OC2M_1 = ((std::uint16_t)0x2000);
#undef TIM_CCMR1_OC2M_2
constexpr auto TIM_CCMR1_OC2M_2 = ((std::uint16_t)0x4000);

#undef TIM_CCMR1_OC2CE
constexpr auto TIM_CCMR1_OC2CE = ((std::uint16_t)0x8000);

/*----------------------------------------------------------------------------*/

#undef TIM_CCMR1_IC1PSC
constexpr auto TIM_CCMR1_IC1PSC = ((std::uint16_t)0x000C);
#undef TIM_CCMR1_IC1PSC_0
constexpr auto TIM_CCMR1_IC1PSC_0 = ((std::uint16_t)0x0004);
#undef TIM_CCMR1_IC1PSC_1
constexpr auto TIM_CCMR1_IC1PSC_1 = ((std::uint16_t)0x0008);

#undef TIM_CCMR1_IC1F
constexpr auto TIM_CCMR1_IC1F = ((std::uint16_t)0x00F0);
#undef TIM_CCMR1_IC1F_0
constexpr auto TIM_CCMR1_IC1F_0 = ((std::uint16_t)0x0010);
#undef TIM_CCMR1_IC1F_1
constexpr auto TIM_CCMR1_IC1F_1 = ((std::uint16_t)0x0020);
#undef TIM_CCMR1_IC1F_2
constexpr auto TIM_CCMR1_IC1F_2 = ((std::uint16_t)0x0040);
#undef TIM_CCMR1_IC1F_3
constexpr auto TIM_CCMR1_IC1F_3 = ((std::uint16_t)0x0080);

#undef TIM_CCMR1_IC2PSC
constexpr auto TIM_CCMR1_IC2PSC = ((std::uint16_t)0x0C00);
#undef TIM_CCMR1_IC2PSC_0
constexpr auto TIM_CCMR1_IC2PSC_0 = ((std::uint16_t)0x0400);
#undef TIM_CCMR1_IC2PSC_1
constexpr auto TIM_CCMR1_IC2PSC_1 = ((std::uint16_t)0x0800);

#undef TIM_CCMR1_IC2F
constexpr auto TIM_CCMR1_IC2F = ((std::uint16_t)0xF000);
#undef TIM_CCMR1_IC2F_0
constexpr auto TIM_CCMR1_IC2F_0 = ((std::uint16_t)0x1000);
#undef TIM_CCMR1_IC2F_1
constexpr auto TIM_CCMR1_IC2F_1 = ((std::uint16_t)0x2000);
#undef TIM_CCMR1_IC2F_2
constexpr auto TIM_CCMR1_IC2F_2 = ((std::uint16_t)0x4000);
#undef TIM_CCMR1_IC2F_3
constexpr auto TIM_CCMR1_IC2F_3 = ((std::uint16_t)0x8000);

/******************  Bit definition for TIM_CCMR2 register  *******************/
#undef TIM_CCMR2_CC3S
constexpr auto TIM_CCMR2_CC3S = ((std::uint16_t)0x0003);
#undef TIM_CCMR2_CC3S_0
constexpr auto TIM_CCMR2_CC3S_0 = ((std::uint16_t)0x0001);
#undef TIM_CCMR2_CC3S_1
constexpr auto TIM_CCMR2_CC3S_1 = ((std::uint16_t)0x0002);

#undef TIM_CCMR2_OC3FE
constexpr auto TIM_CCMR2_OC3FE = ((std::uint16_t)0x0004);
#undef TIM_CCMR2_OC3PE
constexpr auto TIM_CCMR2_OC3PE = ((std::uint16_t)0x0008);

#undef TIM_CCMR2_OC3M
constexpr auto TIM_CCMR2_OC3M = ((std::uint16_t)0x0070);
#undef TIM_CCMR2_OC3M_0
constexpr auto TIM_CCMR2_OC3M_0 = ((std::uint16_t)0x0010);
#undef TIM_CCMR2_OC3M_1
constexpr auto TIM_CCMR2_OC3M_1 = ((std::uint16_t)0x0020);
#undef TIM_CCMR2_OC3M_2
constexpr auto TIM_CCMR2_OC3M_2 = ((std::uint16_t)0x0040);

#undef TIM_CCMR2_OC3CE
constexpr auto TIM_CCMR2_OC3CE = ((std::uint16_t)0x0080);

#undef TIM_CCMR2_CC4S
constexpr auto TIM_CCMR2_CC4S = ((std::uint16_t)0x0300);
#undef TIM_CCMR2_CC4S_0
constexpr auto TIM_CCMR2_CC4S_0 = ((std::uint16_t)0x0100);
#undef TIM_CCMR2_CC4S_1
constexpr auto TIM_CCMR2_CC4S_1 = ((std::uint16_t)0x0200);

#undef TIM_CCMR2_OC4FE
constexpr auto TIM_CCMR2_OC4FE = ((std::uint16_t)0x0400);
#undef TIM_CCMR2_OC4PE
constexpr auto TIM_CCMR2_OC4PE = ((std::uint16_t)0x0800);

#undef TIM_CCMR2_OC4M
constexpr auto TIM_CCMR2_OC4M = ((std::uint16_t)0x7000);
#undef TIM_CCMR2_OC4M_0
constexpr auto TIM_CCMR2_OC4M_0 = ((std::uint16_t)0x1000);
#undef TIM_CCMR2_OC4M_1
constexpr auto TIM_CCMR2_OC4M_1 = ((std::uint16_t)0x2000);
#undef TIM_CCMR2_OC4M_2
constexpr auto TIM_CCMR2_OC4M_2 = ((std::uint16_t)0x4000);

#undef TIM_CCMR2_OC4CE
constexpr auto TIM_CCMR2_OC4CE = ((std::uint16_t)0x8000);

/*----------------------------------------------------------------------------*/

#undef TIM_CCMR2_IC3PSC
constexpr auto TIM_CCMR2_IC3PSC = ((std::uint16_t)0x000C);
#undef TIM_CCMR2_IC3PSC_0
constexpr auto TIM_CCMR2_IC3PSC_0 = ((std::uint16_t)0x0004);
#undef TIM_CCMR2_IC3PSC_1
constexpr auto TIM_CCMR2_IC3PSC_1 = ((std::uint16_t)0x0008);

#undef TIM_CCMR2_IC3F
constexpr auto TIM_CCMR2_IC3F = ((std::uint16_t)0x00F0);
#undef TIM_CCMR2_IC3F_0
constexpr auto TIM_CCMR2_IC3F_0 = ((std::uint16_t)0x0010);
#undef TIM_CCMR2_IC3F_1
constexpr auto TIM_CCMR2_IC3F_1 = ((std::uint16_t)0x0020);
#undef TIM_CCMR2_IC3F_2
constexpr auto TIM_CCMR2_IC3F_2 = ((std::uint16_t)0x0040);
#undef TIM_CCMR2_IC3F_3
constexpr auto TIM_CCMR2_IC3F_3 = ((std::uint16_t)0x0080);

#undef TIM_CCMR2_IC4PSC
constexpr auto TIM_CCMR2_IC4PSC = ((std::uint16_t)0x0C00);
#undef TIM_CCMR2_IC4PSC_0
constexpr auto TIM_CCMR2_IC4PSC_0 = ((std::uint16_t)0x0400);
#undef TIM_CCMR2_IC4PSC_1
constexpr auto TIM_CCMR2_IC4PSC_1 = ((std::uint16_t)0x0800);

#undef TIM_CCMR2_IC4F
constexpr auto TIM_CCMR2_IC4F = ((std::uint16_t)0xF000);
#undef TIM_CCMR2_IC4F_0
constexpr auto TIM_CCMR2_IC4F_0 = ((std::uint16_t)0x1000);
#undef TIM_CCMR2_IC4F_1
constexpr auto TIM_CCMR2_IC4F_1 = ((std::uint16_t)0x2000);
#undef TIM_CCMR2_IC4F_2
constexpr auto TIM_CCMR2_IC4F_2 = ((std::uint16_t)0x4000);
#undef TIM_CCMR2_IC4F_3
constexpr auto TIM_CCMR2_IC4F_3 = ((std::uint16_t)0x8000);

/*******************  Bit definition for TIM_CCER register  *******************/
#undef TIM_CCER_CC1E
constexpr auto TIM_CCER_CC1E = ((std::uint16_t)0x0001);
#undef TIM_CCER_CC1P
constexpr auto TIM_CCER_CC1P = ((std::uint16_t)0x0002);
#undef TIM_CCER_CC1NE
constexpr auto TIM_CCER_CC1NE = ((std::uint16_t)0x0004);
#undef TIM_CCER_CC1NP
constexpr auto TIM_CCER_CC1NP = ((std::uint16_t)0x0008);
#undef TIM_CCER_CC2E
constexpr auto TIM_CCER_CC2E = ((std::uint16_t)0x0010);
#undef TIM_CCER_CC2P
constexpr auto TIM_CCER_CC2P = ((std::uint16_t)0x0020);
#undef TIM_CCER_CC2NE
constexpr auto TIM_CCER_CC2NE = ((std::uint16_t)0x0040);
#undef TIM_CCER_CC2NP
constexpr auto TIM_CCER_CC2NP = ((std::uint16_t)0x0080);
#undef TIM_CCER_CC3E
constexpr auto TIM_CCER_CC3E = ((std::uint16_t)0x0100);
#undef TIM_CCER_CC3P
constexpr auto TIM_CCER_CC3P = ((std::uint16_t)0x0200);
#undef TIM_CCER_CC3NE
constexpr auto TIM_CCER_CC3NE = ((std::uint16_t)0x0400);
#undef TIM_CCER_CC3NP
constexpr auto TIM_CCER_CC3NP = ((std::uint16_t)0x0800);
#undef TIM_CCER_CC4E
constexpr auto TIM_CCER_CC4E = ((std::uint16_t)0x1000);
#undef TIM_CCER_CC4P
constexpr auto TIM_CCER_CC4P = ((std::uint16_t)0x2000);
#undef TIM_CCER_CC4NP
constexpr auto TIM_CCER_CC4NP = ((std::uint16_t)0x8000);

/*******************  Bit definition for TIM_CNT register  ********************/
#undef TIM_CNT_CNT
constexpr auto TIM_CNT_CNT = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_PSC register  ********************/
#undef TIM_PSC_PSC
constexpr auto TIM_PSC_PSC = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_ARR register  ********************/
#undef TIM_ARR_ARR
constexpr auto TIM_ARR_ARR = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_RCR register  ********************/
#undef TIM_RCR_REP
constexpr auto TIM_RCR_REP = ((std::uint8_t)0xFF);

/*******************  Bit definition for TIM_CCR1 register  *******************/
#undef TIM_CCR1_CCR1
constexpr auto TIM_CCR1_CCR1 = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_CCR2 register  *******************/
#undef TIM_CCR2_CCR2
constexpr auto TIM_CCR2_CCR2 = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_CCR3 register  *******************/
#undef TIM_CCR3_CCR3
constexpr auto TIM_CCR3_CCR3 = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_CCR4 register  *******************/
#undef TIM_CCR4_CCR4
constexpr auto TIM_CCR4_CCR4 = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for TIM_BDTR register  *******************/
#undef TIM_BDTR_DTG
constexpr auto TIM_BDTR_DTG = ((std::uint16_t)0x00FF);
#undef TIM_BDTR_DTG_0
constexpr auto TIM_BDTR_DTG_0 = ((std::uint16_t)0x0001);
#undef TIM_BDTR_DTG_1
constexpr auto TIM_BDTR_DTG_1 = ((std::uint16_t)0x0002);
#undef TIM_BDTR_DTG_2
constexpr auto TIM_BDTR_DTG_2 = ((std::uint16_t)0x0004);
#undef TIM_BDTR_DTG_3
constexpr auto TIM_BDTR_DTG_3 = ((std::uint16_t)0x0008);
#undef TIM_BDTR_DTG_4
constexpr auto TIM_BDTR_DTG_4 = ((std::uint16_t)0x0010);
#undef TIM_BDTR_DTG_5
constexpr auto TIM_BDTR_DTG_5 = ((std::uint16_t)0x0020);
#undef TIM_BDTR_DTG_6
constexpr auto TIM_BDTR_DTG_6 = ((std::uint16_t)0x0040);
#undef TIM_BDTR_DTG_7
constexpr auto TIM_BDTR_DTG_7 = ((std::uint16_t)0x0080);

#undef TIM_BDTR_LOCK
constexpr auto TIM_BDTR_LOCK = ((std::uint16_t)0x0300);
#undef TIM_BDTR_LOCK_0
constexpr auto TIM_BDTR_LOCK_0 = ((std::uint16_t)0x0100);
#undef TIM_BDTR_LOCK_1
constexpr auto TIM_BDTR_LOCK_1 = ((std::uint16_t)0x0200);

#undef TIM_BDTR_OSSI
constexpr auto TIM_BDTR_OSSI = ((std::uint16_t)0x0400);
#undef TIM_BDTR_OSSR
constexpr auto TIM_BDTR_OSSR = ((std::uint16_t)0x0800);
#undef TIM_BDTR_BKE
constexpr auto TIM_BDTR_BKE = ((std::uint16_t)0x1000);
#undef TIM_BDTR_BKP
constexpr auto TIM_BDTR_BKP = ((std::uint16_t)0x2000);
#undef TIM_BDTR_AOE
constexpr auto TIM_BDTR_AOE = ((std::uint16_t)0x4000);
#undef TIM_BDTR_MOE
constexpr auto TIM_BDTR_MOE = ((std::uint16_t)0x8000);

/*******************  Bit definition for TIM_DCR register  ********************/
#undef TIM_DCR_DBA
constexpr auto TIM_DCR_DBA = ((std::uint16_t)0x001F);
#undef TIM_DCR_DBA_0
constexpr auto TIM_DCR_DBA_0 = ((std::uint16_t)0x0001);
#undef TIM_DCR_DBA_1
constexpr auto TIM_DCR_DBA_1 = ((std::uint16_t)0x0002);
#undef TIM_DCR_DBA_2
constexpr auto TIM_DCR_DBA_2 = ((std::uint16_t)0x0004);
#undef TIM_DCR_DBA_3
constexpr auto TIM_DCR_DBA_3 = ((std::uint16_t)0x0008);
#undef TIM_DCR_DBA_4
constexpr auto TIM_DCR_DBA_4 = ((std::uint16_t)0x0010);

#undef TIM_DCR_DBL
constexpr auto TIM_DCR_DBL = ((std::uint16_t)0x1F00);
#undef TIM_DCR_DBL_0
constexpr auto TIM_DCR_DBL_0 = ((std::uint16_t)0x0100);
#undef TIM_DCR_DBL_1
constexpr auto TIM_DCR_DBL_1 = ((std::uint16_t)0x0200);
#undef TIM_DCR_DBL_2
constexpr auto TIM_DCR_DBL_2 = ((std::uint16_t)0x0400);
#undef TIM_DCR_DBL_3
constexpr auto TIM_DCR_DBL_3 = ((std::uint16_t)0x0800);
#undef TIM_DCR_DBL_4
constexpr auto TIM_DCR_DBL_4 = ((std::uint16_t)0x1000);

/*******************  Bit definition for TIM_DMAR register  *******************/
#undef TIM_DMAR_DMAB
constexpr auto TIM_DMAR_DMAB = ((std::uint16_t)0xFFFF);

/******************************************************************************/
/*                                                                            */
/*                             Real-Time Clock                                */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for RTC_CRH register  ********************/
#undef RTC_CRH_SECIE
constexpr auto RTC_CRH_SECIE = ((std::uint8_t)0x01);
#undef RTC_CRH_ALRIE
constexpr auto RTC_CRH_ALRIE = ((std::uint8_t)0x02);
#undef RTC_CRH_OWIE
constexpr auto RTC_CRH_OWIE = ((std::uint8_t)0x04);

/*******************  Bit definition for RTC_CRL register  ********************/
#undef RTC_CRL_SECF
constexpr auto RTC_CRL_SECF = ((std::uint8_t)0x01);
#undef RTC_CRL_ALRF
constexpr auto RTC_CRL_ALRF = ((std::uint8_t)0x02);
#undef RTC_CRL_OWF
constexpr auto RTC_CRL_OWF = ((std::uint8_t)0x04);
#undef RTC_CRL_RSF
constexpr auto RTC_CRL_RSF = ((std::uint8_t)0x08);
#undef RTC_CRL_CNF
constexpr auto RTC_CRL_CNF = ((std::uint8_t)0x10);
#undef RTC_CRL_RTOFF
constexpr auto RTC_CRL_RTOFF = ((std::uint8_t)0x20);

/*******************  Bit definition for RTC_PRLH register  *******************/
#undef RTC_PRLH_PRL
constexpr auto RTC_PRLH_PRL = ((std::uint16_t)0x000F);

/*******************  Bit definition for RTC_PRLL register  *******************/
#undef RTC_PRLL_PRL
constexpr auto RTC_PRLL_PRL = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for RTC_DIVH register  *******************/
#undef RTC_DIVH_RTC_DIV
constexpr auto RTC_DIVH_RTC_DIV = ((std::uint16_t)0x000F);

/*******************  Bit definition for RTC_DIVL register  *******************/
#undef RTC_DIVL_RTC_DIV
constexpr auto RTC_DIVL_RTC_DIV = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for RTC_CNTH register  *******************/
#undef RTC_CNTH_RTC_CNT
constexpr auto RTC_CNTH_RTC_CNT = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for RTC_CNTL register  *******************/
#undef RTC_CNTL_RTC_CNT
constexpr auto RTC_CNTL_RTC_CNT = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for RTC_ALRH register  *******************/
#undef RTC_ALRH_RTC_ALR
constexpr auto RTC_ALRH_RTC_ALR = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for RTC_ALRL register  *******************/
#undef RTC_ALRL_RTC_ALR
constexpr auto RTC_ALRL_RTC_ALR = ((std::uint16_t)0xFFFF);

/******************************************************************************/
/*                                                                            */
/*                           Independent WATCHDOG                             */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for IWDG_KR register  ********************/
#undef IWDG_KR_KEY
constexpr auto IWDG_KR_KEY = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for IWDG_PR register  ********************/
#undef IWDG_PR_PR
constexpr auto IWDG_PR_PR = ((std::uint8_t)0x07);
#undef IWDG_PR_PR_0
constexpr auto IWDG_PR_PR_0 = ((std::uint8_t)0x01);
#undef IWDG_PR_PR_1
constexpr auto IWDG_PR_PR_1 = ((std::uint8_t)0x02);
#undef IWDG_PR_PR_2
constexpr auto IWDG_PR_PR_2 = ((std::uint8_t)0x04);

/*******************  Bit definition for IWDG_RLR register  *******************/
#undef IWDG_RLR_RL
constexpr auto IWDG_RLR_RL = ((std::uint16_t)0x0FFF);

/*******************  Bit definition for IWDG_SR register  ********************/
#undef IWDG_SR_PVU
constexpr auto IWDG_SR_PVU = ((std::uint8_t)0x01);
#undef IWDG_SR_RVU
constexpr auto IWDG_SR_RVU = ((std::uint8_t)0x02);

/******************************************************************************/
/*                                                                            */
/*                            Window WATCHDOG                                 */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for WWDG_CR register  ********************/
#undef WWDG_CR_T
constexpr auto WWDG_CR_T = ((std::uint8_t)0x7F);
#undef WWDG_CR_T0
constexpr auto WWDG_CR_T0 = ((std::uint8_t)0x01);
#undef WWDG_CR_T1
constexpr auto WWDG_CR_T1 = ((std::uint8_t)0x02);
#undef WWDG_CR_T2
constexpr auto WWDG_CR_T2 = ((std::uint8_t)0x04);
#undef WWDG_CR_T3
constexpr auto WWDG_CR_T3 = ((std::uint8_t)0x08);
#undef WWDG_CR_T4
constexpr auto WWDG_CR_T4 = ((std::uint8_t)0x10);
#undef WWDG_CR_T5
constexpr auto WWDG_CR_T5 = ((std::uint8_t)0x20);
#undef WWDG_CR_T6
constexpr auto WWDG_CR_T6 = ((std::uint8_t)0x40);

#undef WWDG_CR_WDGA
constexpr auto WWDG_CR_WDGA = ((std::uint8_t)0x80);

/*******************  Bit definition for WWDG_CFR register  *******************/
#undef WWDG_CFR_W
constexpr auto WWDG_CFR_W = ((std::uint16_t)0x007F);
#undef WWDG_CFR_W0
constexpr auto WWDG_CFR_W0 = ((std::uint16_t)0x0001);
#undef WWDG_CFR_W1
constexpr auto WWDG_CFR_W1 = ((std::uint16_t)0x0002);
#undef WWDG_CFR_W2
constexpr auto WWDG_CFR_W2 = ((std::uint16_t)0x0004);
#undef WWDG_CFR_W3
constexpr auto WWDG_CFR_W3 = ((std::uint16_t)0x0008);
#undef WWDG_CFR_W4
constexpr auto WWDG_CFR_W4 = ((std::uint16_t)0x0010);
#undef WWDG_CFR_W5
constexpr auto WWDG_CFR_W5 = ((std::uint16_t)0x0020);
#undef WWDG_CFR_W6
constexpr auto WWDG_CFR_W6 = ((std::uint16_t)0x0040);

#undef WWDG_CFR_WDGTB
constexpr auto WWDG_CFR_WDGTB = ((std::uint16_t)0x0180);
#undef WWDG_CFR_WDGTB0
constexpr auto WWDG_CFR_WDGTB0 = ((std::uint16_t)0x0080);
#undef WWDG_CFR_WDGTB1
constexpr auto WWDG_CFR_WDGTB1 = ((std::uint16_t)0x0100);

#undef WWDG_CFR_EWI
constexpr auto WWDG_CFR_EWI = ((std::uint16_t)0x0200);

/*******************  Bit definition for WWDG_SR register  ********************/
#undef WWDG_SR_EWIF
constexpr auto WWDG_SR_EWIF = ((std::uint8_t)0x01);

/******************************************************************************/
/*                                                                            */
/*                       Flexible Static Memory Controller                    */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for FSMC_BCR1 register  *******************/
#undef FSMC_BCR1_MBKEN
constexpr auto FSMC_BCR1_MBKEN = ((std::uint32_t)0x00000001);
#undef FSMC_BCR1_MUXEN
constexpr auto FSMC_BCR1_MUXEN = ((std::uint32_t)0x00000002);

#undef FSMC_BCR1_MTYP
constexpr auto FSMC_BCR1_MTYP = ((std::uint32_t)0x0000000C);
#undef FSMC_BCR1_MTYP_0
constexpr auto FSMC_BCR1_MTYP_0 = ((std::uint32_t)0x00000004);
#undef FSMC_BCR1_MTYP_1
constexpr auto FSMC_BCR1_MTYP_1 = ((std::uint32_t)0x00000008);

#undef FSMC_BCR1_MWID
constexpr auto FSMC_BCR1_MWID = ((std::uint32_t)0x00000030);
#undef FSMC_BCR1_MWID_0
constexpr auto FSMC_BCR1_MWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BCR1_MWID_1
constexpr auto FSMC_BCR1_MWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_BCR1_FACCEN
constexpr auto FSMC_BCR1_FACCEN = ((std::uint32_t)0x00000040);
#undef FSMC_BCR1_BURSTEN
constexpr auto FSMC_BCR1_BURSTEN = ((std::uint32_t)0x00000100);
#undef FSMC_BCR1_WAITPOL
constexpr auto FSMC_BCR1_WAITPOL = ((std::uint32_t)0x00000200);
#undef FSMC_BCR1_WRAPMOD
constexpr auto FSMC_BCR1_WRAPMOD = ((std::uint32_t)0x00000400);
#undef FSMC_BCR1_WAITCFG
constexpr auto FSMC_BCR1_WAITCFG = ((std::uint32_t)0x00000800);
#undef FSMC_BCR1_WREN
constexpr auto FSMC_BCR1_WREN = ((std::uint32_t)0x00001000);
#undef FSMC_BCR1_WAITEN
constexpr auto FSMC_BCR1_WAITEN = ((std::uint32_t)0x00002000);
#undef FSMC_BCR1_EXTMOD
constexpr auto FSMC_BCR1_EXTMOD = ((std::uint32_t)0x00004000);
#undef FSMC_BCR1_ASYNCWAIT
constexpr auto FSMC_BCR1_ASYNCWAIT = ((std::uint32_t)0x00008000);
#undef FSMC_BCR1_CBURSTRW
constexpr auto FSMC_BCR1_CBURSTRW = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_BCR2 register  *******************/
#undef FSMC_BCR2_MBKEN
constexpr auto FSMC_BCR2_MBKEN = ((std::uint32_t)0x00000001);
#undef FSMC_BCR2_MUXEN
constexpr auto FSMC_BCR2_MUXEN = ((std::uint32_t)0x00000002);

#undef FSMC_BCR2_MTYP
constexpr auto FSMC_BCR2_MTYP = ((std::uint32_t)0x0000000C);
#undef FSMC_BCR2_MTYP_0
constexpr auto FSMC_BCR2_MTYP_0 = ((std::uint32_t)0x00000004);
#undef FSMC_BCR2_MTYP_1
constexpr auto FSMC_BCR2_MTYP_1 = ((std::uint32_t)0x00000008);

#undef FSMC_BCR2_MWID
constexpr auto FSMC_BCR2_MWID = ((std::uint32_t)0x00000030);
#undef FSMC_BCR2_MWID_0
constexpr auto FSMC_BCR2_MWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BCR2_MWID_1
constexpr auto FSMC_BCR2_MWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_BCR2_FACCEN
constexpr auto FSMC_BCR2_FACCEN = ((std::uint32_t)0x00000040);
#undef FSMC_BCR2_BURSTEN
constexpr auto FSMC_BCR2_BURSTEN = ((std::uint32_t)0x00000100);
#undef FSMC_BCR2_WAITPOL
constexpr auto FSMC_BCR2_WAITPOL = ((std::uint32_t)0x00000200);
#undef FSMC_BCR2_WRAPMOD
constexpr auto FSMC_BCR2_WRAPMOD = ((std::uint32_t)0x00000400);
#undef FSMC_BCR2_WAITCFG
constexpr auto FSMC_BCR2_WAITCFG = ((std::uint32_t)0x00000800);
#undef FSMC_BCR2_WREN
constexpr auto FSMC_BCR2_WREN = ((std::uint32_t)0x00001000);
#undef FSMC_BCR2_WAITEN
constexpr auto FSMC_BCR2_WAITEN = ((std::uint32_t)0x00002000);
#undef FSMC_BCR2_EXTMOD
constexpr auto FSMC_BCR2_EXTMOD = ((std::uint32_t)0x00004000);
#undef FSMC_BCR2_ASYNCWAIT
constexpr auto FSMC_BCR2_ASYNCWAIT = ((std::uint32_t)0x00008000);
#undef FSMC_BCR2_CBURSTRW
constexpr auto FSMC_BCR2_CBURSTRW = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_BCR3 register  *******************/
#undef FSMC_BCR3_MBKEN
constexpr auto FSMC_BCR3_MBKEN = ((std::uint32_t)0x00000001);
#undef FSMC_BCR3_MUXEN
constexpr auto FSMC_BCR3_MUXEN = ((std::uint32_t)0x00000002);

#undef FSMC_BCR3_MTYP
constexpr auto FSMC_BCR3_MTYP = ((std::uint32_t)0x0000000C);
#undef FSMC_BCR3_MTYP_0
constexpr auto FSMC_BCR3_MTYP_0 = ((std::uint32_t)0x00000004);
#undef FSMC_BCR3_MTYP_1
constexpr auto FSMC_BCR3_MTYP_1 = ((std::uint32_t)0x00000008);

#undef FSMC_BCR3_MWID
constexpr auto FSMC_BCR3_MWID = ((std::uint32_t)0x00000030);
#undef FSMC_BCR3_MWID_0
constexpr auto FSMC_BCR3_MWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BCR3_MWID_1
constexpr auto FSMC_BCR3_MWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_BCR3_FACCEN
constexpr auto FSMC_BCR3_FACCEN = ((std::uint32_t)0x00000040);
#undef FSMC_BCR3_BURSTEN
constexpr auto FSMC_BCR3_BURSTEN = ((std::uint32_t)0x00000100);
#undef FSMC_BCR3_WAITPOL
constexpr auto FSMC_BCR3_WAITPOL = ((std::uint32_t)0x00000200);
#undef FSMC_BCR3_WRAPMOD
constexpr auto FSMC_BCR3_WRAPMOD = ((std::uint32_t)0x00000400);
#undef FSMC_BCR3_WAITCFG
constexpr auto FSMC_BCR3_WAITCFG = ((std::uint32_t)0x00000800);
#undef FSMC_BCR3_WREN
constexpr auto FSMC_BCR3_WREN = ((std::uint32_t)0x00001000);
#undef FSMC_BCR3_WAITEN
constexpr auto FSMC_BCR3_WAITEN = ((std::uint32_t)0x00002000);
#undef FSMC_BCR3_EXTMOD
constexpr auto FSMC_BCR3_EXTMOD = ((std::uint32_t)0x00004000);
#undef FSMC_BCR3_ASYNCWAIT
constexpr auto FSMC_BCR3_ASYNCWAIT = ((std::uint32_t)0x00008000);
#undef FSMC_BCR3_CBURSTRW
constexpr auto FSMC_BCR3_CBURSTRW = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_BCR4 register  *******************/
#undef FSMC_BCR4_MBKEN
constexpr auto FSMC_BCR4_MBKEN = ((std::uint32_t)0x00000001);
#undef FSMC_BCR4_MUXEN
constexpr auto FSMC_BCR4_MUXEN = ((std::uint32_t)0x00000002);

#undef FSMC_BCR4_MTYP
constexpr auto FSMC_BCR4_MTYP = ((std::uint32_t)0x0000000C);
#undef FSMC_BCR4_MTYP_0
constexpr auto FSMC_BCR4_MTYP_0 = ((std::uint32_t)0x00000004);
#undef FSMC_BCR4_MTYP_1
constexpr auto FSMC_BCR4_MTYP_1 = ((std::uint32_t)0x00000008);

#undef FSMC_BCR4_MWID
constexpr auto FSMC_BCR4_MWID = ((std::uint32_t)0x00000030);
#undef FSMC_BCR4_MWID_0
constexpr auto FSMC_BCR4_MWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BCR4_MWID_1
constexpr auto FSMC_BCR4_MWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_BCR4_FACCEN
constexpr auto FSMC_BCR4_FACCEN = ((std::uint32_t)0x00000040);
#undef FSMC_BCR4_BURSTEN
constexpr auto FSMC_BCR4_BURSTEN = ((std::uint32_t)0x00000100);
#undef FSMC_BCR4_WAITPOL
constexpr auto FSMC_BCR4_WAITPOL = ((std::uint32_t)0x00000200);
#undef FSMC_BCR4_WRAPMOD
constexpr auto FSMC_BCR4_WRAPMOD = ((std::uint32_t)0x00000400);
#undef FSMC_BCR4_WAITCFG
constexpr auto FSMC_BCR4_WAITCFG = ((std::uint32_t)0x00000800);
#undef FSMC_BCR4_WREN
constexpr auto FSMC_BCR4_WREN = ((std::uint32_t)0x00001000);
#undef FSMC_BCR4_WAITEN
constexpr auto FSMC_BCR4_WAITEN = ((std::uint32_t)0x00002000);
#undef FSMC_BCR4_EXTMOD
constexpr auto FSMC_BCR4_EXTMOD = ((std::uint32_t)0x00004000);
#undef FSMC_BCR4_ASYNCWAIT
constexpr auto FSMC_BCR4_ASYNCWAIT = ((std::uint32_t)0x00008000);
#undef FSMC_BCR4_CBURSTRW
constexpr auto FSMC_BCR4_CBURSTRW = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_BTR1 register  ******************/
#undef FSMC_BTR1_ADDSET
constexpr auto FSMC_BTR1_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BTR1_ADDSET_0
constexpr auto FSMC_BTR1_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BTR1_ADDSET_1
constexpr auto FSMC_BTR1_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BTR1_ADDSET_2
constexpr auto FSMC_BTR1_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BTR1_ADDSET_3
constexpr auto FSMC_BTR1_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BTR1_ADDHLD
constexpr auto FSMC_BTR1_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BTR1_ADDHLD_0
constexpr auto FSMC_BTR1_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BTR1_ADDHLD_1
constexpr auto FSMC_BTR1_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BTR1_ADDHLD_2
constexpr auto FSMC_BTR1_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BTR1_ADDHLD_3
constexpr auto FSMC_BTR1_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BTR1_DATAST
constexpr auto FSMC_BTR1_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BTR1_DATAST_0
constexpr auto FSMC_BTR1_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BTR1_DATAST_1
constexpr auto FSMC_BTR1_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BTR1_DATAST_2
constexpr auto FSMC_BTR1_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BTR1_DATAST_3
constexpr auto FSMC_BTR1_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BTR1_DATAST_4
constexpr auto FSMC_BTR1_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BTR1_DATAST_5
constexpr auto FSMC_BTR1_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BTR1_DATAST_6
constexpr auto FSMC_BTR1_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BTR1_DATAST_7
constexpr auto FSMC_BTR1_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BTR1_BUSTURN
constexpr auto FSMC_BTR1_BUSTURN = ((std::uint32_t)0x000F0000);
#undef FSMC_BTR1_BUSTURN_0
constexpr auto FSMC_BTR1_BUSTURN_0 = ((std::uint32_t)0x00010000);
#undef FSMC_BTR1_BUSTURN_1
constexpr auto FSMC_BTR1_BUSTURN_1 = ((std::uint32_t)0x00020000);
#undef FSMC_BTR1_BUSTURN_2
constexpr auto FSMC_BTR1_BUSTURN_2 = ((std::uint32_t)0x00040000);
#undef FSMC_BTR1_BUSTURN_3
constexpr auto FSMC_BTR1_BUSTURN_3 = ((std::uint32_t)0x00080000);

#undef FSMC_BTR1_CLKDIV
constexpr auto FSMC_BTR1_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BTR1_CLKDIV_0
constexpr auto FSMC_BTR1_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BTR1_CLKDIV_1
constexpr auto FSMC_BTR1_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BTR1_CLKDIV_2
constexpr auto FSMC_BTR1_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BTR1_CLKDIV_3
constexpr auto FSMC_BTR1_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BTR1_DATLAT
constexpr auto FSMC_BTR1_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BTR1_DATLAT_0
constexpr auto FSMC_BTR1_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BTR1_DATLAT_1
constexpr auto FSMC_BTR1_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BTR1_DATLAT_2
constexpr auto FSMC_BTR1_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BTR1_DATLAT_3
constexpr auto FSMC_BTR1_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BTR1_ACCMOD
constexpr auto FSMC_BTR1_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BTR1_ACCMOD_0
constexpr auto FSMC_BTR1_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BTR1_ACCMOD_1
constexpr auto FSMC_BTR1_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BTR2 register  *******************/
#undef FSMC_BTR2_ADDSET
constexpr auto FSMC_BTR2_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BTR2_ADDSET_0
constexpr auto FSMC_BTR2_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BTR2_ADDSET_1
constexpr auto FSMC_BTR2_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BTR2_ADDSET_2
constexpr auto FSMC_BTR2_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BTR2_ADDSET_3
constexpr auto FSMC_BTR2_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BTR2_ADDHLD
constexpr auto FSMC_BTR2_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BTR2_ADDHLD_0
constexpr auto FSMC_BTR2_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BTR2_ADDHLD_1
constexpr auto FSMC_BTR2_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BTR2_ADDHLD_2
constexpr auto FSMC_BTR2_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BTR2_ADDHLD_3
constexpr auto FSMC_BTR2_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BTR2_DATAST
constexpr auto FSMC_BTR2_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BTR2_DATAST_0
constexpr auto FSMC_BTR2_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BTR2_DATAST_1
constexpr auto FSMC_BTR2_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BTR2_DATAST_2
constexpr auto FSMC_BTR2_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BTR2_DATAST_3
constexpr auto FSMC_BTR2_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BTR2_DATAST_4
constexpr auto FSMC_BTR2_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BTR2_DATAST_5
constexpr auto FSMC_BTR2_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BTR2_DATAST_6
constexpr auto FSMC_BTR2_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BTR2_DATAST_7
constexpr auto FSMC_BTR2_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BTR2_BUSTURN
constexpr auto FSMC_BTR2_BUSTURN = ((std::uint32_t)0x000F0000);
#undef FSMC_BTR2_BUSTURN_0
constexpr auto FSMC_BTR2_BUSTURN_0 = ((std::uint32_t)0x00010000);
#undef FSMC_BTR2_BUSTURN_1
constexpr auto FSMC_BTR2_BUSTURN_1 = ((std::uint32_t)0x00020000);
#undef FSMC_BTR2_BUSTURN_2
constexpr auto FSMC_BTR2_BUSTURN_2 = ((std::uint32_t)0x00040000);
#undef FSMC_BTR2_BUSTURN_3
constexpr auto FSMC_BTR2_BUSTURN_3 = ((std::uint32_t)0x00080000);

#undef FSMC_BTR2_CLKDIV
constexpr auto FSMC_BTR2_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BTR2_CLKDIV_0
constexpr auto FSMC_BTR2_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BTR2_CLKDIV_1
constexpr auto FSMC_BTR2_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BTR2_CLKDIV_2
constexpr auto FSMC_BTR2_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BTR2_CLKDIV_3
constexpr auto FSMC_BTR2_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BTR2_DATLAT
constexpr auto FSMC_BTR2_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BTR2_DATLAT_0
constexpr auto FSMC_BTR2_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BTR2_DATLAT_1
constexpr auto FSMC_BTR2_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BTR2_DATLAT_2
constexpr auto FSMC_BTR2_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BTR2_DATLAT_3
constexpr auto FSMC_BTR2_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BTR2_ACCMOD
constexpr auto FSMC_BTR2_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BTR2_ACCMOD_0
constexpr auto FSMC_BTR2_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BTR2_ACCMOD_1
constexpr auto FSMC_BTR2_ACCMOD_1 = ((std::uint32_t)0x20000000);

/*******************  Bit definition for FSMC_BTR3 register  *******************/
#undef FSMC_BTR3_ADDSET
constexpr auto FSMC_BTR3_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BTR3_ADDSET_0
constexpr auto FSMC_BTR3_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BTR3_ADDSET_1
constexpr auto FSMC_BTR3_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BTR3_ADDSET_2
constexpr auto FSMC_BTR3_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BTR3_ADDSET_3
constexpr auto FSMC_BTR3_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BTR3_ADDHLD
constexpr auto FSMC_BTR3_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BTR3_ADDHLD_0
constexpr auto FSMC_BTR3_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BTR3_ADDHLD_1
constexpr auto FSMC_BTR3_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BTR3_ADDHLD_2
constexpr auto FSMC_BTR3_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BTR3_ADDHLD_3
constexpr auto FSMC_BTR3_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BTR3_DATAST
constexpr auto FSMC_BTR3_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BTR3_DATAST_0
constexpr auto FSMC_BTR3_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BTR3_DATAST_1
constexpr auto FSMC_BTR3_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BTR3_DATAST_2
constexpr auto FSMC_BTR3_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BTR3_DATAST_3
constexpr auto FSMC_BTR3_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BTR3_DATAST_4
constexpr auto FSMC_BTR3_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BTR3_DATAST_5
constexpr auto FSMC_BTR3_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BTR3_DATAST_6
constexpr auto FSMC_BTR3_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BTR3_DATAST_7
constexpr auto FSMC_BTR3_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BTR3_BUSTURN
constexpr auto FSMC_BTR3_BUSTURN = ((std::uint32_t)0x000F0000);
#undef FSMC_BTR3_BUSTURN_0
constexpr auto FSMC_BTR3_BUSTURN_0 = ((std::uint32_t)0x00010000);
#undef FSMC_BTR3_BUSTURN_1
constexpr auto FSMC_BTR3_BUSTURN_1 = ((std::uint32_t)0x00020000);
#undef FSMC_BTR3_BUSTURN_2
constexpr auto FSMC_BTR3_BUSTURN_2 = ((std::uint32_t)0x00040000);
#undef FSMC_BTR3_BUSTURN_3
constexpr auto FSMC_BTR3_BUSTURN_3 = ((std::uint32_t)0x00080000);

#undef FSMC_BTR3_CLKDIV
constexpr auto FSMC_BTR3_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BTR3_CLKDIV_0
constexpr auto FSMC_BTR3_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BTR3_CLKDIV_1
constexpr auto FSMC_BTR3_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BTR3_CLKDIV_2
constexpr auto FSMC_BTR3_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BTR3_CLKDIV_3
constexpr auto FSMC_BTR3_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BTR3_DATLAT
constexpr auto FSMC_BTR3_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BTR3_DATLAT_0
constexpr auto FSMC_BTR3_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BTR3_DATLAT_1
constexpr auto FSMC_BTR3_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BTR3_DATLAT_2
constexpr auto FSMC_BTR3_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BTR3_DATLAT_3
constexpr auto FSMC_BTR3_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BTR3_ACCMOD
constexpr auto FSMC_BTR3_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BTR3_ACCMOD_0
constexpr auto FSMC_BTR3_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BTR3_ACCMOD_1
constexpr auto FSMC_BTR3_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BTR4 register  *******************/
#undef FSMC_BTR4_ADDSET
constexpr auto FSMC_BTR4_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BTR4_ADDSET_0
constexpr auto FSMC_BTR4_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BTR4_ADDSET_1
constexpr auto FSMC_BTR4_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BTR4_ADDSET_2
constexpr auto FSMC_BTR4_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BTR4_ADDSET_3
constexpr auto FSMC_BTR4_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BTR4_ADDHLD
constexpr auto FSMC_BTR4_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BTR4_ADDHLD_0
constexpr auto FSMC_BTR4_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BTR4_ADDHLD_1
constexpr auto FSMC_BTR4_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BTR4_ADDHLD_2
constexpr auto FSMC_BTR4_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BTR4_ADDHLD_3
constexpr auto FSMC_BTR4_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BTR4_DATAST
constexpr auto FSMC_BTR4_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BTR4_DATAST_0
constexpr auto FSMC_BTR4_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BTR4_DATAST_1
constexpr auto FSMC_BTR4_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BTR4_DATAST_2
constexpr auto FSMC_BTR4_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BTR4_DATAST_3
constexpr auto FSMC_BTR4_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BTR4_DATAST_4
constexpr auto FSMC_BTR4_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BTR4_DATAST_5
constexpr auto FSMC_BTR4_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BTR4_DATAST_6
constexpr auto FSMC_BTR4_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BTR4_DATAST_7
constexpr auto FSMC_BTR4_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BTR4_BUSTURN
constexpr auto FSMC_BTR4_BUSTURN = ((std::uint32_t)0x000F0000);
#undef FSMC_BTR4_BUSTURN_0
constexpr auto FSMC_BTR4_BUSTURN_0 = ((std::uint32_t)0x00010000);
#undef FSMC_BTR4_BUSTURN_1
constexpr auto FSMC_BTR4_BUSTURN_1 = ((std::uint32_t)0x00020000);
#undef FSMC_BTR4_BUSTURN_2
constexpr auto FSMC_BTR4_BUSTURN_2 = ((std::uint32_t)0x00040000);
#undef FSMC_BTR4_BUSTURN_3
constexpr auto FSMC_BTR4_BUSTURN_3 = ((std::uint32_t)0x00080000);

#undef FSMC_BTR4_CLKDIV
constexpr auto FSMC_BTR4_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BTR4_CLKDIV_0
constexpr auto FSMC_BTR4_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BTR4_CLKDIV_1
constexpr auto FSMC_BTR4_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BTR4_CLKDIV_2
constexpr auto FSMC_BTR4_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BTR4_CLKDIV_3
constexpr auto FSMC_BTR4_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BTR4_DATLAT
constexpr auto FSMC_BTR4_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BTR4_DATLAT_0
constexpr auto FSMC_BTR4_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BTR4_DATLAT_1
constexpr auto FSMC_BTR4_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BTR4_DATLAT_2
constexpr auto FSMC_BTR4_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BTR4_DATLAT_3
constexpr auto FSMC_BTR4_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BTR4_ACCMOD
constexpr auto FSMC_BTR4_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BTR4_ACCMOD_0
constexpr auto FSMC_BTR4_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BTR4_ACCMOD_1
constexpr auto FSMC_BTR4_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BWTR1 register  ******************/
#undef FSMC_BWTR1_ADDSET
constexpr auto FSMC_BWTR1_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BWTR1_ADDSET_0
constexpr auto FSMC_BWTR1_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BWTR1_ADDSET_1
constexpr auto FSMC_BWTR1_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BWTR1_ADDSET_2
constexpr auto FSMC_BWTR1_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BWTR1_ADDSET_3
constexpr auto FSMC_BWTR1_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BWTR1_ADDHLD
constexpr auto FSMC_BWTR1_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BWTR1_ADDHLD_0
constexpr auto FSMC_BWTR1_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BWTR1_ADDHLD_1
constexpr auto FSMC_BWTR1_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BWTR1_ADDHLD_2
constexpr auto FSMC_BWTR1_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BWTR1_ADDHLD_3
constexpr auto FSMC_BWTR1_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BWTR1_DATAST
constexpr auto FSMC_BWTR1_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BWTR1_DATAST_0
constexpr auto FSMC_BWTR1_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BWTR1_DATAST_1
constexpr auto FSMC_BWTR1_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BWTR1_DATAST_2
constexpr auto FSMC_BWTR1_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BWTR1_DATAST_3
constexpr auto FSMC_BWTR1_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BWTR1_DATAST_4
constexpr auto FSMC_BWTR1_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BWTR1_DATAST_5
constexpr auto FSMC_BWTR1_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BWTR1_DATAST_6
constexpr auto FSMC_BWTR1_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BWTR1_DATAST_7
constexpr auto FSMC_BWTR1_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BWTR1_CLKDIV
constexpr auto FSMC_BWTR1_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BWTR1_CLKDIV_0
constexpr auto FSMC_BWTR1_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BWTR1_CLKDIV_1
constexpr auto FSMC_BWTR1_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BWTR1_CLKDIV_2
constexpr auto FSMC_BWTR1_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BWTR1_CLKDIV_3
constexpr auto FSMC_BWTR1_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BWTR1_DATLAT
constexpr auto FSMC_BWTR1_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BWTR1_DATLAT_0
constexpr auto FSMC_BWTR1_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BWTR1_DATLAT_1
constexpr auto FSMC_BWTR1_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BWTR1_DATLAT_2
constexpr auto FSMC_BWTR1_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BWTR1_DATLAT_3
constexpr auto FSMC_BWTR1_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BWTR1_ACCMOD
constexpr auto FSMC_BWTR1_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BWTR1_ACCMOD_0
constexpr auto FSMC_BWTR1_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BWTR1_ACCMOD_1
constexpr auto FSMC_BWTR1_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BWTR2 register  ******************/
#undef FSMC_BWTR2_ADDSET
constexpr auto FSMC_BWTR2_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BWTR2_ADDSET_0
constexpr auto FSMC_BWTR2_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BWTR2_ADDSET_1
constexpr auto FSMC_BWTR2_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BWTR2_ADDSET_2
constexpr auto FSMC_BWTR2_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BWTR2_ADDSET_3
constexpr auto FSMC_BWTR2_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BWTR2_ADDHLD
constexpr auto FSMC_BWTR2_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BWTR2_ADDHLD_0
constexpr auto FSMC_BWTR2_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BWTR2_ADDHLD_1
constexpr auto FSMC_BWTR2_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BWTR2_ADDHLD_2
constexpr auto FSMC_BWTR2_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BWTR2_ADDHLD_3
constexpr auto FSMC_BWTR2_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BWTR2_DATAST
constexpr auto FSMC_BWTR2_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BWTR2_DATAST_0
constexpr auto FSMC_BWTR2_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BWTR2_DATAST_1
constexpr auto FSMC_BWTR2_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BWTR2_DATAST_2
constexpr auto FSMC_BWTR2_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BWTR2_DATAST_3
constexpr auto FSMC_BWTR2_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BWTR2_DATAST_4
constexpr auto FSMC_BWTR2_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BWTR2_DATAST_5
constexpr auto FSMC_BWTR2_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BWTR2_DATAST_6
constexpr auto FSMC_BWTR2_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BWTR2_DATAST_7
constexpr auto FSMC_BWTR2_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BWTR2_CLKDIV
constexpr auto FSMC_BWTR2_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BWTR2_CLKDIV_0
constexpr auto FSMC_BWTR2_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BWTR2_CLKDIV_1
constexpr auto FSMC_BWTR2_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BWTR2_CLKDIV_2
constexpr auto FSMC_BWTR2_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BWTR2_CLKDIV_3
constexpr auto FSMC_BWTR2_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BWTR2_DATLAT
constexpr auto FSMC_BWTR2_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BWTR2_DATLAT_0
constexpr auto FSMC_BWTR2_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BWTR2_DATLAT_1
constexpr auto FSMC_BWTR2_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BWTR2_DATLAT_2
constexpr auto FSMC_BWTR2_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BWTR2_DATLAT_3
constexpr auto FSMC_BWTR2_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BWTR2_ACCMOD
constexpr auto FSMC_BWTR2_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BWTR2_ACCMOD_0
constexpr auto FSMC_BWTR2_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BWTR2_ACCMOD_1
constexpr auto FSMC_BWTR2_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BWTR3 register  ******************/
#undef FSMC_BWTR3_ADDSET
constexpr auto FSMC_BWTR3_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BWTR3_ADDSET_0
constexpr auto FSMC_BWTR3_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BWTR3_ADDSET_1
constexpr auto FSMC_BWTR3_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BWTR3_ADDSET_2
constexpr auto FSMC_BWTR3_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BWTR3_ADDSET_3
constexpr auto FSMC_BWTR3_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BWTR3_ADDHLD
constexpr auto FSMC_BWTR3_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BWTR3_ADDHLD_0
constexpr auto FSMC_BWTR3_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BWTR3_ADDHLD_1
constexpr auto FSMC_BWTR3_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BWTR3_ADDHLD_2
constexpr auto FSMC_BWTR3_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BWTR3_ADDHLD_3
constexpr auto FSMC_BWTR3_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BWTR3_DATAST
constexpr auto FSMC_BWTR3_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BWTR3_DATAST_0
constexpr auto FSMC_BWTR3_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BWTR3_DATAST_1
constexpr auto FSMC_BWTR3_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BWTR3_DATAST_2
constexpr auto FSMC_BWTR3_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BWTR3_DATAST_3
constexpr auto FSMC_BWTR3_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BWTR3_DATAST_4
constexpr auto FSMC_BWTR3_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BWTR3_DATAST_5
constexpr auto FSMC_BWTR3_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BWTR3_DATAST_6
constexpr auto FSMC_BWTR3_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BWTR3_DATAST_7
constexpr auto FSMC_BWTR3_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BWTR3_CLKDIV
constexpr auto FSMC_BWTR3_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BWTR3_CLKDIV_0
constexpr auto FSMC_BWTR3_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BWTR3_CLKDIV_1
constexpr auto FSMC_BWTR3_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BWTR3_CLKDIV_2
constexpr auto FSMC_BWTR3_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BWTR3_CLKDIV_3
constexpr auto FSMC_BWTR3_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BWTR3_DATLAT
constexpr auto FSMC_BWTR3_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BWTR3_DATLAT_0
constexpr auto FSMC_BWTR3_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BWTR3_DATLAT_1
constexpr auto FSMC_BWTR3_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BWTR3_DATLAT_2
constexpr auto FSMC_BWTR3_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BWTR3_DATLAT_3
constexpr auto FSMC_BWTR3_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BWTR3_ACCMOD
constexpr auto FSMC_BWTR3_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BWTR3_ACCMOD_0
constexpr auto FSMC_BWTR3_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BWTR3_ACCMOD_1
constexpr auto FSMC_BWTR3_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_BWTR4 register  ******************/
#undef FSMC_BWTR4_ADDSET
constexpr auto FSMC_BWTR4_ADDSET = ((std::uint32_t)0x0000000F);
#undef FSMC_BWTR4_ADDSET_0
constexpr auto FSMC_BWTR4_ADDSET_0 = ((std::uint32_t)0x00000001);
#undef FSMC_BWTR4_ADDSET_1
constexpr auto FSMC_BWTR4_ADDSET_1 = ((std::uint32_t)0x00000002);
#undef FSMC_BWTR4_ADDSET_2
constexpr auto FSMC_BWTR4_ADDSET_2 = ((std::uint32_t)0x00000004);
#undef FSMC_BWTR4_ADDSET_3
constexpr auto FSMC_BWTR4_ADDSET_3 = ((std::uint32_t)0x00000008);

#undef FSMC_BWTR4_ADDHLD
constexpr auto FSMC_BWTR4_ADDHLD = ((std::uint32_t)0x000000F0);
#undef FSMC_BWTR4_ADDHLD_0
constexpr auto FSMC_BWTR4_ADDHLD_0 = ((std::uint32_t)0x00000010);
#undef FSMC_BWTR4_ADDHLD_1
constexpr auto FSMC_BWTR4_ADDHLD_1 = ((std::uint32_t)0x00000020);
#undef FSMC_BWTR4_ADDHLD_2
constexpr auto FSMC_BWTR4_ADDHLD_2 = ((std::uint32_t)0x00000040);
#undef FSMC_BWTR4_ADDHLD_3
constexpr auto FSMC_BWTR4_ADDHLD_3 = ((std::uint32_t)0x00000080);

#undef FSMC_BWTR4_DATAST
constexpr auto FSMC_BWTR4_DATAST = ((std::uint32_t)0x0000FF00);
#undef FSMC_BWTR4_DATAST_0
constexpr auto FSMC_BWTR4_DATAST_0 = ((std::uint32_t)0x00000100);
#undef FSMC_BWTR4_DATAST_1
constexpr auto FSMC_BWTR4_DATAST_1 = ((std::uint32_t)0x00000200);
#undef FSMC_BWTR4_DATAST_2
constexpr auto FSMC_BWTR4_DATAST_2 = ((std::uint32_t)0x00000400);
#undef FSMC_BWTR4_DATAST_3
constexpr auto FSMC_BWTR4_DATAST_3 = ((std::uint32_t)0x00000800);
#undef FSMC_BWTR4_DATAST_4
constexpr auto FSMC_BWTR4_DATAST_4 = ((std::uint32_t)0x00001000);
#undef FSMC_BWTR4_DATAST_5
constexpr auto FSMC_BWTR4_DATAST_5 = ((std::uint32_t)0x00002000);
#undef FSMC_BWTR4_DATAST_6
constexpr auto FSMC_BWTR4_DATAST_6 = ((std::uint32_t)0x00004000);
#undef FSMC_BWTR4_DATAST_7
constexpr auto FSMC_BWTR4_DATAST_7 = ((std::uint32_t)0x00008000);

#undef FSMC_BWTR4_CLKDIV
constexpr auto FSMC_BWTR4_CLKDIV = ((std::uint32_t)0x00F00000);
#undef FSMC_BWTR4_CLKDIV_0
constexpr auto FSMC_BWTR4_CLKDIV_0 = ((std::uint32_t)0x00100000);
#undef FSMC_BWTR4_CLKDIV_1
constexpr auto FSMC_BWTR4_CLKDIV_1 = ((std::uint32_t)0x00200000);
#undef FSMC_BWTR4_CLKDIV_2
constexpr auto FSMC_BWTR4_CLKDIV_2 = ((std::uint32_t)0x00400000);
#undef FSMC_BWTR4_CLKDIV_3
constexpr auto FSMC_BWTR4_CLKDIV_3 = ((std::uint32_t)0x00800000);

#undef FSMC_BWTR4_DATLAT
constexpr auto FSMC_BWTR4_DATLAT = ((std::uint32_t)0x0F000000);
#undef FSMC_BWTR4_DATLAT_0
constexpr auto FSMC_BWTR4_DATLAT_0 = ((std::uint32_t)0x01000000);
#undef FSMC_BWTR4_DATLAT_1
constexpr auto FSMC_BWTR4_DATLAT_1 = ((std::uint32_t)0x02000000);
#undef FSMC_BWTR4_DATLAT_2
constexpr auto FSMC_BWTR4_DATLAT_2 = ((std::uint32_t)0x04000000);
#undef FSMC_BWTR4_DATLAT_3
constexpr auto FSMC_BWTR4_DATLAT_3 = ((std::uint32_t)0x08000000);

#undef FSMC_BWTR4_ACCMOD
constexpr auto FSMC_BWTR4_ACCMOD = ((std::uint32_t)0x30000000);
#undef FSMC_BWTR4_ACCMOD_0
constexpr auto FSMC_BWTR4_ACCMOD_0 = ((std::uint32_t)0x10000000);
#undef FSMC_BWTR4_ACCMOD_1
constexpr auto FSMC_BWTR4_ACCMOD_1 = ((std::uint32_t)0x20000000);

/******************  Bit definition for FSMC_PCR2 register  *******************/
#undef FSMC_PCR2_PWAITEN
constexpr auto FSMC_PCR2_PWAITEN = ((std::uint32_t)0x00000002);
#undef FSMC_PCR2_PBKEN
constexpr auto FSMC_PCR2_PBKEN = ((std::uint32_t)0x00000004);
#undef FSMC_PCR2_PTYP
constexpr auto FSMC_PCR2_PTYP = ((std::uint32_t)0x00000008);

#undef FSMC_PCR2_PWID
constexpr auto FSMC_PCR2_PWID = ((std::uint32_t)0x00000030);
#undef FSMC_PCR2_PWID_0
constexpr auto FSMC_PCR2_PWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_PCR2_PWID_1
constexpr auto FSMC_PCR2_PWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_PCR2_ECCEN
constexpr auto FSMC_PCR2_ECCEN = ((std::uint32_t)0x00000040);

#undef FSMC_PCR2_TCLR
constexpr auto FSMC_PCR2_TCLR = ((std::uint32_t)0x00001E00);
#undef FSMC_PCR2_TCLR_0
constexpr auto FSMC_PCR2_TCLR_0 = ((std::uint32_t)0x00000200);
#undef FSMC_PCR2_TCLR_1
constexpr auto FSMC_PCR2_TCLR_1 = ((std::uint32_t)0x00000400);
#undef FSMC_PCR2_TCLR_2
constexpr auto FSMC_PCR2_TCLR_2 = ((std::uint32_t)0x00000800);
#undef FSMC_PCR2_TCLR_3
constexpr auto FSMC_PCR2_TCLR_3 = ((std::uint32_t)0x00001000);

#undef FSMC_PCR2_TAR
constexpr auto FSMC_PCR2_TAR = ((std::uint32_t)0x0001E000);
#undef FSMC_PCR2_TAR_0
constexpr auto FSMC_PCR2_TAR_0 = ((std::uint32_t)0x00002000);
#undef FSMC_PCR2_TAR_1
constexpr auto FSMC_PCR2_TAR_1 = ((std::uint32_t)0x00004000);
#undef FSMC_PCR2_TAR_2
constexpr auto FSMC_PCR2_TAR_2 = ((std::uint32_t)0x00008000);
#undef FSMC_PCR2_TAR_3
constexpr auto FSMC_PCR2_TAR_3 = ((std::uint32_t)0x00010000);

#undef FSMC_PCR2_ECCPS
constexpr auto FSMC_PCR2_ECCPS = ((std::uint32_t)0x000E0000);
#undef FSMC_PCR2_ECCPS_0
constexpr auto FSMC_PCR2_ECCPS_0 = ((std::uint32_t)0x00020000);
#undef FSMC_PCR2_ECCPS_1
constexpr auto FSMC_PCR2_ECCPS_1 = ((std::uint32_t)0x00040000);
#undef FSMC_PCR2_ECCPS_2
constexpr auto FSMC_PCR2_ECCPS_2 = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_PCR3 register  *******************/
#undef FSMC_PCR3_PWAITEN
constexpr auto FSMC_PCR3_PWAITEN = ((std::uint32_t)0x00000002);
#undef FSMC_PCR3_PBKEN
constexpr auto FSMC_PCR3_PBKEN = ((std::uint32_t)0x00000004);
#undef FSMC_PCR3_PTYP
constexpr auto FSMC_PCR3_PTYP = ((std::uint32_t)0x00000008);

#undef FSMC_PCR3_PWID
constexpr auto FSMC_PCR3_PWID = ((std::uint32_t)0x00000030);
#undef FSMC_PCR3_PWID_0
constexpr auto FSMC_PCR3_PWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_PCR3_PWID_1
constexpr auto FSMC_PCR3_PWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_PCR3_ECCEN
constexpr auto FSMC_PCR3_ECCEN = ((std::uint32_t)0x00000040);

#undef FSMC_PCR3_TCLR
constexpr auto FSMC_PCR3_TCLR = ((std::uint32_t)0x00001E00);
#undef FSMC_PCR3_TCLR_0
constexpr auto FSMC_PCR3_TCLR_0 = ((std::uint32_t)0x00000200);
#undef FSMC_PCR3_TCLR_1
constexpr auto FSMC_PCR3_TCLR_1 = ((std::uint32_t)0x00000400);
#undef FSMC_PCR3_TCLR_2
constexpr auto FSMC_PCR3_TCLR_2 = ((std::uint32_t)0x00000800);
#undef FSMC_PCR3_TCLR_3
constexpr auto FSMC_PCR3_TCLR_3 = ((std::uint32_t)0x00001000);

#undef FSMC_PCR3_TAR
constexpr auto FSMC_PCR3_TAR = ((std::uint32_t)0x0001E000);
#undef FSMC_PCR3_TAR_0
constexpr auto FSMC_PCR3_TAR_0 = ((std::uint32_t)0x00002000);
#undef FSMC_PCR3_TAR_1
constexpr auto FSMC_PCR3_TAR_1 = ((std::uint32_t)0x00004000);
#undef FSMC_PCR3_TAR_2
constexpr auto FSMC_PCR3_TAR_2 = ((std::uint32_t)0x00008000);
#undef FSMC_PCR3_TAR_3
constexpr auto FSMC_PCR3_TAR_3 = ((std::uint32_t)0x00010000);

#undef FSMC_PCR3_ECCPS
constexpr auto FSMC_PCR3_ECCPS = ((std::uint32_t)0x000E0000);
#undef FSMC_PCR3_ECCPS_0
constexpr auto FSMC_PCR3_ECCPS_0 = ((std::uint32_t)0x00020000);
#undef FSMC_PCR3_ECCPS_1
constexpr auto FSMC_PCR3_ECCPS_1 = ((std::uint32_t)0x00040000);
#undef FSMC_PCR3_ECCPS_2
constexpr auto FSMC_PCR3_ECCPS_2 = ((std::uint32_t)0x00080000);

/******************  Bit definition for FSMC_PCR4 register  *******************/
#undef FSMC_PCR4_PWAITEN
constexpr auto FSMC_PCR4_PWAITEN = ((std::uint32_t)0x00000002);
#undef FSMC_PCR4_PBKEN
constexpr auto FSMC_PCR4_PBKEN = ((std::uint32_t)0x00000004);
#undef FSMC_PCR4_PTYP
constexpr auto FSMC_PCR4_PTYP = ((std::uint32_t)0x00000008);

#undef FSMC_PCR4_PWID
constexpr auto FSMC_PCR4_PWID = ((std::uint32_t)0x00000030);
#undef FSMC_PCR4_PWID_0
constexpr auto FSMC_PCR4_PWID_0 = ((std::uint32_t)0x00000010);
#undef FSMC_PCR4_PWID_1
constexpr auto FSMC_PCR4_PWID_1 = ((std::uint32_t)0x00000020);

#undef FSMC_PCR4_ECCEN
constexpr auto FSMC_PCR4_ECCEN = ((std::uint32_t)0x00000040);

#undef FSMC_PCR4_TCLR
constexpr auto FSMC_PCR4_TCLR = ((std::uint32_t)0x00001E00);
#undef FSMC_PCR4_TCLR_0
constexpr auto FSMC_PCR4_TCLR_0 = ((std::uint32_t)0x00000200);
#undef FSMC_PCR4_TCLR_1
constexpr auto FSMC_PCR4_TCLR_1 = ((std::uint32_t)0x00000400);
#undef FSMC_PCR4_TCLR_2
constexpr auto FSMC_PCR4_TCLR_2 = ((std::uint32_t)0x00000800);
#undef FSMC_PCR4_TCLR_3
constexpr auto FSMC_PCR4_TCLR_3 = ((std::uint32_t)0x00001000);

#undef FSMC_PCR4_TAR
constexpr auto FSMC_PCR4_TAR = ((std::uint32_t)0x0001E000);
#undef FSMC_PCR4_TAR_0
constexpr auto FSMC_PCR4_TAR_0 = ((std::uint32_t)0x00002000);
#undef FSMC_PCR4_TAR_1
constexpr auto FSMC_PCR4_TAR_1 = ((std::uint32_t)0x00004000);
#undef FSMC_PCR4_TAR_2
constexpr auto FSMC_PCR4_TAR_2 = ((std::uint32_t)0x00008000);
#undef FSMC_PCR4_TAR_3
constexpr auto FSMC_PCR4_TAR_3 = ((std::uint32_t)0x00010000);

#undef FSMC_PCR4_ECCPS
constexpr auto FSMC_PCR4_ECCPS = ((std::uint32_t)0x000E0000);
#undef FSMC_PCR4_ECCPS_0
constexpr auto FSMC_PCR4_ECCPS_0 = ((std::uint32_t)0x00020000);
#undef FSMC_PCR4_ECCPS_1
constexpr auto FSMC_PCR4_ECCPS_1 = ((std::uint32_t)0x00040000);
#undef FSMC_PCR4_ECCPS_2
constexpr auto FSMC_PCR4_ECCPS_2 = ((std::uint32_t)0x00080000);

/*******************  Bit definition for FSMC_SR2 register  *******************/
#undef FSMC_SR2_IRS
constexpr auto FSMC_SR2_IRS = ((std::uint8_t)0x01);
#undef FSMC_SR2_ILS
constexpr auto FSMC_SR2_ILS = ((std::uint8_t)0x02);
#undef FSMC_SR2_IFS
constexpr auto FSMC_SR2_IFS = ((std::uint8_t)0x04);
#undef FSMC_SR2_IREN
constexpr auto FSMC_SR2_IREN = ((std::uint8_t)0x08);
#undef FSMC_SR2_ILEN
constexpr auto FSMC_SR2_ILEN = ((std::uint8_t)0x10);
#undef FSMC_SR2_IFEN
constexpr auto FSMC_SR2_IFEN = ((std::uint8_t)0x20);
#undef FSMC_SR2_FEMPT
constexpr auto FSMC_SR2_FEMPT = ((std::uint8_t)0x40);

/*******************  Bit definition for FSMC_SR3 register  *******************/
#undef FSMC_SR3_IRS
constexpr auto FSMC_SR3_IRS = ((std::uint8_t)0x01);
#undef FSMC_SR3_ILS
constexpr auto FSMC_SR3_ILS = ((std::uint8_t)0x02);
#undef FSMC_SR3_IFS
constexpr auto FSMC_SR3_IFS = ((std::uint8_t)0x04);
#undef FSMC_SR3_IREN
constexpr auto FSMC_SR3_IREN = ((std::uint8_t)0x08);
#undef FSMC_SR3_ILEN
constexpr auto FSMC_SR3_ILEN = ((std::uint8_t)0x10);
#undef FSMC_SR3_IFEN
constexpr auto FSMC_SR3_IFEN = ((std::uint8_t)0x20);
#undef FSMC_SR3_FEMPT
constexpr auto FSMC_SR3_FEMPT = ((std::uint8_t)0x40);

/*******************  Bit definition for FSMC_SR4 register  *******************/
#undef FSMC_SR4_IRS
constexpr auto FSMC_SR4_IRS = ((std::uint8_t)0x01);
#undef FSMC_SR4_ILS
constexpr auto FSMC_SR4_ILS = ((std::uint8_t)0x02);
#undef FSMC_SR4_IFS
constexpr auto FSMC_SR4_IFS = ((std::uint8_t)0x04);
#undef FSMC_SR4_IREN
constexpr auto FSMC_SR4_IREN = ((std::uint8_t)0x08);
#undef FSMC_SR4_ILEN
constexpr auto FSMC_SR4_ILEN = ((std::uint8_t)0x10);
#undef FSMC_SR4_IFEN
constexpr auto FSMC_SR4_IFEN = ((std::uint8_t)0x20);
#undef FSMC_SR4_FEMPT
constexpr auto FSMC_SR4_FEMPT = ((std::uint8_t)0x40);

/******************  Bit definition for FSMC_PMEM2 register  ******************/
#undef FSMC_PMEM2_MEMSET2
constexpr auto FSMC_PMEM2_MEMSET2 = ((std::uint32_t)0x000000FF);
#undef FSMC_PMEM2_MEMSET2_0
constexpr auto FSMC_PMEM2_MEMSET2_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PMEM2_MEMSET2_1
constexpr auto FSMC_PMEM2_MEMSET2_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PMEM2_MEMSET2_2
constexpr auto FSMC_PMEM2_MEMSET2_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PMEM2_MEMSET2_3
constexpr auto FSMC_PMEM2_MEMSET2_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PMEM2_MEMSET2_4
constexpr auto FSMC_PMEM2_MEMSET2_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PMEM2_MEMSET2_5
constexpr auto FSMC_PMEM2_MEMSET2_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PMEM2_MEMSET2_6
constexpr auto FSMC_PMEM2_MEMSET2_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PMEM2_MEMSET2_7
constexpr auto FSMC_PMEM2_MEMSET2_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PMEM2_MEMWAIT2
constexpr auto FSMC_PMEM2_MEMWAIT2 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PMEM2_MEMWAIT2_0
constexpr auto FSMC_PMEM2_MEMWAIT2_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PMEM2_MEMWAIT2_1
constexpr auto FSMC_PMEM2_MEMWAIT2_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PMEM2_MEMWAIT2_2
constexpr auto FSMC_PMEM2_MEMWAIT2_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PMEM2_MEMWAIT2_3
constexpr auto FSMC_PMEM2_MEMWAIT2_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PMEM2_MEMWAIT2_4
constexpr auto FSMC_PMEM2_MEMWAIT2_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PMEM2_MEMWAIT2_5
constexpr auto FSMC_PMEM2_MEMWAIT2_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PMEM2_MEMWAIT2_6
constexpr auto FSMC_PMEM2_MEMWAIT2_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PMEM2_MEMWAIT2_7
constexpr auto FSMC_PMEM2_MEMWAIT2_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PMEM2_MEMHOLD2
constexpr auto FSMC_PMEM2_MEMHOLD2 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PMEM2_MEMHOLD2_0
constexpr auto FSMC_PMEM2_MEMHOLD2_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PMEM2_MEMHOLD2_1
constexpr auto FSMC_PMEM2_MEMHOLD2_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PMEM2_MEMHOLD2_2
constexpr auto FSMC_PMEM2_MEMHOLD2_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PMEM2_MEMHOLD2_3
constexpr auto FSMC_PMEM2_MEMHOLD2_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PMEM2_MEMHOLD2_4
constexpr auto FSMC_PMEM2_MEMHOLD2_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PMEM2_MEMHOLD2_5
constexpr auto FSMC_PMEM2_MEMHOLD2_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PMEM2_MEMHOLD2_6
constexpr auto FSMC_PMEM2_MEMHOLD2_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PMEM2_MEMHOLD2_7
constexpr auto FSMC_PMEM2_MEMHOLD2_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PMEM2_MEMHIZ2
constexpr auto FSMC_PMEM2_MEMHIZ2 = ((std::uint32_t)0xFF000000);
#undef FSMC_PMEM2_MEMHIZ2_0
constexpr auto FSMC_PMEM2_MEMHIZ2_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PMEM2_MEMHIZ2_1
constexpr auto FSMC_PMEM2_MEMHIZ2_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PMEM2_MEMHIZ2_2
constexpr auto FSMC_PMEM2_MEMHIZ2_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PMEM2_MEMHIZ2_3
constexpr auto FSMC_PMEM2_MEMHIZ2_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PMEM2_MEMHIZ2_4
constexpr auto FSMC_PMEM2_MEMHIZ2_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PMEM2_MEMHIZ2_5
constexpr auto FSMC_PMEM2_MEMHIZ2_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PMEM2_MEMHIZ2_6
constexpr auto FSMC_PMEM2_MEMHIZ2_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PMEM2_MEMHIZ2_7
constexpr auto FSMC_PMEM2_MEMHIZ2_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PMEM3 register  ******************/
#undef FSMC_PMEM3_MEMSET3
constexpr auto FSMC_PMEM3_MEMSET3 = ((std::uint32_t)0x000000FF);
#undef FSMC_PMEM3_MEMSET3_0
constexpr auto FSMC_PMEM3_MEMSET3_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PMEM3_MEMSET3_1
constexpr auto FSMC_PMEM3_MEMSET3_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PMEM3_MEMSET3_2
constexpr auto FSMC_PMEM3_MEMSET3_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PMEM3_MEMSET3_3
constexpr auto FSMC_PMEM3_MEMSET3_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PMEM3_MEMSET3_4
constexpr auto FSMC_PMEM3_MEMSET3_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PMEM3_MEMSET3_5
constexpr auto FSMC_PMEM3_MEMSET3_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PMEM3_MEMSET3_6
constexpr auto FSMC_PMEM3_MEMSET3_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PMEM3_MEMSET3_7
constexpr auto FSMC_PMEM3_MEMSET3_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PMEM3_MEMWAIT3
constexpr auto FSMC_PMEM3_MEMWAIT3 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PMEM3_MEMWAIT3_0
constexpr auto FSMC_PMEM3_MEMWAIT3_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PMEM3_MEMWAIT3_1
constexpr auto FSMC_PMEM3_MEMWAIT3_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PMEM3_MEMWAIT3_2
constexpr auto FSMC_PMEM3_MEMWAIT3_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PMEM3_MEMWAIT3_3
constexpr auto FSMC_PMEM3_MEMWAIT3_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PMEM3_MEMWAIT3_4
constexpr auto FSMC_PMEM3_MEMWAIT3_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PMEM3_MEMWAIT3_5
constexpr auto FSMC_PMEM3_MEMWAIT3_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PMEM3_MEMWAIT3_6
constexpr auto FSMC_PMEM3_MEMWAIT3_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PMEM3_MEMWAIT3_7
constexpr auto FSMC_PMEM3_MEMWAIT3_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PMEM3_MEMHOLD3
constexpr auto FSMC_PMEM3_MEMHOLD3 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PMEM3_MEMHOLD3_0
constexpr auto FSMC_PMEM3_MEMHOLD3_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PMEM3_MEMHOLD3_1
constexpr auto FSMC_PMEM3_MEMHOLD3_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PMEM3_MEMHOLD3_2
constexpr auto FSMC_PMEM3_MEMHOLD3_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PMEM3_MEMHOLD3_3
constexpr auto FSMC_PMEM3_MEMHOLD3_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PMEM3_MEMHOLD3_4
constexpr auto FSMC_PMEM3_MEMHOLD3_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PMEM3_MEMHOLD3_5
constexpr auto FSMC_PMEM3_MEMHOLD3_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PMEM3_MEMHOLD3_6
constexpr auto FSMC_PMEM3_MEMHOLD3_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PMEM3_MEMHOLD3_7
constexpr auto FSMC_PMEM3_MEMHOLD3_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PMEM3_MEMHIZ3
constexpr auto FSMC_PMEM3_MEMHIZ3 = ((std::uint32_t)0xFF000000);
#undef FSMC_PMEM3_MEMHIZ3_0
constexpr auto FSMC_PMEM3_MEMHIZ3_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PMEM3_MEMHIZ3_1
constexpr auto FSMC_PMEM3_MEMHIZ3_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PMEM3_MEMHIZ3_2
constexpr auto FSMC_PMEM3_MEMHIZ3_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PMEM3_MEMHIZ3_3
constexpr auto FSMC_PMEM3_MEMHIZ3_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PMEM3_MEMHIZ3_4
constexpr auto FSMC_PMEM3_MEMHIZ3_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PMEM3_MEMHIZ3_5
constexpr auto FSMC_PMEM3_MEMHIZ3_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PMEM3_MEMHIZ3_6
constexpr auto FSMC_PMEM3_MEMHIZ3_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PMEM3_MEMHIZ3_7
constexpr auto FSMC_PMEM3_MEMHIZ3_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PMEM4 register  ******************/
#undef FSMC_PMEM4_MEMSET4
constexpr auto FSMC_PMEM4_MEMSET4 = ((std::uint32_t)0x000000FF);
#undef FSMC_PMEM4_MEMSET4_0
constexpr auto FSMC_PMEM4_MEMSET4_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PMEM4_MEMSET4_1
constexpr auto FSMC_PMEM4_MEMSET4_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PMEM4_MEMSET4_2
constexpr auto FSMC_PMEM4_MEMSET4_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PMEM4_MEMSET4_3
constexpr auto FSMC_PMEM4_MEMSET4_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PMEM4_MEMSET4_4
constexpr auto FSMC_PMEM4_MEMSET4_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PMEM4_MEMSET4_5
constexpr auto FSMC_PMEM4_MEMSET4_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PMEM4_MEMSET4_6
constexpr auto FSMC_PMEM4_MEMSET4_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PMEM4_MEMSET4_7
constexpr auto FSMC_PMEM4_MEMSET4_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PMEM4_MEMWAIT4
constexpr auto FSMC_PMEM4_MEMWAIT4 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PMEM4_MEMWAIT4_0
constexpr auto FSMC_PMEM4_MEMWAIT4_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PMEM4_MEMWAIT4_1
constexpr auto FSMC_PMEM4_MEMWAIT4_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PMEM4_MEMWAIT4_2
constexpr auto FSMC_PMEM4_MEMWAIT4_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PMEM4_MEMWAIT4_3
constexpr auto FSMC_PMEM4_MEMWAIT4_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PMEM4_MEMWAIT4_4
constexpr auto FSMC_PMEM4_MEMWAIT4_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PMEM4_MEMWAIT4_5
constexpr auto FSMC_PMEM4_MEMWAIT4_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PMEM4_MEMWAIT4_6
constexpr auto FSMC_PMEM4_MEMWAIT4_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PMEM4_MEMWAIT4_7
constexpr auto FSMC_PMEM4_MEMWAIT4_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PMEM4_MEMHOLD4
constexpr auto FSMC_PMEM4_MEMHOLD4 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PMEM4_MEMHOLD4_0
constexpr auto FSMC_PMEM4_MEMHOLD4_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PMEM4_MEMHOLD4_1
constexpr auto FSMC_PMEM4_MEMHOLD4_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PMEM4_MEMHOLD4_2
constexpr auto FSMC_PMEM4_MEMHOLD4_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PMEM4_MEMHOLD4_3
constexpr auto FSMC_PMEM4_MEMHOLD4_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PMEM4_MEMHOLD4_4
constexpr auto FSMC_PMEM4_MEMHOLD4_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PMEM4_MEMHOLD4_5
constexpr auto FSMC_PMEM4_MEMHOLD4_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PMEM4_MEMHOLD4_6
constexpr auto FSMC_PMEM4_MEMHOLD4_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PMEM4_MEMHOLD4_7
constexpr auto FSMC_PMEM4_MEMHOLD4_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PMEM4_MEMHIZ4
constexpr auto FSMC_PMEM4_MEMHIZ4 = ((std::uint32_t)0xFF000000);
#undef FSMC_PMEM4_MEMHIZ4_0
constexpr auto FSMC_PMEM4_MEMHIZ4_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PMEM4_MEMHIZ4_1
constexpr auto FSMC_PMEM4_MEMHIZ4_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PMEM4_MEMHIZ4_2
constexpr auto FSMC_PMEM4_MEMHIZ4_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PMEM4_MEMHIZ4_3
constexpr auto FSMC_PMEM4_MEMHIZ4_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PMEM4_MEMHIZ4_4
constexpr auto FSMC_PMEM4_MEMHIZ4_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PMEM4_MEMHIZ4_5
constexpr auto FSMC_PMEM4_MEMHIZ4_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PMEM4_MEMHIZ4_6
constexpr auto FSMC_PMEM4_MEMHIZ4_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PMEM4_MEMHIZ4_7
constexpr auto FSMC_PMEM4_MEMHIZ4_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PATT2 register  ******************/
#undef FSMC_PATT2_ATTSET2
constexpr auto FSMC_PATT2_ATTSET2 = ((std::uint32_t)0x000000FF);
#undef FSMC_PATT2_ATTSET2_0
constexpr auto FSMC_PATT2_ATTSET2_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PATT2_ATTSET2_1
constexpr auto FSMC_PATT2_ATTSET2_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PATT2_ATTSET2_2
constexpr auto FSMC_PATT2_ATTSET2_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PATT2_ATTSET2_3
constexpr auto FSMC_PATT2_ATTSET2_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PATT2_ATTSET2_4
constexpr auto FSMC_PATT2_ATTSET2_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PATT2_ATTSET2_5
constexpr auto FSMC_PATT2_ATTSET2_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PATT2_ATTSET2_6
constexpr auto FSMC_PATT2_ATTSET2_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PATT2_ATTSET2_7
constexpr auto FSMC_PATT2_ATTSET2_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PATT2_ATTWAIT2
constexpr auto FSMC_PATT2_ATTWAIT2 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PATT2_ATTWAIT2_0
constexpr auto FSMC_PATT2_ATTWAIT2_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PATT2_ATTWAIT2_1
constexpr auto FSMC_PATT2_ATTWAIT2_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PATT2_ATTWAIT2_2
constexpr auto FSMC_PATT2_ATTWAIT2_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PATT2_ATTWAIT2_3
constexpr auto FSMC_PATT2_ATTWAIT2_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PATT2_ATTWAIT2_4
constexpr auto FSMC_PATT2_ATTWAIT2_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PATT2_ATTWAIT2_5
constexpr auto FSMC_PATT2_ATTWAIT2_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PATT2_ATTWAIT2_6
constexpr auto FSMC_PATT2_ATTWAIT2_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PATT2_ATTWAIT2_7
constexpr auto FSMC_PATT2_ATTWAIT2_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PATT2_ATTHOLD2
constexpr auto FSMC_PATT2_ATTHOLD2 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PATT2_ATTHOLD2_0
constexpr auto FSMC_PATT2_ATTHOLD2_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PATT2_ATTHOLD2_1
constexpr auto FSMC_PATT2_ATTHOLD2_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PATT2_ATTHOLD2_2
constexpr auto FSMC_PATT2_ATTHOLD2_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PATT2_ATTHOLD2_3
constexpr auto FSMC_PATT2_ATTHOLD2_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PATT2_ATTHOLD2_4
constexpr auto FSMC_PATT2_ATTHOLD2_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PATT2_ATTHOLD2_5
constexpr auto FSMC_PATT2_ATTHOLD2_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PATT2_ATTHOLD2_6
constexpr auto FSMC_PATT2_ATTHOLD2_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PATT2_ATTHOLD2_7
constexpr auto FSMC_PATT2_ATTHOLD2_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PATT2_ATTHIZ2
constexpr auto FSMC_PATT2_ATTHIZ2 = ((std::uint32_t)0xFF000000);
#undef FSMC_PATT2_ATTHIZ2_0
constexpr auto FSMC_PATT2_ATTHIZ2_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PATT2_ATTHIZ2_1
constexpr auto FSMC_PATT2_ATTHIZ2_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PATT2_ATTHIZ2_2
constexpr auto FSMC_PATT2_ATTHIZ2_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PATT2_ATTHIZ2_3
constexpr auto FSMC_PATT2_ATTHIZ2_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PATT2_ATTHIZ2_4
constexpr auto FSMC_PATT2_ATTHIZ2_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PATT2_ATTHIZ2_5
constexpr auto FSMC_PATT2_ATTHIZ2_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PATT2_ATTHIZ2_6
constexpr auto FSMC_PATT2_ATTHIZ2_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PATT2_ATTHIZ2_7
constexpr auto FSMC_PATT2_ATTHIZ2_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PATT3 register  ******************/
#undef FSMC_PATT3_ATTSET3
constexpr auto FSMC_PATT3_ATTSET3 = ((std::uint32_t)0x000000FF);
#undef FSMC_PATT3_ATTSET3_0
constexpr auto FSMC_PATT3_ATTSET3_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PATT3_ATTSET3_1
constexpr auto FSMC_PATT3_ATTSET3_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PATT3_ATTSET3_2
constexpr auto FSMC_PATT3_ATTSET3_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PATT3_ATTSET3_3
constexpr auto FSMC_PATT3_ATTSET3_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PATT3_ATTSET3_4
constexpr auto FSMC_PATT3_ATTSET3_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PATT3_ATTSET3_5
constexpr auto FSMC_PATT3_ATTSET3_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PATT3_ATTSET3_6
constexpr auto FSMC_PATT3_ATTSET3_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PATT3_ATTSET3_7
constexpr auto FSMC_PATT3_ATTSET3_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PATT3_ATTWAIT3
constexpr auto FSMC_PATT3_ATTWAIT3 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PATT3_ATTWAIT3_0
constexpr auto FSMC_PATT3_ATTWAIT3_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PATT3_ATTWAIT3_1
constexpr auto FSMC_PATT3_ATTWAIT3_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PATT3_ATTWAIT3_2
constexpr auto FSMC_PATT3_ATTWAIT3_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PATT3_ATTWAIT3_3
constexpr auto FSMC_PATT3_ATTWAIT3_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PATT3_ATTWAIT3_4
constexpr auto FSMC_PATT3_ATTWAIT3_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PATT3_ATTWAIT3_5
constexpr auto FSMC_PATT3_ATTWAIT3_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PATT3_ATTWAIT3_6
constexpr auto FSMC_PATT3_ATTWAIT3_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PATT3_ATTWAIT3_7
constexpr auto FSMC_PATT3_ATTWAIT3_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PATT3_ATTHOLD3
constexpr auto FSMC_PATT3_ATTHOLD3 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PATT3_ATTHOLD3_0
constexpr auto FSMC_PATT3_ATTHOLD3_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PATT3_ATTHOLD3_1
constexpr auto FSMC_PATT3_ATTHOLD3_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PATT3_ATTHOLD3_2
constexpr auto FSMC_PATT3_ATTHOLD3_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PATT3_ATTHOLD3_3
constexpr auto FSMC_PATT3_ATTHOLD3_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PATT3_ATTHOLD3_4
constexpr auto FSMC_PATT3_ATTHOLD3_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PATT3_ATTHOLD3_5
constexpr auto FSMC_PATT3_ATTHOLD3_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PATT3_ATTHOLD3_6
constexpr auto FSMC_PATT3_ATTHOLD3_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PATT3_ATTHOLD3_7
constexpr auto FSMC_PATT3_ATTHOLD3_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PATT3_ATTHIZ3
constexpr auto FSMC_PATT3_ATTHIZ3 = ((std::uint32_t)0xFF000000);
#undef FSMC_PATT3_ATTHIZ3_0
constexpr auto FSMC_PATT3_ATTHIZ3_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PATT3_ATTHIZ3_1
constexpr auto FSMC_PATT3_ATTHIZ3_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PATT3_ATTHIZ3_2
constexpr auto FSMC_PATT3_ATTHIZ3_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PATT3_ATTHIZ3_3
constexpr auto FSMC_PATT3_ATTHIZ3_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PATT3_ATTHIZ3_4
constexpr auto FSMC_PATT3_ATTHIZ3_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PATT3_ATTHIZ3_5
constexpr auto FSMC_PATT3_ATTHIZ3_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PATT3_ATTHIZ3_6
constexpr auto FSMC_PATT3_ATTHIZ3_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PATT3_ATTHIZ3_7
constexpr auto FSMC_PATT3_ATTHIZ3_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PATT4 register  ******************/
#undef FSMC_PATT4_ATTSET4
constexpr auto FSMC_PATT4_ATTSET4 = ((std::uint32_t)0x000000FF);
#undef FSMC_PATT4_ATTSET4_0
constexpr auto FSMC_PATT4_ATTSET4_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PATT4_ATTSET4_1
constexpr auto FSMC_PATT4_ATTSET4_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PATT4_ATTSET4_2
constexpr auto FSMC_PATT4_ATTSET4_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PATT4_ATTSET4_3
constexpr auto FSMC_PATT4_ATTSET4_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PATT4_ATTSET4_4
constexpr auto FSMC_PATT4_ATTSET4_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PATT4_ATTSET4_5
constexpr auto FSMC_PATT4_ATTSET4_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PATT4_ATTSET4_6
constexpr auto FSMC_PATT4_ATTSET4_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PATT4_ATTSET4_7
constexpr auto FSMC_PATT4_ATTSET4_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PATT4_ATTWAIT4
constexpr auto FSMC_PATT4_ATTWAIT4 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PATT4_ATTWAIT4_0
constexpr auto FSMC_PATT4_ATTWAIT4_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PATT4_ATTWAIT4_1
constexpr auto FSMC_PATT4_ATTWAIT4_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PATT4_ATTWAIT4_2
constexpr auto FSMC_PATT4_ATTWAIT4_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PATT4_ATTWAIT4_3
constexpr auto FSMC_PATT4_ATTWAIT4_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PATT4_ATTWAIT4_4
constexpr auto FSMC_PATT4_ATTWAIT4_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PATT4_ATTWAIT4_5
constexpr auto FSMC_PATT4_ATTWAIT4_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PATT4_ATTWAIT4_6
constexpr auto FSMC_PATT4_ATTWAIT4_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PATT4_ATTWAIT4_7
constexpr auto FSMC_PATT4_ATTWAIT4_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PATT4_ATTHOLD4
constexpr auto FSMC_PATT4_ATTHOLD4 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PATT4_ATTHOLD4_0
constexpr auto FSMC_PATT4_ATTHOLD4_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PATT4_ATTHOLD4_1
constexpr auto FSMC_PATT4_ATTHOLD4_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PATT4_ATTHOLD4_2
constexpr auto FSMC_PATT4_ATTHOLD4_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PATT4_ATTHOLD4_3
constexpr auto FSMC_PATT4_ATTHOLD4_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PATT4_ATTHOLD4_4
constexpr auto FSMC_PATT4_ATTHOLD4_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PATT4_ATTHOLD4_5
constexpr auto FSMC_PATT4_ATTHOLD4_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PATT4_ATTHOLD4_6
constexpr auto FSMC_PATT4_ATTHOLD4_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PATT4_ATTHOLD4_7
constexpr auto FSMC_PATT4_ATTHOLD4_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PATT4_ATTHIZ4
constexpr auto FSMC_PATT4_ATTHIZ4 = ((std::uint32_t)0xFF000000);
#undef FSMC_PATT4_ATTHIZ4_0
constexpr auto FSMC_PATT4_ATTHIZ4_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PATT4_ATTHIZ4_1
constexpr auto FSMC_PATT4_ATTHIZ4_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PATT4_ATTHIZ4_2
constexpr auto FSMC_PATT4_ATTHIZ4_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PATT4_ATTHIZ4_3
constexpr auto FSMC_PATT4_ATTHIZ4_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PATT4_ATTHIZ4_4
constexpr auto FSMC_PATT4_ATTHIZ4_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PATT4_ATTHIZ4_5
constexpr auto FSMC_PATT4_ATTHIZ4_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PATT4_ATTHIZ4_6
constexpr auto FSMC_PATT4_ATTHIZ4_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PATT4_ATTHIZ4_7
constexpr auto FSMC_PATT4_ATTHIZ4_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_PIO4 register  *******************/
#undef FSMC_PIO4_IOSET4
constexpr auto FSMC_PIO4_IOSET4 = ((std::uint32_t)0x000000FF);
#undef FSMC_PIO4_IOSET4_0
constexpr auto FSMC_PIO4_IOSET4_0 = ((std::uint32_t)0x00000001);
#undef FSMC_PIO4_IOSET4_1
constexpr auto FSMC_PIO4_IOSET4_1 = ((std::uint32_t)0x00000002);
#undef FSMC_PIO4_IOSET4_2
constexpr auto FSMC_PIO4_IOSET4_2 = ((std::uint32_t)0x00000004);
#undef FSMC_PIO4_IOSET4_3
constexpr auto FSMC_PIO4_IOSET4_3 = ((std::uint32_t)0x00000008);
#undef FSMC_PIO4_IOSET4_4
constexpr auto FSMC_PIO4_IOSET4_4 = ((std::uint32_t)0x00000010);
#undef FSMC_PIO4_IOSET4_5
constexpr auto FSMC_PIO4_IOSET4_5 = ((std::uint32_t)0x00000020);
#undef FSMC_PIO4_IOSET4_6
constexpr auto FSMC_PIO4_IOSET4_6 = ((std::uint32_t)0x00000040);
#undef FSMC_PIO4_IOSET4_7
constexpr auto FSMC_PIO4_IOSET4_7 = ((std::uint32_t)0x00000080);

#undef FSMC_PIO4_IOWAIT4
constexpr auto FSMC_PIO4_IOWAIT4 = ((std::uint32_t)0x0000FF00);
#undef FSMC_PIO4_IOWAIT4_0
constexpr auto FSMC_PIO4_IOWAIT4_0 = ((std::uint32_t)0x00000100);
#undef FSMC_PIO4_IOWAIT4_1
constexpr auto FSMC_PIO4_IOWAIT4_1 = ((std::uint32_t)0x00000200);
#undef FSMC_PIO4_IOWAIT4_2
constexpr auto FSMC_PIO4_IOWAIT4_2 = ((std::uint32_t)0x00000400);
#undef FSMC_PIO4_IOWAIT4_3
constexpr auto FSMC_PIO4_IOWAIT4_3 = ((std::uint32_t)0x00000800);
#undef FSMC_PIO4_IOWAIT4_4
constexpr auto FSMC_PIO4_IOWAIT4_4 = ((std::uint32_t)0x00001000);
#undef FSMC_PIO4_IOWAIT4_5
constexpr auto FSMC_PIO4_IOWAIT4_5 = ((std::uint32_t)0x00002000);
#undef FSMC_PIO4_IOWAIT4_6
constexpr auto FSMC_PIO4_IOWAIT4_6 = ((std::uint32_t)0x00004000);
#undef FSMC_PIO4_IOWAIT4_7
constexpr auto FSMC_PIO4_IOWAIT4_7 = ((std::uint32_t)0x00008000);

#undef FSMC_PIO4_IOHOLD4
constexpr auto FSMC_PIO4_IOHOLD4 = ((std::uint32_t)0x00FF0000);
#undef FSMC_PIO4_IOHOLD4_0
constexpr auto FSMC_PIO4_IOHOLD4_0 = ((std::uint32_t)0x00010000);
#undef FSMC_PIO4_IOHOLD4_1
constexpr auto FSMC_PIO4_IOHOLD4_1 = ((std::uint32_t)0x00020000);
#undef FSMC_PIO4_IOHOLD4_2
constexpr auto FSMC_PIO4_IOHOLD4_2 = ((std::uint32_t)0x00040000);
#undef FSMC_PIO4_IOHOLD4_3
constexpr auto FSMC_PIO4_IOHOLD4_3 = ((std::uint32_t)0x00080000);
#undef FSMC_PIO4_IOHOLD4_4
constexpr auto FSMC_PIO4_IOHOLD4_4 = ((std::uint32_t)0x00100000);
#undef FSMC_PIO4_IOHOLD4_5
constexpr auto FSMC_PIO4_IOHOLD4_5 = ((std::uint32_t)0x00200000);
#undef FSMC_PIO4_IOHOLD4_6
constexpr auto FSMC_PIO4_IOHOLD4_6 = ((std::uint32_t)0x00400000);
#undef FSMC_PIO4_IOHOLD4_7
constexpr auto FSMC_PIO4_IOHOLD4_7 = ((std::uint32_t)0x00800000);

#undef FSMC_PIO4_IOHIZ4
constexpr auto FSMC_PIO4_IOHIZ4 = ((std::uint32_t)0xFF000000);
#undef FSMC_PIO4_IOHIZ4_0
constexpr auto FSMC_PIO4_IOHIZ4_0 = ((std::uint32_t)0x01000000);
#undef FSMC_PIO4_IOHIZ4_1
constexpr auto FSMC_PIO4_IOHIZ4_1 = ((std::uint32_t)0x02000000);
#undef FSMC_PIO4_IOHIZ4_2
constexpr auto FSMC_PIO4_IOHIZ4_2 = ((std::uint32_t)0x04000000);
#undef FSMC_PIO4_IOHIZ4_3
constexpr auto FSMC_PIO4_IOHIZ4_3 = ((std::uint32_t)0x08000000);
#undef FSMC_PIO4_IOHIZ4_4
constexpr auto FSMC_PIO4_IOHIZ4_4 = ((std::uint32_t)0x10000000);
#undef FSMC_PIO4_IOHIZ4_5
constexpr auto FSMC_PIO4_IOHIZ4_5 = ((std::uint32_t)0x20000000);
#undef FSMC_PIO4_IOHIZ4_6
constexpr auto FSMC_PIO4_IOHIZ4_6 = ((std::uint32_t)0x40000000);
#undef FSMC_PIO4_IOHIZ4_7
constexpr auto FSMC_PIO4_IOHIZ4_7 = ((std::uint32_t)0x80000000);

/******************  Bit definition for FSMC_ECCR2 register  ******************/
#undef FSMC_ECCR2_ECC2
constexpr auto FSMC_ECCR2_ECC2 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for FSMC_ECCR3 register  ******************/
#undef FSMC_ECCR3_ECC3
constexpr auto FSMC_ECCR3_ECC3 = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                                                                            */
/*                          SD host Interface                                 */
/*                                                                            */
/******************************************************************************/

/******************  Bit definition for SDIO_POWER register  ******************/
#undef SDIO_POWER_PWRCTRL
constexpr auto SDIO_POWER_PWRCTRL = ((std::uint8_t)0x03);
#undef SDIO_POWER_PWRCTRL_0
constexpr auto SDIO_POWER_PWRCTRL_0 = ((std::uint8_t)0x01);
#undef SDIO_POWER_PWRCTRL_1
constexpr auto SDIO_POWER_PWRCTRL_1 = ((std::uint8_t)0x02);

/******************  Bit definition for SDIO_CLKCR register  ******************/
#undef SDIO_CLKCR_CLKDIV
constexpr auto SDIO_CLKCR_CLKDIV = ((std::uint16_t)0x00FF);
#undef SDIO_CLKCR_CLKEN
constexpr auto SDIO_CLKCR_CLKEN = ((std::uint16_t)0x0100);
#undef SDIO_CLKCR_PWRSAV
constexpr auto SDIO_CLKCR_PWRSAV = ((std::uint16_t)0x0200);
#undef SDIO_CLKCR_BYPASS
constexpr auto SDIO_CLKCR_BYPASS = ((std::uint16_t)0x0400);

#undef SDIO_CLKCR_WIDBUS
constexpr auto SDIO_CLKCR_WIDBUS = ((std::uint16_t)0x1800);
#undef SDIO_CLKCR_WIDBUS_0
constexpr auto SDIO_CLKCR_WIDBUS_0 = ((std::uint16_t)0x0800);
#undef SDIO_CLKCR_WIDBUS_1
constexpr auto SDIO_CLKCR_WIDBUS_1 = ((std::uint16_t)0x1000);

#undef SDIO_CLKCR_NEGEDGE
constexpr auto SDIO_CLKCR_NEGEDGE = ((std::uint16_t)0x2000);
#undef SDIO_CLKCR_HWFC_EN
constexpr auto SDIO_CLKCR_HWFC_EN = ((std::uint16_t)0x4000);

/*******************  Bit definition for SDIO_ARG register  *******************/
#undef SDIO_ARG_CMDARG
constexpr auto SDIO_ARG_CMDARG = ((std::uint32_t)0xFFFFFFFF);

/*******************  Bit definition for SDIO_CMD register  *******************/
#undef SDIO_CMD_CMDINDEX
constexpr auto SDIO_CMD_CMDINDEX = ((std::uint16_t)0x003F);

#undef SDIO_CMD_WAITRESP
constexpr auto SDIO_CMD_WAITRESP = ((std::uint16_t)0x00C0);
#undef SDIO_CMD_WAITRESP_0
constexpr auto SDIO_CMD_WAITRESP_0 = ((std::uint16_t)0x0040);
#undef SDIO_CMD_WAITRESP_1
constexpr auto SDIO_CMD_WAITRESP_1 = ((std::uint16_t)0x0080);

#undef SDIO_CMD_WAITINT
constexpr auto SDIO_CMD_WAITINT = ((std::uint16_t)0x0100);
#undef SDIO_CMD_WAITPEND
constexpr auto SDIO_CMD_WAITPEND = ((std::uint16_t)0x0200);
#undef SDIO_CMD_CPSMEN
constexpr auto SDIO_CMD_CPSMEN = ((std::uint16_t)0x0400);
#undef SDIO_CMD_SDIOSUSPEND
constexpr auto SDIO_CMD_SDIOSUSPEND = ((std::uint16_t)0x0800);
#undef SDIO_CMD_ENCMDCOMPL
constexpr auto SDIO_CMD_ENCMDCOMPL = ((std::uint16_t)0x1000);
#undef SDIO_CMD_NIEN
constexpr auto SDIO_CMD_NIEN = ((std::uint16_t)0x2000);
#undef SDIO_CMD_CEATACMD
constexpr auto SDIO_CMD_CEATACMD = ((std::uint16_t)0x4000);

/*****************  Bit definition for SDIO_RESPCMD register  *****************/
#undef SDIO_RESPCMD_RESPCMD
constexpr auto SDIO_RESPCMD_RESPCMD = ((std::uint8_t)0x3F);

/******************  Bit definition for SDIO_RESP0 register  ******************/
#undef SDIO_RESP0_CARDSTATUS0
constexpr auto SDIO_RESP0_CARDSTATUS0 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_RESP1 register  ******************/
#undef SDIO_RESP1_CARDSTATUS1
constexpr auto SDIO_RESP1_CARDSTATUS1 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_RESP2 register  ******************/
#undef SDIO_RESP2_CARDSTATUS2
constexpr auto SDIO_RESP2_CARDSTATUS2 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_RESP3 register  ******************/
#undef SDIO_RESP3_CARDSTATUS3
constexpr auto SDIO_RESP3_CARDSTATUS3 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_RESP4 register  ******************/
#undef SDIO_RESP4_CARDSTATUS4
constexpr auto SDIO_RESP4_CARDSTATUS4 = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_DTIMER register  *****************/
#undef SDIO_DTIMER_DATATIME
constexpr auto SDIO_DTIMER_DATATIME = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for SDIO_DLEN register  *******************/
#undef SDIO_DLEN_DATALENGTH
constexpr auto SDIO_DLEN_DATALENGTH = ((std::uint32_t)0x01FFFFFF);

/******************  Bit definition for SDIO_DCTRL register  ******************/
#undef SDIO_DCTRL_DTEN
constexpr auto SDIO_DCTRL_DTEN = ((std::uint16_t)0x0001);
#undef SDIO_DCTRL_DTDIR
constexpr auto SDIO_DCTRL_DTDIR = ((std::uint16_t)0x0002);
#undef SDIO_DCTRL_DTMODE
constexpr auto SDIO_DCTRL_DTMODE = ((std::uint16_t)0x0004);
#undef SDIO_DCTRL_DMAEN
constexpr auto SDIO_DCTRL_DMAEN = ((std::uint16_t)0x0008);

#undef SDIO_DCTRL_DBLOCKSIZE
constexpr auto SDIO_DCTRL_DBLOCKSIZE = ((std::uint16_t)0x00F0);
#undef SDIO_DCTRL_DBLOCKSIZE_0
constexpr auto SDIO_DCTRL_DBLOCKSIZE_0 = ((std::uint16_t)0x0010);
#undef SDIO_DCTRL_DBLOCKSIZE_1
constexpr auto SDIO_DCTRL_DBLOCKSIZE_1 = ((std::uint16_t)0x0020);
#undef SDIO_DCTRL_DBLOCKSIZE_2
constexpr auto SDIO_DCTRL_DBLOCKSIZE_2 = ((std::uint16_t)0x0040);
#undef SDIO_DCTRL_DBLOCKSIZE_3
constexpr auto SDIO_DCTRL_DBLOCKSIZE_3 = ((std::uint16_t)0x0080);

#undef SDIO_DCTRL_RWSTART
constexpr auto SDIO_DCTRL_RWSTART = ((std::uint16_t)0x0100);
#undef SDIO_DCTRL_RWSTOP
constexpr auto SDIO_DCTRL_RWSTOP = ((std::uint16_t)0x0200);
#undef SDIO_DCTRL_RWMOD
constexpr auto SDIO_DCTRL_RWMOD = ((std::uint16_t)0x0400);
#undef SDIO_DCTRL_SDIOEN
constexpr auto SDIO_DCTRL_SDIOEN = ((std::uint16_t)0x0800);

/******************  Bit definition for SDIO_DCOUNT register  *****************/
#undef SDIO_DCOUNT_DATACOUNT
constexpr auto SDIO_DCOUNT_DATACOUNT = ((std::uint32_t)0x01FFFFFF);

/******************  Bit definition for SDIO_STA register  ********************/
#undef SDIO_STA_CCRCFAIL
constexpr auto SDIO_STA_CCRCFAIL = ((std::uint32_t)0x00000001);
#undef SDIO_STA_DCRCFAIL
constexpr auto SDIO_STA_DCRCFAIL = ((std::uint32_t)0x00000002);
#undef SDIO_STA_CTIMEOUT
constexpr auto SDIO_STA_CTIMEOUT = ((std::uint32_t)0x00000004);
#undef SDIO_STA_DTIMEOUT
constexpr auto SDIO_STA_DTIMEOUT = ((std::uint32_t)0x00000008);
#undef SDIO_STA_TXUNDERR
constexpr auto SDIO_STA_TXUNDERR = ((std::uint32_t)0x00000010);
#undef SDIO_STA_RXOVERR
constexpr auto SDIO_STA_RXOVERR = ((std::uint32_t)0x00000020);
#undef SDIO_STA_CMDREND
constexpr auto SDIO_STA_CMDREND = ((std::uint32_t)0x00000040);
#undef SDIO_STA_CMDSENT
constexpr auto SDIO_STA_CMDSENT = ((std::uint32_t)0x00000080);
#undef SDIO_STA_DATAEND
constexpr auto SDIO_STA_DATAEND = ((std::uint32_t)0x00000100);
#undef SDIO_STA_STBITERR
constexpr auto SDIO_STA_STBITERR = ((std::uint32_t)0x00000200);
#undef SDIO_STA_DBCKEND
constexpr auto SDIO_STA_DBCKEND = ((std::uint32_t)0x00000400);
#undef SDIO_STA_CMDACT
constexpr auto SDIO_STA_CMDACT = ((std::uint32_t)0x00000800);
#undef SDIO_STA_TXACT
constexpr auto SDIO_STA_TXACT = ((std::uint32_t)0x00001000);
#undef SDIO_STA_RXACT
constexpr auto SDIO_STA_RXACT = ((std::uint32_t)0x00002000);
#undef SDIO_STA_TXFIFOHE
constexpr auto SDIO_STA_TXFIFOHE = ((std::uint32_t)0x00004000);
#undef SDIO_STA_RXFIFOHF
constexpr auto SDIO_STA_RXFIFOHF = ((std::uint32_t)0x00008000);
#undef SDIO_STA_TXFIFOF
constexpr auto SDIO_STA_TXFIFOF = ((std::uint32_t)0x00010000);
#undef SDIO_STA_RXFIFOF
constexpr auto SDIO_STA_RXFIFOF = ((std::uint32_t)0x00020000);
#undef SDIO_STA_TXFIFOE
constexpr auto SDIO_STA_TXFIFOE = ((std::uint32_t)0x00040000);
#undef SDIO_STA_RXFIFOE
constexpr auto SDIO_STA_RXFIFOE = ((std::uint32_t)0x00080000);
#undef SDIO_STA_TXDAVL
constexpr auto SDIO_STA_TXDAVL = ((std::uint32_t)0x00100000);
#undef SDIO_STA_RXDAVL
constexpr auto SDIO_STA_RXDAVL = ((std::uint32_t)0x00200000);
#undef SDIO_STA_SDIOIT
constexpr auto SDIO_STA_SDIOIT = ((std::uint32_t)0x00400000);
#undef SDIO_STA_CEATAEND
constexpr auto SDIO_STA_CEATAEND = ((std::uint32_t)0x00800000);

/*******************  Bit definition for SDIO_ICR register  *******************/
#undef SDIO_ICR_CCRCFAILC
constexpr auto SDIO_ICR_CCRCFAILC = ((std::uint32_t)0x00000001);
#undef SDIO_ICR_DCRCFAILC
constexpr auto SDIO_ICR_DCRCFAILC = ((std::uint32_t)0x00000002);
#undef SDIO_ICR_CTIMEOUTC
constexpr auto SDIO_ICR_CTIMEOUTC = ((std::uint32_t)0x00000004);
#undef SDIO_ICR_DTIMEOUTC
constexpr auto SDIO_ICR_DTIMEOUTC = ((std::uint32_t)0x00000008);
#undef SDIO_ICR_TXUNDERRC
constexpr auto SDIO_ICR_TXUNDERRC = ((std::uint32_t)0x00000010);
#undef SDIO_ICR_RXOVERRC
constexpr auto SDIO_ICR_RXOVERRC = ((std::uint32_t)0x00000020);
#undef SDIO_ICR_CMDRENDC
constexpr auto SDIO_ICR_CMDRENDC = ((std::uint32_t)0x00000040);
#undef SDIO_ICR_CMDSENTC
constexpr auto SDIO_ICR_CMDSENTC = ((std::uint32_t)0x00000080);
#undef SDIO_ICR_DATAENDC
constexpr auto SDIO_ICR_DATAENDC = ((std::uint32_t)0x00000100);
#undef SDIO_ICR_STBITERRC
constexpr auto SDIO_ICR_STBITERRC = ((std::uint32_t)0x00000200);
#undef SDIO_ICR_DBCKENDC
constexpr auto SDIO_ICR_DBCKENDC = ((std::uint32_t)0x00000400);
#undef SDIO_ICR_SDIOITC
constexpr auto SDIO_ICR_SDIOITC = ((std::uint32_t)0x00400000);
#undef SDIO_ICR_CEATAENDC
constexpr auto SDIO_ICR_CEATAENDC = ((std::uint32_t)0x00800000);

/******************  Bit definition for SDIO_MASK register  *******************/
#undef SDIO_MASK_CCRCFAILIE
constexpr auto SDIO_MASK_CCRCFAILIE = ((std::uint32_t)0x00000001);
#undef SDIO_MASK_DCRCFAILIE
constexpr auto SDIO_MASK_DCRCFAILIE = ((std::uint32_t)0x00000002);
#undef SDIO_MASK_CTIMEOUTIE
constexpr auto SDIO_MASK_CTIMEOUTIE = ((std::uint32_t)0x00000004);
#undef SDIO_MASK_DTIMEOUTIE
constexpr auto SDIO_MASK_DTIMEOUTIE = ((std::uint32_t)0x00000008);
#undef SDIO_MASK_TXUNDERRIE
constexpr auto SDIO_MASK_TXUNDERRIE = ((std::uint32_t)0x00000010);
#undef SDIO_MASK_RXOVERRIE
constexpr auto SDIO_MASK_RXOVERRIE = ((std::uint32_t)0x00000020);
#undef SDIO_MASK_CMDRENDIE
constexpr auto SDIO_MASK_CMDRENDIE = ((std::uint32_t)0x00000040);
#undef SDIO_MASK_CMDSENTIE
constexpr auto SDIO_MASK_CMDSENTIE = ((std::uint32_t)0x00000080);
#undef SDIO_MASK_DATAENDIE
constexpr auto SDIO_MASK_DATAENDIE = ((std::uint32_t)0x00000100);
#undef SDIO_MASK_STBITERRIE
constexpr auto SDIO_MASK_STBITERRIE = ((std::uint32_t)0x00000200);
#undef SDIO_MASK_DBCKENDIE
constexpr auto SDIO_MASK_DBCKENDIE = ((std::uint32_t)0x00000400);
#undef SDIO_MASK_CMDACTIE
constexpr auto SDIO_MASK_CMDACTIE = ((std::uint32_t)0x00000800);
#undef SDIO_MASK_TXACTIE
constexpr auto SDIO_MASK_TXACTIE = ((std::uint32_t)0x00001000);
#undef SDIO_MASK_RXACTIE
constexpr auto SDIO_MASK_RXACTIE = ((std::uint32_t)0x00002000);
#undef SDIO_MASK_TXFIFOHEIE
constexpr auto SDIO_MASK_TXFIFOHEIE = ((std::uint32_t)0x00004000);
#undef SDIO_MASK_RXFIFOHFIE
constexpr auto SDIO_MASK_RXFIFOHFIE = ((std::uint32_t)0x00008000);
#undef SDIO_MASK_TXFIFOFIE
constexpr auto SDIO_MASK_TXFIFOFIE = ((std::uint32_t)0x00010000);
#undef SDIO_MASK_RXFIFOFIE
constexpr auto SDIO_MASK_RXFIFOFIE = ((std::uint32_t)0x00020000);
#undef SDIO_MASK_TXFIFOEIE
constexpr auto SDIO_MASK_TXFIFOEIE = ((std::uint32_t)0x00040000);
#undef SDIO_MASK_RXFIFOEIE
constexpr auto SDIO_MASK_RXFIFOEIE = ((std::uint32_t)0x00080000);
#undef SDIO_MASK_TXDAVLIE
constexpr auto SDIO_MASK_TXDAVLIE = ((std::uint32_t)0x00100000);
#undef SDIO_MASK_RXDAVLIE
constexpr auto SDIO_MASK_RXDAVLIE = ((std::uint32_t)0x00200000);
#undef SDIO_MASK_SDIOITIE
constexpr auto SDIO_MASK_SDIOITIE = ((std::uint32_t)0x00400000);
#undef SDIO_MASK_CEATAENDIE
constexpr auto SDIO_MASK_CEATAENDIE = ((std::uint32_t)0x00800000);

/*****************  Bit definition for SDIO_FIFOCNT register  *****************/
#undef SDIO_FIFOCNT_FIFOCOUNT
constexpr auto SDIO_FIFOCNT_FIFOCOUNT = ((std::uint32_t)0x00FFFFFF);

/******************  Bit definition for SDIO_FIFO register  *******************/
#undef SDIO_FIFO_FIFODATA
constexpr auto SDIO_FIFO_FIFODATA = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                                                                            */
/*                                   USB Device FS                            */
/*                                                                            */
/******************************************************************************/

/*!< Endpoint-specific registers */
/*******************  Bit definition for USB_EP0R register  *******************/
#undef USB_EP0R_EA
constexpr auto USB_EP0R_EA = ((std::uint16_t)0x000F);

#undef USB_EP0R_STAT_TX
constexpr auto USB_EP0R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP0R_STAT_TX_0
constexpr auto USB_EP0R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP0R_STAT_TX_1
constexpr auto USB_EP0R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP0R_DTOG_TX
constexpr auto USB_EP0R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP0R_CTR_TX
constexpr auto USB_EP0R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP0R_EP_KIND
constexpr auto USB_EP0R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP0R_EP_TYPE
constexpr auto USB_EP0R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP0R_EP_TYPE_0
constexpr auto USB_EP0R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP0R_EP_TYPE_1
constexpr auto USB_EP0R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP0R_SETUP
constexpr auto USB_EP0R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP0R_STAT_RX
constexpr auto USB_EP0R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP0R_STAT_RX_0
constexpr auto USB_EP0R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP0R_STAT_RX_1
constexpr auto USB_EP0R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP0R_DTOG_RX
constexpr auto USB_EP0R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP0R_CTR_RX
constexpr auto USB_EP0R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP1R register  *******************/
#undef USB_EP1R_EA
constexpr auto USB_EP1R_EA = ((std::uint16_t)0x000F);

#undef USB_EP1R_STAT_TX
constexpr auto USB_EP1R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP1R_STAT_TX_0
constexpr auto USB_EP1R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP1R_STAT_TX_1
constexpr auto USB_EP1R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP1R_DTOG_TX
constexpr auto USB_EP1R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP1R_CTR_TX
constexpr auto USB_EP1R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP1R_EP_KIND
constexpr auto USB_EP1R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP1R_EP_TYPE
constexpr auto USB_EP1R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP1R_EP_TYPE_0
constexpr auto USB_EP1R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP1R_EP_TYPE_1
constexpr auto USB_EP1R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP1R_SETUP
constexpr auto USB_EP1R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP1R_STAT_RX
constexpr auto USB_EP1R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP1R_STAT_RX_0
constexpr auto USB_EP1R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP1R_STAT_RX_1
constexpr auto USB_EP1R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP1R_DTOG_RX
constexpr auto USB_EP1R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP1R_CTR_RX
constexpr auto USB_EP1R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP2R register  *******************/
#undef USB_EP2R_EA
constexpr auto USB_EP2R_EA = ((std::uint16_t)0x000F);

#undef USB_EP2R_STAT_TX
constexpr auto USB_EP2R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP2R_STAT_TX_0
constexpr auto USB_EP2R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP2R_STAT_TX_1
constexpr auto USB_EP2R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP2R_DTOG_TX
constexpr auto USB_EP2R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP2R_CTR_TX
constexpr auto USB_EP2R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP2R_EP_KIND
constexpr auto USB_EP2R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP2R_EP_TYPE
constexpr auto USB_EP2R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP2R_EP_TYPE_0
constexpr auto USB_EP2R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP2R_EP_TYPE_1
constexpr auto USB_EP2R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP2R_SETUP
constexpr auto USB_EP2R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP2R_STAT_RX
constexpr auto USB_EP2R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP2R_STAT_RX_0
constexpr auto USB_EP2R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP2R_STAT_RX_1
constexpr auto USB_EP2R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP2R_DTOG_RX
constexpr auto USB_EP2R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP2R_CTR_RX
constexpr auto USB_EP2R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP3R register  *******************/
#undef USB_EP3R_EA
constexpr auto USB_EP3R_EA = ((std::uint16_t)0x000F);

#undef USB_EP3R_STAT_TX
constexpr auto USB_EP3R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP3R_STAT_TX_0
constexpr auto USB_EP3R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP3R_STAT_TX_1
constexpr auto USB_EP3R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP3R_DTOG_TX
constexpr auto USB_EP3R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP3R_CTR_TX
constexpr auto USB_EP3R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP3R_EP_KIND
constexpr auto USB_EP3R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP3R_EP_TYPE
constexpr auto USB_EP3R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP3R_EP_TYPE_0
constexpr auto USB_EP3R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP3R_EP_TYPE_1
constexpr auto USB_EP3R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP3R_SETUP
constexpr auto USB_EP3R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP3R_STAT_RX
constexpr auto USB_EP3R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP3R_STAT_RX_0
constexpr auto USB_EP3R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP3R_STAT_RX_1
constexpr auto USB_EP3R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP3R_DTOG_RX
constexpr auto USB_EP3R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP3R_CTR_RX
constexpr auto USB_EP3R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP4R register  *******************/
#undef USB_EP4R_EA
constexpr auto USB_EP4R_EA = ((std::uint16_t)0x000F);

#undef USB_EP4R_STAT_TX
constexpr auto USB_EP4R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP4R_STAT_TX_0
constexpr auto USB_EP4R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP4R_STAT_TX_1
constexpr auto USB_EP4R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP4R_DTOG_TX
constexpr auto USB_EP4R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP4R_CTR_TX
constexpr auto USB_EP4R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP4R_EP_KIND
constexpr auto USB_EP4R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP4R_EP_TYPE
constexpr auto USB_EP4R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP4R_EP_TYPE_0
constexpr auto USB_EP4R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP4R_EP_TYPE_1
constexpr auto USB_EP4R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP4R_SETUP
constexpr auto USB_EP4R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP4R_STAT_RX
constexpr auto USB_EP4R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP4R_STAT_RX_0
constexpr auto USB_EP4R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP4R_STAT_RX_1
constexpr auto USB_EP4R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP4R_DTOG_RX
constexpr auto USB_EP4R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP4R_CTR_RX
constexpr auto USB_EP4R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP5R register  *******************/
#undef USB_EP5R_EA
constexpr auto USB_EP5R_EA = ((std::uint16_t)0x000F);

#undef USB_EP5R_STAT_TX
constexpr auto USB_EP5R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP5R_STAT_TX_0
constexpr auto USB_EP5R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP5R_STAT_TX_1
constexpr auto USB_EP5R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP5R_DTOG_TX
constexpr auto USB_EP5R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP5R_CTR_TX
constexpr auto USB_EP5R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP5R_EP_KIND
constexpr auto USB_EP5R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP5R_EP_TYPE
constexpr auto USB_EP5R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP5R_EP_TYPE_0
constexpr auto USB_EP5R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP5R_EP_TYPE_1
constexpr auto USB_EP5R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP5R_SETUP
constexpr auto USB_EP5R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP5R_STAT_RX
constexpr auto USB_EP5R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP5R_STAT_RX_0
constexpr auto USB_EP5R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP5R_STAT_RX_1
constexpr auto USB_EP5R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP5R_DTOG_RX
constexpr auto USB_EP5R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP5R_CTR_RX
constexpr auto USB_EP5R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP6R register  *******************/
#undef USB_EP6R_EA
constexpr auto USB_EP6R_EA = ((std::uint16_t)0x000F);

#undef USB_EP6R_STAT_TX
constexpr auto USB_EP6R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP6R_STAT_TX_0
constexpr auto USB_EP6R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP6R_STAT_TX_1
constexpr auto USB_EP6R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP6R_DTOG_TX
constexpr auto USB_EP6R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP6R_CTR_TX
constexpr auto USB_EP6R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP6R_EP_KIND
constexpr auto USB_EP6R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP6R_EP_TYPE
constexpr auto USB_EP6R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP6R_EP_TYPE_0
constexpr auto USB_EP6R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP6R_EP_TYPE_1
constexpr auto USB_EP6R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP6R_SETUP
constexpr auto USB_EP6R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP6R_STAT_RX
constexpr auto USB_EP6R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP6R_STAT_RX_0
constexpr auto USB_EP6R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP6R_STAT_RX_1
constexpr auto USB_EP6R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP6R_DTOG_RX
constexpr auto USB_EP6R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP6R_CTR_RX
constexpr auto USB_EP6R_CTR_RX = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_EP7R register  *******************/
#undef USB_EP7R_EA
constexpr auto USB_EP7R_EA = ((std::uint16_t)0x000F);

#undef USB_EP7R_STAT_TX
constexpr auto USB_EP7R_STAT_TX = ((std::uint16_t)0x0030);
#undef USB_EP7R_STAT_TX_0
constexpr auto USB_EP7R_STAT_TX_0 = ((std::uint16_t)0x0010);
#undef USB_EP7R_STAT_TX_1
constexpr auto USB_EP7R_STAT_TX_1 = ((std::uint16_t)0x0020);

#undef USB_EP7R_DTOG_TX
constexpr auto USB_EP7R_DTOG_TX = ((std::uint16_t)0x0040);
#undef USB_EP7R_CTR_TX
constexpr auto USB_EP7R_CTR_TX = ((std::uint16_t)0x0080);
#undef USB_EP7R_EP_KIND
constexpr auto USB_EP7R_EP_KIND = ((std::uint16_t)0x0100);

#undef USB_EP7R_EP_TYPE
constexpr auto USB_EP7R_EP_TYPE = ((std::uint16_t)0x0600);
#undef USB_EP7R_EP_TYPE_0
constexpr auto USB_EP7R_EP_TYPE_0 = ((std::uint16_t)0x0200);
#undef USB_EP7R_EP_TYPE_1
constexpr auto USB_EP7R_EP_TYPE_1 = ((std::uint16_t)0x0400);

#undef USB_EP7R_SETUP
constexpr auto USB_EP7R_SETUP = ((std::uint16_t)0x0800);

#undef USB_EP7R_STAT_RX
constexpr auto USB_EP7R_STAT_RX = ((std::uint16_t)0x3000);
#undef USB_EP7R_STAT_RX_0
constexpr auto USB_EP7R_STAT_RX_0 = ((std::uint16_t)0x1000);
#undef USB_EP7R_STAT_RX_1
constexpr auto USB_EP7R_STAT_RX_1 = ((std::uint16_t)0x2000);

#undef USB_EP7R_DTOG_RX
constexpr auto USB_EP7R_DTOG_RX = ((std::uint16_t)0x4000);
#undef USB_EP7R_CTR_RX
constexpr auto USB_EP7R_CTR_RX = ((std::uint16_t)0x8000);

/*!< Common registers */
/*******************  Bit definition for USB_CNTR register  *******************/
#undef USB_CNTR_FRES
constexpr auto USB_CNTR_FRES = ((std::uint16_t)0x0001);
#undef USB_CNTR_PDWN
constexpr auto USB_CNTR_PDWN = ((std::uint16_t)0x0002);
#undef USB_CNTR_LP_MODE
constexpr auto USB_CNTR_LP_MODE = ((std::uint16_t)0x0004);
#undef USB_CNTR_FSUSP
constexpr auto USB_CNTR_FSUSP = ((std::uint16_t)0x0008);
#undef USB_CNTR_RESUME
constexpr auto USB_CNTR_RESUME = ((std::uint16_t)0x0010);
#undef USB_CNTR_ESOFM
constexpr auto USB_CNTR_ESOFM = ((std::uint16_t)0x0100);
#undef USB_CNTR_SOFM
constexpr auto USB_CNTR_SOFM = ((std::uint16_t)0x0200);
#undef USB_CNTR_RESETM
constexpr auto USB_CNTR_RESETM = ((std::uint16_t)0x0400);
#undef USB_CNTR_SUSPM
constexpr auto USB_CNTR_SUSPM = ((std::uint16_t)0x0800);
#undef USB_CNTR_WKUPM
constexpr auto USB_CNTR_WKUPM = ((std::uint16_t)0x1000);
#undef USB_CNTR_ERRM
constexpr auto USB_CNTR_ERRM = ((std::uint16_t)0x2000);
#undef USB_CNTR_PMAOVRM
constexpr auto USB_CNTR_PMAOVRM = ((std::uint16_t)0x4000);
#undef USB_CNTR_CTRM
constexpr auto USB_CNTR_CTRM = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_ISTR register  *******************/
#undef USB_ISTR_EP_ID
constexpr auto USB_ISTR_EP_ID = ((std::uint16_t)0x000F);
#undef USB_ISTR_DIR
constexpr auto USB_ISTR_DIR = ((std::uint16_t)0x0010);
#undef USB_ISTR_ESOF
constexpr auto USB_ISTR_ESOF = ((std::uint16_t)0x0100);
#undef USB_ISTR_SOF
constexpr auto USB_ISTR_SOF = ((std::uint16_t)0x0200);
#undef USB_ISTR_RESET
constexpr auto USB_ISTR_RESET = ((std::uint16_t)0x0400);
#undef USB_ISTR_SUSP
constexpr auto USB_ISTR_SUSP = ((std::uint16_t)0x0800);
#undef USB_ISTR_WKUP
constexpr auto USB_ISTR_WKUP = ((std::uint16_t)0x1000);
#undef USB_ISTR_ERR
constexpr auto USB_ISTR_ERR = ((std::uint16_t)0x2000);
#undef USB_ISTR_PMAOVR
constexpr auto USB_ISTR_PMAOVR = ((std::uint16_t)0x4000);
#undef USB_ISTR_CTR
constexpr auto USB_ISTR_CTR = ((std::uint16_t)0x8000);

/*******************  Bit definition for USB_FNR register  ********************/
#undef USB_FNR_FN
constexpr auto USB_FNR_FN = ((std::uint16_t)0x07FF);
#undef USB_FNR_LSOF
constexpr auto USB_FNR_LSOF = ((std::uint16_t)0x1800);
#undef USB_FNR_LCK
constexpr auto USB_FNR_LCK = ((std::uint16_t)0x2000);
#undef USB_FNR_RXDM
constexpr auto USB_FNR_RXDM = ((std::uint16_t)0x4000);
#undef USB_FNR_RXDP
constexpr auto USB_FNR_RXDP = ((std::uint16_t)0x8000);

/******************  Bit definition for USB_DADDR register  *******************/
#undef USB_DADDR_ADD
constexpr auto USB_DADDR_ADD = ((std::uint8_t)0x7F);
#undef USB_DADDR_ADD0
constexpr auto USB_DADDR_ADD0 = ((std::uint8_t)0x01);
#undef USB_DADDR_ADD1
constexpr auto USB_DADDR_ADD1 = ((std::uint8_t)0x02);
#undef USB_DADDR_ADD2
constexpr auto USB_DADDR_ADD2 = ((std::uint8_t)0x04);
#undef USB_DADDR_ADD3
constexpr auto USB_DADDR_ADD3 = ((std::uint8_t)0x08);
#undef USB_DADDR_ADD4
constexpr auto USB_DADDR_ADD4 = ((std::uint8_t)0x10);
#undef USB_DADDR_ADD5
constexpr auto USB_DADDR_ADD5 = ((std::uint8_t)0x20);
#undef USB_DADDR_ADD6
constexpr auto USB_DADDR_ADD6 = ((std::uint8_t)0x40);

#undef USB_DADDR_EF
constexpr auto USB_DADDR_EF = ((std::uint8_t)0x80);

/******************  Bit definition for USB_BTABLE register  ******************/
#undef USB_BTABLE_BTABLE
constexpr auto USB_BTABLE_BTABLE = ((std::uint16_t)0xFFF8);

/*!< Buffer descriptor table */
/*****************  Bit definition for USB_ADDR0_TX register  *****************/
#undef USB_ADDR0_TX_ADDR0_TX
constexpr auto USB_ADDR0_TX_ADDR0_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR1_TX register  *****************/
#undef USB_ADDR1_TX_ADDR1_TX
constexpr auto USB_ADDR1_TX_ADDR1_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR2_TX register  *****************/
#undef USB_ADDR2_TX_ADDR2_TX
constexpr auto USB_ADDR2_TX_ADDR2_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR3_TX register  *****************/
#undef USB_ADDR3_TX_ADDR3_TX
constexpr auto USB_ADDR3_TX_ADDR3_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR4_TX register  *****************/
#undef USB_ADDR4_TX_ADDR4_TX
constexpr auto USB_ADDR4_TX_ADDR4_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR5_TX register  *****************/
#undef USB_ADDR5_TX_ADDR5_TX
constexpr auto USB_ADDR5_TX_ADDR5_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR6_TX register  *****************/
#undef USB_ADDR6_TX_ADDR6_TX
constexpr auto USB_ADDR6_TX_ADDR6_TX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR7_TX register  *****************/
#undef USB_ADDR7_TX_ADDR7_TX
constexpr auto USB_ADDR7_TX_ADDR7_TX = ((std::uint16_t)0xFFFE);

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_TX register  ****************/
#undef USB_COUNT0_TX_COUNT0_TX
constexpr auto USB_COUNT0_TX_COUNT0_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT1_TX register  ****************/
#undef USB_COUNT1_TX_COUNT1_TX
constexpr auto USB_COUNT1_TX_COUNT1_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT2_TX register  ****************/
#undef USB_COUNT2_TX_COUNT2_TX
constexpr auto USB_COUNT2_TX_COUNT2_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT3_TX register  ****************/
#undef USB_COUNT3_TX_COUNT3_TX
constexpr auto USB_COUNT3_TX_COUNT3_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT4_TX register  ****************/
#undef USB_COUNT4_TX_COUNT4_TX
constexpr auto USB_COUNT4_TX_COUNT4_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT5_TX register  ****************/
#undef USB_COUNT5_TX_COUNT5_TX
constexpr auto USB_COUNT5_TX_COUNT5_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT6_TX register  ****************/
#undef USB_COUNT6_TX_COUNT6_TX
constexpr auto USB_COUNT6_TX_COUNT6_TX = ((std::uint16_t)0x03FF);

/*****************  Bit definition for USB_COUNT7_TX register  ****************/
#undef USB_COUNT7_TX_COUNT7_TX
constexpr auto USB_COUNT7_TX_COUNT7_TX = ((std::uint16_t)0x03FF);

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_TX_0 register  ***************/
#undef USB_COUNT0_TX_0_COUNT0_TX_0
constexpr auto USB_COUNT0_TX_0_COUNT0_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT0_TX_1 register  ***************/
#undef USB_COUNT0_TX_1_COUNT0_TX_1
constexpr auto USB_COUNT0_TX_1_COUNT0_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT1_TX_0 register  ***************/
#undef USB_COUNT1_TX_0_COUNT1_TX_0
constexpr auto USB_COUNT1_TX_0_COUNT1_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT1_TX_1 register  ***************/
#undef USB_COUNT1_TX_1_COUNT1_TX_1
constexpr auto USB_COUNT1_TX_1_COUNT1_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT2_TX_0 register  ***************/
#undef USB_COUNT2_TX_0_COUNT2_TX_0
constexpr auto USB_COUNT2_TX_0_COUNT2_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT2_TX_1 register  ***************/
#undef USB_COUNT2_TX_1_COUNT2_TX_1
constexpr auto USB_COUNT2_TX_1_COUNT2_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT3_TX_0 register  ***************/
#undef USB_COUNT3_TX_0_COUNT3_TX_0
constexpr auto USB_COUNT3_TX_0_COUNT3_TX_0 = ((std::uint16_t)0x000003FF);

/****************  Bit definition for USB_COUNT3_TX_1 register  ***************/
#undef USB_COUNT3_TX_1_COUNT3_TX_1
constexpr auto USB_COUNT3_TX_1_COUNT3_TX_1 = ((std::uint16_t)0x03FF0000);

/****************  Bit definition for USB_COUNT4_TX_0 register  ***************/
#undef USB_COUNT4_TX_0_COUNT4_TX_0
constexpr auto USB_COUNT4_TX_0_COUNT4_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT4_TX_1 register  ***************/
#undef USB_COUNT4_TX_1_COUNT4_TX_1
constexpr auto USB_COUNT4_TX_1_COUNT4_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT5_TX_0 register  ***************/
#undef USB_COUNT5_TX_0_COUNT5_TX_0
constexpr auto USB_COUNT5_TX_0_COUNT5_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT5_TX_1 register  ***************/
#undef USB_COUNT5_TX_1_COUNT5_TX_1
constexpr auto USB_COUNT5_TX_1_COUNT5_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT6_TX_0 register  ***************/
#undef USB_COUNT6_TX_0_COUNT6_TX_0
constexpr auto USB_COUNT6_TX_0_COUNT6_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT6_TX_1 register  ***************/
#undef USB_COUNT6_TX_1_COUNT6_TX_1
constexpr auto USB_COUNT6_TX_1_COUNT6_TX_1 = ((std::uint32_t)0x03FF0000);

/****************  Bit definition for USB_COUNT7_TX_0 register  ***************/
#undef USB_COUNT7_TX_0_COUNT7_TX_0
constexpr auto USB_COUNT7_TX_0_COUNT7_TX_0 = ((std::uint32_t)0x000003FF);

/****************  Bit definition for USB_COUNT7_TX_1 register  ***************/
#undef USB_COUNT7_TX_1_COUNT7_TX_1
constexpr auto USB_COUNT7_TX_1_COUNT7_TX_1 = ((std::uint32_t)0x03FF0000);

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_ADDR0_RX register  *****************/
#undef USB_ADDR0_RX_ADDR0_RX
constexpr auto USB_ADDR0_RX_ADDR0_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR1_RX register  *****************/
#undef USB_ADDR1_RX_ADDR1_RX
constexpr auto USB_ADDR1_RX_ADDR1_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR2_RX register  *****************/
#undef USB_ADDR2_RX_ADDR2_RX
constexpr auto USB_ADDR2_RX_ADDR2_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR3_RX register  *****************/
#undef USB_ADDR3_RX_ADDR3_RX
constexpr auto USB_ADDR3_RX_ADDR3_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR4_RX register  *****************/
#undef USB_ADDR4_RX_ADDR4_RX
constexpr auto USB_ADDR4_RX_ADDR4_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR5_RX register  *****************/
#undef USB_ADDR5_RX_ADDR5_RX
constexpr auto USB_ADDR5_RX_ADDR5_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR6_RX register  *****************/
#undef USB_ADDR6_RX_ADDR6_RX
constexpr auto USB_ADDR6_RX_ADDR6_RX = ((std::uint16_t)0xFFFE);

/*****************  Bit definition for USB_ADDR7_RX register  *****************/
#undef USB_ADDR7_RX_ADDR7_RX
constexpr auto USB_ADDR7_RX_ADDR7_RX = ((std::uint16_t)0xFFFE);

/*----------------------------------------------------------------------------*/

/*****************  Bit definition for USB_COUNT0_RX register  ****************/
#undef USB_COUNT0_RX_COUNT0_RX
constexpr auto USB_COUNT0_RX_COUNT0_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT0_RX_NUM_BLOCK
constexpr auto USB_COUNT0_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT0_RX_NUM_BLOCK_0
constexpr auto USB_COUNT0_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT0_RX_NUM_BLOCK_1
constexpr auto USB_COUNT0_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT0_RX_NUM_BLOCK_2
constexpr auto USB_COUNT0_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT0_RX_NUM_BLOCK_3
constexpr auto USB_COUNT0_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT0_RX_NUM_BLOCK_4
constexpr auto USB_COUNT0_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT0_RX_BLSIZE
constexpr auto USB_COUNT0_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT1_RX register  ****************/
#undef USB_COUNT1_RX_COUNT1_RX
constexpr auto USB_COUNT1_RX_COUNT1_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT1_RX_NUM_BLOCK
constexpr auto USB_COUNT1_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT1_RX_NUM_BLOCK_0
constexpr auto USB_COUNT1_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT1_RX_NUM_BLOCK_1
constexpr auto USB_COUNT1_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT1_RX_NUM_BLOCK_2
constexpr auto USB_COUNT1_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT1_RX_NUM_BLOCK_3
constexpr auto USB_COUNT1_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT1_RX_NUM_BLOCK_4
constexpr auto USB_COUNT1_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT1_RX_BLSIZE
constexpr auto USB_COUNT1_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT2_RX register  ****************/
#undef USB_COUNT2_RX_COUNT2_RX
constexpr auto USB_COUNT2_RX_COUNT2_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT2_RX_NUM_BLOCK
constexpr auto USB_COUNT2_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT2_RX_NUM_BLOCK_0
constexpr auto USB_COUNT2_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT2_RX_NUM_BLOCK_1
constexpr auto USB_COUNT2_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT2_RX_NUM_BLOCK_2
constexpr auto USB_COUNT2_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT2_RX_NUM_BLOCK_3
constexpr auto USB_COUNT2_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT2_RX_NUM_BLOCK_4
constexpr auto USB_COUNT2_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT2_RX_BLSIZE
constexpr auto USB_COUNT2_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT3_RX register  ****************/
#undef USB_COUNT3_RX_COUNT3_RX
constexpr auto USB_COUNT3_RX_COUNT3_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT3_RX_NUM_BLOCK
constexpr auto USB_COUNT3_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT3_RX_NUM_BLOCK_0
constexpr auto USB_COUNT3_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT3_RX_NUM_BLOCK_1
constexpr auto USB_COUNT3_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT3_RX_NUM_BLOCK_2
constexpr auto USB_COUNT3_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT3_RX_NUM_BLOCK_3
constexpr auto USB_COUNT3_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT3_RX_NUM_BLOCK_4
constexpr auto USB_COUNT3_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT3_RX_BLSIZE
constexpr auto USB_COUNT3_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT4_RX register  ****************/
#undef USB_COUNT4_RX_COUNT4_RX
constexpr auto USB_COUNT4_RX_COUNT4_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT4_RX_NUM_BLOCK
constexpr auto USB_COUNT4_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT4_RX_NUM_BLOCK_0
constexpr auto USB_COUNT4_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT4_RX_NUM_BLOCK_1
constexpr auto USB_COUNT4_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT4_RX_NUM_BLOCK_2
constexpr auto USB_COUNT4_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT4_RX_NUM_BLOCK_3
constexpr auto USB_COUNT4_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT4_RX_NUM_BLOCK_4
constexpr auto USB_COUNT4_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT4_RX_BLSIZE
constexpr auto USB_COUNT4_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT5_RX register  ****************/
#undef USB_COUNT5_RX_COUNT5_RX
constexpr auto USB_COUNT5_RX_COUNT5_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT5_RX_NUM_BLOCK
constexpr auto USB_COUNT5_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT5_RX_NUM_BLOCK_0
constexpr auto USB_COUNT5_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT5_RX_NUM_BLOCK_1
constexpr auto USB_COUNT5_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT5_RX_NUM_BLOCK_2
constexpr auto USB_COUNT5_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT5_RX_NUM_BLOCK_3
constexpr auto USB_COUNT5_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT5_RX_NUM_BLOCK_4
constexpr auto USB_COUNT5_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT5_RX_BLSIZE
constexpr auto USB_COUNT5_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT6_RX register  ****************/
#undef USB_COUNT6_RX_COUNT6_RX
constexpr auto USB_COUNT6_RX_COUNT6_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT6_RX_NUM_BLOCK
constexpr auto USB_COUNT6_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT6_RX_NUM_BLOCK_0
constexpr auto USB_COUNT6_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT6_RX_NUM_BLOCK_1
constexpr auto USB_COUNT6_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT6_RX_NUM_BLOCK_2
constexpr auto USB_COUNT6_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT6_RX_NUM_BLOCK_3
constexpr auto USB_COUNT6_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT6_RX_NUM_BLOCK_4
constexpr auto USB_COUNT6_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT6_RX_BLSIZE
constexpr auto USB_COUNT6_RX_BLSIZE = ((std::uint16_t)0x8000);

/*****************  Bit definition for USB_COUNT7_RX register  ****************/
#undef USB_COUNT7_RX_COUNT7_RX
constexpr auto USB_COUNT7_RX_COUNT7_RX = ((std::uint16_t)0x03FF);

#undef USB_COUNT7_RX_NUM_BLOCK
constexpr auto USB_COUNT7_RX_NUM_BLOCK = ((std::uint16_t)0x7C00);
#undef USB_COUNT7_RX_NUM_BLOCK_0
constexpr auto USB_COUNT7_RX_NUM_BLOCK_0 = ((std::uint16_t)0x0400);
#undef USB_COUNT7_RX_NUM_BLOCK_1
constexpr auto USB_COUNT7_RX_NUM_BLOCK_1 = ((std::uint16_t)0x0800);
#undef USB_COUNT7_RX_NUM_BLOCK_2
constexpr auto USB_COUNT7_RX_NUM_BLOCK_2 = ((std::uint16_t)0x1000);
#undef USB_COUNT7_RX_NUM_BLOCK_3
constexpr auto USB_COUNT7_RX_NUM_BLOCK_3 = ((std::uint16_t)0x2000);
#undef USB_COUNT7_RX_NUM_BLOCK_4
constexpr auto USB_COUNT7_RX_NUM_BLOCK_4 = ((std::uint16_t)0x4000);

#undef USB_COUNT7_RX_BLSIZE
constexpr auto USB_COUNT7_RX_BLSIZE = ((std::uint16_t)0x8000);

/*----------------------------------------------------------------------------*/

/****************  Bit definition for USB_COUNT0_RX_0 register  ***************/
#undef USB_COUNT0_RX_0_COUNT0_RX_0
constexpr auto USB_COUNT0_RX_0_COUNT0_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT0_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT0_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT0_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT0_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT0_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT0_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT0_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT0_RX_0_BLSIZE_0
constexpr auto USB_COUNT0_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT0_RX_1 register  ***************/
#undef USB_COUNT0_RX_1_COUNT0_RX_1
constexpr auto USB_COUNT0_RX_1_COUNT0_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT0_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT0_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT0_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT0_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT0_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT0_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT0_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT0_RX_1_BLSIZE_1
constexpr auto USB_COUNT0_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/****************  Bit definition for USB_COUNT1_RX_0 register  ***************/
#undef USB_COUNT1_RX_0_COUNT1_RX_0
constexpr auto USB_COUNT1_RX_0_COUNT1_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT1_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT1_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT1_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT1_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT1_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT1_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT1_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT1_RX_0_BLSIZE_0
constexpr auto USB_COUNT1_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT1_RX_1 register  ***************/
#undef USB_COUNT1_RX_1_COUNT1_RX_1
constexpr auto USB_COUNT1_RX_1_COUNT1_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT1_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT1_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT1_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT1_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT1_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT1_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT1_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT1_RX_1_BLSIZE_1
constexpr auto USB_COUNT1_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/****************  Bit definition for USB_COUNT2_RX_0 register  ***************/
#undef USB_COUNT2_RX_0_COUNT2_RX_0
constexpr auto USB_COUNT2_RX_0_COUNT2_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT2_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT2_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT2_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT2_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT2_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT2_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT2_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT2_RX_0_BLSIZE_0
constexpr auto USB_COUNT2_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT2_RX_1 register  ***************/
#undef USB_COUNT2_RX_1_COUNT2_RX_1
constexpr auto USB_COUNT2_RX_1_COUNT2_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT2_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT2_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT2_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT2_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT2_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT2_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT2_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT2_RX_1_BLSIZE_1
constexpr auto USB_COUNT2_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/****************  Bit definition for USB_COUNT3_RX_0 register  ***************/
#undef USB_COUNT3_RX_0_COUNT3_RX_0
constexpr auto USB_COUNT3_RX_0_COUNT3_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT3_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT3_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT3_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT3_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT3_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT3_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT3_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT3_RX_0_BLSIZE_0
constexpr auto USB_COUNT3_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT3_RX_1 register  ***************/
#undef USB_COUNT3_RX_1_COUNT3_RX_1
constexpr auto USB_COUNT3_RX_1_COUNT3_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT3_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT3_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT3_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT3_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT3_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT3_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT3_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT3_RX_1_BLSIZE_1
constexpr auto USB_COUNT3_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/****************  Bit definition for USB_COUNT4_RX_0 register  ***************/
#undef USB_COUNT4_RX_0_COUNT4_RX_0
constexpr auto USB_COUNT4_RX_0_COUNT4_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT4_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT4_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT4_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT4_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT4_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT4_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT4_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT4_RX_0_BLSIZE_0
constexpr auto USB_COUNT4_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT4_RX_1 register  ***************/
#undef USB_COUNT4_RX_1_COUNT4_RX_1
constexpr auto USB_COUNT4_RX_1_COUNT4_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT4_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT4_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT4_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT4_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT4_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT4_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT4_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT4_RX_1_BLSIZE_1
constexpr auto USB_COUNT4_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/****************  Bit definition for USB_COUNT5_RX_0 register  ***************/
#undef USB_COUNT5_RX_0_COUNT5_RX_0
constexpr auto USB_COUNT5_RX_0_COUNT5_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT5_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT5_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT5_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT5_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT5_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT5_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT5_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT5_RX_0_BLSIZE_0
constexpr auto USB_COUNT5_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT5_RX_1 register  ***************/
#undef USB_COUNT5_RX_1_COUNT5_RX_1
constexpr auto USB_COUNT5_RX_1_COUNT5_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT5_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT5_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT5_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT5_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT5_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT5_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT5_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT5_RX_1_BLSIZE_1
constexpr auto USB_COUNT5_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/***************  Bit definition for USB_COUNT6_RX_0  register  ***************/
#undef USB_COUNT6_RX_0_COUNT6_RX_0
constexpr auto USB_COUNT6_RX_0_COUNT6_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT6_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT6_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT6_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT6_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT6_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT6_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT6_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT6_RX_0_BLSIZE_0
constexpr auto USB_COUNT6_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/****************  Bit definition for USB_COUNT6_RX_1 register  ***************/
#undef USB_COUNT6_RX_1_COUNT6_RX_1
constexpr auto USB_COUNT6_RX_1_COUNT6_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT6_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT6_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT6_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT6_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT6_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT6_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT6_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT6_RX_1_BLSIZE_1
constexpr auto USB_COUNT6_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/***************  Bit definition for USB_COUNT7_RX_0 register  ****************/
#undef USB_COUNT7_RX_0_COUNT7_RX_0
constexpr auto USB_COUNT7_RX_0_COUNT7_RX_0 = ((std::uint32_t)0x000003FF);

#undef USB_COUNT7_RX_0_NUM_BLOCK_0
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0 = ((std::uint32_t)0x00007C00);
#undef USB_COUNT7_RX_0_NUM_BLOCK_0_0
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0_0 = ((std::uint32_t)0x00000400);
#undef USB_COUNT7_RX_0_NUM_BLOCK_0_1
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0_1 = ((std::uint32_t)0x00000800);
#undef USB_COUNT7_RX_0_NUM_BLOCK_0_2
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0_2 = ((std::uint32_t)0x00001000);
#undef USB_COUNT7_RX_0_NUM_BLOCK_0_3
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0_3 = ((std::uint32_t)0x00002000);
#undef USB_COUNT7_RX_0_NUM_BLOCK_0_4
constexpr auto USB_COUNT7_RX_0_NUM_BLOCK_0_4 = ((std::uint32_t)0x00004000);

#undef USB_COUNT7_RX_0_BLSIZE_0
constexpr auto USB_COUNT7_RX_0_BLSIZE_0 = ((std::uint32_t)0x00008000);

/***************  Bit definition for USB_COUNT7_RX_1 register  ****************/
#undef USB_COUNT7_RX_1_COUNT7_RX_1
constexpr auto USB_COUNT7_RX_1_COUNT7_RX_1 = ((std::uint32_t)0x03FF0000);

#undef USB_COUNT7_RX_1_NUM_BLOCK_1
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1 = ((std::uint32_t)0x7C000000);
#undef USB_COUNT7_RX_1_NUM_BLOCK_1_0
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1_0 = ((std::uint32_t)0x04000000);
#undef USB_COUNT7_RX_1_NUM_BLOCK_1_1
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1_1 = ((std::uint32_t)0x08000000);
#undef USB_COUNT7_RX_1_NUM_BLOCK_1_2
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1_2 = ((std::uint32_t)0x10000000);
#undef USB_COUNT7_RX_1_NUM_BLOCK_1_3
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1_3 = ((std::uint32_t)0x20000000);
#undef USB_COUNT7_RX_1_NUM_BLOCK_1_4
constexpr auto USB_COUNT7_RX_1_NUM_BLOCK_1_4 = ((std::uint32_t)0x40000000);

#undef USB_COUNT7_RX_1_BLSIZE_1
constexpr auto USB_COUNT7_RX_1_BLSIZE_1 = ((std::uint32_t)0x80000000);

/******************************************************************************/
/*                                                                            */
/*                         Controller Area Network                            */
/*                                                                            */
/******************************************************************************/

/*!< CAN control and status registers */
/*******************  Bit definition for CAN_MCR register  ********************/
#undef CAN_MCR_INRQ
constexpr auto CAN_MCR_INRQ = ((std::uint16_t)0x0001);
#undef CAN_MCR_SLEEP
constexpr auto CAN_MCR_SLEEP = ((std::uint16_t)0x0002);
#undef CAN_MCR_TXFP
constexpr auto CAN_MCR_TXFP = ((std::uint16_t)0x0004);
#undef CAN_MCR_RFLM
constexpr auto CAN_MCR_RFLM = ((std::uint16_t)0x0008);
#undef CAN_MCR_NART
constexpr auto CAN_MCR_NART = ((std::uint16_t)0x0010);
#undef CAN_MCR_AWUM
constexpr auto CAN_MCR_AWUM = ((std::uint16_t)0x0020);
#undef CAN_MCR_ABOM
constexpr auto CAN_MCR_ABOM = ((std::uint16_t)0x0040);
#undef CAN_MCR_TTCM
constexpr auto CAN_MCR_TTCM = ((std::uint16_t)0x0080);
#undef CAN_MCR_RESET
constexpr auto CAN_MCR_RESET = ((std::uint16_t)0x8000);

/*******************  Bit definition for CAN_MSR register  ********************/
#undef CAN_MSR_INAK
constexpr auto CAN_MSR_INAK = ((std::uint16_t)0x0001);
#undef CAN_MSR_SLAK
constexpr auto CAN_MSR_SLAK = ((std::uint16_t)0x0002);
#undef CAN_MSR_ERRI
constexpr auto CAN_MSR_ERRI = ((std::uint16_t)0x0004);
#undef CAN_MSR_WKUI
constexpr auto CAN_MSR_WKUI = ((std::uint16_t)0x0008);
#undef CAN_MSR_SLAKI
constexpr auto CAN_MSR_SLAKI = ((std::uint16_t)0x0010);
#undef CAN_MSR_TXM
constexpr auto CAN_MSR_TXM = ((std::uint16_t)0x0100);
#undef CAN_MSR_RXM
constexpr auto CAN_MSR_RXM = ((std::uint16_t)0x0200);
#undef CAN_MSR_SAMP
constexpr auto CAN_MSR_SAMP = ((std::uint16_t)0x0400);
#undef CAN_MSR_RX
constexpr auto CAN_MSR_RX = ((std::uint16_t)0x0800);

/*******************  Bit definition for CAN_TSR register  ********************/
#undef CAN_TSR_RQCP0
constexpr auto CAN_TSR_RQCP0 = ((std::uint32_t)0x00000001);
#undef CAN_TSR_TXOK0
constexpr auto CAN_TSR_TXOK0 = ((std::uint32_t)0x00000002);
#undef CAN_TSR_ALST0
constexpr auto CAN_TSR_ALST0 = ((std::uint32_t)0x00000004);
#undef CAN_TSR_TERR0
constexpr auto CAN_TSR_TERR0 = ((std::uint32_t)0x00000008);
#undef CAN_TSR_ABRQ0
constexpr auto CAN_TSR_ABRQ0 = ((std::uint32_t)0x00000080);
#undef CAN_TSR_RQCP1
constexpr auto CAN_TSR_RQCP1 = ((std::uint32_t)0x00000100);
#undef CAN_TSR_TXOK1
constexpr auto CAN_TSR_TXOK1 = ((std::uint32_t)0x00000200);
#undef CAN_TSR_ALST1
constexpr auto CAN_TSR_ALST1 = ((std::uint32_t)0x00000400);
#undef CAN_TSR_TERR1
constexpr auto CAN_TSR_TERR1 = ((std::uint32_t)0x00000800);
#undef CAN_TSR_ABRQ1
constexpr auto CAN_TSR_ABRQ1 = ((std::uint32_t)0x00008000);
#undef CAN_TSR_RQCP2
constexpr auto CAN_TSR_RQCP2 = ((std::uint32_t)0x00010000);
#undef CAN_TSR_TXOK2
constexpr auto CAN_TSR_TXOK2 = ((std::uint32_t)0x00020000);
#undef CAN_TSR_ALST2
constexpr auto CAN_TSR_ALST2 = ((std::uint32_t)0x00040000);
#undef CAN_TSR_TERR2
constexpr auto CAN_TSR_TERR2 = ((std::uint32_t)0x00080000);
#undef CAN_TSR_ABRQ2
constexpr auto CAN_TSR_ABRQ2 = ((std::uint32_t)0x00800000);
#undef CAN_TSR_CODE
constexpr auto CAN_TSR_CODE = ((std::uint32_t)0x03000000);

#undef CAN_TSR_TME
constexpr auto CAN_TSR_TME = ((std::uint32_t)0x1C000000);
#undef CAN_TSR_TME0
constexpr auto CAN_TSR_TME0 = ((std::uint32_t)0x04000000);
#undef CAN_TSR_TME1
constexpr auto CAN_TSR_TME1 = ((std::uint32_t)0x08000000);
#undef CAN_TSR_TME2
constexpr auto CAN_TSR_TME2 = ((std::uint32_t)0x10000000);

#undef CAN_TSR_LOW
constexpr auto CAN_TSR_LOW = ((std::uint32_t)0xE0000000);
#undef CAN_TSR_LOW0
constexpr auto CAN_TSR_LOW0 = ((std::uint32_t)0x20000000);
#undef CAN_TSR_LOW1
constexpr auto CAN_TSR_LOW1 = ((std::uint32_t)0x40000000);
#undef CAN_TSR_LOW2
constexpr auto CAN_TSR_LOW2 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_RF0R register  *******************/
#undef CAN_RF0R_FMP0
constexpr auto CAN_RF0R_FMP0 = ((std::uint8_t)0x03);
#undef CAN_RF0R_FULL0
constexpr auto CAN_RF0R_FULL0 = ((std::uint8_t)0x08);
#undef CAN_RF0R_FOVR0
constexpr auto CAN_RF0R_FOVR0 = ((std::uint8_t)0x10);
#undef CAN_RF0R_RFOM0
constexpr auto CAN_RF0R_RFOM0 = ((std::uint8_t)0x20);

/*******************  Bit definition for CAN_RF1R register  *******************/
#undef CAN_RF1R_FMP1
constexpr auto CAN_RF1R_FMP1 = ((std::uint8_t)0x03);
#undef CAN_RF1R_FULL1
constexpr auto CAN_RF1R_FULL1 = ((std::uint8_t)0x08);
#undef CAN_RF1R_FOVR1
constexpr auto CAN_RF1R_FOVR1 = ((std::uint8_t)0x10);
#undef CAN_RF1R_RFOM1
constexpr auto CAN_RF1R_RFOM1 = ((std::uint8_t)0x20);

/********************  Bit definition for CAN_IER register  *******************/
#undef CAN_IER_TMEIE
constexpr auto CAN_IER_TMEIE = ((std::uint32_t)0x00000001);
#undef CAN_IER_FMPIE0
constexpr auto CAN_IER_FMPIE0 = ((std::uint32_t)0x00000002);
#undef CAN_IER_FFIE0
constexpr auto CAN_IER_FFIE0 = ((std::uint32_t)0x00000004);
#undef CAN_IER_FOVIE0
constexpr auto CAN_IER_FOVIE0 = ((std::uint32_t)0x00000008);
#undef CAN_IER_FMPIE1
constexpr auto CAN_IER_FMPIE1 = ((std::uint32_t)0x00000010);
#undef CAN_IER_FFIE1
constexpr auto CAN_IER_FFIE1 = ((std::uint32_t)0x00000020);
#undef CAN_IER_FOVIE1
constexpr auto CAN_IER_FOVIE1 = ((std::uint32_t)0x00000040);
#undef CAN_IER_EWGIE
constexpr auto CAN_IER_EWGIE = ((std::uint32_t)0x00000100);
#undef CAN_IER_EPVIE
constexpr auto CAN_IER_EPVIE = ((std::uint32_t)0x00000200);
#undef CAN_IER_BOFIE
constexpr auto CAN_IER_BOFIE = ((std::uint32_t)0x00000400);
#undef CAN_IER_LECIE
constexpr auto CAN_IER_LECIE = ((std::uint32_t)0x00000800);
#undef CAN_IER_ERRIE
constexpr auto CAN_IER_ERRIE = ((std::uint32_t)0x00008000);
#undef CAN_IER_WKUIE
constexpr auto CAN_IER_WKUIE = ((std::uint32_t)0x00010000);
#undef CAN_IER_SLKIE
constexpr auto CAN_IER_SLKIE = ((std::uint32_t)0x00020000);

/********************  Bit definition for CAN_ESR register  *******************/
#undef CAN_ESR_EWGF
constexpr auto CAN_ESR_EWGF = ((std::uint32_t)0x00000001);
#undef CAN_ESR_EPVF
constexpr auto CAN_ESR_EPVF = ((std::uint32_t)0x00000002);
#undef CAN_ESR_BOFF
constexpr auto CAN_ESR_BOFF = ((std::uint32_t)0x00000004);

#undef CAN_ESR_LEC
constexpr auto CAN_ESR_LEC = ((std::uint32_t)0x00000070);
#undef CAN_ESR_LEC_0
constexpr auto CAN_ESR_LEC_0 = ((std::uint32_t)0x00000010);
#undef CAN_ESR_LEC_1
constexpr auto CAN_ESR_LEC_1 = ((std::uint32_t)0x00000020);
#undef CAN_ESR_LEC_2
constexpr auto CAN_ESR_LEC_2 = ((std::uint32_t)0x00000040);

#undef CAN_ESR_TEC
constexpr auto CAN_ESR_TEC = ((std::uint32_t)0x00FF0000);
#undef CAN_ESR_REC
constexpr auto CAN_ESR_REC = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_BTR register  ********************/
#undef CAN_BTR_BRP
constexpr auto CAN_BTR_BRP = ((std::uint32_t)0x000003FF);
#undef CAN_BTR_TS1
constexpr auto CAN_BTR_TS1 = ((std::uint32_t)0x000F0000);
#undef CAN_BTR_TS2
constexpr auto CAN_BTR_TS2 = ((std::uint32_t)0x00700000);
#undef CAN_BTR_SJW
constexpr auto CAN_BTR_SJW = ((std::uint32_t)0x03000000);
#undef CAN_BTR_LBKM
constexpr auto CAN_BTR_LBKM = ((std::uint32_t)0x40000000);
#undef CAN_BTR_SILM
constexpr auto CAN_BTR_SILM = ((std::uint32_t)0x80000000);

/*!< Mailbox registers */
/******************  Bit definition for CAN_TI0R register  ********************/
#undef CAN_TI0R_TXRQ
constexpr auto CAN_TI0R_TXRQ = ((std::uint32_t)0x00000001);
#undef CAN_TI0R_RTR
constexpr auto CAN_TI0R_RTR = ((std::uint32_t)0x00000002);
#undef CAN_TI0R_IDE
constexpr auto CAN_TI0R_IDE = ((std::uint32_t)0x00000004);
#undef CAN_TI0R_EXID
constexpr auto CAN_TI0R_EXID = ((std::uint32_t)0x001FFFF8);
#undef CAN_TI0R_STID
constexpr auto CAN_TI0R_STID = ((std::uint32_t)0xFFE00000);

/******************  Bit definition for CAN_TDT0R register  *******************/
#undef CAN_TDT0R_DLC
constexpr auto CAN_TDT0R_DLC = ((std::uint32_t)0x0000000F);
#undef CAN_TDT0R_TGT
constexpr auto CAN_TDT0R_TGT = ((std::uint32_t)0x00000100);
#undef CAN_TDT0R_TIME
constexpr auto CAN_TDT0R_TIME = ((std::uint32_t)0xFFFF0000);

/******************  Bit definition for CAN_TDL0R register  *******************/
#undef CAN_TDL0R_DATA0
constexpr auto CAN_TDL0R_DATA0 = ((std::uint32_t)0x000000FF);
#undef CAN_TDL0R_DATA1
constexpr auto CAN_TDL0R_DATA1 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDL0R_DATA2
constexpr auto CAN_TDL0R_DATA2 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDL0R_DATA3
constexpr auto CAN_TDL0R_DATA3 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for CAN_TDH0R register  *******************/
#undef CAN_TDH0R_DATA4
constexpr auto CAN_TDH0R_DATA4 = ((std::uint32_t)0x000000FF);
#undef CAN_TDH0R_DATA5
constexpr auto CAN_TDH0R_DATA5 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDH0R_DATA6
constexpr auto CAN_TDH0R_DATA6 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDH0R_DATA7
constexpr auto CAN_TDH0R_DATA7 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_TI1R register  *******************/
#undef CAN_TI1R_TXRQ
constexpr auto CAN_TI1R_TXRQ = ((std::uint32_t)0x00000001);
#undef CAN_TI1R_RTR
constexpr auto CAN_TI1R_RTR = ((std::uint32_t)0x00000002);
#undef CAN_TI1R_IDE
constexpr auto CAN_TI1R_IDE = ((std::uint32_t)0x00000004);
#undef CAN_TI1R_EXID
constexpr auto CAN_TI1R_EXID = ((std::uint32_t)0x001FFFF8);
#undef CAN_TI1R_STID
constexpr auto CAN_TI1R_STID = ((std::uint32_t)0xFFE00000);

/*******************  Bit definition for CAN_TDT1R register  ******************/
#undef CAN_TDT1R_DLC
constexpr auto CAN_TDT1R_DLC = ((std::uint32_t)0x0000000F);
#undef CAN_TDT1R_TGT
constexpr auto CAN_TDT1R_TGT = ((std::uint32_t)0x00000100);
#undef CAN_TDT1R_TIME
constexpr auto CAN_TDT1R_TIME = ((std::uint32_t)0xFFFF0000);

/*******************  Bit definition for CAN_TDL1R register  ******************/
#undef CAN_TDL1R_DATA0
constexpr auto CAN_TDL1R_DATA0 = ((std::uint32_t)0x000000FF);
#undef CAN_TDL1R_DATA1
constexpr auto CAN_TDL1R_DATA1 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDL1R_DATA2
constexpr auto CAN_TDL1R_DATA2 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDL1R_DATA3
constexpr auto CAN_TDL1R_DATA3 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_TDH1R register  ******************/
#undef CAN_TDH1R_DATA4
constexpr auto CAN_TDH1R_DATA4 = ((std::uint32_t)0x000000FF);
#undef CAN_TDH1R_DATA5
constexpr auto CAN_TDH1R_DATA5 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDH1R_DATA6
constexpr auto CAN_TDH1R_DATA6 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDH1R_DATA7
constexpr auto CAN_TDH1R_DATA7 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_TI2R register  *******************/
#undef CAN_TI2R_TXRQ
constexpr auto CAN_TI2R_TXRQ = ((std::uint32_t)0x00000001);
#undef CAN_TI2R_RTR
constexpr auto CAN_TI2R_RTR = ((std::uint32_t)0x00000002);
#undef CAN_TI2R_IDE
constexpr auto CAN_TI2R_IDE = ((std::uint32_t)0x00000004);
#undef CAN_TI2R_EXID
constexpr auto CAN_TI2R_EXID = ((std::uint32_t)0x001FFFF8);
#undef CAN_TI2R_STID
constexpr auto CAN_TI2R_STID = ((std::uint32_t)0xFFE00000);

/*******************  Bit definition for CAN_TDT2R register  ******************/
#undef CAN_TDT2R_DLC
constexpr auto CAN_TDT2R_DLC = ((std::uint32_t)0x0000000F);
#undef CAN_TDT2R_TGT
constexpr auto CAN_TDT2R_TGT = ((std::uint32_t)0x00000100);
#undef CAN_TDT2R_TIME
constexpr auto CAN_TDT2R_TIME = ((std::uint32_t)0xFFFF0000);

/*******************  Bit definition for CAN_TDL2R register  ******************/
#undef CAN_TDL2R_DATA0
constexpr auto CAN_TDL2R_DATA0 = ((std::uint32_t)0x000000FF);
#undef CAN_TDL2R_DATA1
constexpr auto CAN_TDL2R_DATA1 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDL2R_DATA2
constexpr auto CAN_TDL2R_DATA2 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDL2R_DATA3
constexpr auto CAN_TDL2R_DATA3 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_TDH2R register  ******************/
#undef CAN_TDH2R_DATA4
constexpr auto CAN_TDH2R_DATA4 = ((std::uint32_t)0x000000FF);
#undef CAN_TDH2R_DATA5
constexpr auto CAN_TDH2R_DATA5 = ((std::uint32_t)0x0000FF00);
#undef CAN_TDH2R_DATA6
constexpr auto CAN_TDH2R_DATA6 = ((std::uint32_t)0x00FF0000);
#undef CAN_TDH2R_DATA7
constexpr auto CAN_TDH2R_DATA7 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_RI0R register  *******************/
#undef CAN_RI0R_RTR
constexpr auto CAN_RI0R_RTR = ((std::uint32_t)0x00000002);
#undef CAN_RI0R_IDE
constexpr auto CAN_RI0R_IDE = ((std::uint32_t)0x00000004);
#undef CAN_RI0R_EXID
constexpr auto CAN_RI0R_EXID = ((std::uint32_t)0x001FFFF8);
#undef CAN_RI0R_STID
constexpr auto CAN_RI0R_STID = ((std::uint32_t)0xFFE00000);

/*******************  Bit definition for CAN_RDT0R register  ******************/
#undef CAN_RDT0R_DLC
constexpr auto CAN_RDT0R_DLC = ((std::uint32_t)0x0000000F);
#undef CAN_RDT0R_FMI
constexpr auto CAN_RDT0R_FMI = ((std::uint32_t)0x0000FF00);
#undef CAN_RDT0R_TIME
constexpr auto CAN_RDT0R_TIME = ((std::uint32_t)0xFFFF0000);

/*******************  Bit definition for CAN_RDL0R register  ******************/
#undef CAN_RDL0R_DATA0
constexpr auto CAN_RDL0R_DATA0 = ((std::uint32_t)0x000000FF);
#undef CAN_RDL0R_DATA1
constexpr auto CAN_RDL0R_DATA1 = ((std::uint32_t)0x0000FF00);
#undef CAN_RDL0R_DATA2
constexpr auto CAN_RDL0R_DATA2 = ((std::uint32_t)0x00FF0000);
#undef CAN_RDL0R_DATA3
constexpr auto CAN_RDL0R_DATA3 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_RDH0R register  ******************/
#undef CAN_RDH0R_DATA4
constexpr auto CAN_RDH0R_DATA4 = ((std::uint32_t)0x000000FF);
#undef CAN_RDH0R_DATA5
constexpr auto CAN_RDH0R_DATA5 = ((std::uint32_t)0x0000FF00);
#undef CAN_RDH0R_DATA6
constexpr auto CAN_RDH0R_DATA6 = ((std::uint32_t)0x00FF0000);
#undef CAN_RDH0R_DATA7
constexpr auto CAN_RDH0R_DATA7 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_RI1R register  *******************/
#undef CAN_RI1R_RTR
constexpr auto CAN_RI1R_RTR = ((std::uint32_t)0x00000002);
#undef CAN_RI1R_IDE
constexpr auto CAN_RI1R_IDE = ((std::uint32_t)0x00000004);
#undef CAN_RI1R_EXID
constexpr auto CAN_RI1R_EXID = ((std::uint32_t)0x001FFFF8);
#undef CAN_RI1R_STID
constexpr auto CAN_RI1R_STID = ((std::uint32_t)0xFFE00000);

/*******************  Bit definition for CAN_RDT1R register  ******************/
#undef CAN_RDT1R_DLC
constexpr auto CAN_RDT1R_DLC = ((std::uint32_t)0x0000000F);
#undef CAN_RDT1R_FMI
constexpr auto CAN_RDT1R_FMI = ((std::uint32_t)0x0000FF00);
#undef CAN_RDT1R_TIME
constexpr auto CAN_RDT1R_TIME = ((std::uint32_t)0xFFFF0000);

/*******************  Bit definition for CAN_RDL1R register  ******************/
#undef CAN_RDL1R_DATA0
constexpr auto CAN_RDL1R_DATA0 = ((std::uint32_t)0x000000FF);
#undef CAN_RDL1R_DATA1
constexpr auto CAN_RDL1R_DATA1 = ((std::uint32_t)0x0000FF00);
#undef CAN_RDL1R_DATA2
constexpr auto CAN_RDL1R_DATA2 = ((std::uint32_t)0x00FF0000);
#undef CAN_RDL1R_DATA3
constexpr auto CAN_RDL1R_DATA3 = ((std::uint32_t)0xFF000000);

/*******************  Bit definition for CAN_RDH1R register  ******************/
#undef CAN_RDH1R_DATA4
constexpr auto CAN_RDH1R_DATA4 = ((std::uint32_t)0x000000FF);
#undef CAN_RDH1R_DATA5
constexpr auto CAN_RDH1R_DATA5 = ((std::uint32_t)0x0000FF00);
#undef CAN_RDH1R_DATA6
constexpr auto CAN_RDH1R_DATA6 = ((std::uint32_t)0x00FF0000);
#undef CAN_RDH1R_DATA7
constexpr auto CAN_RDH1R_DATA7 = ((std::uint32_t)0xFF000000);

/*!< CAN filter registers */
/*******************  Bit definition for CAN_FMR register  ********************/
#undef CAN_FMR_FINIT
constexpr auto CAN_FMR_FINIT = ((std::uint8_t)0x01);

/*******************  Bit definition for CAN_FM1R register  *******************/
#undef CAN_FM1R_FBM
constexpr auto CAN_FM1R_FBM = ((std::uint16_t)0x3FFF);
#undef CAN_FM1R_FBM0
constexpr auto CAN_FM1R_FBM0 = ((std::uint16_t)0x0001);
#undef CAN_FM1R_FBM1
constexpr auto CAN_FM1R_FBM1 = ((std::uint16_t)0x0002);
#undef CAN_FM1R_FBM2
constexpr auto CAN_FM1R_FBM2 = ((std::uint16_t)0x0004);
#undef CAN_FM1R_FBM3
constexpr auto CAN_FM1R_FBM3 = ((std::uint16_t)0x0008);
#undef CAN_FM1R_FBM4
constexpr auto CAN_FM1R_FBM4 = ((std::uint16_t)0x0010);
#undef CAN_FM1R_FBM5
constexpr auto CAN_FM1R_FBM5 = ((std::uint16_t)0x0020);
#undef CAN_FM1R_FBM6
constexpr auto CAN_FM1R_FBM6 = ((std::uint16_t)0x0040);
#undef CAN_FM1R_FBM7
constexpr auto CAN_FM1R_FBM7 = ((std::uint16_t)0x0080);
#undef CAN_FM1R_FBM8
constexpr auto CAN_FM1R_FBM8 = ((std::uint16_t)0x0100);
#undef CAN_FM1R_FBM9
constexpr auto CAN_FM1R_FBM9 = ((std::uint16_t)0x0200);
#undef CAN_FM1R_FBM10
constexpr auto CAN_FM1R_FBM10 = ((std::uint16_t)0x0400);
#undef CAN_FM1R_FBM11
constexpr auto CAN_FM1R_FBM11 = ((std::uint16_t)0x0800);
#undef CAN_FM1R_FBM12
constexpr auto CAN_FM1R_FBM12 = ((std::uint16_t)0x1000);
#undef CAN_FM1R_FBM13
constexpr auto CAN_FM1R_FBM13 = ((std::uint16_t)0x2000);

/*******************  Bit definition for CAN_FS1R register  *******************/
#undef CAN_FS1R_FSC
constexpr auto CAN_FS1R_FSC = ((std::uint16_t)0x3FFF);
#undef CAN_FS1R_FSC0
constexpr auto CAN_FS1R_FSC0 = ((std::uint16_t)0x0001);
#undef CAN_FS1R_FSC1
constexpr auto CAN_FS1R_FSC1 = ((std::uint16_t)0x0002);
#undef CAN_FS1R_FSC2
constexpr auto CAN_FS1R_FSC2 = ((std::uint16_t)0x0004);
#undef CAN_FS1R_FSC3
constexpr auto CAN_FS1R_FSC3 = ((std::uint16_t)0x0008);
#undef CAN_FS1R_FSC4
constexpr auto CAN_FS1R_FSC4 = ((std::uint16_t)0x0010);
#undef CAN_FS1R_FSC5
constexpr auto CAN_FS1R_FSC5 = ((std::uint16_t)0x0020);
#undef CAN_FS1R_FSC6
constexpr auto CAN_FS1R_FSC6 = ((std::uint16_t)0x0040);
#undef CAN_FS1R_FSC7
constexpr auto CAN_FS1R_FSC7 = ((std::uint16_t)0x0080);
#undef CAN_FS1R_FSC8
constexpr auto CAN_FS1R_FSC8 = ((std::uint16_t)0x0100);
#undef CAN_FS1R_FSC9
constexpr auto CAN_FS1R_FSC9 = ((std::uint16_t)0x0200);
#undef CAN_FS1R_FSC10
constexpr auto CAN_FS1R_FSC10 = ((std::uint16_t)0x0400);
#undef CAN_FS1R_FSC11
constexpr auto CAN_FS1R_FSC11 = ((std::uint16_t)0x0800);
#undef CAN_FS1R_FSC12
constexpr auto CAN_FS1R_FSC12 = ((std::uint16_t)0x1000);
#undef CAN_FS1R_FSC13
constexpr auto CAN_FS1R_FSC13 = ((std::uint16_t)0x2000);

/******************  Bit definition for CAN_FFA1R register  *******************/
#undef CAN_FFA1R_FFA
constexpr auto CAN_FFA1R_FFA = ((std::uint16_t)0x3FFF);
#undef CAN_FFA1R_FFA0
constexpr auto CAN_FFA1R_FFA0 = ((std::uint16_t)0x0001);
#undef CAN_FFA1R_FFA1
constexpr auto CAN_FFA1R_FFA1 = ((std::uint16_t)0x0002);
#undef CAN_FFA1R_FFA2
constexpr auto CAN_FFA1R_FFA2 = ((std::uint16_t)0x0004);
#undef CAN_FFA1R_FFA3
constexpr auto CAN_FFA1R_FFA3 = ((std::uint16_t)0x0008);
#undef CAN_FFA1R_FFA4
constexpr auto CAN_FFA1R_FFA4 = ((std::uint16_t)0x0010);
#undef CAN_FFA1R_FFA5
constexpr auto CAN_FFA1R_FFA5 = ((std::uint16_t)0x0020);
#undef CAN_FFA1R_FFA6
constexpr auto CAN_FFA1R_FFA6 = ((std::uint16_t)0x0040);
#undef CAN_FFA1R_FFA7
constexpr auto CAN_FFA1R_FFA7 = ((std::uint16_t)0x0080);
#undef CAN_FFA1R_FFA8
constexpr auto CAN_FFA1R_FFA8 = ((std::uint16_t)0x0100);
#undef CAN_FFA1R_FFA9
constexpr auto CAN_FFA1R_FFA9 = ((std::uint16_t)0x0200);
#undef CAN_FFA1R_FFA10
constexpr auto CAN_FFA1R_FFA10 = ((std::uint16_t)0x0400);
#undef CAN_FFA1R_FFA11
constexpr auto CAN_FFA1R_FFA11 = ((std::uint16_t)0x0800);
#undef CAN_FFA1R_FFA12
constexpr auto CAN_FFA1R_FFA12 = ((std::uint16_t)0x1000);
#undef CAN_FFA1R_FFA13
constexpr auto CAN_FFA1R_FFA13 = ((std::uint16_t)0x2000);

/*******************  Bit definition for CAN_FA1R register  *******************/
#undef CAN_FA1R_FACT
constexpr auto CAN_FA1R_FACT = ((std::uint16_t)0x3FFF);
#undef CAN_FA1R_FACT0
constexpr auto CAN_FA1R_FACT0 = ((std::uint16_t)0x0001);
#undef CAN_FA1R_FACT1
constexpr auto CAN_FA1R_FACT1 = ((std::uint16_t)0x0002);
#undef CAN_FA1R_FACT2
constexpr auto CAN_FA1R_FACT2 = ((std::uint16_t)0x0004);
#undef CAN_FA1R_FACT3
constexpr auto CAN_FA1R_FACT3 = ((std::uint16_t)0x0008);
#undef CAN_FA1R_FACT4
constexpr auto CAN_FA1R_FACT4 = ((std::uint16_t)0x0010);
#undef CAN_FA1R_FACT5
constexpr auto CAN_FA1R_FACT5 = ((std::uint16_t)0x0020);
#undef CAN_FA1R_FACT6
constexpr auto CAN_FA1R_FACT6 = ((std::uint16_t)0x0040);
#undef CAN_FA1R_FACT7
constexpr auto CAN_FA1R_FACT7 = ((std::uint16_t)0x0080);
#undef CAN_FA1R_FACT8
constexpr auto CAN_FA1R_FACT8 = ((std::uint16_t)0x0100);
#undef CAN_FA1R_FACT9
constexpr auto CAN_FA1R_FACT9 = ((std::uint16_t)0x0200);
#undef CAN_FA1R_FACT10
constexpr auto CAN_FA1R_FACT10 = ((std::uint16_t)0x0400);
#undef CAN_FA1R_FACT11
constexpr auto CAN_FA1R_FACT11 = ((std::uint16_t)0x0800);
#undef CAN_FA1R_FACT12
constexpr auto CAN_FA1R_FACT12 = ((std::uint16_t)0x1000);
#undef CAN_FA1R_FACT13
constexpr auto CAN_FA1R_FACT13 = ((std::uint16_t)0x2000);

/*******************  Bit definition for CAN_F0R1 register  *******************/
#undef CAN_F0R1_FB0
constexpr auto CAN_F0R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F0R1_FB1
constexpr auto CAN_F0R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F0R1_FB2
constexpr auto CAN_F0R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F0R1_FB3
constexpr auto CAN_F0R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F0R1_FB4
constexpr auto CAN_F0R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F0R1_FB5
constexpr auto CAN_F0R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F0R1_FB6
constexpr auto CAN_F0R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F0R1_FB7
constexpr auto CAN_F0R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F0R1_FB8
constexpr auto CAN_F0R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F0R1_FB9
constexpr auto CAN_F0R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F0R1_FB10
constexpr auto CAN_F0R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F0R1_FB11
constexpr auto CAN_F0R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F0R1_FB12
constexpr auto CAN_F0R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F0R1_FB13
constexpr auto CAN_F0R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F0R1_FB14
constexpr auto CAN_F0R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F0R1_FB15
constexpr auto CAN_F0R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F0R1_FB16
constexpr auto CAN_F0R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F0R1_FB17
constexpr auto CAN_F0R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F0R1_FB18
constexpr auto CAN_F0R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F0R1_FB19
constexpr auto CAN_F0R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F0R1_FB20
constexpr auto CAN_F0R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F0R1_FB21
constexpr auto CAN_F0R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F0R1_FB22
constexpr auto CAN_F0R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F0R1_FB23
constexpr auto CAN_F0R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F0R1_FB24
constexpr auto CAN_F0R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F0R1_FB25
constexpr auto CAN_F0R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F0R1_FB26
constexpr auto CAN_F0R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F0R1_FB27
constexpr auto CAN_F0R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F0R1_FB28
constexpr auto CAN_F0R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F0R1_FB29
constexpr auto CAN_F0R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F0R1_FB30
constexpr auto CAN_F0R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F0R1_FB31
constexpr auto CAN_F0R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F1R1 register  *******************/
#undef CAN_F1R1_FB0
constexpr auto CAN_F1R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F1R1_FB1
constexpr auto CAN_F1R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F1R1_FB2
constexpr auto CAN_F1R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F1R1_FB3
constexpr auto CAN_F1R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F1R1_FB4
constexpr auto CAN_F1R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F1R1_FB5
constexpr auto CAN_F1R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F1R1_FB6
constexpr auto CAN_F1R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F1R1_FB7
constexpr auto CAN_F1R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F1R1_FB8
constexpr auto CAN_F1R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F1R1_FB9
constexpr auto CAN_F1R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F1R1_FB10
constexpr auto CAN_F1R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F1R1_FB11
constexpr auto CAN_F1R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F1R1_FB12
constexpr auto CAN_F1R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F1R1_FB13
constexpr auto CAN_F1R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F1R1_FB14
constexpr auto CAN_F1R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F1R1_FB15
constexpr auto CAN_F1R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F1R1_FB16
constexpr auto CAN_F1R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F1R1_FB17
constexpr auto CAN_F1R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F1R1_FB18
constexpr auto CAN_F1R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F1R1_FB19
constexpr auto CAN_F1R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F1R1_FB20
constexpr auto CAN_F1R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F1R1_FB21
constexpr auto CAN_F1R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F1R1_FB22
constexpr auto CAN_F1R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F1R1_FB23
constexpr auto CAN_F1R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F1R1_FB24
constexpr auto CAN_F1R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F1R1_FB25
constexpr auto CAN_F1R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F1R1_FB26
constexpr auto CAN_F1R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F1R1_FB27
constexpr auto CAN_F1R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F1R1_FB28
constexpr auto CAN_F1R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F1R1_FB29
constexpr auto CAN_F1R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F1R1_FB30
constexpr auto CAN_F1R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F1R1_FB31
constexpr auto CAN_F1R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F2R1 register  *******************/
#undef CAN_F2R1_FB0
constexpr auto CAN_F2R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F2R1_FB1
constexpr auto CAN_F2R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F2R1_FB2
constexpr auto CAN_F2R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F2R1_FB3
constexpr auto CAN_F2R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F2R1_FB4
constexpr auto CAN_F2R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F2R1_FB5
constexpr auto CAN_F2R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F2R1_FB6
constexpr auto CAN_F2R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F2R1_FB7
constexpr auto CAN_F2R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F2R1_FB8
constexpr auto CAN_F2R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F2R1_FB9
constexpr auto CAN_F2R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F2R1_FB10
constexpr auto CAN_F2R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F2R1_FB11
constexpr auto CAN_F2R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F2R1_FB12
constexpr auto CAN_F2R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F2R1_FB13
constexpr auto CAN_F2R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F2R1_FB14
constexpr auto CAN_F2R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F2R1_FB15
constexpr auto CAN_F2R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F2R1_FB16
constexpr auto CAN_F2R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F2R1_FB17
constexpr auto CAN_F2R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F2R1_FB18
constexpr auto CAN_F2R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F2R1_FB19
constexpr auto CAN_F2R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F2R1_FB20
constexpr auto CAN_F2R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F2R1_FB21
constexpr auto CAN_F2R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F2R1_FB22
constexpr auto CAN_F2R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F2R1_FB23
constexpr auto CAN_F2R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F2R1_FB24
constexpr auto CAN_F2R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F2R1_FB25
constexpr auto CAN_F2R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F2R1_FB26
constexpr auto CAN_F2R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F2R1_FB27
constexpr auto CAN_F2R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F2R1_FB28
constexpr auto CAN_F2R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F2R1_FB29
constexpr auto CAN_F2R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F2R1_FB30
constexpr auto CAN_F2R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F2R1_FB31
constexpr auto CAN_F2R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F3R1 register  *******************/
#undef CAN_F3R1_FB0
constexpr auto CAN_F3R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F3R1_FB1
constexpr auto CAN_F3R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F3R1_FB2
constexpr auto CAN_F3R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F3R1_FB3
constexpr auto CAN_F3R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F3R1_FB4
constexpr auto CAN_F3R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F3R1_FB5
constexpr auto CAN_F3R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F3R1_FB6
constexpr auto CAN_F3R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F3R1_FB7
constexpr auto CAN_F3R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F3R1_FB8
constexpr auto CAN_F3R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F3R1_FB9
constexpr auto CAN_F3R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F3R1_FB10
constexpr auto CAN_F3R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F3R1_FB11
constexpr auto CAN_F3R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F3R1_FB12
constexpr auto CAN_F3R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F3R1_FB13
constexpr auto CAN_F3R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F3R1_FB14
constexpr auto CAN_F3R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F3R1_FB15
constexpr auto CAN_F3R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F3R1_FB16
constexpr auto CAN_F3R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F3R1_FB17
constexpr auto CAN_F3R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F3R1_FB18
constexpr auto CAN_F3R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F3R1_FB19
constexpr auto CAN_F3R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F3R1_FB20
constexpr auto CAN_F3R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F3R1_FB21
constexpr auto CAN_F3R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F3R1_FB22
constexpr auto CAN_F3R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F3R1_FB23
constexpr auto CAN_F3R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F3R1_FB24
constexpr auto CAN_F3R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F3R1_FB25
constexpr auto CAN_F3R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F3R1_FB26
constexpr auto CAN_F3R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F3R1_FB27
constexpr auto CAN_F3R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F3R1_FB28
constexpr auto CAN_F3R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F3R1_FB29
constexpr auto CAN_F3R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F3R1_FB30
constexpr auto CAN_F3R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F3R1_FB31
constexpr auto CAN_F3R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F4R1 register  *******************/
#undef CAN_F4R1_FB0
constexpr auto CAN_F4R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F4R1_FB1
constexpr auto CAN_F4R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F4R1_FB2
constexpr auto CAN_F4R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F4R1_FB3
constexpr auto CAN_F4R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F4R1_FB4
constexpr auto CAN_F4R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F4R1_FB5
constexpr auto CAN_F4R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F4R1_FB6
constexpr auto CAN_F4R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F4R1_FB7
constexpr auto CAN_F4R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F4R1_FB8
constexpr auto CAN_F4R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F4R1_FB9
constexpr auto CAN_F4R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F4R1_FB10
constexpr auto CAN_F4R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F4R1_FB11
constexpr auto CAN_F4R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F4R1_FB12
constexpr auto CAN_F4R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F4R1_FB13
constexpr auto CAN_F4R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F4R1_FB14
constexpr auto CAN_F4R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F4R1_FB15
constexpr auto CAN_F4R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F4R1_FB16
constexpr auto CAN_F4R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F4R1_FB17
constexpr auto CAN_F4R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F4R1_FB18
constexpr auto CAN_F4R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F4R1_FB19
constexpr auto CAN_F4R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F4R1_FB20
constexpr auto CAN_F4R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F4R1_FB21
constexpr auto CAN_F4R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F4R1_FB22
constexpr auto CAN_F4R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F4R1_FB23
constexpr auto CAN_F4R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F4R1_FB24
constexpr auto CAN_F4R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F4R1_FB25
constexpr auto CAN_F4R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F4R1_FB26
constexpr auto CAN_F4R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F4R1_FB27
constexpr auto CAN_F4R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F4R1_FB28
constexpr auto CAN_F4R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F4R1_FB29
constexpr auto CAN_F4R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F4R1_FB30
constexpr auto CAN_F4R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F4R1_FB31
constexpr auto CAN_F4R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F5R1 register  *******************/
#undef CAN_F5R1_FB0
constexpr auto CAN_F5R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F5R1_FB1
constexpr auto CAN_F5R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F5R1_FB2
constexpr auto CAN_F5R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F5R1_FB3
constexpr auto CAN_F5R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F5R1_FB4
constexpr auto CAN_F5R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F5R1_FB5
constexpr auto CAN_F5R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F5R1_FB6
constexpr auto CAN_F5R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F5R1_FB7
constexpr auto CAN_F5R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F5R1_FB8
constexpr auto CAN_F5R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F5R1_FB9
constexpr auto CAN_F5R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F5R1_FB10
constexpr auto CAN_F5R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F5R1_FB11
constexpr auto CAN_F5R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F5R1_FB12
constexpr auto CAN_F5R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F5R1_FB13
constexpr auto CAN_F5R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F5R1_FB14
constexpr auto CAN_F5R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F5R1_FB15
constexpr auto CAN_F5R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F5R1_FB16
constexpr auto CAN_F5R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F5R1_FB17
constexpr auto CAN_F5R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F5R1_FB18
constexpr auto CAN_F5R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F5R1_FB19
constexpr auto CAN_F5R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F5R1_FB20
constexpr auto CAN_F5R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F5R1_FB21
constexpr auto CAN_F5R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F5R1_FB22
constexpr auto CAN_F5R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F5R1_FB23
constexpr auto CAN_F5R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F5R1_FB24
constexpr auto CAN_F5R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F5R1_FB25
constexpr auto CAN_F5R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F5R1_FB26
constexpr auto CAN_F5R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F5R1_FB27
constexpr auto CAN_F5R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F5R1_FB28
constexpr auto CAN_F5R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F5R1_FB29
constexpr auto CAN_F5R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F5R1_FB30
constexpr auto CAN_F5R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F5R1_FB31
constexpr auto CAN_F5R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F6R1 register  *******************/
#undef CAN_F6R1_FB0
constexpr auto CAN_F6R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F6R1_FB1
constexpr auto CAN_F6R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F6R1_FB2
constexpr auto CAN_F6R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F6R1_FB3
constexpr auto CAN_F6R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F6R1_FB4
constexpr auto CAN_F6R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F6R1_FB5
constexpr auto CAN_F6R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F6R1_FB6
constexpr auto CAN_F6R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F6R1_FB7
constexpr auto CAN_F6R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F6R1_FB8
constexpr auto CAN_F6R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F6R1_FB9
constexpr auto CAN_F6R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F6R1_FB10
constexpr auto CAN_F6R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F6R1_FB11
constexpr auto CAN_F6R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F6R1_FB12
constexpr auto CAN_F6R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F6R1_FB13
constexpr auto CAN_F6R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F6R1_FB14
constexpr auto CAN_F6R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F6R1_FB15
constexpr auto CAN_F6R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F6R1_FB16
constexpr auto CAN_F6R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F6R1_FB17
constexpr auto CAN_F6R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F6R1_FB18
constexpr auto CAN_F6R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F6R1_FB19
constexpr auto CAN_F6R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F6R1_FB20
constexpr auto CAN_F6R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F6R1_FB21
constexpr auto CAN_F6R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F6R1_FB22
constexpr auto CAN_F6R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F6R1_FB23
constexpr auto CAN_F6R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F6R1_FB24
constexpr auto CAN_F6R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F6R1_FB25
constexpr auto CAN_F6R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F6R1_FB26
constexpr auto CAN_F6R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F6R1_FB27
constexpr auto CAN_F6R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F6R1_FB28
constexpr auto CAN_F6R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F6R1_FB29
constexpr auto CAN_F6R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F6R1_FB30
constexpr auto CAN_F6R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F6R1_FB31
constexpr auto CAN_F6R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F7R1 register  *******************/
#undef CAN_F7R1_FB0
constexpr auto CAN_F7R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F7R1_FB1
constexpr auto CAN_F7R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F7R1_FB2
constexpr auto CAN_F7R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F7R1_FB3
constexpr auto CAN_F7R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F7R1_FB4
constexpr auto CAN_F7R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F7R1_FB5
constexpr auto CAN_F7R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F7R1_FB6
constexpr auto CAN_F7R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F7R1_FB7
constexpr auto CAN_F7R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F7R1_FB8
constexpr auto CAN_F7R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F7R1_FB9
constexpr auto CAN_F7R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F7R1_FB10
constexpr auto CAN_F7R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F7R1_FB11
constexpr auto CAN_F7R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F7R1_FB12
constexpr auto CAN_F7R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F7R1_FB13
constexpr auto CAN_F7R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F7R1_FB14
constexpr auto CAN_F7R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F7R1_FB15
constexpr auto CAN_F7R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F7R1_FB16
constexpr auto CAN_F7R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F7R1_FB17
constexpr auto CAN_F7R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F7R1_FB18
constexpr auto CAN_F7R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F7R1_FB19
constexpr auto CAN_F7R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F7R1_FB20
constexpr auto CAN_F7R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F7R1_FB21
constexpr auto CAN_F7R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F7R1_FB22
constexpr auto CAN_F7R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F7R1_FB23
constexpr auto CAN_F7R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F7R1_FB24
constexpr auto CAN_F7R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F7R1_FB25
constexpr auto CAN_F7R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F7R1_FB26
constexpr auto CAN_F7R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F7R1_FB27
constexpr auto CAN_F7R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F7R1_FB28
constexpr auto CAN_F7R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F7R1_FB29
constexpr auto CAN_F7R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F7R1_FB30
constexpr auto CAN_F7R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F7R1_FB31
constexpr auto CAN_F7R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F8R1 register  *******************/
#undef CAN_F8R1_FB0
constexpr auto CAN_F8R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F8R1_FB1
constexpr auto CAN_F8R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F8R1_FB2
constexpr auto CAN_F8R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F8R1_FB3
constexpr auto CAN_F8R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F8R1_FB4
constexpr auto CAN_F8R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F8R1_FB5
constexpr auto CAN_F8R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F8R1_FB6
constexpr auto CAN_F8R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F8R1_FB7
constexpr auto CAN_F8R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F8R1_FB8
constexpr auto CAN_F8R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F8R1_FB9
constexpr auto CAN_F8R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F8R1_FB10
constexpr auto CAN_F8R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F8R1_FB11
constexpr auto CAN_F8R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F8R1_FB12
constexpr auto CAN_F8R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F8R1_FB13
constexpr auto CAN_F8R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F8R1_FB14
constexpr auto CAN_F8R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F8R1_FB15
constexpr auto CAN_F8R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F8R1_FB16
constexpr auto CAN_F8R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F8R1_FB17
constexpr auto CAN_F8R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F8R1_FB18
constexpr auto CAN_F8R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F8R1_FB19
constexpr auto CAN_F8R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F8R1_FB20
constexpr auto CAN_F8R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F8R1_FB21
constexpr auto CAN_F8R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F8R1_FB22
constexpr auto CAN_F8R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F8R1_FB23
constexpr auto CAN_F8R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F8R1_FB24
constexpr auto CAN_F8R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F8R1_FB25
constexpr auto CAN_F8R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F8R1_FB26
constexpr auto CAN_F8R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F8R1_FB27
constexpr auto CAN_F8R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F8R1_FB28
constexpr auto CAN_F8R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F8R1_FB29
constexpr auto CAN_F8R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F8R1_FB30
constexpr auto CAN_F8R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F8R1_FB31
constexpr auto CAN_F8R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F9R1 register  *******************/
#undef CAN_F9R1_FB0
constexpr auto CAN_F9R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F9R1_FB1
constexpr auto CAN_F9R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F9R1_FB2
constexpr auto CAN_F9R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F9R1_FB3
constexpr auto CAN_F9R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F9R1_FB4
constexpr auto CAN_F9R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F9R1_FB5
constexpr auto CAN_F9R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F9R1_FB6
constexpr auto CAN_F9R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F9R1_FB7
constexpr auto CAN_F9R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F9R1_FB8
constexpr auto CAN_F9R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F9R1_FB9
constexpr auto CAN_F9R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F9R1_FB10
constexpr auto CAN_F9R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F9R1_FB11
constexpr auto CAN_F9R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F9R1_FB12
constexpr auto CAN_F9R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F9R1_FB13
constexpr auto CAN_F9R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F9R1_FB14
constexpr auto CAN_F9R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F9R1_FB15
constexpr auto CAN_F9R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F9R1_FB16
constexpr auto CAN_F9R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F9R1_FB17
constexpr auto CAN_F9R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F9R1_FB18
constexpr auto CAN_F9R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F9R1_FB19
constexpr auto CAN_F9R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F9R1_FB20
constexpr auto CAN_F9R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F9R1_FB21
constexpr auto CAN_F9R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F9R1_FB22
constexpr auto CAN_F9R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F9R1_FB23
constexpr auto CAN_F9R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F9R1_FB24
constexpr auto CAN_F9R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F9R1_FB25
constexpr auto CAN_F9R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F9R1_FB26
constexpr auto CAN_F9R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F9R1_FB27
constexpr auto CAN_F9R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F9R1_FB28
constexpr auto CAN_F9R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F9R1_FB29
constexpr auto CAN_F9R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F9R1_FB30
constexpr auto CAN_F9R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F9R1_FB31
constexpr auto CAN_F9R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F10R1 register  ******************/
#undef CAN_F10R1_FB0
constexpr auto CAN_F10R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F10R1_FB1
constexpr auto CAN_F10R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F10R1_FB2
constexpr auto CAN_F10R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F10R1_FB3
constexpr auto CAN_F10R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F10R1_FB4
constexpr auto CAN_F10R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F10R1_FB5
constexpr auto CAN_F10R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F10R1_FB6
constexpr auto CAN_F10R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F10R1_FB7
constexpr auto CAN_F10R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F10R1_FB8
constexpr auto CAN_F10R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F10R1_FB9
constexpr auto CAN_F10R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F10R1_FB10
constexpr auto CAN_F10R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F10R1_FB11
constexpr auto CAN_F10R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F10R1_FB12
constexpr auto CAN_F10R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F10R1_FB13
constexpr auto CAN_F10R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F10R1_FB14
constexpr auto CAN_F10R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F10R1_FB15
constexpr auto CAN_F10R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F10R1_FB16
constexpr auto CAN_F10R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F10R1_FB17
constexpr auto CAN_F10R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F10R1_FB18
constexpr auto CAN_F10R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F10R1_FB19
constexpr auto CAN_F10R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F10R1_FB20
constexpr auto CAN_F10R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F10R1_FB21
constexpr auto CAN_F10R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F10R1_FB22
constexpr auto CAN_F10R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F10R1_FB23
constexpr auto CAN_F10R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F10R1_FB24
constexpr auto CAN_F10R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F10R1_FB25
constexpr auto CAN_F10R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F10R1_FB26
constexpr auto CAN_F10R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F10R1_FB27
constexpr auto CAN_F10R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F10R1_FB28
constexpr auto CAN_F10R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F10R1_FB29
constexpr auto CAN_F10R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F10R1_FB30
constexpr auto CAN_F10R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F10R1_FB31
constexpr auto CAN_F10R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F11R1 register  ******************/
#undef CAN_F11R1_FB0
constexpr auto CAN_F11R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F11R1_FB1
constexpr auto CAN_F11R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F11R1_FB2
constexpr auto CAN_F11R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F11R1_FB3
constexpr auto CAN_F11R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F11R1_FB4
constexpr auto CAN_F11R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F11R1_FB5
constexpr auto CAN_F11R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F11R1_FB6
constexpr auto CAN_F11R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F11R1_FB7
constexpr auto CAN_F11R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F11R1_FB8
constexpr auto CAN_F11R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F11R1_FB9
constexpr auto CAN_F11R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F11R1_FB10
constexpr auto CAN_F11R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F11R1_FB11
constexpr auto CAN_F11R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F11R1_FB12
constexpr auto CAN_F11R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F11R1_FB13
constexpr auto CAN_F11R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F11R1_FB14
constexpr auto CAN_F11R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F11R1_FB15
constexpr auto CAN_F11R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F11R1_FB16
constexpr auto CAN_F11R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F11R1_FB17
constexpr auto CAN_F11R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F11R1_FB18
constexpr auto CAN_F11R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F11R1_FB19
constexpr auto CAN_F11R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F11R1_FB20
constexpr auto CAN_F11R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F11R1_FB21
constexpr auto CAN_F11R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F11R1_FB22
constexpr auto CAN_F11R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F11R1_FB23
constexpr auto CAN_F11R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F11R1_FB24
constexpr auto CAN_F11R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F11R1_FB25
constexpr auto CAN_F11R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F11R1_FB26
constexpr auto CAN_F11R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F11R1_FB27
constexpr auto CAN_F11R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F11R1_FB28
constexpr auto CAN_F11R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F11R1_FB29
constexpr auto CAN_F11R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F11R1_FB30
constexpr auto CAN_F11R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F11R1_FB31
constexpr auto CAN_F11R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F12R1 register  ******************/
#undef CAN_F12R1_FB0
constexpr auto CAN_F12R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F12R1_FB1
constexpr auto CAN_F12R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F12R1_FB2
constexpr auto CAN_F12R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F12R1_FB3
constexpr auto CAN_F12R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F12R1_FB4
constexpr auto CAN_F12R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F12R1_FB5
constexpr auto CAN_F12R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F12R1_FB6
constexpr auto CAN_F12R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F12R1_FB7
constexpr auto CAN_F12R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F12R1_FB8
constexpr auto CAN_F12R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F12R1_FB9
constexpr auto CAN_F12R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F12R1_FB10
constexpr auto CAN_F12R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F12R1_FB11
constexpr auto CAN_F12R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F12R1_FB12
constexpr auto CAN_F12R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F12R1_FB13
constexpr auto CAN_F12R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F12R1_FB14
constexpr auto CAN_F12R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F12R1_FB15
constexpr auto CAN_F12R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F12R1_FB16
constexpr auto CAN_F12R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F12R1_FB17
constexpr auto CAN_F12R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F12R1_FB18
constexpr auto CAN_F12R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F12R1_FB19
constexpr auto CAN_F12R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F12R1_FB20
constexpr auto CAN_F12R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F12R1_FB21
constexpr auto CAN_F12R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F12R1_FB22
constexpr auto CAN_F12R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F12R1_FB23
constexpr auto CAN_F12R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F12R1_FB24
constexpr auto CAN_F12R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F12R1_FB25
constexpr auto CAN_F12R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F12R1_FB26
constexpr auto CAN_F12R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F12R1_FB27
constexpr auto CAN_F12R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F12R1_FB28
constexpr auto CAN_F12R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F12R1_FB29
constexpr auto CAN_F12R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F12R1_FB30
constexpr auto CAN_F12R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F12R1_FB31
constexpr auto CAN_F12R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F13R1 register  ******************/
#undef CAN_F13R1_FB0
constexpr auto CAN_F13R1_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F13R1_FB1
constexpr auto CAN_F13R1_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F13R1_FB2
constexpr auto CAN_F13R1_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F13R1_FB3
constexpr auto CAN_F13R1_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F13R1_FB4
constexpr auto CAN_F13R1_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F13R1_FB5
constexpr auto CAN_F13R1_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F13R1_FB6
constexpr auto CAN_F13R1_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F13R1_FB7
constexpr auto CAN_F13R1_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F13R1_FB8
constexpr auto CAN_F13R1_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F13R1_FB9
constexpr auto CAN_F13R1_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F13R1_FB10
constexpr auto CAN_F13R1_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F13R1_FB11
constexpr auto CAN_F13R1_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F13R1_FB12
constexpr auto CAN_F13R1_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F13R1_FB13
constexpr auto CAN_F13R1_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F13R1_FB14
constexpr auto CAN_F13R1_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F13R1_FB15
constexpr auto CAN_F13R1_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F13R1_FB16
constexpr auto CAN_F13R1_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F13R1_FB17
constexpr auto CAN_F13R1_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F13R1_FB18
constexpr auto CAN_F13R1_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F13R1_FB19
constexpr auto CAN_F13R1_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F13R1_FB20
constexpr auto CAN_F13R1_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F13R1_FB21
constexpr auto CAN_F13R1_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F13R1_FB22
constexpr auto CAN_F13R1_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F13R1_FB23
constexpr auto CAN_F13R1_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F13R1_FB24
constexpr auto CAN_F13R1_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F13R1_FB25
constexpr auto CAN_F13R1_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F13R1_FB26
constexpr auto CAN_F13R1_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F13R1_FB27
constexpr auto CAN_F13R1_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F13R1_FB28
constexpr auto CAN_F13R1_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F13R1_FB29
constexpr auto CAN_F13R1_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F13R1_FB30
constexpr auto CAN_F13R1_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F13R1_FB31
constexpr auto CAN_F13R1_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F0R2 register  *******************/
#undef CAN_F0R2_FB0
constexpr auto CAN_F0R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F0R2_FB1
constexpr auto CAN_F0R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F0R2_FB2
constexpr auto CAN_F0R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F0R2_FB3
constexpr auto CAN_F0R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F0R2_FB4
constexpr auto CAN_F0R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F0R2_FB5
constexpr auto CAN_F0R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F0R2_FB6
constexpr auto CAN_F0R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F0R2_FB7
constexpr auto CAN_F0R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F0R2_FB8
constexpr auto CAN_F0R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F0R2_FB9
constexpr auto CAN_F0R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F0R2_FB10
constexpr auto CAN_F0R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F0R2_FB11
constexpr auto CAN_F0R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F0R2_FB12
constexpr auto CAN_F0R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F0R2_FB13
constexpr auto CAN_F0R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F0R2_FB14
constexpr auto CAN_F0R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F0R2_FB15
constexpr auto CAN_F0R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F0R2_FB16
constexpr auto CAN_F0R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F0R2_FB17
constexpr auto CAN_F0R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F0R2_FB18
constexpr auto CAN_F0R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F0R2_FB19
constexpr auto CAN_F0R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F0R2_FB20
constexpr auto CAN_F0R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F0R2_FB21
constexpr auto CAN_F0R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F0R2_FB22
constexpr auto CAN_F0R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F0R2_FB23
constexpr auto CAN_F0R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F0R2_FB24
constexpr auto CAN_F0R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F0R2_FB25
constexpr auto CAN_F0R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F0R2_FB26
constexpr auto CAN_F0R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F0R2_FB27
constexpr auto CAN_F0R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F0R2_FB28
constexpr auto CAN_F0R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F0R2_FB29
constexpr auto CAN_F0R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F0R2_FB30
constexpr auto CAN_F0R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F0R2_FB31
constexpr auto CAN_F0R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F1R2 register  *******************/
#undef CAN_F1R2_FB0
constexpr auto CAN_F1R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F1R2_FB1
constexpr auto CAN_F1R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F1R2_FB2
constexpr auto CAN_F1R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F1R2_FB3
constexpr auto CAN_F1R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F1R2_FB4
constexpr auto CAN_F1R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F1R2_FB5
constexpr auto CAN_F1R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F1R2_FB6
constexpr auto CAN_F1R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F1R2_FB7
constexpr auto CAN_F1R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F1R2_FB8
constexpr auto CAN_F1R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F1R2_FB9
constexpr auto CAN_F1R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F1R2_FB10
constexpr auto CAN_F1R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F1R2_FB11
constexpr auto CAN_F1R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F1R2_FB12
constexpr auto CAN_F1R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F1R2_FB13
constexpr auto CAN_F1R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F1R2_FB14
constexpr auto CAN_F1R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F1R2_FB15
constexpr auto CAN_F1R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F1R2_FB16
constexpr auto CAN_F1R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F1R2_FB17
constexpr auto CAN_F1R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F1R2_FB18
constexpr auto CAN_F1R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F1R2_FB19
constexpr auto CAN_F1R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F1R2_FB20
constexpr auto CAN_F1R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F1R2_FB21
constexpr auto CAN_F1R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F1R2_FB22
constexpr auto CAN_F1R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F1R2_FB23
constexpr auto CAN_F1R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F1R2_FB24
constexpr auto CAN_F1R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F1R2_FB25
constexpr auto CAN_F1R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F1R2_FB26
constexpr auto CAN_F1R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F1R2_FB27
constexpr auto CAN_F1R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F1R2_FB28
constexpr auto CAN_F1R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F1R2_FB29
constexpr auto CAN_F1R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F1R2_FB30
constexpr auto CAN_F1R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F1R2_FB31
constexpr auto CAN_F1R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F2R2 register  *******************/
#undef CAN_F2R2_FB0
constexpr auto CAN_F2R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F2R2_FB1
constexpr auto CAN_F2R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F2R2_FB2
constexpr auto CAN_F2R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F2R2_FB3
constexpr auto CAN_F2R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F2R2_FB4
constexpr auto CAN_F2R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F2R2_FB5
constexpr auto CAN_F2R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F2R2_FB6
constexpr auto CAN_F2R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F2R2_FB7
constexpr auto CAN_F2R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F2R2_FB8
constexpr auto CAN_F2R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F2R2_FB9
constexpr auto CAN_F2R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F2R2_FB10
constexpr auto CAN_F2R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F2R2_FB11
constexpr auto CAN_F2R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F2R2_FB12
constexpr auto CAN_F2R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F2R2_FB13
constexpr auto CAN_F2R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F2R2_FB14
constexpr auto CAN_F2R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F2R2_FB15
constexpr auto CAN_F2R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F2R2_FB16
constexpr auto CAN_F2R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F2R2_FB17
constexpr auto CAN_F2R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F2R2_FB18
constexpr auto CAN_F2R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F2R2_FB19
constexpr auto CAN_F2R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F2R2_FB20
constexpr auto CAN_F2R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F2R2_FB21
constexpr auto CAN_F2R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F2R2_FB22
constexpr auto CAN_F2R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F2R2_FB23
constexpr auto CAN_F2R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F2R2_FB24
constexpr auto CAN_F2R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F2R2_FB25
constexpr auto CAN_F2R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F2R2_FB26
constexpr auto CAN_F2R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F2R2_FB27
constexpr auto CAN_F2R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F2R2_FB28
constexpr auto CAN_F2R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F2R2_FB29
constexpr auto CAN_F2R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F2R2_FB30
constexpr auto CAN_F2R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F2R2_FB31
constexpr auto CAN_F2R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F3R2 register  *******************/
#undef CAN_F3R2_FB0
constexpr auto CAN_F3R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F3R2_FB1
constexpr auto CAN_F3R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F3R2_FB2
constexpr auto CAN_F3R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F3R2_FB3
constexpr auto CAN_F3R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F3R2_FB4
constexpr auto CAN_F3R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F3R2_FB5
constexpr auto CAN_F3R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F3R2_FB6
constexpr auto CAN_F3R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F3R2_FB7
constexpr auto CAN_F3R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F3R2_FB8
constexpr auto CAN_F3R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F3R2_FB9
constexpr auto CAN_F3R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F3R2_FB10
constexpr auto CAN_F3R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F3R2_FB11
constexpr auto CAN_F3R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F3R2_FB12
constexpr auto CAN_F3R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F3R2_FB13
constexpr auto CAN_F3R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F3R2_FB14
constexpr auto CAN_F3R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F3R2_FB15
constexpr auto CAN_F3R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F3R2_FB16
constexpr auto CAN_F3R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F3R2_FB17
constexpr auto CAN_F3R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F3R2_FB18
constexpr auto CAN_F3R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F3R2_FB19
constexpr auto CAN_F3R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F3R2_FB20
constexpr auto CAN_F3R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F3R2_FB21
constexpr auto CAN_F3R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F3R2_FB22
constexpr auto CAN_F3R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F3R2_FB23
constexpr auto CAN_F3R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F3R2_FB24
constexpr auto CAN_F3R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F3R2_FB25
constexpr auto CAN_F3R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F3R2_FB26
constexpr auto CAN_F3R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F3R2_FB27
constexpr auto CAN_F3R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F3R2_FB28
constexpr auto CAN_F3R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F3R2_FB29
constexpr auto CAN_F3R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F3R2_FB30
constexpr auto CAN_F3R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F3R2_FB31
constexpr auto CAN_F3R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F4R2 register  *******************/
#undef CAN_F4R2_FB0
constexpr auto CAN_F4R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F4R2_FB1
constexpr auto CAN_F4R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F4R2_FB2
constexpr auto CAN_F4R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F4R2_FB3
constexpr auto CAN_F4R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F4R2_FB4
constexpr auto CAN_F4R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F4R2_FB5
constexpr auto CAN_F4R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F4R2_FB6
constexpr auto CAN_F4R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F4R2_FB7
constexpr auto CAN_F4R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F4R2_FB8
constexpr auto CAN_F4R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F4R2_FB9
constexpr auto CAN_F4R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F4R2_FB10
constexpr auto CAN_F4R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F4R2_FB11
constexpr auto CAN_F4R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F4R2_FB12
constexpr auto CAN_F4R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F4R2_FB13
constexpr auto CAN_F4R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F4R2_FB14
constexpr auto CAN_F4R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F4R2_FB15
constexpr auto CAN_F4R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F4R2_FB16
constexpr auto CAN_F4R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F4R2_FB17
constexpr auto CAN_F4R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F4R2_FB18
constexpr auto CAN_F4R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F4R2_FB19
constexpr auto CAN_F4R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F4R2_FB20
constexpr auto CAN_F4R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F4R2_FB21
constexpr auto CAN_F4R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F4R2_FB22
constexpr auto CAN_F4R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F4R2_FB23
constexpr auto CAN_F4R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F4R2_FB24
constexpr auto CAN_F4R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F4R2_FB25
constexpr auto CAN_F4R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F4R2_FB26
constexpr auto CAN_F4R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F4R2_FB27
constexpr auto CAN_F4R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F4R2_FB28
constexpr auto CAN_F4R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F4R2_FB29
constexpr auto CAN_F4R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F4R2_FB30
constexpr auto CAN_F4R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F4R2_FB31
constexpr auto CAN_F4R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F5R2 register  *******************/
#undef CAN_F5R2_FB0
constexpr auto CAN_F5R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F5R2_FB1
constexpr auto CAN_F5R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F5R2_FB2
constexpr auto CAN_F5R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F5R2_FB3
constexpr auto CAN_F5R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F5R2_FB4
constexpr auto CAN_F5R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F5R2_FB5
constexpr auto CAN_F5R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F5R2_FB6
constexpr auto CAN_F5R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F5R2_FB7
constexpr auto CAN_F5R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F5R2_FB8
constexpr auto CAN_F5R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F5R2_FB9
constexpr auto CAN_F5R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F5R2_FB10
constexpr auto CAN_F5R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F5R2_FB11
constexpr auto CAN_F5R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F5R2_FB12
constexpr auto CAN_F5R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F5R2_FB13
constexpr auto CAN_F5R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F5R2_FB14
constexpr auto CAN_F5R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F5R2_FB15
constexpr auto CAN_F5R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F5R2_FB16
constexpr auto CAN_F5R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F5R2_FB17
constexpr auto CAN_F5R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F5R2_FB18
constexpr auto CAN_F5R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F5R2_FB19
constexpr auto CAN_F5R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F5R2_FB20
constexpr auto CAN_F5R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F5R2_FB21
constexpr auto CAN_F5R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F5R2_FB22
constexpr auto CAN_F5R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F5R2_FB23
constexpr auto CAN_F5R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F5R2_FB24
constexpr auto CAN_F5R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F5R2_FB25
constexpr auto CAN_F5R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F5R2_FB26
constexpr auto CAN_F5R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F5R2_FB27
constexpr auto CAN_F5R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F5R2_FB28
constexpr auto CAN_F5R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F5R2_FB29
constexpr auto CAN_F5R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F5R2_FB30
constexpr auto CAN_F5R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F5R2_FB31
constexpr auto CAN_F5R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F6R2 register  *******************/
#undef CAN_F6R2_FB0
constexpr auto CAN_F6R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F6R2_FB1
constexpr auto CAN_F6R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F6R2_FB2
constexpr auto CAN_F6R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F6R2_FB3
constexpr auto CAN_F6R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F6R2_FB4
constexpr auto CAN_F6R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F6R2_FB5
constexpr auto CAN_F6R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F6R2_FB6
constexpr auto CAN_F6R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F6R2_FB7
constexpr auto CAN_F6R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F6R2_FB8
constexpr auto CAN_F6R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F6R2_FB9
constexpr auto CAN_F6R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F6R2_FB10
constexpr auto CAN_F6R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F6R2_FB11
constexpr auto CAN_F6R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F6R2_FB12
constexpr auto CAN_F6R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F6R2_FB13
constexpr auto CAN_F6R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F6R2_FB14
constexpr auto CAN_F6R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F6R2_FB15
constexpr auto CAN_F6R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F6R2_FB16
constexpr auto CAN_F6R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F6R2_FB17
constexpr auto CAN_F6R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F6R2_FB18
constexpr auto CAN_F6R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F6R2_FB19
constexpr auto CAN_F6R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F6R2_FB20
constexpr auto CAN_F6R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F6R2_FB21
constexpr auto CAN_F6R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F6R2_FB22
constexpr auto CAN_F6R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F6R2_FB23
constexpr auto CAN_F6R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F6R2_FB24
constexpr auto CAN_F6R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F6R2_FB25
constexpr auto CAN_F6R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F6R2_FB26
constexpr auto CAN_F6R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F6R2_FB27
constexpr auto CAN_F6R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F6R2_FB28
constexpr auto CAN_F6R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F6R2_FB29
constexpr auto CAN_F6R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F6R2_FB30
constexpr auto CAN_F6R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F6R2_FB31
constexpr auto CAN_F6R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F7R2 register  *******************/
#undef CAN_F7R2_FB0
constexpr auto CAN_F7R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F7R2_FB1
constexpr auto CAN_F7R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F7R2_FB2
constexpr auto CAN_F7R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F7R2_FB3
constexpr auto CAN_F7R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F7R2_FB4
constexpr auto CAN_F7R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F7R2_FB5
constexpr auto CAN_F7R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F7R2_FB6
constexpr auto CAN_F7R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F7R2_FB7
constexpr auto CAN_F7R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F7R2_FB8
constexpr auto CAN_F7R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F7R2_FB9
constexpr auto CAN_F7R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F7R2_FB10
constexpr auto CAN_F7R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F7R2_FB11
constexpr auto CAN_F7R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F7R2_FB12
constexpr auto CAN_F7R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F7R2_FB13
constexpr auto CAN_F7R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F7R2_FB14
constexpr auto CAN_F7R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F7R2_FB15
constexpr auto CAN_F7R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F7R2_FB16
constexpr auto CAN_F7R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F7R2_FB17
constexpr auto CAN_F7R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F7R2_FB18
constexpr auto CAN_F7R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F7R2_FB19
constexpr auto CAN_F7R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F7R2_FB20
constexpr auto CAN_F7R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F7R2_FB21
constexpr auto CAN_F7R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F7R2_FB22
constexpr auto CAN_F7R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F7R2_FB23
constexpr auto CAN_F7R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F7R2_FB24
constexpr auto CAN_F7R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F7R2_FB25
constexpr auto CAN_F7R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F7R2_FB26
constexpr auto CAN_F7R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F7R2_FB27
constexpr auto CAN_F7R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F7R2_FB28
constexpr auto CAN_F7R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F7R2_FB29
constexpr auto CAN_F7R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F7R2_FB30
constexpr auto CAN_F7R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F7R2_FB31
constexpr auto CAN_F7R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F8R2 register  *******************/
#undef CAN_F8R2_FB0
constexpr auto CAN_F8R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F8R2_FB1
constexpr auto CAN_F8R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F8R2_FB2
constexpr auto CAN_F8R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F8R2_FB3
constexpr auto CAN_F8R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F8R2_FB4
constexpr auto CAN_F8R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F8R2_FB5
constexpr auto CAN_F8R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F8R2_FB6
constexpr auto CAN_F8R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F8R2_FB7
constexpr auto CAN_F8R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F8R2_FB8
constexpr auto CAN_F8R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F8R2_FB9
constexpr auto CAN_F8R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F8R2_FB10
constexpr auto CAN_F8R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F8R2_FB11
constexpr auto CAN_F8R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F8R2_FB12
constexpr auto CAN_F8R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F8R2_FB13
constexpr auto CAN_F8R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F8R2_FB14
constexpr auto CAN_F8R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F8R2_FB15
constexpr auto CAN_F8R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F8R2_FB16
constexpr auto CAN_F8R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F8R2_FB17
constexpr auto CAN_F8R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F8R2_FB18
constexpr auto CAN_F8R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F8R2_FB19
constexpr auto CAN_F8R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F8R2_FB20
constexpr auto CAN_F8R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F8R2_FB21
constexpr auto CAN_F8R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F8R2_FB22
constexpr auto CAN_F8R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F8R2_FB23
constexpr auto CAN_F8R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F8R2_FB24
constexpr auto CAN_F8R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F8R2_FB25
constexpr auto CAN_F8R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F8R2_FB26
constexpr auto CAN_F8R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F8R2_FB27
constexpr auto CAN_F8R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F8R2_FB28
constexpr auto CAN_F8R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F8R2_FB29
constexpr auto CAN_F8R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F8R2_FB30
constexpr auto CAN_F8R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F8R2_FB31
constexpr auto CAN_F8R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F9R2 register  *******************/
#undef CAN_F9R2_FB0
constexpr auto CAN_F9R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F9R2_FB1
constexpr auto CAN_F9R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F9R2_FB2
constexpr auto CAN_F9R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F9R2_FB3
constexpr auto CAN_F9R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F9R2_FB4
constexpr auto CAN_F9R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F9R2_FB5
constexpr auto CAN_F9R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F9R2_FB6
constexpr auto CAN_F9R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F9R2_FB7
constexpr auto CAN_F9R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F9R2_FB8
constexpr auto CAN_F9R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F9R2_FB9
constexpr auto CAN_F9R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F9R2_FB10
constexpr auto CAN_F9R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F9R2_FB11
constexpr auto CAN_F9R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F9R2_FB12
constexpr auto CAN_F9R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F9R2_FB13
constexpr auto CAN_F9R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F9R2_FB14
constexpr auto CAN_F9R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F9R2_FB15
constexpr auto CAN_F9R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F9R2_FB16
constexpr auto CAN_F9R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F9R2_FB17
constexpr auto CAN_F9R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F9R2_FB18
constexpr auto CAN_F9R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F9R2_FB19
constexpr auto CAN_F9R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F9R2_FB20
constexpr auto CAN_F9R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F9R2_FB21
constexpr auto CAN_F9R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F9R2_FB22
constexpr auto CAN_F9R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F9R2_FB23
constexpr auto CAN_F9R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F9R2_FB24
constexpr auto CAN_F9R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F9R2_FB25
constexpr auto CAN_F9R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F9R2_FB26
constexpr auto CAN_F9R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F9R2_FB27
constexpr auto CAN_F9R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F9R2_FB28
constexpr auto CAN_F9R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F9R2_FB29
constexpr auto CAN_F9R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F9R2_FB30
constexpr auto CAN_F9R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F9R2_FB31
constexpr auto CAN_F9R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F10R2 register  ******************/
#undef CAN_F10R2_FB0
constexpr auto CAN_F10R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F10R2_FB1
constexpr auto CAN_F10R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F10R2_FB2
constexpr auto CAN_F10R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F10R2_FB3
constexpr auto CAN_F10R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F10R2_FB4
constexpr auto CAN_F10R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F10R2_FB5
constexpr auto CAN_F10R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F10R2_FB6
constexpr auto CAN_F10R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F10R2_FB7
constexpr auto CAN_F10R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F10R2_FB8
constexpr auto CAN_F10R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F10R2_FB9
constexpr auto CAN_F10R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F10R2_FB10
constexpr auto CAN_F10R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F10R2_FB11
constexpr auto CAN_F10R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F10R2_FB12
constexpr auto CAN_F10R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F10R2_FB13
constexpr auto CAN_F10R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F10R2_FB14
constexpr auto CAN_F10R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F10R2_FB15
constexpr auto CAN_F10R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F10R2_FB16
constexpr auto CAN_F10R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F10R2_FB17
constexpr auto CAN_F10R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F10R2_FB18
constexpr auto CAN_F10R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F10R2_FB19
constexpr auto CAN_F10R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F10R2_FB20
constexpr auto CAN_F10R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F10R2_FB21
constexpr auto CAN_F10R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F10R2_FB22
constexpr auto CAN_F10R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F10R2_FB23
constexpr auto CAN_F10R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F10R2_FB24
constexpr auto CAN_F10R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F10R2_FB25
constexpr auto CAN_F10R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F10R2_FB26
constexpr auto CAN_F10R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F10R2_FB27
constexpr auto CAN_F10R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F10R2_FB28
constexpr auto CAN_F10R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F10R2_FB29
constexpr auto CAN_F10R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F10R2_FB30
constexpr auto CAN_F10R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F10R2_FB31
constexpr auto CAN_F10R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F11R2 register  ******************/
#undef CAN_F11R2_FB0
constexpr auto CAN_F11R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F11R2_FB1
constexpr auto CAN_F11R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F11R2_FB2
constexpr auto CAN_F11R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F11R2_FB3
constexpr auto CAN_F11R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F11R2_FB4
constexpr auto CAN_F11R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F11R2_FB5
constexpr auto CAN_F11R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F11R2_FB6
constexpr auto CAN_F11R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F11R2_FB7
constexpr auto CAN_F11R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F11R2_FB8
constexpr auto CAN_F11R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F11R2_FB9
constexpr auto CAN_F11R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F11R2_FB10
constexpr auto CAN_F11R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F11R2_FB11
constexpr auto CAN_F11R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F11R2_FB12
constexpr auto CAN_F11R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F11R2_FB13
constexpr auto CAN_F11R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F11R2_FB14
constexpr auto CAN_F11R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F11R2_FB15
constexpr auto CAN_F11R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F11R2_FB16
constexpr auto CAN_F11R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F11R2_FB17
constexpr auto CAN_F11R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F11R2_FB18
constexpr auto CAN_F11R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F11R2_FB19
constexpr auto CAN_F11R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F11R2_FB20
constexpr auto CAN_F11R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F11R2_FB21
constexpr auto CAN_F11R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F11R2_FB22
constexpr auto CAN_F11R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F11R2_FB23
constexpr auto CAN_F11R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F11R2_FB24
constexpr auto CAN_F11R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F11R2_FB25
constexpr auto CAN_F11R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F11R2_FB26
constexpr auto CAN_F11R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F11R2_FB27
constexpr auto CAN_F11R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F11R2_FB28
constexpr auto CAN_F11R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F11R2_FB29
constexpr auto CAN_F11R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F11R2_FB30
constexpr auto CAN_F11R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F11R2_FB31
constexpr auto CAN_F11R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F12R2 register  ******************/
#undef CAN_F12R2_FB0
constexpr auto CAN_F12R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F12R2_FB1
constexpr auto CAN_F12R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F12R2_FB2
constexpr auto CAN_F12R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F12R2_FB3
constexpr auto CAN_F12R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F12R2_FB4
constexpr auto CAN_F12R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F12R2_FB5
constexpr auto CAN_F12R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F12R2_FB6
constexpr auto CAN_F12R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F12R2_FB7
constexpr auto CAN_F12R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F12R2_FB8
constexpr auto CAN_F12R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F12R2_FB9
constexpr auto CAN_F12R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F12R2_FB10
constexpr auto CAN_F12R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F12R2_FB11
constexpr auto CAN_F12R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F12R2_FB12
constexpr auto CAN_F12R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F12R2_FB13
constexpr auto CAN_F12R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F12R2_FB14
constexpr auto CAN_F12R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F12R2_FB15
constexpr auto CAN_F12R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F12R2_FB16
constexpr auto CAN_F12R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F12R2_FB17
constexpr auto CAN_F12R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F12R2_FB18
constexpr auto CAN_F12R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F12R2_FB19
constexpr auto CAN_F12R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F12R2_FB20
constexpr auto CAN_F12R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F12R2_FB21
constexpr auto CAN_F12R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F12R2_FB22
constexpr auto CAN_F12R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F12R2_FB23
constexpr auto CAN_F12R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F12R2_FB24
constexpr auto CAN_F12R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F12R2_FB25
constexpr auto CAN_F12R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F12R2_FB26
constexpr auto CAN_F12R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F12R2_FB27
constexpr auto CAN_F12R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F12R2_FB28
constexpr auto CAN_F12R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F12R2_FB29
constexpr auto CAN_F12R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F12R2_FB30
constexpr auto CAN_F12R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F12R2_FB31
constexpr auto CAN_F12R2_FB31 = ((std::uint32_t)0x80000000);

/*******************  Bit definition for CAN_F13R2 register  ******************/
#undef CAN_F13R2_FB0
constexpr auto CAN_F13R2_FB0 = ((std::uint32_t)0x00000001);
#undef CAN_F13R2_FB1
constexpr auto CAN_F13R2_FB1 = ((std::uint32_t)0x00000002);
#undef CAN_F13R2_FB2
constexpr auto CAN_F13R2_FB2 = ((std::uint32_t)0x00000004);
#undef CAN_F13R2_FB3
constexpr auto CAN_F13R2_FB3 = ((std::uint32_t)0x00000008);
#undef CAN_F13R2_FB4
constexpr auto CAN_F13R2_FB4 = ((std::uint32_t)0x00000010);
#undef CAN_F13R2_FB5
constexpr auto CAN_F13R2_FB5 = ((std::uint32_t)0x00000020);
#undef CAN_F13R2_FB6
constexpr auto CAN_F13R2_FB6 = ((std::uint32_t)0x00000040);
#undef CAN_F13R2_FB7
constexpr auto CAN_F13R2_FB7 = ((std::uint32_t)0x00000080);
#undef CAN_F13R2_FB8
constexpr auto CAN_F13R2_FB8 = ((std::uint32_t)0x00000100);
#undef CAN_F13R2_FB9
constexpr auto CAN_F13R2_FB9 = ((std::uint32_t)0x00000200);
#undef CAN_F13R2_FB10
constexpr auto CAN_F13R2_FB10 = ((std::uint32_t)0x00000400);
#undef CAN_F13R2_FB11
constexpr auto CAN_F13R2_FB11 = ((std::uint32_t)0x00000800);
#undef CAN_F13R2_FB12
constexpr auto CAN_F13R2_FB12 = ((std::uint32_t)0x00001000);
#undef CAN_F13R2_FB13
constexpr auto CAN_F13R2_FB13 = ((std::uint32_t)0x00002000);
#undef CAN_F13R2_FB14
constexpr auto CAN_F13R2_FB14 = ((std::uint32_t)0x00004000);
#undef CAN_F13R2_FB15
constexpr auto CAN_F13R2_FB15 = ((std::uint32_t)0x00008000);
#undef CAN_F13R2_FB16
constexpr auto CAN_F13R2_FB16 = ((std::uint32_t)0x00010000);
#undef CAN_F13R2_FB17
constexpr auto CAN_F13R2_FB17 = ((std::uint32_t)0x00020000);
#undef CAN_F13R2_FB18
constexpr auto CAN_F13R2_FB18 = ((std::uint32_t)0x00040000);
#undef CAN_F13R2_FB19
constexpr auto CAN_F13R2_FB19 = ((std::uint32_t)0x00080000);
#undef CAN_F13R2_FB20
constexpr auto CAN_F13R2_FB20 = ((std::uint32_t)0x00100000);
#undef CAN_F13R2_FB21
constexpr auto CAN_F13R2_FB21 = ((std::uint32_t)0x00200000);
#undef CAN_F13R2_FB22
constexpr auto CAN_F13R2_FB22 = ((std::uint32_t)0x00400000);
#undef CAN_F13R2_FB23
constexpr auto CAN_F13R2_FB23 = ((std::uint32_t)0x00800000);
#undef CAN_F13R2_FB24
constexpr auto CAN_F13R2_FB24 = ((std::uint32_t)0x01000000);
#undef CAN_F13R2_FB25
constexpr auto CAN_F13R2_FB25 = ((std::uint32_t)0x02000000);
#undef CAN_F13R2_FB26
constexpr auto CAN_F13R2_FB26 = ((std::uint32_t)0x04000000);
#undef CAN_F13R2_FB27
constexpr auto CAN_F13R2_FB27 = ((std::uint32_t)0x08000000);
#undef CAN_F13R2_FB28
constexpr auto CAN_F13R2_FB28 = ((std::uint32_t)0x10000000);
#undef CAN_F13R2_FB29
constexpr auto CAN_F13R2_FB29 = ((std::uint32_t)0x20000000);
#undef CAN_F13R2_FB30
constexpr auto CAN_F13R2_FB30 = ((std::uint32_t)0x40000000);
#undef CAN_F13R2_FB31
constexpr auto CAN_F13R2_FB31 = ((std::uint32_t)0x80000000);

/******************************************************************************/
/*                                                                            */
/*                        Serial Peripheral Interface                         */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for SPI_CR1 register  ********************/
#undef SPI_CR1_CPHA
constexpr auto SPI_CR1_CPHA = ((std::uint16_t)0x0001);
#undef SPI_CR1_CPOL
constexpr auto SPI_CR1_CPOL = ((std::uint16_t)0x0002);
#undef SPI_CR1_MSTR
constexpr auto SPI_CR1_MSTR = ((std::uint16_t)0x0004);

#undef SPI_CR1_BR
constexpr auto SPI_CR1_BR = ((std::uint16_t)0x0038);
#undef SPI_CR1_BR_0
constexpr auto SPI_CR1_BR_0 = ((std::uint16_t)0x0008);
#undef SPI_CR1_BR_1
constexpr auto SPI_CR1_BR_1 = ((std::uint16_t)0x0010);
#undef SPI_CR1_BR_2
constexpr auto SPI_CR1_BR_2 = ((std::uint16_t)0x0020);

#undef SPI_CR1_SPE
constexpr auto SPI_CR1_SPE = ((std::uint16_t)0x0040);
#undef SPI_CR1_LSBFIRST
constexpr auto SPI_CR1_LSBFIRST = ((std::uint16_t)0x0080);
#undef SPI_CR1_SSI
constexpr auto SPI_CR1_SSI = ((std::uint16_t)0x0100);
#undef SPI_CR1_SSM
constexpr auto SPI_CR1_SSM = ((std::uint16_t)0x0200);
#undef SPI_CR1_RXONLY
constexpr auto SPI_CR1_RXONLY = ((std::uint16_t)0x0400);
#undef SPI_CR1_DFF
constexpr auto SPI_CR1_DFF = ((std::uint16_t)0x0800);
#undef SPI_CR1_CRCNEXT
constexpr auto SPI_CR1_CRCNEXT = ((std::uint16_t)0x1000);
#undef SPI_CR1_CRCEN
constexpr auto SPI_CR1_CRCEN = ((std::uint16_t)0x2000);
#undef SPI_CR1_BIDIOE
constexpr auto SPI_CR1_BIDIOE = ((std::uint16_t)0x4000);
#undef SPI_CR1_BIDIMODE
constexpr auto SPI_CR1_BIDIMODE = ((std::uint16_t)0x8000);

/*******************  Bit definition for SPI_CR2 register  ********************/
#undef SPI_CR2_RXDMAEN
constexpr auto SPI_CR2_RXDMAEN = ((std::uint8_t)0x01);
#undef SPI_CR2_TXDMAEN
constexpr auto SPI_CR2_TXDMAEN = ((std::uint8_t)0x02);
#undef SPI_CR2_SSOE
constexpr auto SPI_CR2_SSOE = ((std::uint8_t)0x04);
#undef SPI_CR2_ERRIE
constexpr auto SPI_CR2_ERRIE = ((std::uint8_t)0x20);
#undef SPI_CR2_RXNEIE
constexpr auto SPI_CR2_RXNEIE = ((std::uint8_t)0x40);
#undef SPI_CR2_TXEIE
constexpr auto SPI_CR2_TXEIE = ((std::uint8_t)0x80);

/********************  Bit definition for SPI_SR register  ********************/
#undef SPI_SR_RXNE
constexpr auto SPI_SR_RXNE = ((std::uint8_t)0x01);
#undef SPI_SR_TXE
constexpr auto SPI_SR_TXE = ((std::uint8_t)0x02);
#undef SPI_SR_CHSIDE
constexpr auto SPI_SR_CHSIDE = ((std::uint8_t)0x04);
#undef SPI_SR_UDR
constexpr auto SPI_SR_UDR = ((std::uint8_t)0x08);
#undef SPI_SR_CRCERR
constexpr auto SPI_SR_CRCERR = ((std::uint8_t)0x10);
#undef SPI_SR_MODF
constexpr auto SPI_SR_MODF = ((std::uint8_t)0x20);
#undef SPI_SR_OVR
constexpr auto SPI_SR_OVR = ((std::uint8_t)0x40);
#undef SPI_SR_BSY
constexpr auto SPI_SR_BSY = ((std::uint8_t)0x80);

/********************  Bit definition for SPI_DR register  ********************/
#undef SPI_DR_DR
constexpr auto SPI_DR_DR = ((std::uint16_t)0xFFFF);

/*******************  Bit definition for SPI_CRCPR register  ******************/
#undef SPI_CRCPR_CRCPOLY
constexpr auto SPI_CRCPR_CRCPOLY = ((std::uint16_t)0xFFFF);

/******************  Bit definition for SPI_RXCRCR register  ******************/
#undef SPI_RXCRCR_RXCRC
constexpr auto SPI_RXCRCR_RXCRC = ((std::uint16_t)0xFFFF);

/******************  Bit definition for SPI_TXCRCR register  ******************/
#undef SPI_TXCRCR_TXCRC
constexpr auto SPI_TXCRCR_TXCRC = ((std::uint16_t)0xFFFF);

/******************  Bit definition for SPI_I2SCFGR register  *****************/
#undef SPI_I2SCFGR_CHLEN
constexpr auto SPI_I2SCFGR_CHLEN = ((std::uint16_t)0x0001);

#undef SPI_I2SCFGR_DATLEN
constexpr auto SPI_I2SCFGR_DATLEN = ((std::uint16_t)0x0006);
#undef SPI_I2SCFGR_DATLEN_0
constexpr auto SPI_I2SCFGR_DATLEN_0 = ((std::uint16_t)0x0002);
#undef SPI_I2SCFGR_DATLEN_1
constexpr auto SPI_I2SCFGR_DATLEN_1 = ((std::uint16_t)0x0004);

#undef SPI_I2SCFGR_CKPOL
constexpr auto SPI_I2SCFGR_CKPOL = ((std::uint16_t)0x0008);

#undef SPI_I2SCFGR_I2SSTD
constexpr auto SPI_I2SCFGR_I2SSTD = ((std::uint16_t)0x0030);
#undef SPI_I2SCFGR_I2SSTD_0
constexpr auto SPI_I2SCFGR_I2SSTD_0 = ((std::uint16_t)0x0010);
#undef SPI_I2SCFGR_I2SSTD_1
constexpr auto SPI_I2SCFGR_I2SSTD_1 = ((std::uint16_t)0x0020);

#undef SPI_I2SCFGR_PCMSYNC
constexpr auto SPI_I2SCFGR_PCMSYNC = ((std::uint16_t)0x0080);

#undef SPI_I2SCFGR_I2SCFG
constexpr auto SPI_I2SCFGR_I2SCFG = ((std::uint16_t)0x0300);
#undef SPI_I2SCFGR_I2SCFG_0
constexpr auto SPI_I2SCFGR_I2SCFG_0 = ((std::uint16_t)0x0100);
#undef SPI_I2SCFGR_I2SCFG_1
constexpr auto SPI_I2SCFGR_I2SCFG_1 = ((std::uint16_t)0x0200);

#undef SPI_I2SCFGR_I2SE
constexpr auto SPI_I2SCFGR_I2SE = ((std::uint16_t)0x0400);
#undef SPI_I2SCFGR_I2SMOD
constexpr auto SPI_I2SCFGR_I2SMOD = ((std::uint16_t)0x0800);

/******************  Bit definition for SPI_I2SPR register  *******************/
#undef SPI_I2SPR_I2SDIV
constexpr auto SPI_I2SPR_I2SDIV = ((std::uint16_t)0x00FF);
#undef SPI_I2SPR_ODD
constexpr auto SPI_I2SPR_ODD = ((std::uint16_t)0x0100);
#undef SPI_I2SPR_MCKOE
constexpr auto SPI_I2SPR_MCKOE = ((std::uint16_t)0x0200);

/******************************************************************************/
/*                                                                            */
/*                      Inter-integrated Circuit Interface                    */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for I2C_CR1 register  ********************/
#undef I2C_CR1_PE
constexpr auto I2C_CR1_PE = ((std::uint16_t)0x0001);
#undef I2C_CR1_SMBUS
constexpr auto I2C_CR1_SMBUS = ((std::uint16_t)0x0002);
#undef I2C_CR1_SMBTYPE
constexpr auto I2C_CR1_SMBTYPE = ((std::uint16_t)0x0008);
#undef I2C_CR1_ENARP
constexpr auto I2C_CR1_ENARP = ((std::uint16_t)0x0010);
#undef I2C_CR1_ENPEC
constexpr auto I2C_CR1_ENPEC = ((std::uint16_t)0x0020);
#undef I2C_CR1_ENGC
constexpr auto I2C_CR1_ENGC = ((std::uint16_t)0x0040);
#undef I2C_CR1_NOSTRETCH
constexpr auto I2C_CR1_NOSTRETCH = ((std::uint16_t)0x0080);
#undef I2C_CR1_START
constexpr auto I2C_CR1_START = ((std::uint16_t)0x0100);
#undef I2C_CR1_STOP
constexpr auto I2C_CR1_STOP = ((std::uint16_t)0x0200);
#undef I2C_CR1_ACK
constexpr auto I2C_CR1_ACK = ((std::uint16_t)0x0400);
#undef I2C_CR1_POS
constexpr auto I2C_CR1_POS = ((std::uint16_t)0x0800);
#undef I2C_CR1_PEC
constexpr auto I2C_CR1_PEC = ((std::uint16_t)0x1000);
#undef I2C_CR1_ALERT
constexpr auto I2C_CR1_ALERT = ((std::uint16_t)0x2000);
#undef I2C_CR1_SWRST
constexpr auto I2C_CR1_SWRST = ((std::uint16_t)0x8000);

/*******************  Bit definition for I2C_CR2 register  ********************/
#undef I2C_CR2_FREQ
constexpr auto I2C_CR2_FREQ = ((std::uint16_t)0x003F);
#undef I2C_CR2_FREQ_0
constexpr auto I2C_CR2_FREQ_0 = ((std::uint16_t)0x0001);
#undef I2C_CR2_FREQ_1
constexpr auto I2C_CR2_FREQ_1 = ((std::uint16_t)0x0002);
#undef I2C_CR2_FREQ_2
constexpr auto I2C_CR2_FREQ_2 = ((std::uint16_t)0x0004);
#undef I2C_CR2_FREQ_3
constexpr auto I2C_CR2_FREQ_3 = ((std::uint16_t)0x0008);
#undef I2C_CR2_FREQ_4
constexpr auto I2C_CR2_FREQ_4 = ((std::uint16_t)0x0010);
#undef I2C_CR2_FREQ_5
constexpr auto I2C_CR2_FREQ_5 = ((std::uint16_t)0x0020);

#undef I2C_CR2_ITERREN
constexpr auto I2C_CR2_ITERREN = ((std::uint16_t)0x0100);
#undef I2C_CR2_ITEVTEN
constexpr auto I2C_CR2_ITEVTEN = ((std::uint16_t)0x0200);
#undef I2C_CR2_ITBUFEN
constexpr auto I2C_CR2_ITBUFEN = ((std::uint16_t)0x0400);
#undef I2C_CR2_DMAEN
constexpr auto I2C_CR2_DMAEN = ((std::uint16_t)0x0800);
#undef I2C_CR2_LAST
constexpr auto I2C_CR2_LAST = ((std::uint16_t)0x1000);

/*******************  Bit definition for I2C_OAR1 register  *******************/
#undef I2C_OAR1_ADD1_7
constexpr auto I2C_OAR1_ADD1_7 = ((std::uint16_t)0x00FE);
#undef I2C_OAR1_ADD8_9
constexpr auto I2C_OAR1_ADD8_9 = ((std::uint16_t)0x0300);

#undef I2C_OAR1_ADD0
constexpr auto I2C_OAR1_ADD0 = ((std::uint16_t)0x0001);
#undef I2C_OAR1_ADD1
constexpr auto I2C_OAR1_ADD1 = ((std::uint16_t)0x0002);
#undef I2C_OAR1_ADD2
constexpr auto I2C_OAR1_ADD2 = ((std::uint16_t)0x0004);
#undef I2C_OAR1_ADD3
constexpr auto I2C_OAR1_ADD3 = ((std::uint16_t)0x0008);
#undef I2C_OAR1_ADD4
constexpr auto I2C_OAR1_ADD4 = ((std::uint16_t)0x0010);
#undef I2C_OAR1_ADD5
constexpr auto I2C_OAR1_ADD5 = ((std::uint16_t)0x0020);
#undef I2C_OAR1_ADD6
constexpr auto I2C_OAR1_ADD6 = ((std::uint16_t)0x0040);
#undef I2C_OAR1_ADD7
constexpr auto I2C_OAR1_ADD7 = ((std::uint16_t)0x0080);
#undef I2C_OAR1_ADD8
constexpr auto I2C_OAR1_ADD8 = ((std::uint16_t)0x0100);
#undef I2C_OAR1_ADD9
constexpr auto I2C_OAR1_ADD9 = ((std::uint16_t)0x0200);

#undef I2C_OAR1_ADDMODE
constexpr auto I2C_OAR1_ADDMODE = ((std::uint16_t)0x8000);

/*******************  Bit definition for I2C_OAR2 register  *******************/
#undef I2C_OAR2_ENDUAL
constexpr auto I2C_OAR2_ENDUAL = ((std::uint8_t)0x01);
#undef I2C_OAR2_ADD2
constexpr auto I2C_OAR2_ADD2 = ((std::uint8_t)0xFE);

/********************  Bit definition for I2C_DR register  ********************/
#undef I2C_DR_DR
constexpr auto I2C_DR_DR = ((std::uint8_t)0xFF);

/*******************  Bit definition for I2C_SR1 register  ********************/
#undef I2C_SR1_SB
constexpr auto I2C_SR1_SB = ((std::uint16_t)0x0001);
#undef I2C_SR1_ADDR
constexpr auto I2C_SR1_ADDR = ((std::uint16_t)0x0002);
#undef I2C_SR1_BTF
constexpr auto I2C_SR1_BTF = ((std::uint16_t)0x0004);
#undef I2C_SR1_ADD10
constexpr auto I2C_SR1_ADD10 = ((std::uint16_t)0x0008);
#undef I2C_SR1_STOPF
constexpr auto I2C_SR1_STOPF = ((std::uint16_t)0x0010);
#undef I2C_SR1_RXNE
constexpr auto I2C_SR1_RXNE = ((std::uint16_t)0x0040);
#undef I2C_SR1_TXE
constexpr auto I2C_SR1_TXE = ((std::uint16_t)0x0080);
#undef I2C_SR1_BERR
constexpr auto I2C_SR1_BERR = ((std::uint16_t)0x0100);
#undef I2C_SR1_ARLO
constexpr auto I2C_SR1_ARLO = ((std::uint16_t)0x0200);
#undef I2C_SR1_AF
constexpr auto I2C_SR1_AF = ((std::uint16_t)0x0400);
#undef I2C_SR1_OVR
constexpr auto I2C_SR1_OVR = ((std::uint16_t)0x0800);
#undef I2C_SR1_PECERR
constexpr auto I2C_SR1_PECERR = ((std::uint16_t)0x1000);
#undef I2C_SR1_TIMEOUT
constexpr auto I2C_SR1_TIMEOUT = ((std::uint16_t)0x4000);
#undef I2C_SR1_SMBALERT
constexpr auto I2C_SR1_SMBALERT = ((std::uint16_t)0x8000);

/*******************  Bit definition for I2C_SR2 register  ********************/
#undef I2C_SR2_MSL
constexpr auto I2C_SR2_MSL = ((std::uint16_t)0x0001);
#undef I2C_SR2_BUSY
constexpr auto I2C_SR2_BUSY = ((std::uint16_t)0x0002);
#undef I2C_SR2_TRA
constexpr auto I2C_SR2_TRA = ((std::uint16_t)0x0004);
#undef I2C_SR2_GENCALL
constexpr auto I2C_SR2_GENCALL = ((std::uint16_t)0x0010);
#undef I2C_SR2_SMBDEFAULT
constexpr auto I2C_SR2_SMBDEFAULT = ((std::uint16_t)0x0020);
#undef I2C_SR2_SMBHOST
constexpr auto I2C_SR2_SMBHOST = ((std::uint16_t)0x0040);
#undef I2C_SR2_DUALF
constexpr auto I2C_SR2_DUALF = ((std::uint16_t)0x0080);
#undef I2C_SR2_PEC
constexpr auto I2C_SR2_PEC = ((std::uint16_t)0xFF00);

/*******************  Bit definition for I2C_CCR register  ********************/
#undef I2C_CCR_CCR
constexpr auto I2C_CCR_CCR = ((std::uint16_t)0x0FFF);
#undef I2C_CCR_DUTY
constexpr auto I2C_CCR_DUTY = ((std::uint16_t)0x4000);
#undef I2C_CCR_FS
constexpr auto I2C_CCR_FS = ((std::uint16_t)0x8000);

/******************  Bit definition for I2C_TRISE register  *******************/
#undef I2C_TRISE_TRISE
constexpr auto I2C_TRISE_TRISE = ((std::uint8_t)0x3F);

/******************************************************************************/
/*                                                                            */
/*         Universal Synchronous Asynchronous Receiver Transmitter            */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for USART_SR register  *******************/
#undef USART_SR_PE
constexpr auto USART_SR_PE = ((std::uint16_t)0x0001);
#undef USART_SR_FE
constexpr auto USART_SR_FE = ((std::uint16_t)0x0002);
#undef USART_SR_NE
constexpr auto USART_SR_NE = ((std::uint16_t)0x0004);
#undef USART_SR_ORE
constexpr auto USART_SR_ORE = ((std::uint16_t)0x0008);
#undef USART_SR_IDLE
constexpr auto USART_SR_IDLE = ((std::uint16_t)0x0010);
#undef USART_SR_RXNE
constexpr auto USART_SR_RXNE = ((std::uint16_t)0x0020);
#undef USART_SR_TC
constexpr auto USART_SR_TC = ((std::uint16_t)0x0040);
#undef USART_SR_TXE
constexpr auto USART_SR_TXE = ((std::uint16_t)0x0080);
#undef USART_SR_LBD
constexpr auto USART_SR_LBD = ((std::uint16_t)0x0100);
#undef USART_SR_CTS
constexpr auto USART_SR_CTS = ((std::uint16_t)0x0200);

/*******************  Bit definition for USART_DR register  *******************/
#undef USART_DR_DR
constexpr auto USART_DR_DR = ((std::uint16_t)0x01FF);

/******************  Bit definition for USART_BRR register  *******************/
#undef USART_BRR_DIV_Fraction
constexpr auto USART_BRR_DIV_Fraction = ((std::uint16_t)0x000F);
#undef USART_BRR_DIV_Mantissa
constexpr auto USART_BRR_DIV_Mantissa = ((std::uint16_t)0xFFF0);

/******************  Bit definition for USART_CR1 register  *******************/
#undef USART_CR1_SBK
constexpr auto USART_CR1_SBK = ((std::uint16_t)0x0001);
#undef USART_CR1_RWU
constexpr auto USART_CR1_RWU = ((std::uint16_t)0x0002);
#undef USART_CR1_RE
constexpr auto USART_CR1_RE = ((std::uint16_t)0x0004);
#undef USART_CR1_TE
constexpr auto USART_CR1_TE = ((std::uint16_t)0x0008);
#undef USART_CR1_IDLEIE
constexpr auto USART_CR1_IDLEIE = ((std::uint16_t)0x0010);
#undef USART_CR1_RXNEIE
constexpr auto USART_CR1_RXNEIE = ((std::uint16_t)0x0020);
#undef USART_CR1_TCIE
constexpr auto USART_CR1_TCIE = ((std::uint16_t)0x0040);
#undef USART_CR1_TXEIE
constexpr auto USART_CR1_TXEIE = ((std::uint16_t)0x0080);
#undef USART_CR1_PEIE
constexpr auto USART_CR1_PEIE = ((std::uint16_t)0x0100);
#undef USART_CR1_PS
constexpr auto USART_CR1_PS = ((std::uint16_t)0x0200);
#undef USART_CR1_PCE
constexpr auto USART_CR1_PCE = ((std::uint16_t)0x0400);
#undef USART_CR1_WAKE
constexpr auto USART_CR1_WAKE = ((std::uint16_t)0x0800);
#undef USART_CR1_M
constexpr auto USART_CR1_M = ((std::uint16_t)0x1000);
#undef USART_CR1_UE
constexpr auto USART_CR1_UE = ((std::uint16_t)0x2000);
#undef USART_CR1_OVER8
constexpr auto USART_CR1_OVER8 = ((std::uint16_t)0x8000);

/******************  Bit definition for USART_CR2 register  *******************/
#undef USART_CR2_ADD
constexpr auto USART_CR2_ADD = ((std::uint16_t)0x000F);
#undef USART_CR2_LBDL
constexpr auto USART_CR2_LBDL = ((std::uint16_t)0x0020);
#undef USART_CR2_LBDIE
constexpr auto USART_CR2_LBDIE = ((std::uint16_t)0x0040);
#undef USART_CR2_LBCL
constexpr auto USART_CR2_LBCL = ((std::uint16_t)0x0100);
#undef USART_CR2_CPHA
constexpr auto USART_CR2_CPHA = ((std::uint16_t)0x0200);
#undef USART_CR2_CPOL
constexpr auto USART_CR2_CPOL = ((std::uint16_t)0x0400);
#undef USART_CR2_CLKEN
constexpr auto USART_CR2_CLKEN = ((std::uint16_t)0x0800);

#undef USART_CR2_STOP
constexpr auto USART_CR2_STOP = ((std::uint16_t)0x3000);
#undef USART_CR2_STOP_0
constexpr auto USART_CR2_STOP_0 = ((std::uint16_t)0x1000);
#undef USART_CR2_STOP_1
constexpr auto USART_CR2_STOP_1 = ((std::uint16_t)0x2000);

#undef USART_CR2_LINEN
constexpr auto USART_CR2_LINEN = ((std::uint16_t)0x4000);

/******************  Bit definition for USART_CR3 register  *******************/
#undef USART_CR3_EIE
constexpr auto USART_CR3_EIE = ((std::uint16_t)0x0001);
#undef USART_CR3_IREN
constexpr auto USART_CR3_IREN = ((std::uint16_t)0x0002);
#undef USART_CR3_IRLP
constexpr auto USART_CR3_IRLP = ((std::uint16_t)0x0004);
#undef USART_CR3_HDSEL
constexpr auto USART_CR3_HDSEL = ((std::uint16_t)0x0008);
#undef USART_CR3_NACK
constexpr auto USART_CR3_NACK = ((std::uint16_t)0x0010);
#undef USART_CR3_SCEN
constexpr auto USART_CR3_SCEN = ((std::uint16_t)0x0020);
#undef USART_CR3_DMAR
constexpr auto USART_CR3_DMAR = ((std::uint16_t)0x0040);
#undef USART_CR3_DMAT
constexpr auto USART_CR3_DMAT = ((std::uint16_t)0x0080);
#undef USART_CR3_RTSE
constexpr auto USART_CR3_RTSE = ((std::uint16_t)0x0100);
#undef USART_CR3_CTSE
constexpr auto USART_CR3_CTSE = ((std::uint16_t)0x0200);
#undef USART_CR3_CTSIE
constexpr auto USART_CR3_CTSIE = ((std::uint16_t)0x0400);
#undef USART_CR3_ONEBIT
constexpr auto USART_CR3_ONEBIT = ((std::uint16_t)0x0800);

/******************  Bit definition for USART_GTPR register  ******************/
#undef USART_GTPR_PSC
constexpr auto USART_GTPR_PSC = ((std::uint16_t)0x00FF);
#undef USART_GTPR_PSC_0
constexpr auto USART_GTPR_PSC_0 = ((std::uint16_t)0x0001);
#undef USART_GTPR_PSC_1
constexpr auto USART_GTPR_PSC_1 = ((std::uint16_t)0x0002);
#undef USART_GTPR_PSC_2
constexpr auto USART_GTPR_PSC_2 = ((std::uint16_t)0x0004);
#undef USART_GTPR_PSC_3
constexpr auto USART_GTPR_PSC_3 = ((std::uint16_t)0x0008);
#undef USART_GTPR_PSC_4
constexpr auto USART_GTPR_PSC_4 = ((std::uint16_t)0x0010);
#undef USART_GTPR_PSC_5
constexpr auto USART_GTPR_PSC_5 = ((std::uint16_t)0x0020);
#undef USART_GTPR_PSC_6
constexpr auto USART_GTPR_PSC_6 = ((std::uint16_t)0x0040);
#undef USART_GTPR_PSC_7
constexpr auto USART_GTPR_PSC_7 = ((std::uint16_t)0x0080);

#undef USART_GTPR_GT
constexpr auto USART_GTPR_GT = ((std::uint16_t)0xFF00);

/******************************************************************************/
/*                                                                            */
/*                                 Debug MCU                                  */
/*                                                                            */
/******************************************************************************/

/****************  Bit definition for DBGMCU_IDCODE register  *****************/
#undef DBGMCU_IDCODE_DEV_ID
constexpr auto DBGMCU_IDCODE_DEV_ID = ((std::uint32_t)0x00000FFF);

#undef DBGMCU_IDCODE_REV_ID
constexpr auto DBGMCU_IDCODE_REV_ID = ((std::uint32_t)0xFFFF0000);
#undef DBGMCU_IDCODE_REV_ID_0
constexpr auto DBGMCU_IDCODE_REV_ID_0 = ((std::uint32_t)0x00010000);
#undef DBGMCU_IDCODE_REV_ID_1
constexpr auto DBGMCU_IDCODE_REV_ID_1 = ((std::uint32_t)0x00020000);
#undef DBGMCU_IDCODE_REV_ID_2
constexpr auto DBGMCU_IDCODE_REV_ID_2 = ((std::uint32_t)0x00040000);
#undef DBGMCU_IDCODE_REV_ID_3
constexpr auto DBGMCU_IDCODE_REV_ID_3 = ((std::uint32_t)0x00080000);
#undef DBGMCU_IDCODE_REV_ID_4
constexpr auto DBGMCU_IDCODE_REV_ID_4 = ((std::uint32_t)0x00100000);
#undef DBGMCU_IDCODE_REV_ID_5
constexpr auto DBGMCU_IDCODE_REV_ID_5 = ((std::uint32_t)0x00200000);
#undef DBGMCU_IDCODE_REV_ID_6
constexpr auto DBGMCU_IDCODE_REV_ID_6 = ((std::uint32_t)0x00400000);
#undef DBGMCU_IDCODE_REV_ID_7
constexpr auto DBGMCU_IDCODE_REV_ID_7 = ((std::uint32_t)0x00800000);
#undef DBGMCU_IDCODE_REV_ID_8
constexpr auto DBGMCU_IDCODE_REV_ID_8 = ((std::uint32_t)0x01000000);
#undef DBGMCU_IDCODE_REV_ID_9
constexpr auto DBGMCU_IDCODE_REV_ID_9 = ((std::uint32_t)0x02000000);
#undef DBGMCU_IDCODE_REV_ID_10
constexpr auto DBGMCU_IDCODE_REV_ID_10 = ((std::uint32_t)0x04000000);
#undef DBGMCU_IDCODE_REV_ID_11
constexpr auto DBGMCU_IDCODE_REV_ID_11 = ((std::uint32_t)0x08000000);
#undef DBGMCU_IDCODE_REV_ID_12
constexpr auto DBGMCU_IDCODE_REV_ID_12 = ((std::uint32_t)0x10000000);
#undef DBGMCU_IDCODE_REV_ID_13
constexpr auto DBGMCU_IDCODE_REV_ID_13 = ((std::uint32_t)0x20000000);
#undef DBGMCU_IDCODE_REV_ID_14
constexpr auto DBGMCU_IDCODE_REV_ID_14 = ((std::uint32_t)0x40000000);
#undef DBGMCU_IDCODE_REV_ID_15
constexpr auto DBGMCU_IDCODE_REV_ID_15 = ((std::uint32_t)0x80000000);

/******************  Bit definition for DBGMCU_CR register  *******************/
#undef DBGMCU_CR_DBG_SLEEP
constexpr auto DBGMCU_CR_DBG_SLEEP = ((std::uint32_t)0x00000001);
#undef DBGMCU_CR_DBG_STOP
constexpr auto DBGMCU_CR_DBG_STOP = ((std::uint32_t)0x00000002);
#undef DBGMCU_CR_DBG_STANDBY
constexpr auto DBGMCU_CR_DBG_STANDBY = ((std::uint32_t)0x00000004);
#undef DBGMCU_CR_TRACE_IOEN
constexpr auto DBGMCU_CR_TRACE_IOEN = ((std::uint32_t)0x00000020);

#undef DBGMCU_CR_TRACE_MODE
constexpr auto DBGMCU_CR_TRACE_MODE = ((std::uint32_t)0x000000C0);
#undef DBGMCU_CR_TRACE_MODE_0
constexpr auto DBGMCU_CR_TRACE_MODE_0 = ((std::uint32_t)0x00000040);
#undef DBGMCU_CR_TRACE_MODE_1
constexpr auto DBGMCU_CR_TRACE_MODE_1 = ((std::uint32_t)0x00000080);

#undef DBGMCU_CR_DBG_IWDG_STOP
constexpr auto DBGMCU_CR_DBG_IWDG_STOP = ((std::uint32_t)0x00000100);
#undef DBGMCU_CR_DBG_WWDG_STOP
constexpr auto DBGMCU_CR_DBG_WWDG_STOP = ((std::uint32_t)0x00000200);
#undef DBGMCU_CR_DBG_TIM1_STOP
constexpr auto DBGMCU_CR_DBG_TIM1_STOP = ((std::uint32_t)0x00000400);
#undef DBGMCU_CR_DBG_TIM2_STOP
constexpr auto DBGMCU_CR_DBG_TIM2_STOP = ((std::uint32_t)0x00000800);
#undef DBGMCU_CR_DBG_TIM3_STOP
constexpr auto DBGMCU_CR_DBG_TIM3_STOP = ((std::uint32_t)0x00001000);
#undef DBGMCU_CR_DBG_TIM4_STOP
constexpr auto DBGMCU_CR_DBG_TIM4_STOP = ((std::uint32_t)0x00002000);
#undef DBGMCU_CR_DBG_CAN1_STOP
constexpr auto DBGMCU_CR_DBG_CAN1_STOP = ((std::uint32_t)0x00004000);
#undef DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT
constexpr auto DBGMCU_CR_DBG_I2C1_SMBUS_TIMEOUT = ((std::uint32_t)0x00008000);
#undef DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT
constexpr auto DBGMCU_CR_DBG_I2C2_SMBUS_TIMEOUT = ((std::uint32_t)0x00010000);
#undef DBGMCU_CR_DBG_TIM8_STOP
constexpr auto DBGMCU_CR_DBG_TIM8_STOP = ((std::uint32_t)0x00020000);
#undef DBGMCU_CR_DBG_TIM5_STOP
constexpr auto DBGMCU_CR_DBG_TIM5_STOP = ((std::uint32_t)0x00040000);
#undef DBGMCU_CR_DBG_TIM6_STOP
constexpr auto DBGMCU_CR_DBG_TIM6_STOP = ((std::uint32_t)0x00080000);
#undef DBGMCU_CR_DBG_TIM7_STOP
constexpr auto DBGMCU_CR_DBG_TIM7_STOP = ((std::uint32_t)0x00100000);
#undef DBGMCU_CR_DBG_CAN2_STOP
constexpr auto DBGMCU_CR_DBG_CAN2_STOP = ((std::uint32_t)0x00200000);
#undef DBGMCU_CR_DBG_TIM15_STOP
constexpr auto DBGMCU_CR_DBG_TIM15_STOP = ((std::uint32_t)0x00400000);
#undef DBGMCU_CR_DBG_TIM16_STOP
constexpr auto DBGMCU_CR_DBG_TIM16_STOP = ((std::uint32_t)0x00800000);
#undef DBGMCU_CR_DBG_TIM17_STOP
constexpr auto DBGMCU_CR_DBG_TIM17_STOP = ((std::uint32_t)0x01000000);
#undef DBGMCU_CR_DBG_TIM12_STOP
constexpr auto DBGMCU_CR_DBG_TIM12_STOP = ((std::uint32_t)0x02000000);
#undef DBGMCU_CR_DBG_TIM13_STOP
constexpr auto DBGMCU_CR_DBG_TIM13_STOP = ((std::uint32_t)0x04000000);
#undef DBGMCU_CR_DBG_TIM14_STOP
constexpr auto DBGMCU_CR_DBG_TIM14_STOP = ((std::uint32_t)0x08000000);
#undef DBGMCU_CR_DBG_TIM9_STOP
constexpr auto DBGMCU_CR_DBG_TIM9_STOP = ((std::uint32_t)0x10000000);
#undef DBGMCU_CR_DBG_TIM10_STOP
constexpr auto DBGMCU_CR_DBG_TIM10_STOP = ((std::uint32_t)0x20000000);
#undef DBGMCU_CR_DBG_TIM11_STOP
constexpr auto DBGMCU_CR_DBG_TIM11_STOP = ((std::uint32_t)0x40000000);

/******************************************************************************/
/*                                                                            */
/*                      FLASH and Option Bytes Registers                      */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for FLASH_ACR register  ******************/
#undef FLASH_ACR_LATENCY
constexpr auto FLASH_ACR_LATENCY = ((std::uint8_t)0x07);
#undef FLASH_ACR_LATENCY_0
constexpr auto FLASH_ACR_LATENCY_0 = ((std::uint8_t)0x00);
#undef FLASH_ACR_LATENCY_1
constexpr auto FLASH_ACR_LATENCY_1 = ((std::uint8_t)0x01);
#undef FLASH_ACR_LATENCY_2
constexpr auto FLASH_ACR_LATENCY_2 = ((std::uint8_t)0x02);

#undef FLASH_ACR_HLFCYA
constexpr auto FLASH_ACR_HLFCYA = ((std::uint8_t)0x08);
#undef FLASH_ACR_PRFTBE
constexpr auto FLASH_ACR_PRFTBE = ((std::uint8_t)0x10);
#undef FLASH_ACR_PRFTBS
constexpr auto FLASH_ACR_PRFTBS = ((std::uint8_t)0x20);

/******************  Bit definition for FLASH_KEYR register  ******************/
#undef FLASH_KEYR_FKEYR
constexpr auto FLASH_KEYR_FKEYR = ((std::uint32_t)0xFFFFFFFF);

/******************  FLASH Keys  **********************************************/
#undef RDP_Key
constexpr auto RDP_Key = ((std::uint16_t)0x00A5);
#undef FLASH_KEY1
constexpr auto FLASH_KEY1 = ((std::uint32_t)0x45670123);
#undef FLASH_KEY2
constexpr auto FLASH_KEY2 = ((std::uint32_t)0xCDEF89AB);

/*****************  Bit definition for FLASH_OPTKEYR register  ****************/
#undef FLASH_OPTKEYR_OPTKEYR
constexpr auto FLASH_OPTKEYR_OPTKEYR = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for FLASH_SR register  *******************/
#undef FLASH_SR_BSY
constexpr auto FLASH_SR_BSY = ((std::uint8_t)0x01);
#undef FLASH_SR_PGERR
constexpr auto FLASH_SR_PGERR = ((std::uint8_t)0x04);
#undef FLASH_SR_WRPRTERR
constexpr auto FLASH_SR_WRPRTERR = ((std::uint8_t)0x10);
#undef FLASH_SR_EOP
constexpr auto FLASH_SR_EOP = ((std::uint8_t)0x20);

/*******************  Bit definition for FLASH_CR register  *******************/
#undef FLASH_CR_PG
constexpr auto FLASH_CR_PG = ((std::uint16_t)0x0001);
#undef FLASH_CR_PER
constexpr auto FLASH_CR_PER = ((std::uint16_t)0x0002);
#undef FLASH_CR_MER
constexpr auto FLASH_CR_MER = ((std::uint16_t)0x0004);
#undef FLASH_CR_OPTPG
constexpr auto FLASH_CR_OPTPG = ((std::uint16_t)0x0010);
#undef FLASH_CR_OPTER
constexpr auto FLASH_CR_OPTER = ((std::uint16_t)0x0020);
#undef FLASH_CR_STRT
constexpr auto FLASH_CR_STRT = ((std::uint16_t)0x0040);
#undef FLASH_CR_LOCK
constexpr auto FLASH_CR_LOCK = ((std::uint16_t)0x0080);
#undef FLASH_CR_OPTWRE
constexpr auto FLASH_CR_OPTWRE = ((std::uint16_t)0x0200);
#undef FLASH_CR_ERRIE
constexpr auto FLASH_CR_ERRIE = ((std::uint16_t)0x0400);
#undef FLASH_CR_EOPIE
constexpr auto FLASH_CR_EOPIE = ((std::uint16_t)0x1000);

/*******************  Bit definition for FLASH_AR register  *******************/
#undef FLASH_AR_FAR
constexpr auto FLASH_AR_FAR = ((std::uint32_t)0xFFFFFFFF);

/******************  Bit definition for FLASH_OBR register  *******************/
#undef FLASH_OBR_OPTERR
constexpr auto FLASH_OBR_OPTERR = ((std::uint16_t)0x0001);
#undef FLASH_OBR_RDPRT
constexpr auto FLASH_OBR_RDPRT = ((std::uint16_t)0x0002);

#undef FLASH_OBR_USER
constexpr auto FLASH_OBR_USER = ((std::uint16_t)0x03FC);
#undef FLASH_OBR_WDG_SW
constexpr auto FLASH_OBR_WDG_SW = ((std::uint16_t)0x0004);
#undef FLASH_OBR_nRST_STOP
constexpr auto FLASH_OBR_nRST_STOP = ((std::uint16_t)0x0008);
#undef FLASH_OBR_nRST_STDBY
constexpr auto FLASH_OBR_nRST_STDBY = ((std::uint16_t)0x0010);
#undef FLASH_OBR_BFB2
constexpr auto FLASH_OBR_BFB2 = ((std::uint16_t)0x0020);

/******************  Bit definition for FLASH_WRPR register  ******************/
#undef FLASH_WRPR_WRP
constexpr auto FLASH_WRPR_WRP = ((std::uint32_t)0xFFFFFFFF);

/*----------------------------------------------------------------------------*/

/******************  Bit definition for FLASH_RDP register  *******************/
#undef FLASH_RDP_RDP
constexpr auto FLASH_RDP_RDP = ((std::uint32_t)0x000000FF);
#undef FLASH_RDP_nRDP
constexpr auto FLASH_RDP_nRDP = ((std::uint32_t)0x0000FF00);

/******************  Bit definition for FLASH_USER register  ******************/
#undef FLASH_USER_USER
constexpr auto FLASH_USER_USER = ((std::uint32_t)0x00FF0000);
#undef FLASH_USER_nUSER
constexpr auto FLASH_USER_nUSER = ((std::uint32_t)0xFF000000);

/******************  Bit definition for FLASH_Data0 register  *****************/
#undef FLASH_Data0_Data0
constexpr auto FLASH_Data0_Data0 = ((std::uint32_t)0x000000FF);
#undef FLASH_Data0_nData0
constexpr auto FLASH_Data0_nData0 = ((std::uint32_t)0x0000FF00);

/******************  Bit definition for FLASH_Data1 register  *****************/
#undef FLASH_Data1_Data1
constexpr auto FLASH_Data1_Data1 = ((std::uint32_t)0x00FF0000);
#undef FLASH_Data1_nData1
constexpr auto FLASH_Data1_nData1 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for FLASH_WRP0 register  ******************/
#undef FLASH_WRP0_WRP0
constexpr auto FLASH_WRP0_WRP0 = ((std::uint32_t)0x000000FF);
#undef FLASH_WRP0_nWRP0
constexpr auto FLASH_WRP0_nWRP0 = ((std::uint32_t)0x0000FF00);

/******************  Bit definition for FLASH_WRP1 register  ******************/
#undef FLASH_WRP1_WRP1
constexpr auto FLASH_WRP1_WRP1 = ((std::uint32_t)0x00FF0000);
#undef FLASH_WRP1_nWRP1
constexpr auto FLASH_WRP1_nWRP1 = ((std::uint32_t)0xFF000000);

/******************  Bit definition for FLASH_WRP2 register  ******************/
#undef FLASH_WRP2_WRP2
constexpr auto FLASH_WRP2_WRP2 = ((std::uint32_t)0x000000FF);
#undef FLASH_WRP2_nWRP2
constexpr auto FLASH_WRP2_nWRP2 = ((std::uint32_t)0x0000FF00);

/******************  Bit definition for FLASH_WRP3 register  ******************/
#undef FLASH_WRP3_WRP3
constexpr auto FLASH_WRP3_WRP3 = ((std::uint32_t)0x00FF0000);
#undef FLASH_WRP3_nWRP3
constexpr auto FLASH_WRP3_nWRP3 = ((std::uint32_t)0xFF000000);

#ifdef STM32F10X_CL
/******************************************************************************/
/*                Ethernet MAC Registers bits definitions                     */
/******************************************************************************/
/* Bit definition for Ethernet MAC Control Register register */
#undef ETH_MACCR_WD
constexpr auto ETH_MACCR_WD = ((std::uint32_t)0x00800000);
#undef ETH_MACCR_JD
constexpr auto ETH_MACCR_JD = ((std::uint32_t)0x00400000);
#undef ETH_MACCR_IFG
constexpr auto ETH_MACCR_IFG = ((std::uint32_t)0x000E0000);
#undef ETH_MACCR_IFG_96Bit
constexpr auto ETH_MACCR_IFG_96Bit = ((std::uint32_t)0x00000000);
#undef ETH_MACCR_IFG_88Bit
constexpr auto ETH_MACCR_IFG_88Bit = ((std::uint32_t)0x00020000);
#undef ETH_MACCR_IFG_80Bit
constexpr auto ETH_MACCR_IFG_80Bit = ((std::uint32_t)0x00040000);
#undef ETH_MACCR_IFG_72Bit
constexpr auto ETH_MACCR_IFG_72Bit = ((std::uint32_t)0x00060000);
#undef ETH_MACCR_IFG_64Bit
constexpr auto ETH_MACCR_IFG_64Bit = ((std::uint32_t)0x00080000);
#undef ETH_MACCR_IFG_56Bit
constexpr auto ETH_MACCR_IFG_56Bit = ((std::uint32_t)0x000A0000);
#undef ETH_MACCR_IFG_48Bit
constexpr auto ETH_MACCR_IFG_48Bit = ((std::uint32_t)0x000C0000);
#undef ETH_MACCR_IFG_40Bit
constexpr auto ETH_MACCR_IFG_40Bit = ((std::uint32_t)0x000E0000);
#undef ETH_MACCR_CSD
constexpr auto ETH_MACCR_CSD = ((std::uint32_t)0x00010000);
#undef ETH_MACCR_FES
constexpr auto ETH_MACCR_FES = ((std::uint32_t)0x00004000);
#undef ETH_MACCR_ROD
constexpr auto ETH_MACCR_ROD = ((std::uint32_t)0x00002000);
#undef ETH_MACCR_LM
constexpr auto ETH_MACCR_LM = ((std::uint32_t)0x00001000);
#undef ETH_MACCR_DM
constexpr auto ETH_MACCR_DM = ((std::uint32_t)0x00000800);
#undef ETH_MACCR_IPCO
constexpr auto ETH_MACCR_IPCO = ((std::uint32_t)0x00000400);
#undef ETH_MACCR_RD
constexpr auto ETH_MACCR_RD = ((std::uint32_t)0x00000200);
#undef ETH_MACCR_APCS
constexpr auto ETH_MACCR_APCS = ((std::uint32_t)0x00000080);
#undef ETH_MACCR_BL
constexpr auto ETH_MACCR_BL = ((std::uint32_t)0x00000060);
a transmission attempt during retries after a collision : 0 = < r < 2 ^ k * /
#undef ETH_MACCR_BL_10
                                                                            constexpr auto ETH_MACCR_BL_10 = ((std::uint32_t)0x00000000);
#undef ETH_MACCR_BL_8
constexpr auto ETH_MACCR_BL_8 = ((std::uint32_t)0x00000020);
#undef ETH_MACCR_BL_4
constexpr auto ETH_MACCR_BL_4 = ((std::uint32_t)0x00000040);
#undef ETH_MACCR_BL_1
constexpr auto ETH_MACCR_BL_1 = ((std::uint32_t)0x00000060);
#undef ETH_MACCR_DC
constexpr auto ETH_MACCR_DC = ((std::uint32_t)0x00000010);
#undef ETH_MACCR_TE
constexpr auto ETH_MACCR_TE = ((std::uint32_t)0x00000008);
#undef ETH_MACCR_RE
constexpr auto ETH_MACCR_RE = ((std::uint32_t)0x00000004);

/* Bit definition for Ethernet MAC Frame Filter Register */
#undef ETH_MACFFR_RA
constexpr auto ETH_MACFFR_RA = ((std::uint32_t)0x80000000);
#undef ETH_MACFFR_HPF
constexpr auto ETH_MACFFR_HPF = ((std::uint32_t)0x00000400);
#undef ETH_MACFFR_SAF
constexpr auto ETH_MACFFR_SAF = ((std::uint32_t)0x00000200);
#undef ETH_MACFFR_SAIF
constexpr auto ETH_MACFFR_SAIF = ((std::uint32_t)0x00000100);
#undef ETH_MACFFR_PCF
constexpr auto ETH_MACFFR_PCF = ((std::uint32_t)0x000000C0);
#undef ETH_MACFFR_PCF_BlockAll
constexpr auto ETH_MACFFR_PCF_BlockAll = ((std::uint32_t)0x00000040);
#undef ETH_MACFFR_PCF_ForwardAll
constexpr auto ETH_MACFFR_PCF_ForwardAll = ((std::uint32_t)0x00000080);
#undef ETH_MACFFR_PCF_ForwardPassedAddrFilter
constexpr auto ETH_MACFFR_PCF_ForwardPassedAddrFilter = ((std::uint32_t)0x000000C0);
#undef ETH_MACFFR_BFD
constexpr auto ETH_MACFFR_BFD = ((std::uint32_t)0x00000020);
#undef ETH_MACFFR_PAM
constexpr auto ETH_MACFFR_PAM = ((std::uint32_t)0x00000010);
#undef ETH_MACFFR_DAIF
constexpr auto ETH_MACFFR_DAIF = ((std::uint32_t)0x00000008);
#undef ETH_MACFFR_HM
constexpr auto ETH_MACFFR_HM = ((std::uint32_t)0x00000004);
#undef ETH_MACFFR_HU
constexpr auto ETH_MACFFR_HU = ((std::uint32_t)0x00000002);
#undef ETH_MACFFR_PM
constexpr auto ETH_MACFFR_PM = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet MAC Hash Table High Register */
#undef ETH_MACHTHR_HTH
constexpr auto ETH_MACHTHR_HTH = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MAC Hash Table Low Register */
#undef ETH_MACHTLR_HTL
constexpr auto ETH_MACHTLR_HTL = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MAC MII Address Register */
#undef ETH_MACMIIAR_PA
constexpr auto ETH_MACMIIAR_PA = ((std::uint32_t)0x0000F800);
#undef ETH_MACMIIAR_MR
constexpr auto ETH_MACMIIAR_MR = ((std::uint32_t)0x000007C0);
#undef ETH_MACMIIAR_CR
constexpr auto ETH_MACMIIAR_CR = ((std::uint32_t)0x0000001C);
#undef ETH_MACMIIAR_CR_Div42
constexpr auto ETH_MACMIIAR_CR_Div42 = ((std::uint32_t)0x00000000);
#undef ETH_MACMIIAR_CR_Div16
constexpr auto ETH_MACMIIAR_CR_Div16 = ((std::uint32_t)0x00000008);
#undef ETH_MACMIIAR_CR_Div26
constexpr auto ETH_MACMIIAR_CR_Div26 = ((std::uint32_t)0x0000000C);
#undef ETH_MACMIIAR_MW
constexpr auto ETH_MACMIIAR_MW = ((std::uint32_t)0x00000002);
#undef ETH_MACMIIAR_MB
constexpr auto ETH_MACMIIAR_MB = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet MAC MII Data Register */
#undef ETH_MACMIIDR_MD
constexpr auto ETH_MACMIIDR_MD = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Flow Control Register */
#undef ETH_MACFCR_PT
constexpr auto ETH_MACFCR_PT = ((std::uint32_t)0xFFFF0000);
#undef ETH_MACFCR_ZQPD
constexpr auto ETH_MACFCR_ZQPD = ((std::uint32_t)0x00000080);
#undef ETH_MACFCR_PLT
constexpr auto ETH_MACFCR_PLT = ((std::uint32_t)0x00000030);
#undef ETH_MACFCR_PLT_Minus4
constexpr auto ETH_MACFCR_PLT_Minus4 = ((std::uint32_t)0x00000000);
#undef ETH_MACFCR_PLT_Minus28
constexpr auto ETH_MACFCR_PLT_Minus28 = ((std::uint32_t)0x00000010);
#undef ETH_MACFCR_PLT_Minus144
constexpr auto ETH_MACFCR_PLT_Minus144 = ((std::uint32_t)0x00000020);
#undef ETH_MACFCR_PLT_Minus256
constexpr auto ETH_MACFCR_PLT_Minus256 = ((std::uint32_t)0x00000030);
#undef ETH_MACFCR_UPFD
constexpr auto ETH_MACFCR_UPFD = ((std::uint32_t)0x00000008);
#undef ETH_MACFCR_RFCE
constexpr auto ETH_MACFCR_RFCE = ((std::uint32_t)0x00000004);
#undef ETH_MACFCR_TFCE
constexpr auto ETH_MACFCR_TFCE = ((std::uint32_t)0x00000002);
#undef ETH_MACFCR_FCBBPA
constexpr auto ETH_MACFCR_FCBBPA = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet MAC VLAN Tag Register */
#undef ETH_MACVLANTR_VLANTC
constexpr auto ETH_MACVLANTR_VLANTC = ((std::uint32_t)0x00010000);
#undef ETH_MACVLANTR_VLANTI
constexpr auto ETH_MACVLANTR_VLANTI = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Remote Wake-UpFrame Filter Register */
#undef ETH_MACRWUFFR_D
constexpr auto ETH_MACRWUFFR_D = ((std::uint32_t)0xFFFFFFFF);
/* Eight sequential Writes to this address (offset 0x28) will write all Wake-UpFrame Filter Registers.
   Eight sequential Reads from this address (offset 0x28) will read all Wake-UpFrame Filter Registers. */
/* Wake-UpFrame Filter Reg0 : Filter 0 Byte Mask
   Wake-UpFrame Filter Reg1 : Filter 1 Byte Mask
   Wake-UpFrame Filter Reg2 : Filter 2 Byte Mask
   Wake-UpFrame Filter Reg3 : Filter 3 Byte Mask
   Wake-UpFrame Filter Reg4 : RSVD - Filter3 Command - RSVD - Filter2 Command -
                              RSVD - Filter1 Command - RSVD - Filter0 Command
   Wake-UpFrame Filter Re5 : Filter3 Offset - Filter2 Offset - Filter1 Offset - Filter0 Offset
   Wake-UpFrame Filter Re6 : Filter1 CRC16 - Filter0 CRC16
   Wake-UpFrame Filter Re7 : Filter3 CRC16 - Filter2 CRC16 */

/* Bit definition for Ethernet MAC PMT Control and Status Register */
#undef ETH_MACPMTCSR_WFFRPR
constexpr auto ETH_MACPMTCSR_WFFRPR = ((std::uint32_t)0x80000000);
#undef ETH_MACPMTCSR_GU
constexpr auto ETH_MACPMTCSR_GU = ((std::uint32_t)0x00000200);
#undef ETH_MACPMTCSR_WFR
constexpr auto ETH_MACPMTCSR_WFR = ((std::uint32_t)0x00000040);
#undef ETH_MACPMTCSR_MPR
constexpr auto ETH_MACPMTCSR_MPR = ((std::uint32_t)0x00000020);
#undef ETH_MACPMTCSR_WFE
constexpr auto ETH_MACPMTCSR_WFE = ((std::uint32_t)0x00000004);
#undef ETH_MACPMTCSR_MPE
constexpr auto ETH_MACPMTCSR_MPE = ((std::uint32_t)0x00000002);
#undef ETH_MACPMTCSR_PD
constexpr auto ETH_MACPMTCSR_PD = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet MAC Status Register */
#undef ETH_MACSR_TSTS
constexpr auto ETH_MACSR_TSTS = ((std::uint32_t)0x00000200);
#undef ETH_MACSR_MMCTS
constexpr auto ETH_MACSR_MMCTS = ((std::uint32_t)0x00000040);
#undef ETH_MACSR_MMMCRS
constexpr auto ETH_MACSR_MMMCRS = ((std::uint32_t)0x00000020);
#undef ETH_MACSR_MMCS
constexpr auto ETH_MACSR_MMCS = ((std::uint32_t)0x00000010);
#undef ETH_MACSR_PMTS
constexpr auto ETH_MACSR_PMTS = ((std::uint32_t)0x00000008);

/* Bit definition for Ethernet MAC Interrupt Mask Register */
#undef ETH_MACIMR_TSTIM
constexpr auto ETH_MACIMR_TSTIM = ((std::uint32_t)0x00000200);
#undef ETH_MACIMR_PMTIM
constexpr auto ETH_MACIMR_PMTIM = ((std::uint32_t)0x00000008);

/* Bit definition for Ethernet MAC Address0 High Register */
#undef ETH_MACA0HR_MACA0H
constexpr auto ETH_MACA0HR_MACA0H = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Address0 Low Register */
#undef ETH_MACA0LR_MACA0L
constexpr auto ETH_MACA0LR_MACA0L = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MAC Address1 High Register */
#undef ETH_MACA1HR_AE
constexpr auto ETH_MACA1HR_AE = ((std::uint32_t)0x80000000);
#undef ETH_MACA1HR_SA
constexpr auto ETH_MACA1HR_SA = ((std::uint32_t)0x40000000);
#undef ETH_MACA1HR_MBC
constexpr auto ETH_MACA1HR_MBC = ((std::uint32_t)0x3F000000);
#undef ETH_MACA1HR_MBC_HBits15_8
constexpr auto ETH_MACA1HR_MBC_HBits15_8 = ((std::uint32_t)0x20000000);
#undef ETH_MACA1HR_MBC_HBits7_0
constexpr auto ETH_MACA1HR_MBC_HBits7_0 = ((std::uint32_t)0x10000000);
#undef ETH_MACA1HR_MBC_LBits31_24
constexpr auto ETH_MACA1HR_MBC_LBits31_24 = ((std::uint32_t)0x08000000);
#undef ETH_MACA1HR_MBC_LBits23_16
constexpr auto ETH_MACA1HR_MBC_LBits23_16 = ((std::uint32_t)0x04000000);
#undef ETH_MACA1HR_MBC_LBits15_8
constexpr auto ETH_MACA1HR_MBC_LBits15_8 = ((std::uint32_t)0x02000000);
#undef ETH_MACA1HR_MBC_LBits7_0
constexpr auto ETH_MACA1HR_MBC_LBits7_0 = ((std::uint32_t)0x01000000);
#undef ETH_MACA1HR_MACA1H
constexpr auto ETH_MACA1HR_MACA1H = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Address1 Low Register */
#undef ETH_MACA1LR_MACA1L
constexpr auto ETH_MACA1LR_MACA1L = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MAC Address2 High Register */
#undef ETH_MACA2HR_AE
constexpr auto ETH_MACA2HR_AE = ((std::uint32_t)0x80000000);
#undef ETH_MACA2HR_SA
constexpr auto ETH_MACA2HR_SA = ((std::uint32_t)0x40000000);
#undef ETH_MACA2HR_MBC
constexpr auto ETH_MACA2HR_MBC = ((std::uint32_t)0x3F000000);
#undef ETH_MACA2HR_MBC_HBits15_8
constexpr auto ETH_MACA2HR_MBC_HBits15_8 = ((std::uint32_t)0x20000000);
#undef ETH_MACA2HR_MBC_HBits7_0
constexpr auto ETH_MACA2HR_MBC_HBits7_0 = ((std::uint32_t)0x10000000);
#undef ETH_MACA2HR_MBC_LBits31_24
constexpr auto ETH_MACA2HR_MBC_LBits31_24 = ((std::uint32_t)0x08000000);
#undef ETH_MACA2HR_MBC_LBits23_16
constexpr auto ETH_MACA2HR_MBC_LBits23_16 = ((std::uint32_t)0x04000000);
#undef ETH_MACA2HR_MBC_LBits15_8
constexpr auto ETH_MACA2HR_MBC_LBits15_8 = ((std::uint32_t)0x02000000);
#undef ETH_MACA2HR_MBC_LBits7_0
constexpr auto ETH_MACA2HR_MBC_LBits7_0 = ((std::uint32_t)0x01000000);
#undef ETH_MACA2HR_MACA2H
constexpr auto ETH_MACA2HR_MACA2H = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Address2 Low Register */
#undef ETH_MACA2LR_MACA2L
constexpr auto ETH_MACA2LR_MACA2L = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MAC Address3 High Register */
#undef ETH_MACA3HR_AE
constexpr auto ETH_MACA3HR_AE = ((std::uint32_t)0x80000000);
#undef ETH_MACA3HR_SA
constexpr auto ETH_MACA3HR_SA = ((std::uint32_t)0x40000000);
#undef ETH_MACA3HR_MBC
constexpr auto ETH_MACA3HR_MBC = ((std::uint32_t)0x3F000000);
#undef ETH_MACA3HR_MBC_HBits15_8
constexpr auto ETH_MACA3HR_MBC_HBits15_8 = ((std::uint32_t)0x20000000);
#undef ETH_MACA3HR_MBC_HBits7_0
constexpr auto ETH_MACA3HR_MBC_HBits7_0 = ((std::uint32_t)0x10000000);
#undef ETH_MACA3HR_MBC_LBits31_24
constexpr auto ETH_MACA3HR_MBC_LBits31_24 = ((std::uint32_t)0x08000000);
#undef ETH_MACA3HR_MBC_LBits23_16
constexpr auto ETH_MACA3HR_MBC_LBits23_16 = ((std::uint32_t)0x04000000);
#undef ETH_MACA3HR_MBC_LBits15_8
constexpr auto ETH_MACA3HR_MBC_LBits15_8 = ((std::uint32_t)0x02000000);
#undef ETH_MACA3HR_MBC_LBits7_0
constexpr auto ETH_MACA3HR_MBC_LBits7_0 = ((std::uint32_t)0x01000000);
#undef ETH_MACA3HR_MACA3H
constexpr auto ETH_MACA3HR_MACA3H = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet MAC Address3 Low Register */
#undef ETH_MACA3LR_MACA3L
constexpr auto ETH_MACA3LR_MACA3L = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                Ethernet MMC Registers bits definition                      */
/******************************************************************************/

/* Bit definition for Ethernet MMC Contol Register */
#undef ETH_MMCCR_MCF
constexpr auto ETH_MMCCR_MCF = ((std::uint32_t)0x00000008);
#undef ETH_MMCCR_ROR
constexpr auto ETH_MMCCR_ROR = ((std::uint32_t)0x00000004);
#undef ETH_MMCCR_CSR
constexpr auto ETH_MMCCR_CSR = ((std::uint32_t)0x00000002);
#undef ETH_MMCCR_CR
constexpr auto ETH_MMCCR_CR = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet MMC Receive Interrupt Register */
#undef ETH_MMCRIR_RGUFS
constexpr auto ETH_MMCRIR_RGUFS = ((std::uint32_t)0x00020000);
#undef ETH_MMCRIR_RFAES
constexpr auto ETH_MMCRIR_RFAES = ((std::uint32_t)0x00000040);
#undef ETH_MMCRIR_RFCES
constexpr auto ETH_MMCRIR_RFCES = ((std::uint32_t)0x00000020);

/* Bit definition for Ethernet MMC Transmit Interrupt Register */
#undef ETH_MMCTIR_TGFS
constexpr auto ETH_MMCTIR_TGFS = ((std::uint32_t)0x00200000);
#undef ETH_MMCTIR_TGFMSCS
constexpr auto ETH_MMCTIR_TGFMSCS = ((std::uint32_t)0x00008000);
#undef ETH_MMCTIR_TGFSCS
constexpr auto ETH_MMCTIR_TGFSCS = ((std::uint32_t)0x00004000);

/* Bit definition for Ethernet MMC Receive Interrupt Mask Register */
#undef ETH_MMCRIMR_RGUFM
constexpr auto ETH_MMCRIMR_RGUFM = ((std::uint32_t)0x00020000);
#undef ETH_MMCRIMR_RFAEM
constexpr auto ETH_MMCRIMR_RFAEM = ((std::uint32_t)0x00000040);
#undef ETH_MMCRIMR_RFCEM
constexpr auto ETH_MMCRIMR_RFCEM = ((std::uint32_t)0x00000020);

/* Bit definition for Ethernet MMC Transmit Interrupt Mask Register */
#undef ETH_MMCTIMR_TGFM
constexpr auto ETH_MMCTIMR_TGFM = ((std::uint32_t)0x00200000);
#undef ETH_MMCTIMR_TGFMSCM
constexpr auto ETH_MMCTIMR_TGFMSCM = ((std::uint32_t)0x00008000);
#undef ETH_MMCTIMR_TGFSCM
constexpr auto ETH_MMCTIMR_TGFSCM = ((std::uint32_t)0x00004000);

/* Bit definition for Ethernet MMC Transmitted Good Frames after Single Collision Counter Register */
#undef ETH_MMCTGFSCCR_TGFSCC
constexpr auto ETH_MMCTGFSCCR_TGFSCC = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MMC Transmitted Good Frames after More than a Single Collision Counter Register */
#undef ETH_MMCTGFMSCCR_TGFMSCC
constexpr auto ETH_MMCTGFMSCCR_TGFMSCC = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MMC Transmitted Good Frames Counter Register */
#undef ETH_MMCTGFCR_TGFC
constexpr auto ETH_MMCTGFCR_TGFC = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MMC Received Frames with CRC Error Counter Register */
#undef ETH_MMCRFCECR_RFCEC
constexpr auto ETH_MMCRFCECR_RFCEC = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MMC Received Frames with Alignement Error Counter Register */
#undef ETH_MMCRFAECR_RFAEC
constexpr auto ETH_MMCRFAECR_RFAEC = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet MMC Received Good Unicast Frames Counter Register */
#undef ETH_MMCRGUFCR_RGUFC
constexpr auto ETH_MMCRGUFCR_RGUFC = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*               Ethernet PTP Registers bits definition                       */
/******************************************************************************/

/* Bit definition for Ethernet PTP Time Stamp Contol Register */
#undef ETH_PTPTSCR_TSARU
constexpr auto ETH_PTPTSCR_TSARU = ((std::uint32_t)0x00000020);
#undef ETH_PTPTSCR_TSITE
constexpr auto ETH_PTPTSCR_TSITE = ((std::uint32_t)0x00000010);
#undef ETH_PTPTSCR_TSSTU
constexpr auto ETH_PTPTSCR_TSSTU = ((std::uint32_t)0x00000008);
#undef ETH_PTPTSCR_TSSTI
constexpr auto ETH_PTPTSCR_TSSTI = ((std::uint32_t)0x00000004);
#undef ETH_PTPTSCR_TSFCU
constexpr auto ETH_PTPTSCR_TSFCU = ((std::uint32_t)0x00000002);
#undef ETH_PTPTSCR_TSE
constexpr auto ETH_PTPTSCR_TSE = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet PTP Sub-Second Increment Register */
#undef ETH_PTPSSIR_STSSI
constexpr auto ETH_PTPSSIR_STSSI = ((std::uint32_t)0x000000FF);

/* Bit definition for Ethernet PTP Time Stamp High Register */
#undef ETH_PTPTSHR_STS
constexpr auto ETH_PTPTSHR_STS = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet PTP Time Stamp Low Register */
#undef ETH_PTPTSLR_STPNS
constexpr auto ETH_PTPTSLR_STPNS = ((std::uint32_t)0x80000000);
#undef ETH_PTPTSLR_STSS
constexpr auto ETH_PTPTSLR_STSS = ((std::uint32_t)0x7FFFFFFF);

/* Bit definition for Ethernet PTP Time Stamp High Update Register */
#undef ETH_PTPTSHUR_TSUS
constexpr auto ETH_PTPTSHUR_TSUS = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet PTP Time Stamp Low Update Register */
#undef ETH_PTPTSLUR_TSUPNS
constexpr auto ETH_PTPTSLUR_TSUPNS = ((std::uint32_t)0x80000000);
#undef ETH_PTPTSLUR_TSUSS
constexpr auto ETH_PTPTSLUR_TSUSS = ((std::uint32_t)0x7FFFFFFF);

/* Bit definition for Ethernet PTP Time Stamp Addend Register */
#undef ETH_PTPTSAR_TSA
constexpr auto ETH_PTPTSAR_TSA = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet PTP Target Time High Register */
#undef ETH_PTPTTHR_TTSH
constexpr auto ETH_PTPTTHR_TTSH = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet PTP Target Time Low Register */
#undef ETH_PTPTTLR_TTSL
constexpr auto ETH_PTPTTLR_TTSL = ((std::uint32_t)0xFFFFFFFF);

/******************************************************************************/
/*                 Ethernet DMA Registers bits definition                     */
/******************************************************************************/

/* Bit definition for Ethernet DMA Bus Mode Register */
#undef ETH_DMABMR_AAB
constexpr auto ETH_DMABMR_AAB = ((std::uint32_t)0x02000000);
#undef ETH_DMABMR_FPM
constexpr auto ETH_DMABMR_FPM = ((std::uint32_t)0x01000000);
#undef ETH_DMABMR_USP
constexpr auto ETH_DMABMR_USP = ((std::uint32_t)0x00800000);
#undef ETH_DMABMR_RDP
constexpr auto ETH_DMABMR_RDP = ((std::uint32_t)0x007E0000);
#undef ETH_DMABMR_RDP_1Beat
constexpr auto ETH_DMABMR_RDP_1Beat = ((std::uint32_t)0x00020000);
#undef ETH_DMABMR_RDP_2Beat
constexpr auto ETH_DMABMR_RDP_2Beat = ((std::uint32_t)0x00040000);
#undef ETH_DMABMR_RDP_4Beat
constexpr auto ETH_DMABMR_RDP_4Beat = ((std::uint32_t)0x00080000);
#undef ETH_DMABMR_RDP_8Beat
constexpr auto ETH_DMABMR_RDP_8Beat = ((std::uint32_t)0x00100000);
#undef ETH_DMABMR_RDP_16Beat
constexpr auto ETH_DMABMR_RDP_16Beat = ((std::uint32_t)0x00200000);
#undef ETH_DMABMR_RDP_32Beat
constexpr auto ETH_DMABMR_RDP_32Beat = ((std::uint32_t)0x00400000);
#undef ETH_DMABMR_RDP_4xPBL_4Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_4Beat = ((std::uint32_t)0x01020000);
#undef ETH_DMABMR_RDP_4xPBL_8Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_8Beat = ((std::uint32_t)0x01040000);
#undef ETH_DMABMR_RDP_4xPBL_16Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_16Beat = ((std::uint32_t)0x01080000);
#undef ETH_DMABMR_RDP_4xPBL_32Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_32Beat = ((std::uint32_t)0x01100000);
#undef ETH_DMABMR_RDP_4xPBL_64Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_64Beat = ((std::uint32_t)0x01200000);
#undef ETH_DMABMR_RDP_4xPBL_128Beat
constexpr auto ETH_DMABMR_RDP_4xPBL_128Beat = ((std::uint32_t)0x01400000);
#undef ETH_DMABMR_FB
constexpr auto ETH_DMABMR_FB = ((std::uint32_t)0x00010000);
#undef ETH_DMABMR_RTPR
constexpr auto ETH_DMABMR_RTPR = ((std::uint32_t)0x0000C000);
#undef ETH_DMABMR_RTPR_1_1
constexpr auto ETH_DMABMR_RTPR_1_1 = ((std::uint32_t)0x00000000);
#undef ETH_DMABMR_RTPR_2_1
constexpr auto ETH_DMABMR_RTPR_2_1 = ((std::uint32_t)0x00004000);
#undef ETH_DMABMR_RTPR_3_1
constexpr auto ETH_DMABMR_RTPR_3_1 = ((std::uint32_t)0x00008000);
#undef ETH_DMABMR_RTPR_4_1
constexpr auto ETH_DMABMR_RTPR_4_1 = ((std::uint32_t)0x0000C000);
#undef ETH_DMABMR_PBL
constexpr auto ETH_DMABMR_PBL = ((std::uint32_t)0x00003F00);
#undef ETH_DMABMR_PBL_1Beat
constexpr auto ETH_DMABMR_PBL_1Beat = ((std::uint32_t)0x00000100);
#undef ETH_DMABMR_PBL_2Beat
constexpr auto ETH_DMABMR_PBL_2Beat = ((std::uint32_t)0x00000200);
#undef ETH_DMABMR_PBL_4Beat
constexpr auto ETH_DMABMR_PBL_4Beat = ((std::uint32_t)0x00000400);
#undef ETH_DMABMR_PBL_8Beat
constexpr auto ETH_DMABMR_PBL_8Beat = ((std::uint32_t)0x00000800);
#undef ETH_DMABMR_PBL_16Beat
constexpr auto ETH_DMABMR_PBL_16Beat = ((std::uint32_t)0x00001000);
#undef ETH_DMABMR_PBL_32Beat
constexpr auto ETH_DMABMR_PBL_32Beat = ((std::uint32_t)0x00002000);
#undef ETH_DMABMR_PBL_4xPBL_4Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_4Beat = ((std::uint32_t)0x01000100);
#undef ETH_DMABMR_PBL_4xPBL_8Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_8Beat = ((std::uint32_t)0x01000200);
#undef ETH_DMABMR_PBL_4xPBL_16Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_16Beat = ((std::uint32_t)0x01000400);
#undef ETH_DMABMR_PBL_4xPBL_32Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_32Beat = ((std::uint32_t)0x01000800);
#undef ETH_DMABMR_PBL_4xPBL_64Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_64Beat = ((std::uint32_t)0x01001000);
#undef ETH_DMABMR_PBL_4xPBL_128Beat
constexpr auto ETH_DMABMR_PBL_4xPBL_128Beat = ((std::uint32_t)0x01002000);
#undef ETH_DMABMR_DSL
constexpr auto ETH_DMABMR_DSL = ((std::uint32_t)0x0000007C);
#undef ETH_DMABMR_DA
constexpr auto ETH_DMABMR_DA = ((std::uint32_t)0x00000002);
#undef ETH_DMABMR_SR
constexpr auto ETH_DMABMR_SR = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet DMA Transmit Poll Demand Register */
#undef ETH_DMATPDR_TPD
constexpr auto ETH_DMATPDR_TPD = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Receive Poll Demand Register */
#undef ETH_DMARPDR_RPD
constexpr auto ETH_DMARPDR_RPD = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Receive Descriptor List Address Register */
#undef ETH_DMARDLAR_SRL
constexpr auto ETH_DMARDLAR_SRL = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Transmit Descriptor List Address Register */
#undef ETH_DMATDLAR_STL
constexpr auto ETH_DMATDLAR_STL = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Status Register */
#undef ETH_DMASR_TSTS
constexpr auto ETH_DMASR_TSTS = ((std::uint32_t)0x20000000);
#undef ETH_DMASR_PMTS
constexpr auto ETH_DMASR_PMTS = ((std::uint32_t)0x10000000);
#undef ETH_DMASR_MMCS
constexpr auto ETH_DMASR_MMCS = ((std::uint32_t)0x08000000);
#undef ETH_DMASR_EBS
constexpr auto ETH_DMASR_EBS = ((std::uint32_t)0x03800000);
/* combination with EBS[2:0] for GetFlagStatus function */
#undef ETH_DMASR_EBS_DescAccess
constexpr auto ETH_DMASR_EBS_DescAccess = ((std::uint32_t)0x02000000);
#undef ETH_DMASR_EBS_ReadTransf
constexpr auto ETH_DMASR_EBS_ReadTransf = ((std::uint32_t)0x01000000);
#undef ETH_DMASR_EBS_DataTransfTx
constexpr auto ETH_DMASR_EBS_DataTransfTx = ((std::uint32_t)0x00800000);
#undef ETH_DMASR_TPS
constexpr auto ETH_DMASR_TPS = ((std::uint32_t)0x00700000);
#undef ETH_DMASR_TPS_Stopped
constexpr auto ETH_DMASR_TPS_Stopped = ((std::uint32_t)0x00000000);
#undef ETH_DMASR_TPS_Fetching
constexpr auto ETH_DMASR_TPS_Fetching = ((std::uint32_t)0x00100000);
#undef ETH_DMASR_TPS_Waiting
constexpr auto ETH_DMASR_TPS_Waiting = ((std::uint32_t)0x00200000);
#undef ETH_DMASR_TPS_Reading
constexpr auto ETH_DMASR_TPS_Reading = ((std::uint32_t)0x00300000);
#undef ETH_DMASR_TPS_Suspended
constexpr auto ETH_DMASR_TPS_Suspended = ((std::uint32_t)0x00600000);
#undef ETH_DMASR_TPS_Closing
constexpr auto ETH_DMASR_TPS_Closing = ((std::uint32_t)0x00700000);
#undef ETH_DMASR_RPS
constexpr auto ETH_DMASR_RPS = ((std::uint32_t)0x000E0000);
#undef ETH_DMASR_RPS_Stopped
constexpr auto ETH_DMASR_RPS_Stopped = ((std::uint32_t)0x00000000);
#undef ETH_DMASR_RPS_Fetching
constexpr auto ETH_DMASR_RPS_Fetching = ((std::uint32_t)0x00020000);
#undef ETH_DMASR_RPS_Waiting
constexpr auto ETH_DMASR_RPS_Waiting = ((std::uint32_t)0x00060000);
#undef ETH_DMASR_RPS_Suspended
constexpr auto ETH_DMASR_RPS_Suspended = ((std::uint32_t)0x00080000);
#undef ETH_DMASR_RPS_Closing
constexpr auto ETH_DMASR_RPS_Closing = ((std::uint32_t)0x000A0000);
#undef ETH_DMASR_RPS_Queuing
constexpr auto ETH_DMASR_RPS_Queuing = ((std::uint32_t)0x000E0000);
#undef ETH_DMASR_NIS
constexpr auto ETH_DMASR_NIS = ((std::uint32_t)0x00010000);
#undef ETH_DMASR_AIS
constexpr auto ETH_DMASR_AIS = ((std::uint32_t)0x00008000);
#undef ETH_DMASR_ERS
constexpr auto ETH_DMASR_ERS = ((std::uint32_t)0x00004000);
#undef ETH_DMASR_FBES
constexpr auto ETH_DMASR_FBES = ((std::uint32_t)0x00002000);
#undef ETH_DMASR_ETS
constexpr auto ETH_DMASR_ETS = ((std::uint32_t)0x00000400);
#undef ETH_DMASR_RWTS
constexpr auto ETH_DMASR_RWTS = ((std::uint32_t)0x00000200);
#undef ETH_DMASR_RPSS
constexpr auto ETH_DMASR_RPSS = ((std::uint32_t)0x00000100);
#undef ETH_DMASR_RBUS
constexpr auto ETH_DMASR_RBUS = ((std::uint32_t)0x00000080);
#undef ETH_DMASR_RS
constexpr auto ETH_DMASR_RS = ((std::uint32_t)0x00000040);
#undef ETH_DMASR_TUS
constexpr auto ETH_DMASR_TUS = ((std::uint32_t)0x00000020);
#undef ETH_DMASR_ROS
constexpr auto ETH_DMASR_ROS = ((std::uint32_t)0x00000010);
#undef ETH_DMASR_TJTS
constexpr auto ETH_DMASR_TJTS = ((std::uint32_t)0x00000008);
#undef ETH_DMASR_TBUS
constexpr auto ETH_DMASR_TBUS = ((std::uint32_t)0x00000004);
#undef ETH_DMASR_TPSS
constexpr auto ETH_DMASR_TPSS = ((std::uint32_t)0x00000002);
#undef ETH_DMASR_TS
constexpr auto ETH_DMASR_TS = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet DMA Operation Mode Register */
#undef ETH_DMAOMR_DTCEFD
constexpr auto ETH_DMAOMR_DTCEFD = ((std::uint32_t)0x04000000);
#undef ETH_DMAOMR_RSF
constexpr auto ETH_DMAOMR_RSF = ((std::uint32_t)0x02000000);
#undef ETH_DMAOMR_DFRF
constexpr auto ETH_DMAOMR_DFRF = ((std::uint32_t)0x01000000);
#undef ETH_DMAOMR_TSF
constexpr auto ETH_DMAOMR_TSF = ((std::uint32_t)0x00200000);
#undef ETH_DMAOMR_FTF
constexpr auto ETH_DMAOMR_FTF = ((std::uint32_t)0x00100000);
#undef ETH_DMAOMR_TTC
constexpr auto ETH_DMAOMR_TTC = ((std::uint32_t)0x0001C000);
#undef ETH_DMAOMR_TTC_64Bytes
constexpr auto ETH_DMAOMR_TTC_64Bytes = ((std::uint32_t)0x00000000);
#undef ETH_DMAOMR_TTC_128Bytes
constexpr auto ETH_DMAOMR_TTC_128Bytes = ((std::uint32_t)0x00004000);
#undef ETH_DMAOMR_TTC_192Bytes
constexpr auto ETH_DMAOMR_TTC_192Bytes = ((std::uint32_t)0x00008000);
#undef ETH_DMAOMR_TTC_256Bytes
constexpr auto ETH_DMAOMR_TTC_256Bytes = ((std::uint32_t)0x0000C000);
#undef ETH_DMAOMR_TTC_40Bytes
constexpr auto ETH_DMAOMR_TTC_40Bytes = ((std::uint32_t)0x00010000);
#undef ETH_DMAOMR_TTC_32Bytes
constexpr auto ETH_DMAOMR_TTC_32Bytes = ((std::uint32_t)0x00014000);
#undef ETH_DMAOMR_TTC_24Bytes
constexpr auto ETH_DMAOMR_TTC_24Bytes = ((std::uint32_t)0x00018000);
#undef ETH_DMAOMR_TTC_16Bytes
constexpr auto ETH_DMAOMR_TTC_16Bytes = ((std::uint32_t)0x0001C000);
#undef ETH_DMAOMR_ST
constexpr auto ETH_DMAOMR_ST = ((std::uint32_t)0x00002000);
#undef ETH_DMAOMR_FEF
constexpr auto ETH_DMAOMR_FEF = ((std::uint32_t)0x00000080);
#undef ETH_DMAOMR_FUGF
constexpr auto ETH_DMAOMR_FUGF = ((std::uint32_t)0x00000040);
#undef ETH_DMAOMR_RTC
constexpr auto ETH_DMAOMR_RTC = ((std::uint32_t)0x00000018);
#undef ETH_DMAOMR_RTC_64Bytes
constexpr auto ETH_DMAOMR_RTC_64Bytes = ((std::uint32_t)0x00000000);
#undef ETH_DMAOMR_RTC_32Bytes
constexpr auto ETH_DMAOMR_RTC_32Bytes = ((std::uint32_t)0x00000008);
#undef ETH_DMAOMR_RTC_96Bytes
constexpr auto ETH_DMAOMR_RTC_96Bytes = ((std::uint32_t)0x00000010);
#undef ETH_DMAOMR_RTC_128Bytes
constexpr auto ETH_DMAOMR_RTC_128Bytes = ((std::uint32_t)0x00000018);
#undef ETH_DMAOMR_OSF
constexpr auto ETH_DMAOMR_OSF = ((std::uint32_t)0x00000004);
#undef ETH_DMAOMR_SR
constexpr auto ETH_DMAOMR_SR = ((std::uint32_t)0x00000002);

/* Bit definition for Ethernet DMA Interrupt Enable Register */
#undef ETH_DMAIER_NISE
constexpr auto ETH_DMAIER_NISE = ((std::uint32_t)0x00010000);
#undef ETH_DMAIER_AISE
constexpr auto ETH_DMAIER_AISE = ((std::uint32_t)0x00008000);
#undef ETH_DMAIER_ERIE
constexpr auto ETH_DMAIER_ERIE = ((std::uint32_t)0x00004000);
#undef ETH_DMAIER_FBEIE
constexpr auto ETH_DMAIER_FBEIE = ((std::uint32_t)0x00002000);
#undef ETH_DMAIER_ETIE
constexpr auto ETH_DMAIER_ETIE = ((std::uint32_t)0x00000400);
#undef ETH_DMAIER_RWTIE
constexpr auto ETH_DMAIER_RWTIE = ((std::uint32_t)0x00000200);
#undef ETH_DMAIER_RPSIE
constexpr auto ETH_DMAIER_RPSIE = ((std::uint32_t)0x00000100);
#undef ETH_DMAIER_RBUIE
constexpr auto ETH_DMAIER_RBUIE = ((std::uint32_t)0x00000080);
#undef ETH_DMAIER_RIE
constexpr auto ETH_DMAIER_RIE = ((std::uint32_t)0x00000040);
#undef ETH_DMAIER_TUIE
constexpr auto ETH_DMAIER_TUIE = ((std::uint32_t)0x00000020);
#undef ETH_DMAIER_ROIE
constexpr auto ETH_DMAIER_ROIE = ((std::uint32_t)0x00000010);
#undef ETH_DMAIER_TJTIE
constexpr auto ETH_DMAIER_TJTIE = ((std::uint32_t)0x00000008);
#undef ETH_DMAIER_TBUIE
constexpr auto ETH_DMAIER_TBUIE = ((std::uint32_t)0x00000004);
#undef ETH_DMAIER_TPSIE
constexpr auto ETH_DMAIER_TPSIE = ((std::uint32_t)0x00000002);
#undef ETH_DMAIER_TIE
constexpr auto ETH_DMAIER_TIE = ((std::uint32_t)0x00000001);

/* Bit definition for Ethernet DMA Missed Frame and Buffer Overflow Counter Register */
#undef ETH_DMAMFBOCR_OFOC
constexpr auto ETH_DMAMFBOCR_OFOC = ((std::uint32_t)0x10000000);
#undef ETH_DMAMFBOCR_MFA
constexpr auto ETH_DMAMFBOCR_MFA = ((std::uint32_t)0x0FFE0000);
#undef ETH_DMAMFBOCR_OMFC
constexpr auto ETH_DMAMFBOCR_OMFC = ((std::uint32_t)0x00010000);
#undef ETH_DMAMFBOCR_MFC
constexpr auto ETH_DMAMFBOCR_MFC = ((std::uint32_t)0x0000FFFF);

/* Bit definition for Ethernet DMA Current Host Transmit Descriptor Register */
#undef ETH_DMACHTDR_HTDAP
constexpr auto ETH_DMACHTDR_HTDAP = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Current Host Receive Descriptor Register */
#undef ETH_DMACHRDR_HRDAP
constexpr auto ETH_DMACHRDR_HRDAP = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Current Host Transmit Buffer Address Register */
#undef ETH_DMACHTBAR_HTBAP
constexpr auto ETH_DMACHTBAR_HTBAP = ((std::uint32_t)0xFFFFFFFF);

/* Bit definition for Ethernet DMA Current Host Receive Buffer Address Register */
#undef ETH_DMACHRBAR_HRBAP
constexpr auto ETH_DMACHRBAR_HRBAP = ((std::uint32_t)0xFFFFFFFF);
#endif /* STM32F10X_CL */
} // namespace StdPeriphLib
