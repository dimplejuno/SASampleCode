
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  digitalWrite(13, HIGH);
  delay(sensorValue);        
  digitalWrite(13, LOW);
  delay(sensorValue);
}
