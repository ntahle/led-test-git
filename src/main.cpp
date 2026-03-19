#include <Arduino.h>

void setup() {
  // Initialize pins 2-8 as outputs
  for (int pin = 2; pin <= 8; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // Turn all LEDs on
  for (int repeat = 0; repeat < 5; repeat++) { // Repeat the pattern 5 times
    for (int pin = 2; pin <= 7; pin++) {
      digitalWrite(pin, HIGH);
    }
    tone(8, 1000); // Play a tone on pin 8
    delay(500);
    
    // Turn all LEDs off
    for (int pin = 2; pin <= 7; pin++) {
      digitalWrite(pin, LOW);
    }
    noTone(8); // Stop the tone on pin 8
    delay(500);
  }
}
