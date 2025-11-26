#ifndef KNNOWLEDGE
#define KNNOWLEDGE

#include <cstdint>

enum State {

};

enum Action {
    NOP,
    JUMP,
};



static const uint8_t state_action[] = {
    0,
    1,
    1,
    0
};

static const float quantizationsvDist[] = {-.15, -.05, 0, .05, .15, .3};
static const float quantizationshDist[] = {.2};


#endif