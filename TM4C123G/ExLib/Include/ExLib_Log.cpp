#include "ExLib_Log.hpp"

void ExLib::Logger::system(const char *format, ...) {
    System::debugStream->print(format);
}

bool ExLib::Logger::write(char ch) {
    return System::debugStream->write(ch);
}
