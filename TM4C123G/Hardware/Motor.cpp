#include "Motor.hpp"

using namespace ExLib;

Motor::Motor(ExLib::PWM_Channel &channelA, ExLib::PWM_Channel &channelB)
    : channelA(channelA), channelB(channelB) {
}

void Motor::brake(void) {
    channelA.setDuty(0_pct);
    channelB.setDuty(0_pct);
}

void Motor::run(float power) {
    if(power > 0){
        channelA.setDuty(power);
        channelB.setDuty(0_pct);
    }
    else{
        channelA.setDuty(0_pct);
        channelB.setDuty(-power);
    }
}
