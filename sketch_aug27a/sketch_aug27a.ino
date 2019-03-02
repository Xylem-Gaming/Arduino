#include <FastLED.h>
#define NUM_LEDS 100
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  for(int i=1; i<4; i++){
    if(i==1){
      for(int LED=0; LED<NUM_LEDS; LED++){
        leds[i] = CRGB::Red;
        FastLED.show();
        delay(1000);//One second
      }
    }else if(i==2){
      for(int LED=0; LED<NUM_LEDS; LED++){
        leds[i] = CRGB::Green;
        FastLED.show();
        delay(1000);//One second
      }
    }else if(i==3){
      for(int LED=0; LED<NUM_LEDS; LED++){
        leds[i] = CRGB::Blue;
        FastLED.show();
        delay(1000);//One second
      }
    }else if(i==4){
      for(int x=0; x<255; x++){
        for(int i=0; i<NUM_LEDS; i++){
          leds[i] = CRGB(x,x,x);
          delay(30);
          FastLED.show();
        }
      }
    }
  }
}
