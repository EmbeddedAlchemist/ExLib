#include "Util_QuadraticEncoder.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"

namespace ExLib {

GPIO_Pin getQuadraticEncoderDefaultAPin(QuadraticEncoder_Periph periphName) {
    static const GPIO_Pin defaultA[] = {
        GPIO_Pin::PD6,
        GPIO_Pin::PC5,
    };
    if ((std::size_t)periphName >= sizeof(defaultA) / sizeof(defaultA[0])) {
        Exception::raiseException("Bad QuadraticEncoder_Periph");
    }
    return defaultA[(std::size_t)periphName];
}

GPIO_Pin getQuadraticEncoderDefaultBPin(QuadraticEncoder_Periph periphName) {
    static const GPIO_Pin defaultB[] = {
        GPIO_Pin::PD7,
        GPIO_Pin::PC6,
    };
    if ((std::size_t)periphName >= sizeof(defaultB) / sizeof(defaultB[0])) {
        Exception::raiseException("Bad QuadraticEncoder_Periph");
    }
    return defaultB[(std::size_t)periphName];
}

std::uintptr_t getQuadraticEncoderPeriphByName(QuadraticEncoder_Periph periphName) {
    static const std::uintptr_t periph[] = {
        QEI0_BASE,
        QEI1_BASE,
    };
    if ((std::size_t)periphName >= sizeof(periph) / sizeof(periph[0])) {
        Exception::raiseException("Bad QuadraticEncoder_Periph");
    }
    return periph[(std::size_t)periphName];
}

bool isLegalQuadraticEncoderPin(std::uintptr_t periph, GPIO_Pin pinNameA, GPIO_Pin pinNameB) {
    return (periph == QEI0_BASE &&
            ((pinNameA == GPIO_Pin::PD6 ||
              pinNameA == GPIO_Pin::PF0) &&
             (pinNameB == GPIO_Pin::PD7 ||
              pinNameB == GPIO_Pin::PF1))) ||
           (periph == QEI1_BASE &&
            ((pinNameA == GPIO_Pin::PC5) &&
             (pinNameB == GPIO_Pin::PC6)));
}

QuadraticEncoder_Periph getQuadraticEncoderNameByPeriph(std::uintptr_t periph) {
    switch (periph) {
        case QEI0_BASE:
            return QuadraticEncoder_Periph::QuadraticEncoder0;
        case QEI1_BASE:
            return QuadraticEncoder_Periph::QuadraticEncoder1;
        default:
            return (QuadraticEncoder_Periph)0;
    }
}

void configQuadraticEncoderClock(QuadraticEncoder_Periph periphName, bool isEnable) {
    static const std::uint32_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_QEI0,
        SYSCTL_PERIPH_QEI1,
    };
    if ((std::size_t)periphName >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        Exception::raiseException("Bad QuadraticEncoder_Periph");
    }
    if (isEnable) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)periphName]);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriph[(std::size_t)periphName]) == false)
            ;
    } else
        DeviceSupport::SysCtlPeripheralDisable(sysCtlPeriph[(std::size_t)periphName]);
}

std::uint32_t getQuadraticEncoderPinMuxConfig(std::uintptr_t periph, GPIO_Pin pin) {
    switch (periph) {
        case QEI0_BASE:
            if (pin == GPIO_Pin::PD6)
                return GPIO_PD6_PHA0;
            else if (pin == GPIO_Pin::PD7)
                return GPIO_PD7_PHB0;
            else if (pin == GPIO_Pin::PF0)
                return GPIO_PF0_PHA0;
            else if (pin == GPIO_Pin::PF1)
                return GPIO_PF1_PHB0;
            break;
        case QEI1_BASE:
            if (pin == GPIO_Pin::PC5)
                return GPIO_PC5_PHA1;
            else if (pin == GPIO_Pin::PC6)
                return GPIO_PC6_PHB1;
            break;
    }
    return 0;
}

void configQuadraticEncoderPin(std::uintptr_t periph, GPIO_Pin pinA, GPIO_Pin pinB) {
    std::uintptr_t pinAPort = getGPIOPortByName(pinA),
                   pinBPort = getGPIOPortByName(pinB);
    std::uint8_t pinAPin = getGPIOPinByName(pinA),
                 pinBPin = getGPIOPinByName(pinB);
    enableGPIOClock(pinAPort);
    enableGPIOClock(pinBPort);
    DeviceSupport::GPIOPinConfigure(getQuadraticEncoderPinMuxConfig(periph, pinA));
    DeviceSupport::GPIOPinConfigure(getQuadraticEncoderPinMuxConfig(periph, pinB));
    DeviceSupport::GPIODirModeSet(pinAPort, pinAPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIODirModeSet(pinBPort, pinBPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(pinAPort, pinAPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
    DeviceSupport::GPIOPadConfigSet(pinBPort, pinBPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
}

} // namespace ExLib