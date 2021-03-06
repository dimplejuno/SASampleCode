
int led1 = 9;  
int led2 = 10;          
int brightness = 0;    
int fadeAmount = 5;    

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
