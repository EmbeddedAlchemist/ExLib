#include "ExLib_ReadStreamBuffered.hpp"

namespace ExLib {
ReadStreamBuffered::ReadStreamBuffered(BufferFIFO<char> &buffer)
    : buffer(buffer) {
}
bool ReadStreamBuffered::read(char &ch) {
    return true; // buffer.read(ch);
}
bool ReadStreamBuffered::peek(char &ch) {
    return false;
}
std::size_t ReadStreamBuffered::avaliableForRead(void) {
    return buffer.avaliable();
}
} // namespace ExLib