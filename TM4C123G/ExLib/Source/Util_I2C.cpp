#include "Util_I2C.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"
#include "Util_AllPinMuxConfig.hpp"

namespace ExLib {

std::uintptr_t getI2CPeriphByName(I2C_Periph i2cName) {
    static const std::uintptr_t periph[] = {
        I2C0_BASE,
        I2C1_BASE,
        I2C2_BASE,
        I2C3_BASE,
        I2C4_BASE,
        I2C5_BASE,
    };
    if ((std::size_t)i2cName >= sizeof(periph) / sizeof(periph[0])) {
        Exception::raiseException("Bad I2C_Periph");
    }
    return periph[(std::size_t)i2cName];
}

GPIO_Pin getI2CDefaultSCLPin(I2C_Periph i2cName) {
    static const GPIO_Pin defaultSCL[] = {
        GPIO_Pin::PB2,
        GPIO_Pin::PA6,
        GPIO_Pin::PE4,
        GPIO_Pin::PD0,
        GPIO_Pin::PG2,
        GPIO_Pin::PG6,
    };
    if ((std::size_t)i2cName >= sizeof(defaultSCL) / sizeof(defaultSCL[0])) {
        Exception::raiseException("Bad I2C_Periph");
    }
    return defaultSCL[(std::size_t)i2cName];
}

GPIO_Pin getI2CDefaultSDAPin(I2C_Periph i2cName) {
    static const GPIO_Pin defaultSDA[] = {
        GPIO_Pin::PB3,
        GPIO_Pin::PA7,
        GPIO_Pin::PE5,
        GPIO_Pin::PD1,
        GPIO_Pin::PG3,
        GPIO_Pin::PB7,
    };
    if ((std::size_t)i2cName >= sizeof(defaultSDA) / sizeof(defaultSDA[0])) {
        Exception::raiseException("Bad I2C_Periph");
    }
    return defaultSDA[(std::size_t)i2cName];
}

bool isLegalI2CPin(std::uintptr_t periph, GPIO_Pin pinSCL, GPIO_Pin pinSDA) {
    return (periph == I2C0_BASE &&
            ((pinSCL == GPIO_Pin::PB2) &&
             (pinSDA == GPIO_Pin::PB3))) ||
           (periph == I2C1_BASE &&
            ((pinSCL == GPIO_Pin::PA6 ||
              pinSCL == GPIO_Pin::PG4) &&
             (pinSDA == GPIO_Pin::PA7 ||
              pinSDA == GPIO_Pin::PG5))) ||
           (periph == I2C2_BASE &&
            ((pinSCL == GPIO_Pin::PE4 ||
              pinSCL == GPIO_Pin::PF6) &&
             (pinSDA == GPIO_Pin::PE5 ||
              pinSDA == GPIO_Pin::PF7))) ||
           (periph == I2C3_BASE &&
            ((pinSCL == GPIO_Pin::PD0 ||
              pinSCL == GPIO_Pin::PG0) &&
             (pinSDA == GPIO_Pin::PD1 ||
              pinSDA == GPIO_Pin::PG1))) ||
           (periph == I2C4_BASE &&
            ((pinSCL == GPIO_Pin::PG2) ||
             (pinSDA == GPIO_Pin::PG3))) ||
           (periph == I2C5_BASE &&
            ((pinSCL == GPIO_Pin::PB6 ||
              pinSCL == GPIO_Pin::PG6) &&
             (pinSDA == GPIO_Pin::PB7 ||
              pinSDA == GPIO_Pin::PG7)));
}

void configI2CClock(I2C_Periph i2cName, bool isEnable) {
    static const std::uint32_t sysCtlPeriph[] = {
        SYSCTL_PERIPH_I2C0,
        SYSCTL_PERIPH_I2C1,
        SYSCTL_PERIPH_I2C2,
        SYSCTL_PERIPH_I2C3,
        SYSCTL_PERIPH_I2C4,
        SYSCTL_PERIPH_I2C5,
    };
    if ((std::size_t)i2cName >= sizeof(sysCtlPeriph) / sizeof(sysCtlPeriph[0])) {
        Exception::raiseException("Bad I2C_Periph");
        return;
    }
    if (isEnable) {
        DeviceSupport::SysCtlPeripheralEnable(sysCtlPeriph[(std::size_t)i2cName]);
        while (DeviceSupport::SysCtlPeripheralReady(sysCtlPeriph[(std::size_t)i2cName] == false)) {
        }
    } else {
        DeviceSupport::SysCtlPeripheralDisable(sysCtlPeriph[(std::size_t)i2cName]);
    }
}

I2C_Periph getI2CNameByPeriph(std::uintptr_t periph) {
    switch (periph) {
        case I2C0_BASE:
            return I2C_Periph::I2C0;
        case I2C1_BASE:
            return I2C_Periph::I2C1;
        case I2C2_BASE:
            return I2C_Periph::I2C2;
        case I2C3_BASE:
            return I2C_Periph::I2C3;
        case I2C4_BASE:
            return I2C_Periph::I2C4;
        case I2C5_BASE:
            return I2C_Periph::I2C5;
        default:
            Exception::raiseException("Bad I2C periph addr");
            return (I2C_Periph)0xff;
    }
}

std::uint32_t getI2CPinMuxConfig(std::uintptr_t periph, GPIO_Pin pinName) {
    switch (periph) {
        case I2C0_BASE:
            if (pinName == GPIO_Pin::PB2)
                return GPIO_PB2_I2C0SCL;
            else if (pinName ==GPIO_Pin:: PB3)
                return GPIO_PB3_I2C0SDA;
        case I2C1_BASE:
            if (pinName == GPIO_Pin::PA6)
                return GPIO_PA6_I2C1SCL;
            else if (pinName == GPIO_Pin::PA7)
                return GPIO_PA7_I2C1SDA;
            else if (pinName == GPIO_Pin::PG4)
                return GPIO_PG4_I2C1SCL;
            else if (pinName == GPIO_Pin::PG5)
                return GPIO_PG5_I2C1SDA;
        case I2C2_BASE:
            if (pinName == GPIO_Pin::PE4)
                return GPIO_PE4_I2C2SCL;
            else if (pinName == GPIO_Pin::PE5)
                return GPIO_PE5_I2C2SDA;
            else if (pinName == GPIO_Pin::PF6)
                return GPIO_PF6_I2C2SCL;
            else if (pinName == GPIO_Pin::PF7)
                return GPIO_PF7_I2C2SDA;
        case I2C3_BASE:
            if (pinName == GPIO_Pin::PD0)
                return GPIO_PD0_I2C3SCL;
            else if (pinName == GPIO_Pin::PD1)
                return GPIO_PD1_I2C3SDA;
            else if (pinName == GPIO_Pin::PG0)
                return GPIO_PG0_I2C3SCL;
            else if (pinName == GPIO_Pin::PG1)
                return GPIO_PG1_I2C3SDA;
        case I2C4_BASE:
            if (pinName == GPIO_Pin::PG2)
                return GPIO_PG2_I2C4SCL;
            else if (pinName == GPIO_Pin::PG3)
                return GPIO_PG3_I2C4SDA;
        case I2C5_BASE:
            if (pinName == GPIO_Pin::PB6)
                return GPIO_PB6_I2C5SCL;
            else if (pinName == GPIO_Pin::PB7)
                return GPIO_PB7_I2C5SDA;
            else if (pinName == GPIO_Pin::PG6)
                return GPIO_PG6_I2C5SCL;
            else if (pinName == GPIO_Pin::PG7)
                return GPIO_PG7_I2C5SDA;
        default:
            return 0;
    }
}

void configI2CPin(std::uintptr_t periph, GPIO_Pin pinSCL, GPIO_Pin pinSDA) {
    std::uintptr_t sclPort = getGPIOPortByName(pinSCL),
                   sdaPort = getGPIOPortByName(pinSDA);
    std::uint16_t sclPin = getGPIOPinByName(pinSCL),
                  sdaPin = getGPIOPinByName(pinSDA);
    enableGPIOClock(sclPort);
    enableGPIOClock(sdaPort);
    DeviceSupport::GPIOPinConfigure(getI2CPinMuxConfig(periph, pinSCL));
    DeviceSupport::GPIOPinConfigure(getI2CPinMuxConfig(periph, pinSDA));
    DeviceSupport::GPIODirModeSet(sclPort, sclPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(sclPort, sclPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD);
    DeviceSupport::GPIODirModeSet(sdaPort, sdaPin, GPIO_DIR_MODE_HW);
    DeviceSupport::GPIOPadConfigSet(sdaPort, sdaPin, GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_OD);
}

} // namespace ExLib