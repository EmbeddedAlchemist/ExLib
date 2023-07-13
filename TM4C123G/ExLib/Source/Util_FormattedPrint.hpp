#pragma once

#include "ExLib_WriteStream.hpp"
#include <stdarg.h>
#include <stdint.h>

namespace ExLib {
std::size_t formattedPrint(WriteStream &stream, const char *format, std::va_list args);
}
