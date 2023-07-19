#pragma once

#include "ExLib_CallbackFunction.hpp"

namespace ExLib {

class Capturer {
  public:
    void registerCaptureChannel();
};

class Capture_Channel {
  private:
    CallbackFunction *callback;

  public:
};
} // namespace ExLib