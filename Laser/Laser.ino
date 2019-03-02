#include<Servo.h> //importing the servo library

Servo serX; //Initating variables
Servo serY;

String serialData;

void setup() {
  serX.attach(10); //Servo data pin now attached to pin 10 of the arduino
  serY.attach(11); //Servo data pin now attached to pin 11 of the arduino
  Serial.begin(9600);
  Serial.setTimeout(10);
}

void loop() {
  //yeet
}

void serialEvent () {
  serialData = Serial.readString();

  serX.write(parseDataX(serialData));
  serY.write(parseDataY(serialData));
}

int parseDataX(String data){
  data.remove(data.indexOf("Y"));
  data.remove(data.indexOf("X", 1));

  return data.toInt();
}

int parseDataY(String data){
  data.remove(0, data.indexOf("Y") + 1);
  return data.toInt();
}

