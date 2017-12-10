
#include "pitches.h"

int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

int school[] = {
  NOTE_G3, NOTE_G3, NOTE_E3, NOTE_F3, NOTE_G3, NOTE_A3, NOTE_A3, NOTE_G3,
  NOTE_G3, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4,
  NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_A3,
  NOTE_G3, NOTE_G3, NOTE_G3, NOTE_E3, NOTE_D3, NOTE_C3,
  NOTE_D3, NOTE_D3, NOTE_E3, NOTE_C3, NOTE_D3, NOTE_D3, NOTE_E3, NOTE_G3, 
  NOTE_A3, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4,
  NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_A3,
  NOTE_G3, NOTE_G3, NOTE_G3, NOTE_E3, NOTE_D3, NOTE_C3,
};

int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

int schoolDurations[] = {
  4, 4, 8, 8, 4, 4, 4, 2,
  4, 4, 4, 8, 8, 1,
  4, 4, 4, 4, 4, 8, 8, 4, 4,
  4, 4, 4, 8, 8, 1,
  4, 4, 4, 4, 4, 4, 4, 4,
  4, 4, 4, 8, 8, 1,
  4, 4, 4, 4, 4, 8, 8, 4, 4,
  4, 4, 4, 8, 8, 1,
};

void setup() {
  for (int thisNote = 0; thisNote < 58; thisNote++) {

    
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    //int noteDuration = 1500 / noteDurations[thisNote];
    int noteDuration = 1000 / schoolDurations[thisNote];
    //tone(8, melody[thisNote], noteDuration);
    tone(4, school[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.3;
    delay(pauseBetweenNotes);
    noTone(4);
  }
}

void loop() {

}
