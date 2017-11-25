void turnOffAll() {
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, HIGH);
  }
}

void zero() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

  int pins[] = {0,0,0,0,0,0,1,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void one() {
  
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  int pins[] = {1,0,0,1,1,1,1,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void two() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {0,0,1,0,0,1,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void three() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {0,0,0,0,1,1,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void four() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {1,0,0,1,1,0,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void five() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {0,1,0,0,1,0,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void six() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {1,1,0,0,0,0,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void seven() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  int pins[] = {0,0,0,1,1,1,1,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void eight() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {0,0,0,0,0,0,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}

void nine() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  int pins[] = {0,0,0,1,1,0,0,1};
  for(int pin=2;pin<10;pin++) {
    digitalWrite(pin, pins[pin-2]);
  }
}


void setup() {
  for(int pin=2;pin<10;pin++) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
  three();
  delay(1000);
  four();
  delay(1000);
  five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
}
