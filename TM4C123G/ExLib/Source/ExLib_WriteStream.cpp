#include "ExLib_WriteStream.hpp"

namespace ExLib {

std::size_t WriteStream::write(const char *buf, std::size_t len) {
    std::size_t acturalWrite = 0;
    while (len > 0 && write(*buf) != false) {
        buf++;
        len--;
        acturalWrite++;
    }
    return acturalWrite;
}

std::size_t WriteStream::writeUntil(const char *buf, char endChar) {
    std::size_t acturalWrite = 0;
    while (*buf != endChar && write(*buf) != false) {
        buf++;
        acturalWrite++;
    }
    return acturalWrite;
}

} // namespace ExLib