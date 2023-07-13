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
    std::size_t read(Type *dataBufferToRead, std::size_t len);

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