#include "Util_ADC.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"
#include <stddef.h>

namespace ExLib {

std::uintptr_t getADCPeriphByName(ADC_Periph adcName) {
    static const std::uintptr_t periph[] = {
        ADC0_BASE,
        ADC1_BASE,
    };
    if ((std::size_t)adcName >= sizeof(periph) / sizeof(periph[0])) {
        Exception::raiseException("Bad ADC_Periph");
    }
    return periph[(std::size_t)adcName];
}

ADC_Periph getADCNameByPeriph(std::uintptr_t periph) {
    switch (periph) {
        case ADC0_BASE:
            return ADC_Periph::ADC0;
        case ADC1_BASE:
            return ADC_Periph::ADC1;
    }
    return (ADC_Periph)0xFF;
}

void configADCClock(ADC_Periph adcName, bool isEnable) {
    std::uint32_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_ADC0,
        SYSCTL_PERIPH_ADC1,
    };
    if ((std::size_t)adcName >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        Exception::raiseException("Bad ADC_Periph");
    }
    if (isEnable != false) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)adcName]);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriph[(std::size_t)adcName])) {
        }
    } else {
        DeviceSupport::SysCtlPeripheralDisable((std::size_t)adcName);
    }
}

bool isLegalADCPin(GPIO_Pin pinName) {
    return pinName == GPIO_Pin::PE3 ||
           pinName == GPIO_Pin::PE2 ||
           pinName == GPIO_Pin::PE1 ||
           pinName == GPIO_Pin::PE0 ||
           pinName == GPIO_Pin::PD7 ||
           pinName == GPIO_Pin::PD6 ||
           pinName == GPIO_Pin::PD5 ||
           pinName == GPIO_Pin::PD4 ||
           pinName == GPIO_Pin::PE5 ||
           pinName == GPIO_Pin::PE4 ||
           pinName == GPIO_Pin::PB4 ||
           pinName == GPIO_Pin::PB5 ||
           pinName == GPIO_Pin::PD3 ||
           pinName == GPIO_Pin::PD2 ||
           pinName == GPIO_Pin::PD1 ||
           pinName == GPIO_Pin::PD0 ||
           pinName == GPIO_Pin::PK0 ||
           pinName == GPIO_Pin::PK1 ||
           pinName == GPIO_Pin::PK2 ||
           pinName == GPIO_Pin::PK3 ||
           pinName == GPIO_Pin::PE7 ||
           pinName == GPIO_Pin::PE6 ||
           pinName == GPIO_Pin::PN1 ||
           pinName == GPIO_Pin::PN0;
}
void configADCPin(GPIO_Pin pinName) {
    std::uintptr_t port = getGPIOPortByName(pinName);
    std::uint8_t pin = getGPIOPinByName(pinName);

    enableGPIOClock(port);
    DeviceSupport::GPIODirModeSet(port, pin, GPIO_DIR_MODE_IN);
    DeviceSupport::GPIOPadConfigSet(port, pin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_ANALOG);
}
std::uint32_t getADCChannelByPin(GPIO_Pin pinName) {
    switch(pinName){
        case GPIO_Pin::PE3:
            return ADC_CTL_CH0;
        case GPIO_Pin::PE2:
            return ADC_CTL_CH1;
        case GPIO_Pin::PE1:
            return ADC_CTL_CH2;
        case GPIO_Pin::PE0:
            return ADC_CTL_CH3;
        case GPIO_Pin::PD7:
            return ADC_CTL_CH4;
        case GPIO_Pin::PD6:
            return ADC_CTL_CH5;
        case GPIO_Pin::PD5:
            return ADC_CTL_CH6;
        case GPIO_Pin::PD4:
            return ADC_CTL_CH7;
        case GPIO_Pin::PE5:
            return ADC_CTL_CH8;
        case GPIO_Pin::PE4:
            return ADC_CTL_CH9;
        case GPIO_Pin::PB4:
            return ADC_CTL_CH10;
        case GPIO_Pin::PB5:
            return ADC_CTL_CH11;
        case GPIO_Pin::PD3:
            return ADC_CTL_CH12;
        case GPIO_Pin::PD2:
            return ADC_CTL_CH13;
        case GPIO_Pin::PD1:
            return ADC_CTL_CH14;
        case GPIO_Pin::PD0:
            return ADC_CTL_CH15;
        case GPIO_Pin::PK0:
            return ADC_CTL_CH16;
        case GPIO_Pin::PK1:
            return ADC_CTL_CH17;
        case GPIO_Pin::PK2:
            return ADC_CTL_CH18;
        case GPIO_Pin::PK3:
            return ADC_CTL_CH19;
        case GPIO_Pin::PE7:
            return ADC_CTL_CH20;
        case GPIO_Pin::PE6:
            return ADC_CTL_CH21;
        case GPIO_Pin::PN1:
            return ADC_CTL_CH22;
        case GPIO_Pin::PN0:
            return ADC_CTL_CH23;
        default:
             break;
    }
    return 0;
}
} // namespace ExLib
