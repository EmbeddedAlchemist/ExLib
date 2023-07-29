#include "ExLib_Log.hpp"

void ExLib::Logger::system(const char *format, ...) {
    System::_debugStream->print(format);
}

bool ExLib::Logger::write(char ch) {
    return System::_debugStream->write(ch);
}
