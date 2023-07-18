#include "Util_UART.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"

#include "stddef.h"

namespace ExLib {

std::uintptr_t getUARTPeriphByName(UART_Periph uartName) {
    static const std::uintptr_t uartPeriph[] = {
        UART0_BASE,
        UART1_BASE,
        UART2_BASE,
        UART3_BASE,
        UART4_BASE,
        UART5_BASE,
        UART6_BASE,
        UART7_BASE,
    };
    if((std::size_t)uartName >= sizeof(uartPeriph)/sizeof(uartPeriph[0])){
        Exception::raiseException("Bad UART_Periph");
    }
    return uartPeriph[(std::size_t)uartName];
}

std::uint32_t getUARTWordLengthByName(UART_WordLength wordLengthName) {
    switch (wordLengthName) {
        case UART_WordLength::Bits5:
            return UART_CONFIG_WLEN_5;
        case UART_WordLength::Bits6:
            return UART_CONFIG_WLEN_6;
        case UART_WordLength::Bits7:
            return UART_CONFIG_WLEN_7;
        case UART_WordLength::Bits8:
            return UART_CONFIG_WLEN_8;
        default:
            Exception::raiseException("Bad UART_WordLength");
            return 0;
    }
}

std::uint32_t getUARTStopBitsByName(UART_StopBits stopBitsName) {
    static const std::uint32_t stopbits[] = {
        UART_CONFIG_STOP_ONE,
        UART_CONFIG_STOP_TWO,
    };
    if((std::size_t)stopBitsName >= sizeof(stopbits)/sizeof(stopbits[0])){
        Exception::raiseException("Bad UART_StopBits");
    }
    return stopbits[(std::size_t)stopBitsName];
}

std::uint32_t getUARTParityByName(UART_Parity parityName) {
    static const std::uint32_t parity[] = {
        UART_CONFIG_PAR_NONE,
        UART_CONFIG_PAR_EVEN,
        UART_CONFIG_PAR_ODD,
        UART_CONFIG_PAR_ZERO,
        UART_CONFIG_PAR_ONE,
    };
    if((std::size_t)parityName >= sizeof(parity)/sizeof(parity[0])) {
        Exception::raiseException("Bad UART_Parity");
    }
    return parity[(std::size_t)parityName];
}

void configUARTState(std::uintptr_t periph, bool isEnable) {
    std::intptr_t sysCtlPeriphUartx;
    switch (periph) {
        case UART0_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART0;
            break;
        case UART1_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART1;
            break;
        case UART2_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART2;
            break;
        case UART3_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART3;
            break;
        case UART4_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART4;
            break;
        case UART5_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART5;
            break;
        case UART6_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART6;
            break;
        case UART7_BASE:
            sysCtlPeriphUartx = SYSCTL_PERIPH_UART7;
            break;
        default:
            return;
            break;
    }
    if (isEnable != false) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriphUartx);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriphUartx) == false)
            ;
    } else {
        DeviceSupport::SysCtlPeripheralDisable(sysCtlPeriphUartx);
    }
}

GPIO_Pin getUARTDefaultRxPin(UART_Periph periph) {
    static const GPIO_Pin defaultRx[] = {
        PA0,
        PB0,
        PD6,
        PC6,
        PC4,
        PE4,
        PD4,
        PE0
    };
    if((std::size_t)periph >= sizeof(defaultRx)/sizeof(defaultRx[0])){
        Exception::raiseException("Bad UART_Periph");
    }
    return defaultRx[(std::size_t)periph];
}

GPIO_Pin getUARTDefaultTxPin(UART_Periph periph) {
        static const GPIO_Pin defaultTx[] = {
        PA1,
        PB1,
        PD7,
        PC7,
        PC5,
        PE5,
        PD5,
        PE1
    };
    if((std::size_t)periph >= sizeof(defaultTx)/sizeof(defaultTx[0])){
        Exception::raiseException("Bad UART_Periph");
    }
    return defaultTx[(std::size_t)periph];
}

bool isLegalUARTPin(std::uintptr_t periph, GPIO_Pin pinRx, GPIO_Pin pinTx) {
    switch (periph) {
        case UART0_BASE:
            return (pinRx == GPIO_Pin::PA0) &&
                   (pinTx == GPIO_Pin::PA1);
        case UART1_BASE:
            return (pinRx == GPIO_Pin::PB0 || pinRx == GPIO_Pin::PC4) &&
                   (pinTx == GPIO_Pin::PB1 || pinTx == GPIO_Pin::PC5);
        case UART2_BASE:
            return (pinRx == GPIO_Pin::PD6 || pinRx == GPIO_Pin::PG4) &&
                   (pinTx == GPIO_Pin::PD7 || pinTx == GPIO_Pin::PG5);
        case UART3_BASE:
            return (pinRx == GPIO_Pin::PC6) &&
                   (pinTx == GPIO_Pin::PC7);
        case UART4_BASE:
            return (pinRx == GPIO_Pin::PC4 || pinRx == GPIO_Pin::PJ0) &&
                   (pinTx == GPIO_Pin::PC5 || pinTx == GPIO_Pin::PJ1);
        case UART5_BASE:
            return (pinRx == GPIO_Pin::PE4 || pinRx == GPIO_Pin::PJ2) &&
                   (pinTx == GPIO_Pin::PE5 || pinTx == GPIO_Pin::PJ3);
        case UART6_BASE:
            return (pinRx == GPIO_Pin::PD4 || pinRx == GPIO_Pin::PJ4) &&
                   (pinTx == GPIO_Pin::PD5 || pinTx == GPIO_Pin::PJ5);
        case UART7_BASE:
            return (pinRx == GPIO_Pin::PE0 || pinRx == GPIO_Pin::PK4) &&
                   (pinTx == GPIO_Pin::PE1 || pinTx == GPIO_Pin::PK5);
        default:
            return false;
    }
}

std::uint32_t getUARTPinMuxConfig(std::uintptr_t periph, GPIO_Pin pinName) {
    switch (periph) {
        case UART0_BASE:
            if (pinName == GPIO_Pin::PA0)
                return 0x00000001;
            if (pinName == GPIO_Pin::PA1)
                return 0x00000401;
        case UART1_BASE:
            if (pinName == GPIO_Pin::PB0)
                return 0x00010001;
            if (pinName == GPIO_Pin::PB1)
                return 0x00010401;
            if (pinName == GPIO_Pin::PC4)
                return 0x00021002;
            if (pinName == GPIO_Pin::PC5)
                return 0x00021402;
        case UART2_BASE:
            if (pinName == GPIO_Pin::PD6)
                return 0x00031801;
            if (pinName == GPIO_Pin::PD7)
                return 0x00031C01;
            if (pinName == GPIO_Pin::PG4)
                return 0x00061001;
            if (pinName == GPIO_Pin::PG5)
                return 0x00061401;
        case UART3_BASE:
            if (pinName == GPIO_Pin::PC6)
                return 0x00021801;
            if (pinName == GPIO_Pin::PC7)
                return 0x00021C01;
        case UART4_BASE:
            if (pinName == GPIO_Pin::PC4)
                return 0x00021001;
            if (pinName == GPIO_Pin::PC5)
                return 0x00021401;
        case UART5_BASE:
            if (pinName == GPIO_Pin::PE4)
                return 0x00041001;
            if (pinName == GPIO_Pin::PE5)
                return 0x00041401;
            if (pinName == GPIO_Pin::PJ2)
                return 0x00080801;
            if (pinName == GPIO_Pin::PJ3)
                return 0x00080C01;
        case UART6_BASE:
            if (pinName == GPIO_Pin::PD4)
                return 0x00031001;
            if (pinName == GPIO_Pin::PD5)
                return 0x00031401;
            if (pinName == GPIO_Pin::PJ4)
                return 0x00081001;
            if (pinName == GPIO_Pin::PJ5)
                return 0x00081401;
        case UART7_BASE:
            if (pinName == GPIO_Pin::PE0)
                return 0x00040001;
            if (pinName == GPIO_Pin::PE1)
                return 0x00040401;
            if (pinName == GPIO_Pin::PK4)
                return 0x00091001;
            if (pinName == GPIO_Pin::PK5)
                return 0x00091401;
    }
		return 0;
}

void configUARTPin(std::uintptr_t periph, GPIO_Pin pinRx, GPIO_Pin pinTx) {
    std::uintptr_t rxPort = getGPIOPortByName(pinRx),
                   txPort = getGPIOPortByName(pinTx);
    std::uint8_t rxPin = getGPIOPinByName(pinRx),
                 txPin = getGPIOPinByName(pinTx);
    enableGPIOClock(rxPort);
    enableGPIOClock(txPort);
    DeviceSupport::GPIOPinConfigure(getUARTPinMuxConfig(periph, pinRx));
    DeviceSupport::GPIOPinConfigure(getUARTPinMuxConfig(periph, pinTx));
    DeviceSupport::GPIODirModeSet(rxPort, rxPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIODirModeSet(txPort, txPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(rxPort, rxPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
    DeviceSupport::GPIOPadConfigSet(txPort, txPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
}

UART_Periph getUARTNameByPeriph(std::uintptr_t periph) {
    switch (periph) {
        case UART0_BASE:
            return UART_Periph::UART0;
        case UART1_BASE:
            return UART_Periph::UART1;
        case UART2_BASE:
            return UART_Periph::UART2;
        case UART3_BASE:
            return UART_Periph::UART3;
        case UART4_BASE:
            return UART_Periph::UART4;
        case UART5_BASE:
            return UART_Periph::UART5;
        case UART6_BASE:
            return UART_Periph::UART6;
        case UART7_BASE:
            return UART_Periph::UART7;
        default:
            Exception::raiseException("Bad UART_BASE");
            return (UART_Periph)0;
    }
}
std::uint32_t getUARTIntByName(UART_Periph uartName) {
    static const std::uint32_t intName[8] = {
        INT_UART0,
        INT_UART1,
        INT_UART2,
        INT_UART3,
        INT_UART4,
        INT_UART5,
        INT_UART6,
        INT_UART7,
    };
    if((std::size_t)uartName > sizeof(intName)/sizeof(intName[0])){
        Exception::raiseException("Bad UART_Periph");
    }
    return intName[(std::size_t)uartName];
}
} // namespace ExLib