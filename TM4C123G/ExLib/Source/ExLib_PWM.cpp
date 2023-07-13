#include "ExLib_PWM.hpp"

namespace ExLib {
PWM_Channel::PWM_Channel(PWM_Generator &generator, std::uint32_t channel, GPIO_Pin pinName)
    : generator(generator), channel(channel) {
    generator.registerChannel(channel, pinName);
}
void PWM_Channel::setDuty(Precent duty) {
    generator.setDuty(channel, duty);
}
void PWM_Channel::_setCycle(TimeInterval cycle) {
    generator.setCycle(cycle);
}
} // namespace ExLib