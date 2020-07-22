/*
 Fade

 This example shows how to fade an LED on pin 13
 using the analogWrite() function.

 The analogWrite() function uses PWM, so if
 you want to change the pin you're using, be
 sure to use another PWM capable pin. On most
 Arduino, the PWM pins are identified with 
 a "~" sign, like ~3, ~5, ~6, ~9, ~10 and ~11.

 This example code is in the public domain.
 */

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()
{
  // declare pin to be an output:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
 
  // set the brightness of pin:
  analogWrite(LED_BUILTIN, brightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255)
  {
    fadeAmount = -fadeAmount;
  }
  
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
