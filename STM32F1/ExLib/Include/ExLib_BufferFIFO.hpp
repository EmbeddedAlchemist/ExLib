#pragma once
#include "stddef.h"

namespace ExLib {

template <typename Type>
class BufferFIFO {
  private:
    Type *const buffer;
    const std::size_t size; // 缓冲区尺寸
    std::size_t readIndex,  // 指向下一个可写的位置
        writeIndex;         // 指向下一个可读的位置

  public:
    BufferFIFO(void) = delete;
    BufferFIFO(std::size_t size);
    BufferFIFO(Type *const buffer, std::size_t size);

    bool write(const Type dataToWrite);
    std::size_t write(const Type *dataBufferToWrite, std::size_t len);
    bool read(Type &readData);
    std::size_t read(Type *dataBufferToRead, std::size_t len);
    void reset(void);
};

} // namespace ExLib