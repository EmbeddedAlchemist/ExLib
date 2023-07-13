#pragma once

#include "ExLib_PrintStream.hpp"
#include "stddef.h"

namespace ExLib {

class PrintStream;

/**
 * @brief 当一个类继承Printable并重写了printTo方法，则称这个类是“可打印的”
 * @brief 当使用一个PrintStream打印一个Printable时，Printable的printTo方法会被调用
 * @brief 在重写的printTo方法中，你需要使用PrintStream提供的接口完成打印，并返回打印的字符数
 * 
 */
class Printable {
  protected:
    friend class PrintStream;
    /**
     * @brief 输出到指定的打印流
     *
     * @param stream 指定的打印流
     * @return size_t 输出的字符数
     */
    virtual std::size_t printTo(PrintStream &stream) = 0;
};
} // namespace ExLib
