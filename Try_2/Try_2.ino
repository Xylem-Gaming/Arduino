#include "pitches.h"
//Verse 1 : A3 F4
//                           1        2       3       4       5       6       7       8       9       10      11      12      13      14      15      16      17      18      19
int gotMelody[]        =  {NOTE_A3,NOTE_F4,NOTE_A3,NOTE_E4,NOTE_A3,NOTE_F4,NOTE_G4,NOTE_E4,NOTE_A3,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_E4,NOTE_A4,NOTE_AS4,NOTE_G4,NOTE_C4,NOTE_A4};
int gotTuneDuration[]  =  {100    ,200    ,50     ,200    ,50     ,100    ,100    ,150    ,50     ,100    ,100    ,100    ,100    ,400    ,150    ,50      ,100    ,100    ,100};
int gotLength = 19;

int melodyPin = 3;

void setup() {
  pinMode(melodyPin,OUTPUT);
}

void loop() {
  for (int i=0; i<gotLength; i++) {
    int delayedTime = gotTuneDuration[i]*5;
    tone(melodyPin,gotMelody[i]);
    delay(delayedTime);
  }
}
