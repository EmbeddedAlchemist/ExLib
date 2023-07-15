#pragma once

#include "ExLib_UART.hpp"
#include "ExLib_GPIO.hpp"

namespace ExLib{
std::uintptr_t getUARTPeriphByName(UART_Periph uartName);
std::uint32_t getUARTWordLengthByName(UART_WordLength wordLengthName);
std::uint32_t getUARTStopBitsByName(UART_StopBits stopBitsName);
std::uint32_t getUARTParityByName(UART_Parity parityName);
void configUARTState(std::uintptr_t periph, bool isEnable);
GPIO_Pin getUARTDefaultRxPin(UART_Periph periph);
GPIO_Pin getUARTDefaultTxPin(UART_Periph periph);
bool isLegalUARTPin(std::uintptr_t periph, GPIO_Pin pinRx, GPIO_Pin pinTx);
void configUARTPin(std::uintptr_t periph, GPIO_Pin pinRx, GPIO_Pin pinTx);
UART_Periph getUARTNameByPeriph(std::uintptr_t periph);
std::uint32_t getUARTIntByName(UART_Periph uartName);
} // namespace ExLib
