/*
 */
int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int aPin = 6; 
int bPin = A4;
int cPin = A0;
int dPin = 3;
int ePin = 4;
int fPin = 7;
int gPin = 8;
int dpPin = 2; 
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
  pinMode(ePin, OUTPUT);
  pinMode(fPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(dpPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
 String serialInput = Serial.readString();
  serialInput.trim();
  if (serialInput == "red") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
  } else if (serialInput == "green") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
    } else if (serialInput == "blue") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255);
  } else if (serialInput == "pink") {
    analogWrite(redPin, 146);
    analogWrite(greenPin, 69);
    analogWrite(bluePin, 30);
  } else if (serialInput == "off") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 0);
    digitalWrite(fPin, LOW);
    digitalWrite(gPin, LOW);
    digitalWrite(bPin, LOW);
    digitalWrite(cPin, LOW);
    digitalWrite(aPin, LOW);
    digitalWrite(ePin, LOW);
    digitalWrite(dPin, LOW);
  }
  else Serial.println(".");
if (serialInput == "1") { 
digitalWrite(bPin, HIGH);
digitalWrite(cPin, HIGH);
digitalWrite(aPin, LOW);
digitalWrite(dPin, LOW);
digitalWrite(ePin, LOW);
digitalWrite(fPin, LOW);
digitalWrite(gPin, LOW);
} if (serialInput == "2") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(cPin, LOW);
  digitalWrite(fPin, LOW);
}
if (serialInput == "3") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, LOW);
}
if (serialInput == "4") {
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(aPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(dPin, LOW);
}
if (serialInput == "5") {
  digitalWrite(aPin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(bPin, LOW);
  digitalWrite(ePin, LOW);
}
if (serialInput == "6") {
  digitalWrite(aPin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(bPin, LOW);
}
if (serialInput == "7") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, LOW);
  digitalWrite(ePin, LOW);
  digitalWrite(fPin, LOW);
  digitalWrite(gPin, LOW);
}
if (serialInput == "8") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
}
if (serialInput == "9") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, HIGH);
  digitalWrite(ePin, LOW);
}
if (serialInput == "0") {
  digitalWrite(aPin, HIGH);
  digitalWrite(bPin, HIGH);
  digitalWrite(cPin, HIGH);
  digitalWrite(dPin, HIGH);
  digitalWrite(ePin, HIGH);
  digitalWrite(fPin, HIGH);
  digitalWrite(gPin, LOW);
}

  
}
