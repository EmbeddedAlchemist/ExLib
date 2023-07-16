#pragma once

#include "ExLib_PrintStream.hpp"

namespace ExLib {

class System {
  private:
    friend class ExLib_Exception;
    static PrintStream *debugStream;

  public:
    static void init(void);
    static void setDebugStream(PrintStream &dbgStream);
    static void printExLibLOGO(void);
};
} // namespace ExLib