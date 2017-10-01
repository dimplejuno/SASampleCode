int test[100];
int sum = 0;
int avg = 0;
void setup() {
  Serial.begin(9600);
  for(int i=0; i<100; i++){
    test[i] = random(101);
    Serial.print("["); 
    Serial.print(i);
    Serial.print("] = ");
    Serial.println(test[i]);
    sum = sum + test[i];
  }
  avg = sum / 100;
  Serial.print("sum = ");
  Serial.println(sum);
  Serial.print("avg = ");
  Serial.println(avg);
}

void loop() {
  // put your main code here, to run repeatedly:

}
