void setup() {
  Serial.begin(9600);

  int sum = 0;
  int overEighty = 0;
  for(int i=0; i<100; i++) {
    Serial.print(i);
    Serial.print(" = ");
    int eng = random(101);
    Serial.println(eng);
    if(eng > 80){
      overEighty++;
    }
    sum = sum + eng;
  }

  Serial.print("Over Eighty = ");
  Serial.println(overEighty);

  Serial.print("sum = ");
  Serial.println(sum/100);
  
}

void loop() {

}
