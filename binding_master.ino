#include <SoftwareSerial.h>
SoftwareSerial BT(10, 11); // RX, TX
void setup() {
  Serial.begin(38400);     // For serial monitor
  BT.begin(38400);         // Default HC-05 speed
  Serial.println("Bluetooth Ready...");
}
void loop() {
  if (BT.available()) {
    Serial.print("BT: ");
    Serial.println(BT.readString());
  }
  if (Serial.available()) {
    BT.println(Serial.readString());
  }
}