#pragma once

#include "ExLib_GPIO.hpp"
#include "ExLib_ReadStream.hpp"
#include "ExLib_WriteStream.hpp"
#include "ExLib_Units.hpp"
#include <stdint.h>

namespace ExLib {

enum class SPI_Periph {
    SPI0 = 0,
    SPI1 = 1,
    SPI2 = 2,
    SPI3 = 3,
};

enum class SPI_Mode {
    Mode0 = 0,
    Mode1 = 1,
    Mode2 = 2,
    Mode3 = 3,
};

class SPI : public ReadStream, WriteStream {
  private:
    GPIO_Pin pinCLK, pinMOSI, pinMISO;
    std::uintptr_t periph;

  public:
    SPI(void) = delete;
    SPI(SPI_Periph periphName);
    SPI(SPI_Periph periphName, GPIO_Pin pinCLK, GPIO_Pin pinMOSI, GPIO_Pin pinMISO);

    void setPins(GPIO_Pin pinCLK, GPIO_Pin pinMOSI, GPIO_Pin pinMISO);

    virtual bool write(char ch);
    virtual bool read(char &ch);

    bool begin(SPI_Mode mode, Frequency freq = 1_MHz);
    void end();

    operator SPI_Periph();
};

class SPI_Device {
};
} // namespace ExLib