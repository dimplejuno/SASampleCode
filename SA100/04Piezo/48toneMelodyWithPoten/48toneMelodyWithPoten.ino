#include "pitches.h"
const int  piezo = 4;

int melody[] = {
  NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, 
  NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4
};

void setup() {
  Serial.begin(9600);
  for (int thisNote = 0; thisNote < 8; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(piezo, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(piezo);
  }
}

void loop() {
  int sensorReading = analogRead(A0);
  int key = map(sensorReading, 0, 1023, 0, 7);
  Serial.println(key);
  int noteDuration = 1000 / noteDurations[key];
  tone(piezo, melody[key], noteDuration);
  int pauseBetweenNotes = noteDuration * 1.30;
  //delay(pauseBetweenNotes);
  //noTone(piezo);

}
