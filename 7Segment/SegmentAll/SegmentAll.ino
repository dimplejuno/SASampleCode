void turnOffAll() {
  for(int i=2; i<10; i++) {
    digitalWrite(i, HIGH);
  }
}

void turnOnAll() {
  for(int i=2; i<10; i++) {
    digitalWrite(i, LOW);
  }
}

void zero() {
  int nums[] = {0,0,0,0,0,0,1,1};
  for(int i=2; i<10; i++) {
    digitalWrite(i, nums[i-2]);
  }
}

void setup() {
  for(int i=2; i<10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
