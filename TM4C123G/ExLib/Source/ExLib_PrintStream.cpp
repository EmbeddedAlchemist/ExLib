#include "ExLib_PrintStream.hpp"
#include "ExLib_Printable.hpp"

#include "Util_FormattedPrint.hpp"

#include <stdarg.h>
#include <stdio.h>


//防止编译器报错
// #ifndef __builtin_va_start
// #define __builtin_va_start
// #endif
// #ifndef __builtin_va_copy
// #define __builtin_va_copy
// #endif
// #ifndef __builtin_va_end
// #define __builtin_va_end
// #endif


char ExLib::PrintStream::getNumberCharInBase(std::uint8_t number, std::uint8_t base) {
    if (number < 10)
        return number + '0';
    else if (number >= 10 && number < 36)
        return number + 'A'-10;
    else
        return '?';
}

std::size_t ExLib::PrintStream::vprintf(const char *format, std::va_list arg) {
    char loc_buf[64];
    char * temp = loc_buf;
    //va_list arg;
    va_list copy;
    //va_start(arg, format);
    va_copy(copy, arg);
    int len = vsnprintf(temp, sizeof(loc_buf), format, copy);
    va_end(copy);
    if(len < 0) {
        va_end(arg);
        return 0;
    }
    if(len >= (int)sizeof(loc_buf)){  // comparation of same sign type for the compiler
        temp = new char[len+1];
        if(temp == NULL) {
            //va_end(arg);
            return 0;
        }
        len = vsnprintf(temp, len+1, format, arg);
    }
    //va_end(arg);
    len = write(temp, len);
    if(temp != loc_buf){
        delete temp;
    }
    return len;
}

std::size_t ExLib::PrintStream::printf(const char *format, ...) {
    va_list arg;
    std::size_t len = 0;
    va_start(arg, format);
    len = vprintf(format, arg);
    va_end(arg);
    return len;
}
