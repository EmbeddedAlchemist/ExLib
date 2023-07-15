#pragma once

#include "stddef.h"

namespace ExLib {

enum class BufferFIFO_WriteMode {
    Overwrite, // 缓冲区满后，覆盖旧数据
    Decline    // 缓冲区满后，拒接写入
};

template <typename Type>
class BufferFIFO {
  private:
    Type *const buffer;             // 指向缓冲区内存
    const std::size_t size;         // 缓冲区尺寸
    std::size_t readIndex,          // 指向下一个可写的位置
        writeIndex;                 // 指向下一个可读的位置
    BufferFIFO_WriteMode writeMode; // 写入模式

  public:
    BufferFIFO(void) = delete;
    BufferFIFO(std::size_t size, BufferFIFO_WriteMode writeMode = BufferFIFO_WriteMode::Overwrite);
    BufferFIFO(Type *const buffer, std::size_t size, BufferFIFO_WriteMode writeMode = BufferFIFO_WriteMode::Overwrite);

    /**
     * @brief 写入一个数据
     *
     * @param dataToWrite
     * @return true 写入成功
     * @return false 写入失败
     */
    bool write(const Type dataToWrite);

    /**
     * @brief 写入连续内存中的数据
     *
     * @param dataBufferToWrite 指向待写入数据内存的指针
     * @param len 待写入的个数
     * @return std::size_t 成功写入的数据个数
     */
    std::size_t write(const Type *dataBufferToWrite, std::size_t len);

    /**
     * @brief 读取一个数据
     *
     * @param readData 读取数据的缓冲区
     * @return true
     * @return false
     */
    bool read(Type &readData);

    /**
     * @brief 读取一个数据
     *
     * @param dataBufferToRead 指向接收数据内存的缓冲区
     * @param len 待接收的数据个数
     * @return std::size_t 实际接收的数据量
     */
    // std::size_t read(Type *dataBufferToRead, std::size_t len);

    /**
     * @brief 复位缓冲区，清除所有缓冲区的数据
     *
     */
    void reset(void);

    /**
     * @brief 获取剩余的空间大小
     *
     * @return std::size_t 缓冲区可接收的数据个数
     */
    std::size_t remainSpace(void);

    /**
     * @brief 获取缓冲区内的数据量
     *
     * @return std::size_t 缓冲区内的数据量
     */
    std::size_t avaliable(void);
};

} // namespace ExLib

//
//
// BufferFIFO 的实现，由于是模板类，需要在编译时展开，故在.hpp中定义

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
      writeMode(writeMode) {
    int i;
    i = i;
}

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
            readIndex = 0;
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
    if (writeIndex >= readIndex)
        return writeIndex - readIndex;
    else
        return size - readIndex + writeIndex;
}

} // namespace ExLib