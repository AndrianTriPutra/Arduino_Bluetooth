//BIRblue1

#include <SoftwareSerial.h>

SoftwareSerial Bluetooth(6, 7); // RX, TX
void setup() {
  Serial.begin(9600);
  Bluetooth.begin(9600);//setting baudrate bluetooth di 9600 bit/s
  
  Bluetooth.println("Tes Komunikasi Bluetooth");
  delay(1000);
  Bluetooth.println("Bengkel Instrumentasi dan Robotik");
}

void loop() {
  Bluetooth.println("Hello Maker");
  delay(1000);
  Bluetooth.println("ini saya arduino");
}
