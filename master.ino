#include <SoftwareSerial.h>
 SoftwareSerial bluetooth(10, 11); // RX, TX
 const int buttonPin = 9;
 void setup() {
 pinMode(buttonPin, INPUT_PULLUP);
 Serial.begin(9600);
  bluetooth.begin(9600);
 }
 void loop() {
 int buttonState = digitalRead(buttonPin);
 if (buttonState == LOW) {           
// Button pressed
 Serial.println("Button Pressed!");
 // Send signal
    bluetooth.write('1');             
delay(500);                       
  }
 }