#include "ExLib_BufferFIFO.hpp"

namespace ExLib {

template <typename Type>
BufferFIFO<Type>::BufferFIFO(std::size_t size, BufferFIFO_WriteMode writeMode)
    : BufferFIFO(new Type(size), size, writeMode){};

template <typename Type>
BufferFIFO<Type>::BufferFIFO(Type *const buffer, std::size_t size, BufferFIFO_WriteMode writeMode)
    : buffer(buffer),
      size(size),
      readIndex(0),
      writeIndex(0),
      writeMode(writeMode) {}

template <typename Type>
bool BufferFIFO<Type>::write(const Type dataToWrite) {
    if (writeIndex + 1 != readIndex && !(writeIndex + 1 == size && readIndex == 0)) {
        // 缓冲区未满
        buffer[writeIndex] = dataToWrite;
        writeIndex++;
        if (writeIndex == size)
            writeIndex = 0;
        return true;
    } else {
        // 缓冲区满，根据写入策略决定放弃写入或覆盖数据
        if (writeMode == BufferFIFO_WriteMode::Decline) {
            // 拒绝写入，返回false
            return false;
        } else {
            // 覆盖旧数据
            readIndex++;
            if (readIndex == size)
                readIndex = 0;
            buffer[writeIndex] = dataToWrite;
            writeIndex++;
            if (writeIndex == size)
                writeIndex = 0;
            return true;
        }
    }
}

template <typename Type>
std::size_t BufferFIFO<Type>::write(const Type *dataBufferToWrite, std::size_t len) {
    if (len >= size) {

    } else {
    }
}

template <typename Type>
bool BufferFIFO<Type>::read(Type &readData) {
    if (readIndex == writeIndex)
        return false;
    else {
        readData = buffer[readIndex];
        readIndex++;
        if (readIndex >= size)
            readIndex;
        return false;
    }
}

template <typename Type>
void BufferFIFO<Type>::reset(void) {
    readIndex = 0;
    writeIndex = 0;
}

template <typename Type>
std::size_t BufferFIFO<Type>::remainSpace(void) {
    return size - avaliable() - 1;
}

template <typename Type>
std::size_t BufferFIFO<Type>::avaliable(void) {
    if(writeIndex>=readIndex)
        return writeIndex - readIndex;
    else
        return size - readIndex + writeIndex;
}

} // namespace ExLib
