
int numbers[10][8] = {
  {0,0,0,0,0,0,1,1}, // 0
  {1,0,0,1,1,1,1,1}, // 1
  {0,0,1,0,0,1,0,1}, // 2
  {0,0,0,0,1,1,0,1}, // 3
  {1,0,0,1,1,0,0,1}, // 4
  {0,1,0,0,1,0,0,1}, // 5
  {1,1,0,0,0,0,0,1}, // 6
  {0,0,0,1,1,0,1,1}, // 7
  {0,0,0,0,0,0,0,1}, // 8
  {0,0,0,0,1,1,0,1}  // 9
};

void turnOnNumber(int num) {
  for(int i=2; i<10; i++) {
    digitalWrite(i, numbers[num][i-2]);
  }
}

void turnOffAll() {
  for(int i=2; i<10; i++) {
    digitalWrite(i, HIGH);
  }
}

void setup() {
  for(int i=2; i<10; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

}
