#include <SoftwareSerial.h>

SoftwareSerial mySerial(11, 12); // use D11 as RX and D12 as TX
int ledPin = 5; // use D5 as led pin
char data;

void setup(){
  pinMode(ledPin, OUTPUT);
  mySerial.begin(9600);
  mySerial.println("Program Started!");
}

void loop(){
  if (mySerial.available() > 0){
    data = mySerial.read();
  }

  if (data == '1'){
    digitalWrite(ledPin, HIGH);
  }

  else if (data == '2'){
    digitalWrite(ledPin, LOW);
  }
}

