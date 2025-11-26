#ifndef QLEARNING
#define QLEARNING

#include "knowledge.hpp"

class QLearning{
public:
    QLearning(){

    }

    uint8_t quantitize(float value, const float* bins);

    State identifyState(float hDistance, float vDistance);

    Action act(State state);
};

#endif