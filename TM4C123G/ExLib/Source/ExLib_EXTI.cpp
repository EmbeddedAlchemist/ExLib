#include "ExLib_EXTI.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "stdint.h"

ExLib::CallbackFunction *EXTICallback[15];

extern "C" {
void EXTI_PortAHandler(void) {
    if (DeviceSupport::GPIOIntStatus(GPIO_PORTA_BASE, true) != false) {
    }
}
}

namespace ExLib {

// HAL

// Class 实现

void EXTI::attachInterrupt(GPIO_Pin pinName, GPIO_State state, CallbackFunction &callback, std::uint8_t priority) {
}

void EXTI::detachInterrupt(GPIO_Pin pinName) {
}

} // namespace ExLib
