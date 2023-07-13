#include "ExLib_ReadStream.hpp"

namespace ExLib{


std::size_t ReadStream::read(char *buf, std::size_t len) {
    std::size_t readCount = 0;
    while(read(buf[readCount])!=false && len != 0){
        readCount++;
        len--;
    }
    return readCount;
}

std::size_t ReadStream::readUntil(char *buf, char endChar) {
    std::size_t readCount = 0;
    while(read(buf[readCount])!=false && buf[readCount]!=endChar){
        readCount++;
    }
    return readCount;
}
}