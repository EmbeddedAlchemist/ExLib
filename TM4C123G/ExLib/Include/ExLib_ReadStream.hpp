#pragma once

#include <stddef.h>

namespace ExLib {
class ReadStream {
  public:
    /**
     * @brief 读一字节
     *
     * @return true 读取成功
     * @return false 读取失败
     */
    virtual bool read(char &) = 0;
    inline char read(void) {
        char c;
        read(c);
        return c;
    }
    inline char read(bool &readState){
        char c;
        readState = read(c);
        return c;
    }

    /**
     * @brief 写入字节序列
     *
     * @param buf 指向缓冲区首地址的指针
     * @param len 希望写入的长度
     * @return std::size_t 实际写入的长度
     */
    virtual std::size_t read(char *buf, std::size_t len);

    /**
     * @brief 写入字节序列，直到遇到指定字符
     *
     * @param buf 指向缓冲区首地址的指针
     * @param endChar 停止字符
     * @return std::size_t
     */
    virtual std::size_t readUntil(char *buf, char endChar);

    /**
     * @brief 判断流是否准备好被写入
     *
     * @return true 已经可以写入
     * @return false 此时不能写入
     */
    inline virtual bool avaliableForRead(void) { return true; }
    
};
} // namespace ExLib