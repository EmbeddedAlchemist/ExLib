#pragma once

#include <stdint.h>
namespace ExLib {	
class ExLib_Exception {
  private:
    friend class System;
    static void hardFaultHandler();
  public:
    static const char *lastExceptionMessage;
    static void raiseException(const char *message);
    static void raiseHardFault();
};
} // namespace ExLib
