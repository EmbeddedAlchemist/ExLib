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
  public:
    enum class Align : std::uint8_t {
        Left,
        Right
    };
    enum class Fill : std::uint8_t {
        Zero,
        Space
    };

  private:
    enum class pfOpinion : std::uint8_t {
        LeftAlign = 1 << 0,
        DisplaySign = 1 << 1,
        FillZero = 1 << 2,
        SpaceForSign = 1 << 3,
        ExtraSign = 1 << 4
    };

    enum class pfSize {
        Default = 0,
        Shortest,
        Short,
        Max,
        Long,
        Longest,
        PDiff,
        Size,
    };
    enum class pfType {
        Unknown = 0,
        Char,
        WideChar,
        SignedDec,
        UnsignedOct,
        UnsignedDec,
        UnsignedHexUpper,
        UnsignedHexLower,
        FloatSciLower,
        FloatSciUpper,
        FloatLower,
        FloatUpper,
        FloatAutoLower,
        FloatAutoUpper,
        FloatHexLower,
        FloatHexUpper,
        CountingPointer,
        Pointer,
        String,
        WideString,
    };

    struct pfPrintOpinion {
        std::uint8_t opinion;
        std::int8_t width;     //-1: 未指定 -2: 来自参数列表
        std::int8_t precision; //-1: 未指定 -2: 来自参数列表
        pfSize size;
        pfType type;
        va_list *args;
    };

    std::size_t pfParseOpinion(const char *str, std::uint8_t &opinion);
    std::size_t pfParseWidth(const char *str, std::int8_t &width);
    std::size_t pfParsePrecision(const char *str, std::int8_t &precision);
    std::size_t pfParseSize(const char *str, pfSize &size);
    std::size_t pfParseType(const char *str, pfType &type);
    std::size_t pfParsePrintOpinion(const char *str, pfPrintOpinion &opinion);
    std::size_t printfPrint(pfPrintOpinion &opinion);

  private:
    /**
     * @brief 获取数字的符号
     *
     * @tparam Number
     * @param number 数值类型
     * @param displaySign 是否为正数显示符号
     * @param spaceForSign 是否为正数符号留空
     * @param signLength 符号长度
     * @return const char* 指向符号的字符串
     */
    template <typename Number>
    const char *getSign(Number number, bool displaySign, bool spaceForSign, std::size_t &signLength);

    /**
     * @brief 获取数字的前缀
     *
     * @param base 数制
     * @param upperCase 是否大写
     * @param prefixLength 前缀长度
     * @return const char*
     */
    const char *getPrefix(std::uint8_t base, bool upperCase, std::size_t &prefixLength);

    /**
     * @brief 将0-36内的数字转为ASCII字符
     * 
     * @param number 
     * @param upperCase 
     * @return char 
     */
    char getNumberInASCII(std::uint8_t number, bool upperCase);

    /**
     * @brief 获取整数不含符号的长度
     *
     * @tparam Integer
     * @param integer 整数类型
     * @param base 数制
     * @return size_t
     */
    template <typename Integer>
    std::size_t getIntegerDigitsWithoutSign(Integer integer, std::uint8_t base);

    /**
     * @brief 打印整数，不带符号
     *
     * @tparam Integer
     * @param integer 整数
     * @param base 数制
     * @param bufferSize 预先使用getIntegerDigitsWithoutSign计算的缓冲区大小，如果指定非0数可省去一次getIntegerDigitsWithoutSign调用
     * @return std::size_t
     */
    template <typename Integer>
    std::size_t printIntegerWithoutSign(Integer integer, std::uint8_t base, bool upperCase, std::size_t bufferSize = 0);



  public:
    inline virtual ~PrintStream(void) {
    }

    // basic print

    template <typename Floating>
    inline std::size_t printFloat(Floating floating) { return 0; }

    template <typename Floating>
    std::size_t printFloat(Floating floating, std::int8_t prexxxx = 6, std::uint8_t base = 10, std::int8_t width, Align align = Align::Right, Fill fill = Fill::Space, bool displaySign = false, bool spaceForSign = false, bool prefix = false, bool upperCase = false);

    template <typename Floating>
    std::size_t printFloatSci(Floating floating, std::int8_t prexxxx = 6, std::uint8_t base = 10, std::int8_t width, Align align = Align::Right, Fill fill = Fill::Space, bool displaySign = false, bool spaceForSign = false, bool prefix = false, bool upperCase = false);

    template <typename Floating>
    std::size_t printFloatAuto(Floating floating, std::int8_t prexxxx = 6, std::uint8_t base = 10, std::int8_t width, Align align = Align::Right, Fill fill = Fill::Space, bool displaySign = false, bool spaceForSign = false, bool prefix = false, bool upperCase = false);

    /**
     * @brief 打印整数
     *
     * @tparam Integer
     * @param integer 整数类型
     * @param base 数制
     * @param width 最小宽度
     * @param align 对齐方式
     * @param fill 填充
     * @param displaySign 是否为正数显示符号
     * @param spaceForSign 是否为正数符号留空格
     * @param prefix 是否显示前缀
     * @param upperCase 是否使用大写
     * @return std::size_t 实际输出的字符数
     */
    template <typename Integer>
    std::size_t printInteger(Integer integer, std::uint8_t base = 10, std::int8_t width = -1, Align align = Align::Right, Fill fill = Fill::Space, bool displaySign = false, bool spaceForSign = false, bool prefix = false, bool upperCase = false);

    std::size_t printRepeat(char character, std::size_t repeatTimes);
    // overloads

    template <typename Integer, typename std::enable_if<std::is_integral<Integer>::value, bool>::type = false>
    inline std::size_t print(Integer integer, std::uint8_t base = 10) { return printInteger((integer, base)) }

    template <typename Floating, typename std::enable_if<std::is_floating_point<Floating>::value, int>::type = 0>
    inline std::size_t print(Floating floating, std::uint8_t tailingDigits = 2) { return printFloat(floating); }

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
