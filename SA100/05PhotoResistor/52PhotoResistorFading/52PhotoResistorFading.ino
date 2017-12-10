int led = 9;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A1);
  Serial.println(sensorValue);
  int brightness = map(sensorValue, 100, 600, 0, 255);
  analogWrite(led, brightness);
  delay(1);        
}
