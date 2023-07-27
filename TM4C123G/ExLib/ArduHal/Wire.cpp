#include "Wire.h"

void TwoWire::begin() {
    begin(0x00);
}

void TwoWire::begin(uint8_t address) {
    exI2C->begin(freq, address);
}

void TwoWire::end() {
    exI2C->end();
}

void TwoWire::setClock(uint32_t clock) {
    freq = ExLib::Frequency(clock);
    exI2C->setFrequency(freq);
}

void TwoWire::beginTransmission(uint8_t address) {
    exI2C->beginTransmission(address);
}

uint8_t TwoWire::endTransmission(bool stopBit) {
    return endTransmission();
}

uint8_t TwoWire::endTransmission(void) {
    exI2C->endTransmission();
    return 0;
}

size_t TwoWire::requestFrom(uint8_t address, size_t len, bool stopBit) {
    char ch;
    rxBufferLength = 0;
    exI2C->beginTransmission(address);
    while(len){
        if(exI2C->read(ch)==false)
            break;
        rxBuffer[rxBufferLength] = ch;
        rxBufferLength++;
        len--;
    }
    rxBufferIndex = 0;
    return rxBufferLength;
}

size_t TwoWire::requestFrom(uint8_t address, size_t len) {
    return requestFrom(address, len, true);
}

void TwoWire::onReceive(void (*)(int)) {
}

void TwoWire::onRequest(void (*)(void)) {
}

size_t TwoWire::write(uint8_t ch) {
    return exI2C->write(ch);
}

size_t TwoWire::write(const uint8_t *buf, size_t size) {
    return exI2C->write((const char *)buf, size);
}

int TwoWire::available(void) {
    return rxBufferLength - rxBufferIndex;
}

int TwoWire::read(void) {
    int value = -1;
    // get each successive byte on each call
    if (rxBufferIndex < rxBufferLength) {
        value = rxBuffer[rxBufferIndex];
        ++rxBufferIndex;
    }
    return value;
}

int TwoWire::peek(void) {
    int value = -1;

    if (rxBufferIndex < rxBufferLength) {
        value = rxBuffer[rxBufferIndex];
    }

    return value;
}
