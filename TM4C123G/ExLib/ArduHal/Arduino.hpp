#pragma once
namespace Arduino {
#include <inttypes.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "HardwareSerial.hpp"

constexpr auto PI = 3.1415926535897932384626433832795;
constexpr auto HALF_PI = 1.5707963267948966192313216916398;
constexpr auto TWO_PI = 6.283185307179586476925286766559;
constexpr auto DEG_TO_RAD = 0.017453292519943295769236907684886;
constexpr auto RAD_TO_DEG = 57.295779513082320876798154814105;
constexpr auto EULER = 2.718281828459045235360287471352;

constexpr auto SERIAL = 0x0;
constexpr auto DISPLAY = 0x1;

constexpr auto LSBFIRST = 0;
constexpr auto MSBFIRST = 1;

// Interrupt Modes
constexpr auto RISING = 0x01;
constexpr auto FALLING = 0x02;
constexpr auto CHANGE = 0x03;
constexpr auto ONLOW = 0x04;
constexpr auto ONHIGH = 0x05;
constexpr auto ONLOW_WE = 0x0C;
constexpr auto ONHIGH_WE = 0x0D;

constexpr auto DEFAULT = 1;
constexpr auto EXTERNAL = 0;

void sei();
void cli();
void interrupts();
void noInterrupts();

} // namespace Arduino