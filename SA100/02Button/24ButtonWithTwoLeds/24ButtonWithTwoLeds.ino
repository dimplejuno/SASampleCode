
const int buttonPin = 2;     
const int ledPin =  13;      

// 버튼이 안눌렸을때는 12번핀의 노랑색이 켜지고 누르면 13번 빨강색이 켜지도록 
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
