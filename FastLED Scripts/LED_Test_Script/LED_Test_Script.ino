#include <FastLED.h>
#define NUM_LEDS 100
#define DATA_PIN 6
int green;
int blue;
int red;
int dtime = 30;

CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS); //declare the type of LED the code is writing to
}

void loop() {
  // put your main code here, to run repeatedly:

  // Green is actually red
  // Blue is blue
  for(int i=0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Blue;
    if(i == 0){
      leds[NUM_LEDS-1] = CRGB::Black;
    }else{
      leds[i-1] = CRGB::Black;
    }
    delay(dtime);
    FastLED.show();
  }
  for(int i=0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Red;
    if(i == 0){
      leds[NUM_LEDS-1] = CRGB::Black;
    }else{
      leds[i-1] = CRGB::Black;
    }
    delay(dtime);
    FastLED.show();
  }
  for(int i=0; i < NUM_LEDS; i++){
    leds[i] = CRGB::Green;
    if(i == 0){
      leds[NUM_LEDS-1] = CRGB::Black;
    }else{
      leds[i-1] = CRGB::Black;
    }
    delay(dtime);
    FastLED.show();
  }
}
