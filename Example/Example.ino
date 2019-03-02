/*
 * Made by Xylem
 * 
 * Very simple script that tests an arduino by turning on and off a LED on pin 13
 */

int led = 13;
void setup() {
  pinMode(led,OUTPUT);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(500);
}
