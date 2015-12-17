/*
RGB LED Desk Lighting

This code is for driving an RGB LED Strip - Must be common positive with each colour being ground. 
The transistors I am using are the BD139 as these have a collector current of 1.5A which is more than enough to drive 1 meter or so of the LED strip.
The emitter of each transistor is connected to ground with the collectors each connected to the RGB LED strip.
12V from a LED driver is connected directly to the LED strip positive connection and also to the (VIN) pin on the Arduino as this way it will use its on board regulator to provide the 5V needed.
I am using a Pro Mini, but you can use your board of choice.


Fading (Taken from example code)
Added various patterns 

 Pin 3 = RED - Connect to base of Transistor via 1K Resistor 
 Pin 5 = GREEN - Connect to base of Transistor via 1K Resistor 
 Pin 6 = BLUE - Connect to base of Transistor via 1K Resistor 

 */
 


#define RED 3
#define GREEN 5
#define BLUE 6

void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(RED, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  }
// fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(RED, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  

  }
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREEN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(GREEN, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  }
    // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(BLUE, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 1) {
    // sets the value (range from 0 to 255):
    analogWrite(BLUE, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(50);
  }}

  



