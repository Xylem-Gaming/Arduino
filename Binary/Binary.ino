int dig1 = 3;
int dig2 = 4;
int dig3 = 5;
int dig4 = 6;
int swit = 2;
int buttonState;
int index = 0;

void setup() {
  pinMode(dig1,OUTPUT);
  pinMode(dig2,OUTPUT);
  pinMode(dig3,OUTPUT);
  pinMode(dig4,OUTPUT);
  pinMode(swit,INPUT);
}

void loop() {
  delay(100);
  digitalWrite(dig1,LOW);
  digitalWrite(dig2,LOW);
  digitalWrite(dig3,LOW);
  digitalWrite(dig4,LOW);
  buttonState = digitalRead(swit);
  if (buttonState == HIGH) {
    index++;
    delay(500);
  }
  if (index == 16 or index > 16) {
    int index = 0;
  }
  binary(index);
}
void binary(int number) {
    if (number == 1) {
      digitalWrite(dig1,HIGH);
    }
    if (number == 2) {
      digitalWrite(dig2,HIGH);
    }
    if (number == 3) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig2,HIGH);
    }
    if (number == 4) {
      digitalWrite(dig3,HIGH);
    }
    if (number == 5) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig3,HIGH);
    }
    if (number == 6) {
      digitalWrite(dig2,HIGH);
      digitalWrite(dig3,HIGH);
    }
    if (number == 7) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig2,HIGH);
      digitalWrite(dig3,HIGH);
    }
    if (number == 8) {
      digitalWrite(dig4,HIGH);
    }
    if (number == 9) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 10) {
      digitalWrite(dig2,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 11) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig2,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 12) {
      digitalWrite(dig3,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 13) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig3,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 14) {
      digitalWrite(dig2,HIGH);
      digitalWrite(dig3,HIGH);
      digitalWrite(dig4,HIGH);
    }
    if (number == 15) {
      digitalWrite(dig1,HIGH);
      digitalWrite(dig2,HIGH);
      digitalWrite(dig3,HIGH);
      digitalWrite(dig4,HIGH);
    }
  }

