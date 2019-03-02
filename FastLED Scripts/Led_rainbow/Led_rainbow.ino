#include <FastLED.h>
#define NUM_LEDS 100
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(10);
}

void loop() {
  for(int i=0; i<NUM_LEDS+1; i++){
    fill_rainbow(leds,i,0,10);
    delay(30);
    FastLED.show();
  }
}
