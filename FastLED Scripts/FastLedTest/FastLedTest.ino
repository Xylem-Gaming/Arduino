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
