#pragma once

#include "ExLib_BufferFIFO.hpp"
#include "ExLib_ReadStream.hpp"

namespace ExLib {
class ReadStreamBuffered : public ReadStream {
    protected:
      BufferFIFO<char> &buffer;

    public:
      ReadStreamBuffered(void) = delete;
      ReadStreamBuffered(BufferFIFO<char> &buffer);
      virtual bool read(char &ch);
      bool peek(char &ch);

      virtual std::size_t avaliableForRead(void);
};
} // namespace ExLib
