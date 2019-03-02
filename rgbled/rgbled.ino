/*
 * Made by Xylem
 * 
 * Goes through the 3 values of a RGB led usuing the value "fade"
 */

int red = 9;
int green = 10;
int blue = 11;
int fade = 0;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
}

void loop() {
  for(int i = 1; i == 50; i++) {
    int fade = fade + 5;
    analogWrite(red,fade);
    analogWrite(green,fade);
    analogWrite(blue,fade);
    delay(30);
  }
  for(int i = 50; i == 1; i--) {
    int fade = fade - 5;
    analogWrite(red,fade);
    analogWrite(green,fade);
    analogWrite(blue,fade);
    delay(30);
  }
}
