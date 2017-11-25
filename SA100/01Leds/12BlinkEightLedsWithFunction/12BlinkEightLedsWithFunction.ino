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

void setup() {
  for (int pin = 13; pin >= 6; pin--) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  turnOnAll();
  delay(1000);
  turnOffAll();
  delay(1000);
}
