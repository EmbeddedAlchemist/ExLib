
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

template <typename Number>
Number Precent::compute(Number number) {
    std::int64_t result = number; // 扩展到64位以免溢出
    return result * pct / std::numeric_limits<std::uint32_t>::max();
}

Precent operator"" _pct(long double pct) {
	return 0;
}

Precent operator"" _pct(unsigned long long pct) {
	return 0;
}

Precent::Precent(float _pct) {
    pct = (float)std::numeric_limits<std::uint32_t>::max() * _pct;
}

} // namespace ExLib
