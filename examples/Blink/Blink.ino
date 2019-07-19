/**************************************************************************
 *
 * File: Blink.ino
 * Author: Julian Schuler (https://github.com/julianschuler)
 * License: MIT License, see LICENSE.txt
 * Description: This file is an example from the directIO library.
 *              Turns a LED repeatedly on and off for one second each
 * 
 * Circuit: - LED between D13 and GND (on most Arduino Boards
 *              already connected)
 *
 **************************************************************************/


#include <directIO.h>

// see https://www.allaboutcircuits.com/uploads/articles/Arduino_UNO_R3_Pinout.jpg for AVR pin names

#define LED_PIN     B,5     // PB5, resembles D13 in Arduino


void setup() {
  directMode(LED_PIN, OUTPUT);  // set LED pin as output
}


void loop() {
  directMode(LED_PIN, HIGH);  // turn the LED on
  delay(1000);                // wait for one second
  directMode(LED_PIN, LOW);   // turn the LED off
  delay(1000);                // wait for one second
}
