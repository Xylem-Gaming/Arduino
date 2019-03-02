/*
 * Made by Xylem inspired by the FastLED library
 * 
 * Goes through all the LEDs and turns each individual LED on then off
 */

#include <FastLED.h>
#define NUM_LEDS 100
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
  Serial.begin(9600);
}

void loop() {
  for(int i=0; i<255; i++){
    for(int dot=0; dot<NUM_LEDS; dot++){
      leds[dot] = CRGB(i,0,0);
    }
    FastLED.show();
    delay(30);
  }
  for(int i=255; i>0; i--){
    for(int dot=0; dot<NUM_LEDS; dot++){
      leds[dot] = CRGB(i,0,0);
    }
    FastLED.show();
    delay(30);
  }
}
