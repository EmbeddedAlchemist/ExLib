#include "ExLib_PrintStream.hpp"
#include "ExLib_Printable.hpp"
#include "ctype.h"

#include "Util_FormattedPrint.hpp"

char ExLib::PrintStream::getNumberCharInBase(std::uint8_t number, std::uint8_t base) {
    if (number < 10)
        return number + '0';
    else if (number >= 10 && number < 36)
        return number + 'A'-10;
    else
        return '?';
}
