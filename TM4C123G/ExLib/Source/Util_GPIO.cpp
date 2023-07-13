#include "Util_GPIO.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"

#include <stddef.h>

namespace ExLib {
std::uint16_t getGPIOPinByName(GPIO_Pin pinName) {
    static const std::uint16_t pin[] = {
        GPIO_PIN_0,
        GPIO_PIN_1,
        GPIO_PIN_2,
        GPIO_PIN_3,
        GPIO_PIN_4,
        GPIO_PIN_5,
        GPIO_PIN_6,
        GPIO_PIN_7,
    };
    return pin[(std::size_t)pinName % 8];
}

std::uintptr_t getGPIOPortByName(GPIO_Pin pinName) {
    static const std::uintptr_t port[] = {
        GPIO_PORTA_BASE,
        GPIO_PORTB_BASE,
        GPIO_PORTC_BASE,
        GPIO_PORTD_BASE,
        GPIO_PORTE_BASE,
        GPIO_PORTF_BASE,
        GPIO_PORTG_BASE,
        GPIO_PORTH_BASE,
        GPIO_PORTJ_BASE,
        GPIO_PORTK_BASE,
        GPIO_PORTL_BASE,
        GPIO_PORTM_BASE,
        GPIO_PORTN_BASE,
        GPIO_PORTP_BASE,
        GPIO_PORTQ_BASE,
        GPIO_PORTR_BASE,
        GPIO_PORTS_BASE,
        GPIO_PORTT_BASE,
    };
    if ((std::uint8_t)pinName / 8 >= sizeof(port) / sizeof(port[0])) {
        ExLib_Exception::raiseException("Bad GPIO port");
    }
    return port[(std::uint8_t)pinName / 8];
}

GPIO_Pin getGPIONameByPortAndPin(std::uintptr_t port, std::uint16_t pin) {
    std::uint8_t pinBase, pinOffset;
    switch ((std::uintptr_t)port) {
        case GPIO_PORTA_BASE:
            pinBase = 0 * 8;
            break;
        case GPIO_PORTB_BASE:
            pinBase = 1 * 8;
            break;
        case GPIO_PORTC_BASE:
            pinBase = 2 * 8;
            break;
        case GPIO_PORTD_BASE:
            pinBase = 3 * 8;
            break;
        case GPIO_PORTE_BASE:
            pinBase = 4 * 8;
            break;
        case GPIO_PORTF_BASE:
            pinBase = 5 * 8;
            break;
        case GPIO_PORTG_BASE:
            pinBase = 6 * 8;
            break;
        case GPIO_PORTH_BASE:
            pinBase = 7 * 8;
            break;
        case GPIO_PORTJ_BASE:
            pinBase = 8 * 8;
            break;
        case GPIO_PORTK_BASE:
            pinBase = 9 * 8;
            break;
        case GPIO_PORTL_BASE:
            pinBase = 10 * 8;
            break;
        case GPIO_PORTM_BASE:
            pinBase = 11 * 8;
            break;
        case GPIO_PORTN_BASE:
            pinBase = 12 * 8;
            break;
        case GPIO_PORTP_BASE:
            pinBase = 13 * 8;
            break;
        case GPIO_PORTQ_BASE:
            pinBase = 14 * 8;
            break;
        case GPIO_PORTR_BASE:
            pinBase = 15 * 8;
            break;
        case GPIO_PORTS_BASE:
            pinBase = 16 * 8;
            break;
        case GPIO_PORTT_BASE:
            pinBase = 17 * 8;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
    }
    switch (pin) {
        case GPIO_PIN_0:
            pinOffset = 0;
            break;
        case GPIO_PIN_1:
            pinOffset = 1;
            break;
        case GPIO_PIN_2:
            pinOffset = 2;
            break;
        case GPIO_PIN_3:
            pinOffset = 3;
            break;
        case GPIO_PIN_4:
            pinOffset = 4;
            break;
        case GPIO_PIN_5:
            pinOffset = 5;
            break;
        case GPIO_PIN_6:
            pinOffset = 6;
            break;
        case GPIO_PIN_7:
            pinOffset = 7;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO pin");
    }
    return (GPIO_Pin)(pinBase + pinOffset);
}

void enableGPIOClock(std::uintptr_t port) {
    std::uintptr_t SysctrlPeriph;
    switch (port) {
        case GPIO_PORTA_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOA;
            break;
        case GPIO_PORTB_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOB;
            break;
        case GPIO_PORTC_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOC;
            break;
        case GPIO_PORTD_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOD;
            break;
        case GPIO_PORTE_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOE;
            break;
        case GPIO_PORTF_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOF;
            break;
        case GPIO_PORTG_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOG;
            break;
        case GPIO_PORTH_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOH;
            break;
        case GPIO_PORTJ_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOJ;
            break;
        case GPIO_PORTK_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOK;
            break;
        case GPIO_PORTL_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOL;
            break;
        case GPIO_PORTM_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOM;
            break;
        case GPIO_PORTN_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPION;
            break;
        case GPIO_PORTP_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOP;
            break;
        case GPIO_PORTQ_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOQ;
            break;
        case GPIO_PORTR_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOR;
            break;
        case GPIO_PORTS_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOS;
            break;
        case GPIO_PORTT_BASE:
            SysctrlPeriph = SYSCTL_PERIPH_GPIOT;
            break;
        default:
            ExLib_Exception::raiseException("Bad GPIO port");
            return;
    }
    DeviceSupport::SysCtlPeripheralEnable(SysctrlPeriph);
    while (!DeviceSupport::SysCtlPeripheralReady(SysctrlPeriph)) {
    }
}

void configGPIOMode(std::uintptr_t port, std::uint8_t pin, GPIO_Mode modeName) {
    std::uint32_t driveStrength = GPIO_STRENGTH_2MA;
    static const std::uint32_t direction[] = {
        GPIO_DIR_MODE_IN,
        GPIO_DIR_MODE_IN,
        GPIO_DIR_MODE_IN,
        GPIO_DIR_MODE_OUT,
        GPIO_DIR_MODE_OUT,
        GPIO_DIR_MODE_IN,
    };
    static const std::uint32_t mode[] = {
        GPIO_PIN_TYPE_STD,
        GPIO_PIN_TYPE_STD_WPU,
        GPIO_PIN_TYPE_STD_WPD,
        GPIO_PIN_TYPE_STD,
        GPIO_PIN_TYPE_OD,
        GPIO_PIN_TYPE_ANALOG,
    };
    if ((std::size_t)modeName >= sizeof(direction) / sizeof(direction[0]) &&
        (std::size_t)modeName >= sizeof(mode) / sizeof(mode[0])) {
        ExLib_Exception::raiseException("Bad GPIO_Mode");
    }
    DeviceSupport::GPIODirModeSet(port, pin, direction[(std::size_t)modeName]);
    DeviceSupport::GPIOPadConfigSet(port, pin, driveStrength, mode[(std::size_t)modeName]);
}
} // namespace ExLib