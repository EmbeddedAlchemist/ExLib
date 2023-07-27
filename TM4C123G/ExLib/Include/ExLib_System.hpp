#pragma once

#include "ExLib_PrintStream.hpp"
#include "ExLib_Log.hpp"
#include "ExLib_Units.hpp"

namespace ExLib {

class System{
  private:
    friend class Exception;
    friend class Logger;
    static PrintStream *debugStream;

  public:
    static void init(void);
    static void setDebugStream(PrintStream &dbgStream);
    static void printExLibLOGO(void);
    static std::uint32_t getSystemClockSpeed(void);

    static std::uint32_t getMilliseconds(void);
    static std::uint32_t getMicroseconds(void);

    static void delay(TimeInterval interval);
};
} // namespace ExLib