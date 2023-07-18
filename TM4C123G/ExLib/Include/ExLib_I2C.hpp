#pragma once

#include "ExLib_PrintStream.hpp"
#include "ExLib_ScanStream.hpp"

#include "ExLib_GPIO.hpp"
#include "ExLib_Units.hpp"

#include <stdint.h>

namespace ExLib {

enum class I2C_Direction : std::uint8_t {
    Write = 0,
    Read = 1
};

enum class I2C_Periph : std::uint8_t {
    I2C0 = 0,
    I2C1 = 1,
    I2C2 = 2,
    I2C3 = 3,
    I2C4 = 4,
    I2C5 = 5,
};

class I2C : public WriteStream, ReadStream {
  private:
    GPIO_Pin pinSCL, pinSDA;
    std::uintptr_t periph;

    std::uint8_t slaveAddr;
    bool slaveAddrIsNotSend;
    I2C_Direction direction;

  public:
    virtual bool write(char ch);
    virtual bool read(char &ch);

    void setPins(GPIO_Pin scl, GPIO_Pin sda);

    void begin(Frequency freq = 100_kHz, std::uint8_t selfAddr = 0x00);
    void end();

    void beginTransmission(std::uint8_t addr);
    void endTransmission();

    I2C(void) = delete;
    I2C(I2C_Periph I2CName);
    I2C(I2C_Periph I2CName, GPIO_Pin pinSCL, GPIO_Pin pinSDA);

    
    operator I2C_Periph();
};

class I2C_Device {
  private:
    std::uint8_t addr;

  
};

} // namespace ExLib