
#include "ExLib_Units.hpp"
#include <limits>

namespace ExLib {
TimeInterval TimeInterval::operator+(TimeInterval other) {
    return TimeInterval(us + other.us);
}
TimeInterval TimeInterval::operator-(TimeInterval other) {
    return TimeInterval(us - other.us);
}
TimeInterval::TimeInterval(std::uint32_t us)
    : us(us) {
}
TimeInterval operator""_s(unsigned long long s) {
    return TimeInterval(s * 1000 * 1000);
}
TimeInterval operator""_ms(unsigned long long ms) {
    return TimeInterval(ms * 1000);
}
TimeInterval operator""_us(unsigned long long us) {
    return TimeInterval(us);
}

Precent operator"" _pct(long double pct) {
    struct Precent ret;
    unsigned long long t;
    if (pct <= 0)
        t = 0;
    else if (pct >= 100)
        t = std::numeric_limits<std::uint32_t>::max();
    else {
        t = std::numeric_limits<std::uint32_t>::max();
        t = t * pct / 100;
    }
    ret.pct = t;
    return ret;
}

Precent operator"" _pct(unsigned long long pct) {
    struct Precent ret;
    unsigned long long t;
    if (pct <= 0)
        t = 0;
    else if (pct >= 100)
        t = std::numeric_limits<std::uint32_t>::max();
    else {
        t = std::numeric_limits<std::uint32_t>::max();
        t = t * pct / 100;
    }
    ret.pct = t;
    return ret;
}

Precent::Precent(float _pct) {
    pct = (float)std::numeric_limits<std::uint32_t>::max() * _pct;
}

} // namespace ExLib
