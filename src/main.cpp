#include "Arduino.h"
#include <Keypad.h>

const byte cols = 4;
const byte rows = 4;

char buttons[rows][cols] = {
  {'1', '2', '3', '4'},
  {'5', '6', '7', '8'},
  {'9', 'a', 'b', 'c'},
  {'d', 'e', 'f', 'g'}
};

byte rowPins[rows] = {7, 6, 5, 4};
byte colPins[cols] = {10, 11, 12, 13};

Keypad keypad = Keypad(makeKeymap(buttons), rowPins, colPins, rows, cols);

void setup() {
  Serial.begin(9600);
}

void loop() {
  char key = keypad.getKey();

  if (key) {
    Serial.print("key pressed: ");
    Serial.println(key);
  }
}
