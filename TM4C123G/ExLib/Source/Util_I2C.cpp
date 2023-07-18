#include "Util_I2C.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"
#include "Util_GPIO.hpp"

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
        PB2,
        PA6,
        PE4,
        PD0,
        PG2,
        PG6,
    };
    if ((std::size_t)i2cName >= sizeof(defaultSCL) / sizeof(defaultSCL[0])) {
        Exception::raiseException("Bad I2C_Periph");
    }
    return defaultSCL[(std::size_t)i2cName];
}

GPIO_Pin getI2CDefaultSDAPin(I2C_Periph i2cName) {
    static const GPIO_Pin defaultSDA[] = {
        PB3,
        PA7,
        PE5,
        PD1,
        PG3,
        PB7,
    };
    if ((std::size_t)i2cName >= sizeof(defaultSDA) / sizeof(defaultSDA[0])) {
        Exception::raiseException("Bad I2C_Periph");
    }
    return defaultSDA[(std::size_t)i2cName];
}

bool isLegalI2CPin(std::uintptr_t periph, GPIO_Pin pinSCL, GPIO_Pin pinSDA) {
    return (periph == I2C0_BASE &&
            ((pinSCL == PB2) &&
             (pinSDA == PB3))) ||
           (periph == I2C1_BASE &&
            ((pinSCL == PA6 ||
              pinSCL == PG4) &&
             (pinSDA == PA7 ||
              pinSDA == PG5))) ||
           (periph == I2C2_BASE &&
            ((pinSCL == PE4 ||
              pinSCL == PF6) &&
             (pinSDA == PE5 ||
              pinSDA == PF7))) ||
           (periph == I2C3_BASE &&
            ((pinSCL == PD0 ||
              pinSCL == PG0) &&
             (pinSDA == PD1 ||
              pinSDA == PG1))) ||
           (periph == I2C4_BASE &&
            ((pinSCL == PG2) ||
             (pinSDA == PG3))) ||
           (periph == I2C5_BASE &&
            ((pinSCL == PB6 ||
              pinSCL == PG6) &&
             (pinSDA == PB7 ||
              pinSDA == PG7)));
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
            if (pinName == PB2)
                return 0x00010803;
            else if (pinName == PB3)
                return 0x00010C03;
        case I2C1_BASE:
            if (pinName == PA6)
                return 0x00001803;
            else if (pinName == PA7)
                return 0x00001C03;
            else if (pinName == PG4)
                return 0x00061003;
            else if (pinName == PG5)
                return 0x00061403;
        case I2C2_BASE:
            if (pinName == PE4)
                return 0x00041003;
            else if (pinName == PE5)
                return 0x00041403;
            else if (pinName == PF6)
                return 0x00051803;
            else if (pinName == PF7)
                return 0x00051C03;
        case I2C3_BASE:
            if (pinName == PD0)
                return 0x00030003;
            else if (pinName == PD1)
                return 0x00030403;
            else if (pinName == PG0)
                return 0x00060003;
            else if (pinName == PG1)
                return 0x00060403;
        case I2C4_BASE:
            if (pinName == PG2)
                return 0x00060803;
            else if (pinName == PG3)
                return 0x00060C03;
        case I2C5_BASE:
            if (pinName == PB6)
                return 0x00011803;
            else if (pinName == PB7)
                return 0x00011C03;
            else if (pinName == PG6)
                return 0x00061803;
            else if (pinName == PG7)
                return 0x00061C03;
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