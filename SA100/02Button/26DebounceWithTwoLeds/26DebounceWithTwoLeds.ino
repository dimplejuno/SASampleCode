const int buttonPin = 2;    
const int ledPin1 = 13;   
const int ledPin2 = 12;    

int ledState1 = HIGH;  
int ledState2 = LOW;        
int buttonState;             
int lastButtonState = LOW;   
unsigned long lastDebounceTime = 0;  
unsigned long debounceDelay = 50;    

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  digitalWrite(ledPin1, ledState1);
  digitalWrite(ledPin2, ledState2);
}

void loop() {
  int reading = digitalRead(buttonPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    
    if (reading != buttonState) {
      buttonState = reading;
      if (buttonState == HIGH) {
        ledState1 = !ledState1;
        ledState2 = !ledState2;
      }
    }
  }

  digitalWrite(ledPin1, ledState1);
  digitalWrite(ledPin2, ledState2);
  lastButtonState = reading;
}
