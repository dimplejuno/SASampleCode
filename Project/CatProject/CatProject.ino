int leftButton = 2;
int rightButton = 3;

int leftLed = 12;
int rightLed = 13;
int count  = 0;

int num_array[10][7] = {{ 1,1,1,1,1,1,0 },   // 0
                        { 0,1,1,0,0,0,0 },    // 1
                        { 1,1,0,1,1,0,1 },    // 2
                        { 1,1,1,1,0,0,1 },    // 3
                        { 0,1,1,0,0,1,1 },    // 4
                        { 1,0,1,1,0,1,1 },    // 5
                        { 1,0,1,1,1,1,1 },    // 6
                        { 1,1,1,0,0,0,0 },    // 7
                        { 1,1,1,1,1,1,1 },    // 8
                        { 1,1,1,0,0,1,1 }};    // 9
                           


// this functions writes values to the sev seg pins  
void Num_Write(int number) 
{
  for (int pin=4; pin<11; pin++) {
   digitalWrite(pin, !num_array[number][pin-4]);  // anode
  }
}

void initNum () {
  for(int pin=4; pin<11; pin++) {
    pinMode(pin, OUTPUT);
  }
}

void turnOff() {
  int num[] = {1,1,1,1,1,1,1};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void zero() {
  int num[] = {0,0,0,1,1,1,1};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void one() {
  int num[] = {1,0,0,1,1,1,1};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void two() {
  int num[] = {0,0,1,0,0,1,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void three() {
  int num[] = {0,0,0,0,1,1,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void four() {
  int num[] = {0,0,0,0,1,1,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void five() {
  int num[] = {0,1,0,0,1,0,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void six() {
  int num[] = {0,1,0,0,0,0,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void seven() {
  int num[] = {0,0,0,1,1,1,1};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void eight() {
  int num[] = {0,0,0,0,0,0,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}

void nine() {
  int num[] = {0,0,0,0,1,0,0};
  for(int pin=4; pin<11; pin++) {
    digitalWrite(pin, num[pin-4]);
  }
}


void setup() {
  Serial.begin(115200);
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);

  pinMode(leftLed, OUTPUT);
  pinMode(rightLed, OUTPUT);

  initNum();
}

void loop() {
  int left = digitalRead(leftButton);
  int right = digitalRead(rightButton);

  if(left == 0) {
    digitalWrite(leftLed, HIGH);
    digitalWrite(rightLed, HIGH);
    Num_Write(count++);
    if(count>9) {
      count = 0;
    }
  } 

  delay(50);
}
