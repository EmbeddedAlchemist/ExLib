#pragma once

#include "ExLib_GPIO.hpp"
#include "ExLib_PrintStream.hpp"
#include "ExLib_ScanStream.hpp"
#include "stdint.h"

namespace ExLib {

enum class SPI_Periph {
    SPI0 = 0,
    SPI1 = 1,
    SPI2 = 2,
    SPI3 = 3,
};

class SPI : public ReadStream, WriteStream {
  public:
    virtual bool write(char ch);
    virtual bool read(char &ch);

    bool begin();
    void end();
};

class SPI_Device {
};
} // namespace ExLib