/*
 * Made by Xylem with inspiration from Michael Reeves
 * 
 * This script takes serial data from a computer program and converts it to a data value for the LED matrix to interpret
 * 
 * This was inspired from the Michael Reeves YouTube video where a laser is controlled by an arduino from a computer
 */

String serialData;
boolean state = false;
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  //kek
}

void serialEvent() {
  serialData = Serial.readString();
  String.toInt(serialData);

  if (serialData == "1"){
    digitalWrite(led, HIGH);
  }else if(serialData == "2"){
    digitalWrite(led, LOW);
  }
}

