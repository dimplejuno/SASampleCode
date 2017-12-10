
const int buttonPin = 2;     
const int ledPin =  13;      

// 안누를때 켜져있고 누르면 꺼지게 
int buttonState = 0;         

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
