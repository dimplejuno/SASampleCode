void setup() {
  Serial.begin(9600);
  
  int sum = 0;
  for(int i=0; i<=100; i++) {
    sum = sum + i;
  }
  
  Serial.print("Sum = ");
  Serial.println(sum);
  
}

void loop() {

}
