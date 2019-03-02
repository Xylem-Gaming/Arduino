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

