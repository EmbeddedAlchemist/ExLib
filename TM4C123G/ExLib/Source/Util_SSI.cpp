#include "Util_SSI.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_AllPinMuxConfig.hpp"
#include "Util_GPIO.hpp"

namespace ExLib {

std::uintptr_t getSSIPeriphByName(SPI_Periph ssiNane) {
    static const std::uintptr_t ssiPeriph[] = {
        SSI0_BASE,
        SSI1_BASE,
        SSI2_BASE,
        SSI3_BASE,
    };
    if ((std::size_t)ssiNane >= sizeof(ssiPeriph) / sizeof(ssiPeriph[0]))
        Exception::raiseException("Bad SPI_Periph");
    return ssiPeriph[(std::size_t)ssiNane];
}

SPI_Periph getSSINameByPeriph(std::uintptr_t periph) {
    switch (periph) {
        case SSI0_BASE:
            return SPI_Periph::SPI0;
        case SSI1_BASE:
            return SPI_Periph::SPI1;
        case SSI2_BASE:
            return SPI_Periph::SPI2;
        case SSI3_BASE:
            return SPI_Periph::SPI3;
        default:
            Exception::raiseException("Bad SSI_BASE");
            return (SPI_Periph)0xFF;
    }
}

void configSSIClock(SPI_Periph ssiName, bool isEnable) {
    static const std::uint32_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_SSI0,
        SYSCTL_PERIPH_SSI1,
        SYSCTL_PERIPH_SSI2,
        SYSCTL_PERIPH_SSI3,
    };
    if ((std::size_t)ssiName >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0]))
        Exception::raiseException("Bad SSI_Periph");
    if (isEnable != false) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)ssiName]);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriph[(std::size_t)ssiName])) {
        }
    } else
        DeviceSupport::SysCtlPeripheralDisable(sysCtlPeriph[(std::size_t)ssiName]);
}

bool isLegalSSIPin(std::uintptr_t periph, GPIO_Pin pinClk, GPIO_Pin pinRx, GPIO_Pin pinTx) {
    return (periph == SSI0_BASE && ((pinClk == GPIO_Pin::PA2) &&
                                    (pinRx == GPIO_Pin::PA4) &&
                                    (pinTx == GPIO_Pin::PA5))) ||
           (periph == SSI1_BASE && ((pinClk == GPIO_Pin::PD0 ||
                                     pinClk == GPIO_Pin::PF2) &&
                                    (pinRx == GPIO_Pin::PD2 ||
                                     pinRx == GPIO_Pin::PF0) &&
                                    (pinTx == GPIO_Pin::PD3 ||
                                     pinTx == GPIO_Pin::PF1))) ||
           (periph == SSI2_BASE && ((pinClk == GPIO_Pin::PB4 ||
                                     pinClk == GPIO_Pin::PH4) &&
                                    (pinRx == GPIO_Pin::PB6 ||
                                     pinRx == GPIO_Pin::PH6) &&
                                    (pinTx == GPIO_Pin::PB7 ||
                                     pinTx == GPIO_Pin::PH7))) ||
           (periph == SSI3_BASE && ((pinClk == GPIO_Pin::PD0 ||
                                     pinClk == GPIO_Pin::PH0 ||
                                     pinClk == GPIO_Pin::PK0) &&
                                    (pinRx == GPIO_Pin::PD2 ||
                                     pinRx == GPIO_Pin::PH2 ||
                                     pinRx == GPIO_Pin::PK2) &&
                                    (pinTx == GPIO_Pin::PD3 ||
                                     pinTx == GPIO_Pin::PH3 ||
                                     pinTx == GPIO_Pin::PK3)));
}

std::uint32_t getSSIPinMuxConfig(std::uint32_t periph, GPIO_Pin pinName) {
    switch (periph) {
        case SSI0_BASE:
            if (pinName == GPIO_Pin::PA2)
                return GPIO_PA2_SSI0CLK;
            else if (pinName == GPIO_Pin::PA4)
                return GPIO_PA4_SSI0RX;
            else if (pinName == GPIO_Pin::PA5)
                return GPIO_PA5_SSI0TX;
        case SSI1_BASE:
            if (pinName == GPIO_Pin::PD0)
                return GPIO_PD0_SSI1CLK;
            else if (pinName == GPIO_Pin::PF2)
                return GPIO_PF2_SSI1CLK;
            else if (pinName == GPIO_Pin::PD2)
                return GPIO_PD2_SSI1RX;
            else if (pinName == GPIO_Pin::PF0)
                return GPIO_PF0_SSI1RX;
            else if (pinName == GPIO_Pin::PD3)
                return GPIO_PD3_SSI1TX;
            else if (pinName == GPIO_Pin::PF1)
                return GPIO_PF1_SSI1TX;
        case SSI2_BASE:
            if (pinName == GPIO_Pin::PB4)
                return GPIO_PB4_SSI2CLK;
            else if (pinName == GPIO_Pin::PH4)
                return GPIO_PH4_SSI2CLK;
            else if (pinName == GPIO_Pin::PB6)
                return GPIO_PB6_SSI2RX;
            else if (pinName == GPIO_Pin::PH6)
                return GPIO_PH6_SSI2RX;
            else if (pinName == GPIO_Pin::PB7)
                return GPIO_PB7_SSI2TX;
            else if (pinName == GPIO_Pin::PH7)
                return GPIO_PH7_SSI2TX;
        case SSI3_BASE:
            if (pinName == GPIO_Pin::PD0)
                return GPIO_PD0_SSI3CLK;
            else if (pinName == GPIO_Pin::PH0)
                return GPIO_PH0_SSI3CLK;
            else if (pinName == GPIO_Pin::PK0)
                return GPIO_PK0_SSI3CLK;
            else if (pinName == GPIO_Pin::PD2)
                return GPIO_PD2_SSI3RX;
            else if (pinName == GPIO_Pin::PH2)
                return GPIO_PD2_SSI3RX;
            else if (pinName == GPIO_Pin::PK2)
                return GPIO_PK2_SSI3RX;
            else if (pinName == GPIO_Pin::PD3)
                return GPIO_PD3_SSI3TX;
            else if (pinName == GPIO_Pin::PH3)
                return GPIO_PH3_SSI3TX;
            else if (pinName == GPIO_Pin::PK3)
                return GPIO_PK3_SSI3TX;
    }
    return 0;
}

void configSSIPin(std::uintptr_t periph, GPIO_Pin pinClk, GPIO_Pin pinRx, GPIO_Pin pinTx) {
    std::uintptr_t clkPort = getGPIOPortByName(pinClk),
                   rxPort = getGPIOPortByName(pinRx),
                   txPort = getGPIOPortByName(pinTx);
    std::uint8_t clkPin = getGPIOPinByName(pinClk),
                 rxPin = getGPIOPinByName(pinRx),
                 txPin = getGPIOPinByName(pinTx);

    enableGPIOClock(clkPort);
    enableGPIOClock(rxPort);
    enableGPIOClock(txPort);

    DeviceSupport::GPIOUnlockPin(clkPort, clkPin);
    DeviceSupport::GPIOUnlockPin(rxPort, rxPin);
    DeviceSupport::GPIOUnlockPin(txPort, txPin);

    DeviceSupport::GPIOPinConfigure(getSSIPinMuxConfig(periph, pinClk));
    DeviceSupport::GPIOPinConfigure(getSSIPinMuxConfig(periph, pinRx));
    DeviceSupport::GPIOPinConfigure(getSSIPinMuxConfig(periph, pinTx));

    DeviceSupport::GPIODirModeSet(clkPort, clkPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(clkPort, clkPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
    DeviceSupport::GPIODirModeSet(rxPort, rxPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(rxPort, rxPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
    DeviceSupport::GPIODirModeSet(txPort, txPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(txPort, txPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
}

GPIO_Pin getSSIDefaultClkPin(SPI_Periph ssiName) {
    static const GPIO_Pin defaultClk[] = {
        GPIO_Pin::PA2,
        GPIO_Pin::PD0,
        GPIO_Pin::PB4,
        GPIO_Pin::PD0,
    };
    return defaultClk[(std::size_t)ssiName];
}

GPIO_Pin getSSIDefaultRxPin(SPI_Periph ssiName) {
    static const GPIO_Pin defaultRx[] = {
        GPIO_Pin::PA4,
        GPIO_Pin::PD2,
        GPIO_Pin::PB6,
        GPIO_Pin::PD2,
    };
    return defaultRx[(std::size_t)ssiName];
}

GPIO_Pin getSSIDefaultTxPin(SPI_Periph ssiName) {
    static const GPIO_Pin defaultTx[] = {
        GPIO_Pin::PA5,
        GPIO_Pin::PD3,
        GPIO_Pin::PB7,
        GPIO_Pin::PD3,
    };
    return defaultTx[(std::size_t)ssiName];
}

std::uint32_t getSSIModeByModeName(SPI_Mode modeName) {
    static const uint32_t mode[] = {
        SSI_FRF_MOTO_MODE_0,
        SSI_FRF_MOTO_MODE_1,
        SSI_FRF_MOTO_MODE_2,
        SSI_FRF_MOTO_MODE_3,
    };
    return mode[(std::size_t)modeName];
}

} // namespace ExLib