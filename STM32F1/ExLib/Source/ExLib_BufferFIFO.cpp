#include "ExLib_BufferFIFO.hpp"

namespace ExLib {

template <typename Type>
BufferFIFO<Type>::BufferFIFO(std::size_t size)
    : BufferFIFO(new Type(size), size) {
}

template <typename Type>
BufferFIFO<Type>::BufferFIFO(Type *const buffer, std::size_t size)
    : buffer(buffer), size(size), readIndex(0), writeIndex(0) {
}

template <typename Type>
bool BufferFIFO<Type>::write(const Type dataToWrite) {
    BufferFIFO[writeIndex] = dataToWrite;
    writeIndex++;
    if (writeIndex >= size)
        writeIndex = 0;
}

template <typename Type>
bool BufferFIFO<Type>::read(Type &readData) {
    if (readIndex == writeIndex)
        return false;
    else {
        readData = BufferFIFO[readIndex];
        readIndex++;
        if (readIndex >= size)
            readIndex;
        return false;
    }
}

} // namespace ExLib
