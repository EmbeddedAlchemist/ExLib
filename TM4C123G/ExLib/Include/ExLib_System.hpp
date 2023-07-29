#pragma once

#include "ExLib_PrintStream.hpp"
#include "ExLib_Log.hpp"
#include "ExLib_Units.hpp"
#include <stdarg.h>

namespace ExLib {

class System{
  private:
    friend class Exception;
    friend class Logger;
    static PrintStream *_debugStream;
    static void log(const char *fmt, std::va_list args);

  public:
    static void init(void);
    static void setDebugStream(PrintStream &dbgStream);
    static void printExLibLOGO(void);
    static std::uint32_t getSystemClockSpeed(void);

    static std::uint32_t getMilliseconds(void);
    static std::uint32_t getMicroseconds(void);

    static void delay(TimeInterval interval);

    static void log_e(const char *fmt, ...);
    static void log_w(const char *fmt, ...);
    static void log_i(const char *fmt, ...);
    static void log_d(const char *fmt, ...);
    static void log_v(const char *fmt, ...);
};
} // namespace ExLib