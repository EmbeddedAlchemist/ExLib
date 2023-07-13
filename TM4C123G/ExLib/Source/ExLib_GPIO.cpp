#include "ExLib_GPIO.hpp"

#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_EXTI.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"

namespace ExLib {

//----------------------------------------------------------------
// HAL
//----------------------------------------------------------------



//----------------------------------------------------------------
//  GPIO对象实现
//----------------------------------------------------------------

std::size_t GPIO::printTo(PrintStream &stream) {
    if (read() == false)
        return stream.print("LOW");
    else
        return stream.print("HIGH");
}

GPIO::GPIO(GPIO_Pin pinName)
    : port(getGPIOPortByName(pinName)), pin(getGPIOPinByName(pinName)) {
    enableGPIOClock(port);
}

GPIO::GPIO(GPIO_Pin pinName, GPIO_Mode modName)
    : GPIO(pinName) {
    mode(modName);
}

void GPIO::write(bool level) {
    if (level == false)
        DeviceSupport::GPIOPinWrite(port, pin, 0);
    else
        DeviceSupport::GPIOPinWrite(port, pin, pin);
}

bool GPIO::read(void) {
    return DeviceSupport::GPIOPinRead(port, pin);
}

void GPIO::mode(GPIO_Mode modeName) {
    configGPIOMode(port, pin, modeName);
}

void GPIO::attachInterrupt(GPIO_State state, CallbackFunction &callback, std::uint8_t priority) {
    EXTI::attachInterrupt(*this, state, callback, priority);
}

void GPIO::detachInterrupt() {
    EXTI::detachInterrupt(*this);
}

void GPIO::pinWrite(GPIO_Pin pinName, bool level) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint16_t pin = getGPIOPinByName(pinName);
    if (level == false)
        DeviceSupport::GPIOPinWrite(port, pin, 0);
    else
        DeviceSupport::GPIOPinWrite(port, pin, pin);
}

bool GPIO::pinRead(GPIO_Pin pinName) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint16_t pin = getGPIOPinByName(pinName);
    return DeviceSupport::GPIOPinRead(port, pin);
}

void GPIO::pinMode(GPIO_Pin pinName, GPIO_Mode modeName) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint16_t pin = getGPIOPinByName(pinName);
    enableGPIOClock(port);
    configGPIOMode(port, pin, modeName);
}

GPIO::operator GPIO_Pin() {
    return getGPIONameByPortAndPin(port, pin);
}

} // namespace ExLib