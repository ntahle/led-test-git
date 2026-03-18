#include <Arduino.h>

void setup() {
  // Initialize pins 2-7 as outputs
  for (int pin = 2; pin <= 7; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Turn all LEDs on
  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, HIGH);
  }
  delay(500);
  
  // Turn all LEDs off
  for (int pin = 2; pin <= 7; pin++) {
    digitalWrite(pin, LOW);
  }
  delay(500);
}
