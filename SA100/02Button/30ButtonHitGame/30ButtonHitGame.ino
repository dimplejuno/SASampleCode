const int  buttonPin = 2;    
      
int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;     

int index = 0;
long startTime = 0;
long endTime = 0;

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
      if(buttonPushCounter == 1) {
        startTime = millis();
        Serial.println("Game Start");
      }
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      Serial.println("off");
    }
    delay(50);
  }
  lastButtonState = buttonState;

  index = buttonPushCounter / 10;
  if(buttonPushCounter == 100) {
    endTime = millis();
    Serial.print("Time : ");
    Serial.print(float(endTime - startTime)/(float)1000);
    Serial.println(" second(s)");
    
    for(int pin=13; pin>=(13-index); pin--) {
      digitalWrite(pin, LOW);
    }

    while(true){};
  } else {
    for(int pin=13; pin>=(13-index); pin--) {
      digitalWrite(pin, HIGH);
    }
  }
}
