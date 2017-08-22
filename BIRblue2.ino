#BIRblue2

#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(6,7); // RX, TX
byte message;
#define LED 8
void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);//setting baudrate bluetooth di 9600 bit/s
  pinMode (LED,OUTPUT);
  
  Bluetooth.println("Bengkel Instrumentasi dan Robotik");
  delay(1000);
}

void loop() {
  if (Bluetooth.available()>0){
    message = Bluetooth.read();
    Serial.print("message:");
    Serial.write(message);
    Serial.println();    
  }
  
switch(message){
  case '1':
    Serial.println("LED ON");
    digitalWrite(LED,HIGH);
    break;
  
  case '2':
    Serial.println("LED OFF");
    digitalWrite(LED,LOW);
    break;
  
  default:
  break;
  }
}
