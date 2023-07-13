#pragma once
namespace Arduino
{
#include <stdbool.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <inttypes.h>

    constexpr auto PI         = 3.1415926535897932384626433832795;
    constexpr auto HALF_PI    = 1.5707963267948966192313216916398;
    constexpr auto TWO_PI     = 6.283185307179586476925286766559;
constexpr auto DEG_TO_RAD = 0.017453292519943295769236907684886;
    constexpr auto RAD_TO_DEG = 57.295779513082320876798154814105;
    constexpr auto EULER      = 2.718281828459045235360287471352;

#define SERIAL   0x0
#define DISPLAY  0x1

#define LSBFIRST 0
#define MSBFIRST 1

// Interrupt Modes
#define RISING    0x01
#define FALLING   0x02
#define CHANGE    0x03
#define ONLOW     0x04
#define ONHIGH    0x05
#define ONLOW_WE  0x0C
#define ONHIGH_WE 0x0D

#define DEFAULT   1
#define EXTERNAL  0

void sei();
void cli();
void interrupts();
void noInterrupts();

}