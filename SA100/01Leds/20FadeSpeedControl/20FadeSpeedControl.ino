
int led1 = 9;  
int led2 = 10;          
int brightness = 0;    
int fadeAmount = 5;    

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // 연습문제 : 페이드 속도 조절하기 
  analogWrite(led1, brightness);
  analogWrite(led2, brightness);
  brightness = brightness + fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
}
