/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

#define DEBUGLEVEL 0
#include <DebugUtils.h>


#define D1 5


#define LED D1

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
  // initialize digital pin LED as an output.
  pinMode(LED, OUTPUT);

  DEBUGPRINTLN0("Started");
}

// the loop function runs over and over again forever
void loop() {
  DEBUGPRINTLN0("Loop started");
  
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  DEBUGPRINT1("Point 1 ");
  DEBUGPRINTLN1(digitalRead(LED));

  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  DEBUGPRINT2("Point 2 ");
  DEBUGPRINTLN2(digitalRead(LED));

  delay(1000);                       // wait for a second
}
