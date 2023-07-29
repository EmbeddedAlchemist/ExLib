#pragma once

#include "ExLib_GPIO.hpp"
#include "ExLib_SPI.hpp"

namespace ExLib {
std::uintptr_t getSSIPeriphByName(SPI_Periph ssiNane);
SPI_Periph getSSINameByPeriph(std::uintptr_t periph);
void configSSIClock(SPI_Periph ssiName, bool isEnable);
bool isLegalSSIPin(std::uintptr_t periph, GPIO_Pin pinClk, GPIO_Pin pinRx, GPIO_Pin pinTx);
void configSSIPin(std::uintptr_t periph, GPIO_Pin pinClk, GPIO_Pin pinRx, GPIO_Pin pinTx);
GPIO_Pin getSSIDefaultClkPin(SPI_Periph ssiName);
GPIO_Pin getSSIDefaultRxPin(SPI_Periph ssiName);
GPIO_Pin getSSIDefaultTxPin(SPI_Periph ssiName);
std::uint32_t getSSIModeByModeName(SPI_Mode modeName);
}