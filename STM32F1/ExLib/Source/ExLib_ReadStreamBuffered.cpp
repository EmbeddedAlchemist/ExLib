#include "ExLib_ReadStreamBuffered.hpp"

namespace ExLib {
ReadStreamBuffered::ReadStreamBuffered(BufferFIFO<char> &buffer)
    : buffer(buffer) {
}
} // namespace ExLib