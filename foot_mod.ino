/*
  Foot controlled modifier keyboard.
  Designed to run on Seeed Studio XIAO SAMD21 micro controller (Arduino Compatible)

  For Mac use this requires an external program to allow one keyboard's modifier keys
  to affect the keys on another keyboard. Tested with Karabiner Elements (https://github.com/pqrs-org/Karabiner-Elements)

  Install Karabiner Elements https://karabiner-elements.pqrs.org/docs/getting-started/installation/
  `brew install --cask karabiner-elements`
*/

#include "Keyboard.h"

const int shiftPin = 0;
const int ctrlPin = 1;
const int altPin = 2;
const int cmdPin = 3;


void setup() {
  // make the pushButton pin an input:
  pinMode(shiftPin, INPUT_PULLUP);
  pinMode(ctrlPin, INPUT_PULLUP);
  pinMode(altPin, INPUT_PULLUP);
  pinMode(cmdPin, INPUT_PULLUP);

  // initialize control over the keyboard:
  Keyboard.begin();
}

void checkModifierKey(int pin, uint8_t key) {
  if (digitalRead(pin) == HIGH) {
    Keyboard.release(key);
  } else {
    Keyboard.press(key);
  }
}

void loop() {
  checkModifierKey(shiftPin, KEY_LEFT_SHIFT);
  checkModifierKey(ctrlPin, KEY_LEFT_CTRL);
  checkModifierKey(altPin, KEY_LEFT_ALT);
  checkModifierKey(cmdPin, KEY_LEFT_GUI);

  delay(50);
}
