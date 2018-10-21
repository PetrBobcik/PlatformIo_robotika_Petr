#include "LearningKit.h"

void setup() {
    pinMode(L_G, OUTPUT);
}

void loop() {
    digitalWrite(L_G, HIGH);
    delay(500);
    digitalWrite(L_G, LOW);
    delay(500);
}