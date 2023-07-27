#include "HardwareSerial.h"



void arduino::HardwareSerial::begin(unsigned long baud, uint16_t config) {
    exUART->begin();
}

void arduino::HardwareSerial::end() {
    exUART->end();
}

void arduino::HardwareSerial::begin(unsigned long baud) {
    begin(baud, SERIAL_8N1);
}

int arduino::HardwareSerial::available(void) {
    return exUART->avaliableForRead();
}

int arduino::HardwareSerial::peek(void) {
   char ch;
   if(exUART->peek(ch) !=false){
       return ch;
   }
   else
       return 0;
}

int arduino::HardwareSerial::read(void) {
   return exUART->read();
}


void arduino::HardwareSerial::flush(void) {
   return;
}

size_t arduino::HardwareSerial::write(uint8_t ch) {
   return exUART->write(ch);
}

arduino::HardwareSerial::operator bool() {
   return (bool)available();
}
