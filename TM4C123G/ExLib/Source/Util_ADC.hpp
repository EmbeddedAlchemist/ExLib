#pragma once

#include "ExLib_ADC.hpp"

namespace ExLib{

std::uintptr_t getADCPeriphByName(ADC_Periph adcName);
ADC_Periph getADCNameByPeriph(std::uintptr_t periph);

void configADCClock(ADC_Periph adcName, bool isEnable);

bool isLegalADCPin(GPIO_Pin pinName);
void configADCPin(GPIO_Pin pinName);

std::uint32_t getADCChannelByPin(GPIO_Pin pinName);
}