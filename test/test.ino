// In case you're a super-newbie to Arduino or FastLED... the two slashes
// at the beginning of the line keep it from being part of the program.
// It's used for comments like this, and handy for notes to yourself.

#include "FastLED.h"  //This calls up the FastLED library for your Arduino.

// How many leds in your strip?
#define NUM_LEDS 1 // This states how many LEDs you have in your strip.  I have eight
                                      // meters with 60 LEDs per meter, so 480.

//The following is about the physical hookup.  For my WS2812B strip, the separate positive and negative wires (the ones not on the connector) go to a 5-volt power source, and the signal wire from the connector (probably the middle one on the strip, but check for labeling) goes to the Arduino.
// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 6 //I use pin 6 on my Arduino Mega 2560
#define CLOCK_PIN 13 //I haven't needed the clock pin for anything, so I don't know what to say about it!

// Define the array of leds
CRGB leds[NUM_LEDS]; //This identifies your strip as 'leds' for later in the code. It's pulling the
                                            // 'NUM_LEDS' from above.  The total number of LEDs.

// If you had more than one string, you could identify them as well...
//CRGB leds_main[NUM_LEDS];
//CRGB leds_secondary[NUM_LEDS];
// etc

void setup() { //This sets up information that the sketch needs to run. 
                       //In this case, the type of LED strip
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
       FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
      //My LED strip is WS2812B, like the one above, but runs fine as NEOPIXEL below.
     // NEOPIXEL is commonly used in sketches, so I just go with it.
     //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    
      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);

      // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() { //whatever is in the void loop is what happens when the program runs
  // Turn the LED on, then pause
  leds[0] = CRGB::Red; //LEDs are indexed from 0, so LED#1 is actually 0. 
                                       // This says turn LED 0 (the first one on the strip) to red.
  FastLED.show();  //This tells the program to turn on the led
  delay(500);           //This tells the program to wait .5 seconds -- 1000 = 1 second
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black; //To 'turn off' and LED you 'color it' black
  FastLED.show();  //Shows the black LED -- which means it's off.
  delay(500);    //Wait .5 seconds then start the loop over again.
}
