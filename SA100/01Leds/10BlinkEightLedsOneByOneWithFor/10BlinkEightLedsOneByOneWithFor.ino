void setup() {
  for(int pin=13; pin>=6; pin--) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  
  for(int pin=13; pin>=6; pin--) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
  }

  for(int pin=6; pin<=13; pin++) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
  }
  
}
