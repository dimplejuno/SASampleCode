const int  buttonPin = 2;    
      
int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT);
  for(int pin=13; pin>=6; pin--) {
      pinMode(pin, OUTPUT);
  }
  Serial.begin(9600);
}


void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState != lastButtonState) {
    if (buttonState == HIGH) {
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;

  for(int pin=13; pin>=(13 - buttonPushCounter/10); pin--) {
    
    if(buttonPushCounter < 80) {
      digitalWrite(pin, HIGH);
    } else {
      buttonPushCounter = 0;
      for(int pin=6;pin<14;pin++){
        digitalWrite(pin, LOW);
      }
    }
    
  }
}
