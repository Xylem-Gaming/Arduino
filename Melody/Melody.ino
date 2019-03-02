/*
 * Made by  Unknown
 */

#include "pitches.h"
//Verse 1 : CFCECFGECGFEDE - 14
//Verse 2 : ABGDAGABAGFEC  - 13

int gotLength = 27;
int gotMelody[]       =   {NOTE_C4,NOTE_F4,NOTE_C4,NOTE_E4,NOTE_C4,NOTE_F4,NOTE_G4,NOTE_E4,NOTE_C4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_D4,NOTE_E4,         //14
                           NOTE_A4,NOTE_B4,NOTE_G4,NOTE_D4,NOTE_A4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_F4,NOTE_E4,NOTE_C4};                //13
int gotTuneDuration[]  =  {200    ,300     ,100   ,300    ,100    ,200    ,200    ,300    ,100    ,200    ,200    ,200    ,200    ,                 //14
                           600    ,200     ,200   ,200    ,200    ,200    ,200    ,200    ,200    ,200    ,200    ,200    ,200    };                //13

int melodyPin = 3;

void setup() {
  pinMode(melodyPin,OUTPUT);
}

void loop() {
  for (int i=1; i<gotLength; i++) {
    int delayedTime = gotTuneDuration[i]*4;
    if(gotMelody != 0){
    tone(melodyPin,gotMelody[i]);
    delay(delayedTime);
    }
    else{
      noTone(delayedTime);
    }
  }
}
