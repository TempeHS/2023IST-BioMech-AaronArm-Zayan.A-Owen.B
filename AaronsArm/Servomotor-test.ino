#include <Servo.h>

// create a servo object
Servo myServo;

//Pin  servo is attached
unsigned static int myServoPin = 8;


void setup() {
// Setup and debug serial monitor
Serial.begin(9600);
Serial.println("SM works");
Serial.println("---------------");

// Configure myServo to the pin
myServo.attach(myServoPin);
 myServo.write(0);
 delay(250);
 
}

// The loop function runs over and over again forever
void loop()     {
  // slowly sweep the servo 180 degrees
  for (int i = 0; i < 180; i++) {
    myServo.write(i);
    delay(50);
  }
}
