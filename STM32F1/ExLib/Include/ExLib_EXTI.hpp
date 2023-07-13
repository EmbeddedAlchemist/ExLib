#pragma once

#include "ExLib_CallbackFunction.hpp"
#include "ExLib_GPIO.hpp"

namespace ExLib {

class EXTI {
  public:
    static void attachInterrupt(GPIO_Pin pinName, GPIO_State state, CallbackFunction &callback, std::uint8_t priority = 0);
    static void detachInterrupt(GPIO_Pin pinName);
};
} // namespace ExLib