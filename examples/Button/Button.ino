/**************************************************************************
 *
 * File: Button.ino
 * Author: Julian Schuler (https://github.com/julianschuler)
 * License: MIT License, see LICENSE.txt
 * Description: This file is an example from the directIO library.
 *              Turns a LED on when pressing a pushbutton
 * 
 * Circuit: - pushbutton between D2 and GND
 *          - LED between D13 and GND (on most Arduino Boards
 *              already connected)
 *
 **************************************************************************/


#include <directIO.h>

// see https://www.allaboutcircuits.com/uploads/articles/Arduino_UNO_R3_Pinout.jpg for AVR pin names

#define BUTTON_PIN    D,2   // PD2, resembles D2 on the Arduino UNO
#define LED_PIN       B,5   // PB5, resembles D13 on the Arduino UNO


void setup() {
  directMode(BUTTON_PIN, INPUT);    // set button pin as input
  directWrite(BUTTON_PIN, HIGH);    // enable internal pullup resistor
  directMode(LED_PIN, OUTPUT);      // set LED pin as output
}


void loop() {
  bool buttonState = directRead(BUTTON_PIN);    // get the state of the button pin
  
  if (buttonState == LOW) {       // check if button is pressed
    directWrite(LED_PIN, HIGH);   // turn on LED
  }
  else {
    directWrite(LED_PIN, LOW);    // turn on LED
  }
}
