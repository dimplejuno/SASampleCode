String stringOne, stringTwo;

void setup() {
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  stringOne = String("Sensor ");
  stringTwo = String("value");
  // send an intro:
  Serial.println("\n\nAppending to a String:");
  Serial.println();
}

void loop() {
  Serial.println(stringOne);  // prints  "Sensor "

  stringOne += stringTwo;
  Serial.println(stringOne);  // prints "Sensor value"

  stringOne += " for input ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  stringOne += 'A';
  Serial.println(stringOne);   // prints "Sensor value for input A"

  // adding a constant integer to a String:
  stringOne += 0;
  Serial.println(stringOne);   // prints "Sensor value for input A0"

  // adding a constant string to a String:
  stringOne += ": ";
  Serial.println(stringOne);  // prints "Sensor value for input"

  // adding a variable integer to a String:
  stringOne += analogRead(A0);
  Serial.println(stringOne);   // prints "Sensor value for input A0: 456" or whatever analogRead(A0) is

  Serial.println("\n\nchanging the Strings' values");
  stringOne = "A long integer: ";
  stringTwo = "The millis(): ";

  // adding a constant long integer to a String:
  stringOne += 123456789;
  Serial.println(stringOne);   // prints "A long integer: 123456789"

  // using concat() to add a long variable to a String:
  stringTwo.concat(millis());
  Serial.println(stringTwo); // prints "The millis(): 43534" or whatever the value of the millis() is

  // do nothing while true:
  while (true);
}
