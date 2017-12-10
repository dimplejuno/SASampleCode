void setup() {
  for(int pin=13; pin>=6; pin--) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // 하나씩 차례대로..?
  for(int pin=13; pin>=6; pin--) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
    delay(100);
  }
}
