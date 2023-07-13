#include "ExLib_PrintStream.hpp"
#include "ExLib_Printable.hpp"
#include "cstdarg"
#include "ctype.h"

// 只是为了防止编辑器报错，此宏定义在编译时失效
#ifndef __builtin_va_arg
#define __builtin_va_arg(ap, type) (type)0
#endif
#ifndef __builtin_va_start
#define __builtin_va_start(x, y)
#endif
#ifndef __builtin_va_end
#define __builtin_va_end(x)
#endif

namespace ExLib {
const char *PrintStream::getPrefix(std::uint8_t base, bool upperCase, std::size_t &prefixLength) {
    if (base == 2) {
        prefixLength = 2;
        return upperCase ? "0B" : "0b";
    } else if (base == 8) {
        prefixLength = 1;
        return "0";
    } else if (base == 16) {
        prefixLength = 2;
        return upperCase ? "0X" : "0x";
    } else {
        prefixLength = 0;
        return "";
    }
}

char PrintStream::getNumberInASCII(std::uint8_t number, bool upperCase) {
    if (number > 36) {
        return '*';
    } else if (number < 10)
        return number + '0';
    else if (upperCase) {
        return number + 'A' - 10;
    } else if (!upperCase) {
        return number + 'a' - 10;
    }
}

std::size_t PrintStream::print(Printable &printable) {
    return printable.printTo(*this);
}

template <typename Number>
const char *PrintStream::getSign(Number number, bool displaySign, bool spaceForSign, std::size_t &signLength) {
    if (number < 0) {
        signLength = 1;
        return "-";
    } else if (displaySign) {
        signLength = 1;
        return "+";
    } else if (spaceForSign) {
        signLength = 1;
        return " ";
    } else {
        signLength = 0;
        return "";
    }
}

template <typename Integer>
std::size_t PrintStream::getIntegerDigitsWithoutSign(Integer integer, std::uint8_t base) {
    std::size_t digitLength = 0;
    if (base < 2 || base > 36)
        return 0;
    if (integer < 0)
        integer = -integer;
    while (integer != 0) {
        integer /= base;
        digitLength++;
    }
    return digitLength;
}

template <typename Integer>
std::size_t PrintStream::printIntegerWithoutSign(Integer integer, std::uint8_t base, bool upperCase, std::size_t bufferSize) {
    if (bufferSize == 0)
        bufferSize = getIntegerDigitsWithoutSign(integer, base);
    if (integer == 0) {
        return write('0');
    }
    if (integer < 0)
        integer = -integer;
    char buffer[bufferSize];
    for (size_t i = 1; i <= bufferSize; i++) {
        buffer[bufferSize - i] = getNumberInASCII(integer % base, upperCase);
        integer /= base;
    }
    return write(buffer, bufferSize);
}

template <typename Integer>
std::size_t PrintStream::printInteger(Integer integer, std::uint8_t base, std::int8_t width, Align align, Fill fill, bool displaySign, bool spaceForSign, bool prefix, bool upperCase) {
    std::size_t signWidth;                                                        // 符号宽度
    const char *signStr = getSign(integer, displaySign, spaceForSign, signWidth); // 符号字串
    std::size_t prefixWidth;                                                      // 前缀宽度
    const char *prefixStr = getPrefix(base, upperCase, prefixWidth);              // 前缀字串
    std::size_t digitWidth = getIntegerDigitsWithoutSign(integer, base);          // 数位宽度
    std::size_t fillWidth;                                                        // 填充宽度
    std::size_t output = 0;
    if (signWidth + prefixWidth + digitWidth < width)
        fillWidth = width - (signWidth + prefixWidth + digitWidth);
    else
        fillWidth = 0;
    if (fillWidth == 0) {
        output += write(signStr, signWidth);
        output += write(prefixStr, prefixWidth);
        output += printIntegerWithoutSign(integer, base, upperCase, digitWidth);
        return output;
    } else {
        if (align = Align::Left) {
            output += write(signStr, signWidth);
            output += write(prefixStr, prefixWidth);
            output += printIntegerWithoutSign(integer, base, upperCase, digitWidth);
            output += printRepeat(' ', fillWidth);
            return output;
        } else if (align = Align::Right) {
            if (fill == Fill::Space) {
                output += printRepeat(' ', fillWidth);
                output += write(signStr, signWidth);
                output += write(prefixStr, prefixWidth);
                output += printIntegerWithoutSign(integer, base, upperCase, digitWidth);
                return output;
            } else if (fill == Fill::Zero) {
                output += output += write(signStr, signWidth);
                output += write(prefixStr, prefixWidth);
                output += printRepeat('0', fillWidth);
                output += printIntegerWithoutSign(integer, base, upperCase, digitWidth);
                return output;
            }
        }
    }
}

std::size_t PrintStream::printRepeat(char character, std::size_t repeatTimes) {
    std::size_t outputCount = 0;
    while (repeatTimes && write(character)) {
        repeatTimes--;
        outputCount++;
    }
    return outputCount;
}

//*
//* 格式化输出相关
//*

//%[标志][宽度][.精度][大小]类型

std::size_t PrintStream::pfParseOpinion(const char *str, std::uint8_t &opinion) {
    opinion = 0;
    size_t len = 0;
    while (*str) {
        switch (*str) {
            case '-':
                opinion |= (std::uint8_t)pfOpinion::LeftAlign;
                break;
            case '+':
                opinion |= (std::uint8_t)pfOpinion::DisplaySign;
                break;
            case '0':
                opinion |= (std::uint8_t)pfOpinion::FillZero;
                break;
            case ' ':
                opinion |= (std::uint8_t)pfOpinion::SpaceForSign;
                break;
            case '#':
                opinion |= (std::uint8_t)pfOpinion::ExtraSign;
                break;
            default:
                return len;
        }
        len++;
        str++;
    }
}

std::size_t PrintStream::pfParseWidth(const char *str, std::int8_t &width) {
    std::size_t len = 0;
    std::int8_t _width = 0;

    width = -1;

    if (*str == '*') {
        width = -2;
        return 1;
    }
    while (*str) {
        if (std::isdigit(*str)) {
            _width *= 10;
            _width += (*str - '0');
            str++;
            len++;
        } else {
            if (_width != 0)
                width = _width;
            return len;
        }
    }
}

std::size_t PrintStream::pfParsePrecision(const char *str, std::int8_t &precision) {
    std::size_t len = 0;
    std::size_t _precision = 0;

    precision = -1;
    if (*str != '.')
        return 0;
    str++;
    if (*str == '*') {
        precision = -2;
        return 1;
    }
    while (*str) {
        if (std::isdigit(*str)) {
            _precision *= 10;
            _precision += (*str - '0');
            str++;
            len++;
        } else {
            if (_precision != 0)
                precision = _precision;
            return len;
        }
    }
}

std::size_t PrintStream::pfParseSize(const char *str, pfSize &size) {
    switch (str[0]) {
        case 'h':
        case 'H':
            if (str[1] == 'h' || str[1] == 'H') {
                size = pfSize::Shortest;
                return 2;
            }
            size = pfSize::Short;
            break;
        case 'j':
            size = pfSize::Max;
            break;
        case 'l':
        case 'L':
            if (str[1] == 'l' || str[1] == 'L') {
                size = pfSize::Shortest;
                return 2;
            }
            size = pfSize::Long;
            break;
        case 't':
            size = pfSize::PDiff;
            break;
        case 'z':
            size = pfSize::Size;
            break;
        default:
            size = pfSize::Default;
            return 0;
    }
    return 1;
}

std::size_t PrintStream::pfParseType(const char *str, pfType &type) {
    switch (*str) {
        case 'c':
            type = pfType::Char;
            break;
        case 'C':
            type = pfType::WideChar;
            break;
        case 'd':
        case 'i':
            type = pfType::SignedDec;
            break;
        case 'o':
            type = pfType::UnsignedOct;
            break;
        case 'u':
            type = pfType::UnsignedDec;
            break;
        case 'x':
            type = pfType::UnsignedHexLower;
            break;
        case 'X':
            type = pfType::UnsignedHexUpper;
            break;
        case 'e':
            type = pfType::FloatSciLower;
            break;
        case 'E':
            type = pfType::FloatSciUpper;
            break;
        case 'f':
            type = pfType::FloatLower;
            break;
        case 'F':
            type = pfType::FloatUpper;
            break;
        case 'g':
            type = pfType::FloatAutoLower;
            break;
        case 'G':
            type = pfType::FloatAutoUpper;
            break;
        case 'a':
            type = pfType::FloatHexLower;
            break;
        case 'A':
            type = pfType::FloatHexUpper;
            break;
        case 'n':
            type = pfType::CountingPointer;
            break;
        case 'p':
            type = pfType::Pointer;
            break;
        case 's':
            type = pfType::String;
            break;
        case 'S':
            type = pfType::WideString;
            break;
        default:
            type = pfType::Unknown;
            return 0;
    }
    return 1;
}

std::size_t PrintStream::pfParsePrintOpinion(const char *str, pfPrintOpinion &opinion) {
    size_t len = 0;
    len += pfParseOpinion(str + len, opinion.opinion);
    len += pfParseWidth(str + len, opinion.width);
    len += pfParsePrecision(str + len, opinion.precision);
    len += pfParseSize(str + len, opinion.size);
    len += pfParseType(str + len, opinion.type);
    return len;
}

std::size_t PrintStream::printfPrint(pfPrintOpinion &opinion) {
    bool uppercase = opinion.type == pfType::FloatAutoUpper ||
                     opinion.type == pfType::FloatHexUpper ||
                     opinion.type == pfType::FloatSciUpper ||
                     opinion.type == pfType::FloatAutoUpper ||
                     opinion.type == pfType::UnsignedHexUpper;
    Align align = (opinion.opinion & (std::uint8_t)pfOpinion::LeftAlign) ? Align::Left : Align::Right;
    Fill fill = (opinion.opinion & (std::uint8_t)pfOpinion::FillZero) ? Fill::Zero : Fill::Space;
    bool displaySign = (opinion.opinion & (std::uint8_t)pfOpinion::DisplaySign) ? true : false;
    bool spaceForSign = (opinion.opinion & (std::uint8_t)pfOpinion::SpaceForSign) ? true : false;
    bool extraSign = (opinion.opinion & (std::uint8_t)pfOpinion::ExtraSign) ? true : false;
    std::uint8_t base;
    switch (opinion.type) {
        case pfType::FloatHexLower:
        case pfType::FloatHexUpper:
        case pfType::UnsignedHexLower:
        case pfType::UnsignedHexUpper:
            base = 16;
            break;
        case pfType::UnsignedOct:
            base = 8;
            break;
        default:
            base = 10;
            break;
    }

    switch (opinion.type) {
        case pfType::Char: {
            
        } break;

        case pfType::WideChar: {
            
        } break;

        case pfType::String:{

        }break;

        case pfType::WideString:{

        }break;

        case pfType::FloatAutoLower:
        case pfType::FloatAutoUpper: {

        } break;

        case pfType::FloatHexLower:
        case pfType::FloatHexUpper: {

        } break;

        case pfType::FloatLower:
        case pfType::FloatUpper: {

        } break;

        case pfType::FloatSciLower:
        case pfType::FloatSciUpper: {

        } break;

        case pfType::Pointer: {
            return printInteger((std::uintptr_t)va_arg(opinion.args, void *), 16, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
        } break;

        case pfType::UnsignedDec:
        case pfType::UnsignedHexLower:
        case pfType::UnsignedHexUpper:
        case pfType::UnsignedOct: {
            switch (opinion.size) {
                case pfSize::Default:
                    return printInteger(va_arg(opinion.args, unsigned int), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Long:
                    return printInteger(va_arg(opinion.args, unsigned long), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Longest:
                    return printInteger(va_arg(opinion.args, unsigned long long), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Max:
                    return printInteger(va_arg(opinion.args, std::uintmax_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::PDiff:
                    return printInteger(va_arg(opinion.args, std::ptrdiff_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Short:
                    return printInteger(va_arg(opinion.args, unsigned short), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Shortest:
                    return printInteger(va_arg(opinion.args, unsigned char), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Size:
                    return printInteger(va_arg(opinion.args, std::size_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
            }
        } break;

        case pfType::SignedDec: {
            switch (opinion.size) {
                case pfSize::Default:
                    return printInteger(va_arg(opinion.args, int), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Long:
                    return printInteger(va_arg(opinion.args, long), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Longest:
                    return printInteger(va_arg(opinion.args, long long), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Max:
                    return printInteger(va_arg(opinion.args, std::intmax_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::PDiff:
                    return printInteger(va_arg(opinion.args, std::ptrdiff_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Short:
                    return printInteger(va_arg(opinion.args, short), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Shortest:
                    return printInteger(va_arg(opinion.args, char), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
                case pfSize::Size:
                    return printInteger(va_arg(opinion.args, std::size_t), base, opinion.width, align, fill, displaySign, spaceForSign, extraSign, uppercase);
            }
        } break;

    }
}

std::size_t PrintStream::vprintf(const char *format, std::va_list args) {
    size_t len = 0;
    while (*format) {
        if (*format != '%') {
            write(*format);
            len++;
            format++;
        } else {
            format++;
            if (*(format + 1) == '%') {
                write('%');
                len++;
                format++;
            } else {
                pfPrintOpinion opinion;
                format += pfParsePrintOpinion(format, opinion);
                int tmp;
                if (opinion.width == -2) {
                    tmp = va_arg(args, int);
                    if (tmp <= 0)
                        opinion.width = tmp;
                    else
                        opinion.width = -1;
                }
                if (opinion.precision == -2) {
                    tmp = va_arg(args, int);
                    if (tmp <= 0)
                        opinion.precision = tmp;
                    else
                        opinion.precision = -1;
                }
                if (opinion.type == pfType::CountingPointer)
                    *va_arg(args, int *) = len;
                else
                    len += printfPrint(opinion);
            }
        }
    }
}

std::size_t PrintStream::printf(const char *format, ...) {
    va_list args;
    va_start(format, args);
    vprintf(format, args);
    va_end(args);
}

} // namespace ExLib