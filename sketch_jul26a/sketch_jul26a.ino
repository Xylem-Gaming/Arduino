#include <FastLED.h>
#define DATA_PIN 6
#define NUM_LEDS 1

#define BRIGHTNESS 45
#define COLOR_ORDER GRB
int g = 0;
int b = 0;
int r = 0;
CRGB leds[NUM_LEDS];

void setup(){
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop(){
  for(int x = 0; x < NUM_LEDS; x++){
    delay(10);
    leds[x] = CRGB(r,g,b);
  }
  FastLED.show();
  delay(10); 

  //-------------------------
  for(int i = 0; i < 254; i++) {
    r++;
    leds[1] = CRGB(r,g,b);
    FastLED.show();
    delay(5);
  }
  for(int i = 254; i == 0; i--) {
    r--;
    leds[1] = CRGB(r,g,b);
    FastLED.show();
    delay(5);
    
  }
}


