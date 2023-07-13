#pragma once

#include "ExLib_ReadStream.hpp"

namespace ExLib {
class ScanStream : public ReadStream{
  public:
    virtual ~ScanStream(void) = 0;
};
} // namespace ExLib
