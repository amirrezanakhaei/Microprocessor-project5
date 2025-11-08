
int segmentPins[] = {1, 2, 3, 4, 5, 6, 7};
char lettersToShow[] = {'A', 'C', 'E', 'F', 'H', 'L', 'P'};
int numLetters = 7;

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLetters; i++) {
    displayLetter(lettersToShow[i]);
    delay(1500);
  }
}

void displayLetter(char letter) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }

  switch (letter) {
    case 'A':
      digitalWrite(segmentPins[0], HIGH);
      digitalWrite(segmentPins[1], HIGH);
      digitalWrite(segmentPins[2], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      digitalWrite(segmentPins[6], HIGH);
      break;
    case 'C':
      digitalWrite(segmentPins[0], HIGH);
      digitalWrite(segmentPins[3], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      break;
    case 'E':
      digitalWrite(segmentPins[0], HIGH);
      digitalWrite(segmentPins[3], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      digitalWrite(segmentPins[6], HIGH);
      break;
    case 'F':
      digitalWrite(segmentPins[0], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      digitalWrite(segmentPins[6], HIGH);
      break;
    case 'H':
      digitalWrite(segmentPins[1], HIGH);
      digitalWrite(segmentPins[2], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      digitalWrite(segmentPins[6], HIGH);
      break;
    case 'L':
      digitalWrite(segmentPins[3], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      break;
    case 'P':
      digitalWrite(segmentPins[0], HIGH);
      digitalWrite(segmentPins[1], HIGH);
      digitalWrite(segmentPins[4], HIGH);
      digitalWrite(segmentPins[5], HIGH);
      digitalWrite(segmentPins[6], HIGH);
      break;
  }
}