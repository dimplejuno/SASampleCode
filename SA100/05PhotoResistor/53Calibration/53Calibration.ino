
const int sensorPin = A1;    
const int ledPin = 9;        

// variables:
int sensorValue = 0;         
int sensorMin = 1023;        
int sensorMax = 0;           


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  
  while (millis() < 5000) {
    sensorValue = analogRead(sensorPin);

    if (sensorValue > sensorMax) {
      sensorMax = sensorValue;
    }

    if (sensorValue < sensorMin) {
      sensorMin = sensorValue;
    }
  }

  Serial.print("min : ");
  Serial.print(sensorMin);
  Serial.print(", Max : ");
  Serial.println(sensorMax);
  digitalWrite(13, LOW);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  sensorValue = map(sensorValue, sensorMin, sensorMax, 0, 255);

  sensorValue = constrain(sensorValue, 0, 255);
  analogWrite(ledPin, sensorValue);
}
