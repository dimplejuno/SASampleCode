
void setup() {
  Serial.begin(9600);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, OUTPUT);

}

void loop() {
  int sensorVal = digitalRead(3);
  Serial.println(sensorVal);

  if (sensorVal == HIGH) {
    digitalWrite(13, LOW);
  } else {
    digitalWrite(13, HIGH);
  }
}
