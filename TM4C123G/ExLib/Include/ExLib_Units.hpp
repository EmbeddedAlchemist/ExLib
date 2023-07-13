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
  private:
    std::uint32_t pct;

  public:
    Precent operator+(Precent);
    Precent operator-(Precent);
    Precent(float pct);
    Precent(void) = delete;

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




struct Frequency{
  public:
    std::uint32_t hz;
};

Frequency operator"" _Hz(unsigned long long hz);
Frequency operator"" _kHz(unsigned long long kHz);
Frequency operator"" _MHz(unsigned long long MHz);

} // namespace ExLib