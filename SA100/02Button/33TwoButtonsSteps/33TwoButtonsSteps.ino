// 두개의 버튼으로 단계 표시 0:빨강 1:노랑까지 2:초록까지 3:파랑까지
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
