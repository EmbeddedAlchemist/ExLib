#include "ExLib_ReadStreamBuffered.hpp"

namespace ExLib {
ReadStreamBuffered::ReadStreamBuffered(BufferFIFO<char> &buffer)
    : buffer(buffer) {
}
bool ReadStreamBuffered::read(char &ch) {
    return buffer.read(ch);
}
bool ReadStreamBuffered::peek(char &ch) {
    return false;
}
} // namespace ExLib