/*
 * This Arduino Nano code was developed by newbiely.com
 *
 * This Arduino Nano code is made available for public use without any restriction
 *
 * For comprehensive instructions and wiring diagrams, please visit:
 * https://newbiely.com/tutorials/arduino-nano/arduino-nano-limit-switch
 */

#include <ezButton.h>
#include <Keyboard.h>

ezButton limitSwitch1(2);  // create ezButton object for pin 2
ezButton limitSwitch2(4);  // create ezButton object for pin 4

void setup() {
  Serial.begin(9600);
  limitSwitch1.setDebounceTime(50); // set debounce time to 50 milliseconds
  limitSwitch2.setDebounceTime(50); // set debounce time to 50 milliseconds

  Keyboard.begin();
}

void loop() {
  limitSwitch1.loop(); // MUST call the loop() function first
  limitSwitch2.loop(); // MUST call the loop() function first

  if(limitSwitch1.isPressed())
    Keyboard.press('V');
;
  if(limitSwitch2.isPressed())
    Keyboard.press('B');
}
