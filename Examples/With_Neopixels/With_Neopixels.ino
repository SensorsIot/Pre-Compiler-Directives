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

#define WITHNEOPIXELS

#include <DebugUtils.h>

#if defined ESP8266
#include <ESP8266WiFi.h>
#else
#include <WiFi.h>
#define D1 5
#endif

#ifdef WITHNEOPIXELS
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, D1, NEO_GRB + NEO_KHZ800);
#endif


// #define LED D1
int LED = D1;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);

#ifdef WITHNEOPIXELS
  strip.begin();
  for (int i = 0; i < 8; i++) strip.setPixelColor(i, 0, 0, 0);
  strip.show(); // Initialize all pixels to 'off'
#else
    // initialize digital pin LED as an output.
    pinMode(LED, OUTPUT);
#endif

  DEBUGPRINTLN0("Started");
}

// the loop function runs over and over again forever
void loop() {
  DEBUGPRINT0("Loop started");
  DEBUGPRINT1("Point 1 ");
#ifdef WITHNEOPIXELS
  strip.setPixelColor(5, 127, 0, 0);
  strip.show();
#else
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  DEBUGPRINTLN1(digitalRead(LED));
#endif



  delay(1000);                       // wait for a second
#ifdef WITHNEOPIXELS
  strip.setPixelColor(5, 0, 127, 0);
  strip.show();
#else
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  DEBUGPRINTLN2(digitalRead(LED));
#endif
  DEBUGPRINT2("Point 2 ");

  delay(1000);                       // wait for a second
}
