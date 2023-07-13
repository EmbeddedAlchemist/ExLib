#include "ExLib_GPIO.hpp"

#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "ExLib_EXTI.hpp"

namespace ExLib {

//----------------------------------------------------------------
// HAL
//----------------------------------------------------------------

std::uint16_t getPinByName(GPIO_Pin pin) {
    switch ((std::uint8_t)pin % 16) {
        case 0:
            return GPIO_Pin_0;
        case 1:
            return GPIO_Pin_1;
        case 2:
            return GPIO_Pin_2;
        case 3:
            return GPIO_Pin_3;
        case 4:
            return GPIO_Pin_4;
        case 5:
            return GPIO_Pin_5;
        case 6:
            return GPIO_Pin_6;
        case 7:
            return GPIO_Pin_7;
        case 8:
            return GPIO_Pin_8;
        case 9:
            return GPIO_Pin_9;
        case 10:
            return GPIO_Pin_10;
        case 11:
            return GPIO_Pin_11;
        case 12:
            return GPIO_Pin_12;
        case 13:
            return GPIO_Pin_13;
        case 14:
            return GPIO_Pin_14;
        case 15:
            return GPIO_Pin_15;
        default:
            // will never reach here
            ExLib_Exception::raiseException("Bad GPIO pin");
            return 0;
    }
}

DeviceSupport::GPIO_TypeDef *getPortByName(GPIO_Pin pin) {
    switch ((std::uint8_t)pin / 16) {
        case 0:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOA_BASE;
        case 1:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOB_BASE;
        case 2:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOC_BASE;
        case 3:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOD_BASE;
        case 4:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOE_BASE;
        case 5:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOF_BASE;
        case 6:
            return (DeviceSupport::GPIO_TypeDef *)DeviceSupport::GPIOG_BASE;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
            return (DeviceSupport::GPIO_TypeDef *)nullptr;
    }
}

GPIO_Pin getNameByPortAndPin(DeviceSupport::GPIO_TypeDef *port, std::uint16_t pin) {
    std::uint8_t pinBase, pinOffset;
    switch ((std::uintptr_t)port) {
        case (std::uintptr_t)DeviceSupport::GPIOA_BASE:
            pinBase = 0 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOB_BASE:
            pinBase = 1 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOC_BASE:
            pinBase = 2 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOD_BASE:
            pinBase = 3 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOE_BASE:
            pinBase = 4 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOF_BASE:
            pinBase = 5 * 16;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOG_BASE:
            pinBase = 6 * 16;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
    }
    switch (pin) {
        case GPIO_Pin_0:
            pinOffset = 0;
            break;
        case GPIO_Pin_1:
            pinOffset = 1;
            break;
        case GPIO_Pin_2:
            pinOffset = 2;
            break;
        case GPIO_Pin_3:
            pinOffset = 3;
            break;
        case GPIO_Pin_4:
            pinOffset = 4;
            break;
        case GPIO_Pin_5:
            pinOffset = 5;
            break;
        case GPIO_Pin_6:
            pinOffset = 6;
            break;
        case GPIO_Pin_7:
            pinOffset = 7;
            break;
        case GPIO_Pin_8:
            pinOffset = 8;
            break;
        case GPIO_Pin_9:
            pinOffset = 9;
            break;
        case GPIO_Pin_10:
            pinOffset = 10;
            break;
        case GPIO_Pin_11:
            pinOffset = 11;
            break;
        case GPIO_Pin_12:
            pinOffset = 12;
            break;
        case GPIO_Pin_13:
            pinOffset = 13;
            break;
        case GPIO_Pin_14:
            pinOffset = 14;
            break;
        case GPIO_Pin_15:
            pinOffset = 15;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO pin");
    }
    return (GPIO_Pin)(pinBase + pinOffset);
}

void enableClock(DeviceSupport::GPIO_TypeDef *port) {
    uint32_t GPIOPeriphClock;
    switch ((std::uintptr_t)port) {
        case (std::uintptr_t)DeviceSupport::GPIOA_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOA;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOB_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOB;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOC_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOC;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOD_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOD;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOE_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOE;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOF_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOF;
            break;
        case (std::uintptr_t)DeviceSupport::GPIOG_BASE:
            GPIOPeriphClock = RCC_APB2Periph_GPIOG;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
            return;
    }
    DeviceSupport::RCC_APB2PeriphClockCmd(GPIOPeriphClock, DeviceSupport::ENABLE);
}

DeviceSupport::GPIOMode_TypeDef getModeByName(GPIO_Mode mode) {
    switch (mode) {
        case GPIO_Mode::Input_Hiz:
            return DeviceSupport::GPIO_Mode_IN_FLOATING;
        case GPIO_Mode::Input_PullUp:
            return DeviceSupport::GPIO_Mode_IPU;
        case GPIO_Mode::Input_PullDown:
            return DeviceSupport::GPIO_Mode_IPD;
        case GPIO_Mode::Output_PushPull:
            return DeviceSupport::GPIO_Mode_Out_OD;
        case GPIO_Mode::Output_OpenDrain:
            return DeviceSupport::GPIO_Mode_Out_OD;
        case GPIO_Mode::Analog:
            return DeviceSupport::GPIO_Mode_AIN;
        default:
            ExLib_Exception::raiseException("Bad GPIO_Mode");
    }
}

void initGPIO(DeviceSupport::GPIO_TypeDef *port, std::uint16_t pin, DeviceSupport::GPIOMode_TypeDef mode) {
    DeviceSupport::GPIO_InitTypeDef initData;
    initData.GPIO_Pin = pin;
    initData.GPIO_Speed = DeviceSupport::GPIO_Speed_50MHz;
    initData.GPIO_Mode = mode;
    DeviceSupport::GPIO_Init((DeviceSupport::GPIO_TypeDef *)port, &initData);
}

//----------------------------------------------------------------
//  GPIO对象实现
//----------------------------------------------------------------

size_t GPIO::printTo(PrintStream &stream) {
    if (read() == false)
        return stream.print("LOW");
    else
        return stream.print("HIGH");
}

GPIO::GPIO(GPIO_Pin pinName) : port(getPortByName(pinName)), pin(getPinByName(pinName)) {
    enableClock((DeviceSupport::GPIO_TypeDef *)port);
}

GPIO::GPIO(GPIO_Pin pinName, GPIO_Mode mode)
    : GPIO(pinName) {
    this->mode(mode);
}

void GPIO::write(bool level) {
    if (level == false)
        DeviceSupport::GPIO_ResetBits((DeviceSupport::GPIO_TypeDef *)port, pin);
    else
        DeviceSupport::GPIO_SetBits((DeviceSupport::GPIO_TypeDef *)port, pin);
}

bool GPIO::read(void) {
    return DeviceSupport::GPIO_ReadInputDataBit((DeviceSupport::GPIO_TypeDef *)port, pin);
}

void GPIO::mode(GPIO_Mode modeName) {
    DeviceSupport::GPIOMode_TypeDef mode = getModeByName(modeName);
    initGPIO((DeviceSupport::GPIO_TypeDef *)port, pin, mode);
}

void GPIO::attachInterrupt(GPIO_State state, CallbackFunction &callback, std::uint8_t priority) {
    EXTI::attachInterrupt(*this, state, callback, priority);
}

void GPIO::detachInterrupt() {
    EXTI::detachInterrupt(*this);
}

void GPIO::write(GPIO_Pin pinName, bool level) {
    DeviceSupport::GPIO_TypeDef *port = getPortByName(pinName);
    std::uint16_t pin = getPinByName(pinName);
    if (level == false) {
        DeviceSupport::GPIO_ResetBits((DeviceSupport::GPIO_TypeDef *)port, pin);
    } else {
        DeviceSupport::GPIO_SetBits((DeviceSupport::GPIO_TypeDef *)port, pin);
    }
}

bool GPIO::read(GPIO_Pin pinName) {
    DeviceSupport::GPIO_TypeDef *port = getPortByName(pinName);
    std::uint16_t pin = getPinByName(pinName);
    return DeviceSupport::GPIO_ReadInputDataBit(port, pin);
}

void GPIO::mode(GPIO_Pin pinName, GPIO_Mode modeName) {
    DeviceSupport::GPIO_TypeDef *port = getPortByName(pinName);
    std::uint16_t pin = getPinByName(pinName);
    DeviceSupport::GPIOMode_TypeDef mode = getModeByName(modeName);
    enableClock(port);
    initGPIO(port, pin, mode);
}

GPIO::operator GPIO_Pin() {
    return getNameByPortAndPin((DeviceSupport::GPIO_TypeDef *)port, pin);
}


} // namespace ExLib