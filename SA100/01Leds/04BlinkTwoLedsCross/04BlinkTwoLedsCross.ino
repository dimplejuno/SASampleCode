void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(12, LOW);   
  delay(100);                       
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(12, HIGH);    
  delay(100);                       
}
