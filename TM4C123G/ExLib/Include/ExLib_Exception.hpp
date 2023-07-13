#pragma once

#include <stdint.h>
namespace ExLib {	
class ExLib_Exception {
  public:
    static const char *lastExceptionMessage;
    static void raiseException(const char *message);
    static void raiseHardFault();
};
} // namespace ExLib
