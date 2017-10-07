void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World");
  int kor = random(101);
  int eng = random(101);
  int math = random(101);

  int sum = kor + eng + math;
  Serial.print("kor = ");
  Serial.println(kor);
  Serial.print("eng = ");
  Serial.println(eng);
  Serial.print("math = ");
  Serial.println(math);
  Serial.print("math = ");
  Serial.println(sum/3);

}

void loop() {

}
