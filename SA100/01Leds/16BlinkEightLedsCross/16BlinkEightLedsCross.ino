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
  for (int pin = 13; pin >= 6; pin--) {
    digitalWrite(pin, HIGH);
    digitalWrite(19-pin, HIGH);
    delay(100);
    turnOffAll();
    delay(100);
  }
  
}
