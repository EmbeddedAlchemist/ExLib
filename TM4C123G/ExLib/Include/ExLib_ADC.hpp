#pragma once

#include "ExLib_GPIO.hpp"
#include <stdint.h>

namespace ExLib {

enum class ADC_Periph {
    ADC0 = 0,
    ADC1 = 1
};

class ADC_Channel;

class ADC {
  private:
    friend class ADC_Channel;
    std::uintptr_t periph;
    std::uint32_t  resignerADCChannel(GPIO_Pin pinName);
    std::uint32_t readADCChannel(std::uint32_t channelNum);

  public:
    ADC(void) = delete;
    ADC(ADC_Periph adcName);
};

class ADC_Channel {
  private:
    ADC &periph;
    std::uint32_t channel;

  public:
    ADC_Channel(void) = delete;
    ADC_Channel(ADC &periph, GPIO_Pin pinName);
    std::uint32_t read();
};

} // namespace ExLib