#include "pitches.h"
int mobile_notes[] = {NOTE_C4, NOTE_DS4, NOTE_G4, NOTE_C4, NOTE_DS4, NOTE_G4, NOTE_F4, NOTE_DS4, NOTE_F4, NOTE_DS4};
int mobile_durations[] = {8, 8, 4, 8, 8, 8, 8, 16, 16, 2}; // 4= Note Siah   8= Note Chang 
void setup() {
mobile();
}
void loop() {
}
void mobile() {
    for ( int thisNote = 0; thisNote < 10; thisNote++) {
      int mobile_duration = 1000 / mobile_durations[thisNote];
      tone(9, mobile_notes[thisNote], mobile_duration);
      //Ta'Ayiine Meghdare Tempo Ahang
      int pauseBetweenNotes = mobile_duration * 1.43;
      delay(pauseBetweenNotes);
    }
  }
