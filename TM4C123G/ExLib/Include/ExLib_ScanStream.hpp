#pragma once

#include "ExLib_ReadStreamBuffered.hpp"

namespace ExLib {
class ScanStream : public ReadStreamBuffered {
  public:
    inline ScanStream(BufferFIFO<char> &buffer) : ReadStreamBuffered::ReadStreamBuffered(buffer){};
};
} // namespace ExLib
