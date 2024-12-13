#include <ArduinoLowPower.h>
#include <Servo.h>

#define BUTTON_PIN 2  // Pin connected to the button
#define SERVO_PIN 3   // Pin connected to the servo

Servo myServo;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  myServo.attach(SERVO_PIN);
  Serial.begin(9600);

  myServo.write(0);  // Start with the servo at 0 degrees
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    Serial.println("Button Pressed - Moving to 60 degrees.");
    myServo.write(60);  // Move the servo to 60 degrees
  } 
  else {
    Serial.println("Button Released - Returning to 0 degrees.");
    myServo.write(0);   // Return the servo to 0 degrees
    goToSleep();        // Conserve power when idle
  }
  
  delay(50);  // Small delay to stabilize the signal
}

void goToSleep() {
  Serial.println("Going to sleep...");
  LowPower.sleep(5000);  // Put ATtiny85 to sleep for 5 seconds
}
