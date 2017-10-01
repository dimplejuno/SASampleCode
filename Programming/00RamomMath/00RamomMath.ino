long math = 0;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  Serial.print("My math avg is ");
  for(int i=1; i<259; i++) {
    //math = math + random(101);
    math = math + i;
  }
  Serial.println(math);
}

void loop() {
}
