/*
int red = 13;
int yellow = 12;
int green = 11;
void setup() {
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue < 1024 / 3) {
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green, LOW);
  } else if (sensorValue > 1024 / 3 && sensorValue < (1024 * 2) / 3) {
    digitalWrite(red, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, LOW);
  } else if (sensorValue > (1024 * 2) / 3) {
    digitalWrite(red, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
  }
}
*/
/*
void setup() {
  Serial.begin(9600);
  for (int i = 13; i >= 6; i--) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  sensorValue = map(sensorValue, 0, 1023, 0, 4);
  for (int i = 13; i >= 6; i--) {
    digitalWrite(i, LOW);
  }
  for (int i = 13; i >= (13 - sensorValue); i--) {
    digitalWrite(i, HIGH);
  }

  delay(1);
}
*/
void setup() {
  Serial.begin(9600);
  for (int i = 13; i >= 6; i--) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  sensorValue = map(sensorValue, 0, 1023, 0, 4);
  for (int i = 13; i >= 6; i--) {
    digitalWrite(i, LOW);
  }
  for (int i = 10; i < (10 + sensorValue); i++) {
    digitalWrite(i, HIGH);
  }

  for (int i = 9; i > (9 - sensorValue); i--) {
    digitalWrite(i, HIGH);
  }
  delay(1);
}


