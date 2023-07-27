
#pragma once
#include "ExLib_PrintStream.hpp"
#include "ExLib_System.hpp"

namespace ExLib {
class Logger : public PrintStream {
    public:
      static void system(const char *format, ...);
      static void e(const char *format, ...);
      static void w(const char *format, ...);
      static void i(const char *format, ...);
      static void d(const char *format, ...);
      static void v(const char *format, ...);

     virtual bool write(char ch);
};

}
