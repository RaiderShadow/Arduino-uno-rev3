const int ledPins[] = {13, 12, 11, 10};
const int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }

  for (int i = numLEDs - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], HIGH);
    delay(200);
    digitalWrite(ledPins[i], LOW);
  }

  for (int j = 0; j < 2; j++) {
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
    delay(200);
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], LOW);
    }
    delay(200);
  }
}
