#pragma once

#include <stdint.h>

namespace ExLib {

// TimeInterval

struct TimeInterval {
  public:
    std::uint32_t us;

    TimeInterval operator+(TimeInterval);
    TimeInterval operator-(TimeInterval);
    explicit TimeInterval(std::uint32_t us);
    TimeInterval(void) = delete;
};

TimeInterval operator"" _s(unsigned long long s);
TimeInterval operator"" _ms(unsigned long long ms);
TimeInterval operator"" _us(unsigned long long us);

// Precent

/**
 * @brief 百分数结构体，用32位整数表示一个0至1的值
 * 
 */
struct Precent {
  public:
    std::uint32_t pct;
    Precent operator+(Precent);
    Precent operator-(Precent);
    Precent() = default;
    Precent(float pct);

    /**
     * @brief 计算一个数值与该百分数的乘积
     * 
     * @tparam Number 
     * @param number 
     * @return Number 
     */
    template <typename Number>
    Number compute(Number number);
};

Precent operator"" _pct(long double pct);
Precent operator"" _pct(unsigned long long pct);

template <typename Number>
Number Precent::compute(Number number) {
    std::int64_t result = number; // 扩展到64位以免溢出
    return result * pct / 0xFFFFFFFF;
}




struct Frequency{
  public:
    std::uint32_t hz;
};

Frequency operator"" _Hz(unsigned long long hz);
Frequency operator"" _kHz(unsigned long long kHz);
Frequency operator"" _MHz(unsigned long long MHz);

} // namespace ExLib