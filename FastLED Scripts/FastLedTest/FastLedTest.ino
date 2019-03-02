/*
 * Made by Xylem with help from the FastLED git wiki
 * 
 * This script changes the colour of all 100 WS2812B LEDs to red
 * However this wont work with my LEDs as the value associated with the hex value is off making red, green
 */
#include <FastLED.h>
#define NUM_LEDS 150
#define DATA_PIN 6
CRGB leds[NUM_LEDS];
void setup() {
  FastLED.addLeds<WS2812B,DATA_PIN>(leds,NUM_LEDS);
  
}
void loop() {
  for (int i=0; i < NUM_LEDS; i++){
  leds[i] = CRGB::Red;
  FastLED.show();
  }
}
