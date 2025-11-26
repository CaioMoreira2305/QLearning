#include "q_learning.hpp"

uint8_t QLearning::quantitize(float value, const float* bins){
    return 0;
}

State QLearning::identifyState(float hDistance, float vDistance){
    uint8_t hDistBin = quantitize(hDistance, quantizationshDist);
    uint8_t vDistBin = quantitize(vDistance, quantizationsvDist);
    const uint8_t lenQuantization = 6;
    return (State) (vDistBin + (hDistBin * lenQuantization) + 1);
}


Action QLearning::act(State state){
    return static_cast<Action>(state_action[state]);
}
    