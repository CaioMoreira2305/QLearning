#include <Arduino.h>
#include "q_learning.hpp"


QLearning ia;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // lógica de jogo
  State state = ia.identifyState(0, 0);
  Action action = ia.act(state);
  // aplica ação
}
