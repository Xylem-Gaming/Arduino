                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       #include <FastLED.h>
#define NUM_LEDS 50
#define DATA_PIN 6
int green;
int blue;
int red;

CRGB leds[NUM_LEDS];
void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS); //declare the type of LED the code is writing to
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Straight line of 100
  for(int i=0; i < NUM_LEDS; i++){
    leds[i].r = random(255); //change the addressed led to this colour
    leds[i].g = random(255);
    leds[i].b = random(255);
    delay(30);
    FastLED.show();
  }

  delay(300);

  // Turn on each one individually, all white
  for (int i=0; i < NUM_LEDS; i++) {
    if (i > 0) {
      leds[i-1].r = 0;
      leds[i-1].g = 0;
      leds[i-1].b = 0;
    }
    leds[i-1].r = 255;
    leds[i-1].g = 255;
    leds[i-1].b = 255;
    delay(50);
    FastLED.show();
  }

  delay(300);

  // Turn on each row , all white
  for (int i=0; i < NUM_LEDS/10; i++) {
    if (i > 0) {
      for (int r=0; r < 10; r++) {
        leds[((i-1)*10)+r].r = 0;
        leds[((i-1)*10)+r].g = 0;
        leds[((i-1)*10)+r].b = 0;
      }
    }
    for (int r=0; r < 10; r++) {
      leds[(i*10)+r].r = 0;
      leds[(i*10)+r].g = 0;
      leds[(i*10)+r].b = 0;
      delay(50);
    }
    FastLED.show();

  }
  
  
  
}
