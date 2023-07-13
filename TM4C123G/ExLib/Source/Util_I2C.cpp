#include "Util_I2C.hpp"
#include "DeviceSupport/DeviceSupport.hpp"
#include "ExLib_Exception.hpp"

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
        ExLib_Exception::raiseException("Bad I2C_Periph");
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
        ExLib_Exception::raiseException("Bad I2C_Periph");
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
        ExLib_Exception::raiseException("Bad I2C_Periph");
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

} // namespace ExLib