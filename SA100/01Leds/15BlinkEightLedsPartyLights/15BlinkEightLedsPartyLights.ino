void turnOnAll() {
  for (int pin = 13; pin >= 6; pin--) {
    digitalWrite(pin, HIGH);
  }
}

void turnOffAll() {
  for (int pin = 13; pin >= 6; pin--) {
    digitalWrite(pin, LOW);
  }
}

void turnOnPin(int pin) {
  turnOffAll();
  digitalWrite(pin, HIGH);
}

void setup() {
  for (int pin = 13; pin >= 6; pin--) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
    turnOnPin(random(6, 14));
    delay(50);
}
