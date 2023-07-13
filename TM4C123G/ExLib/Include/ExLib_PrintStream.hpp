#pragma once

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <type_traits>

#include "ExLib_Printable.hpp"
#include "ExLib_WriteStream.hpp"

namespace ExLib {

class Printable;

/**
 * @brief 类可以通过继承PrintStream并至少重写bool write(char)方法来实现流式打印
 * @brief 如果对数据块的输出有更好的性能，可以重写std::size_t write(const char *buf, std::size_t len)来使用这一特性。若不重写，则默认调用write(char)方法输出
 * @brief 如果在某些情况下不可写入，则可重写bool avaliableForWrite(void)来为不可写入状态提供信号。
 *
 */
class PrintStream : public WriteStream {

  private:


  public:
    inline virtual ~PrintStream(void) {
    }

    template <typename Integer, typename std::enable_if<std::is_integral<Integer>::value, bool>::type = false>
    inline std::size_t print(Integer integer, std::uint8_t base = 10) { return 0; }

    template <typename Floating, typename std::enable_if<std::is_floating_point<Floating>::value, int>::type = 0>
    inline std::size_t print(Floating floating, std::uint8_t tailingDigits = 2) { return 0; }

    size_t print(Printable &printable);

    inline size_t print(const char *str) { return 0; }

    // C++ style implementation

    template <typename Number, typename std::enable_if<std::is_arithmetic<Number>::value, bool>::type = false>
    inline PrintStream &operator<<(Number number) {
        print(number);
        return *this;
    }

    // C style implementation

    std::size_t vprintf(const char *format, std::va_list args);
    std::size_t printf(const char *format, ...);

  private:
};

} // namespace ExLib
