#include <AFMotor.h>
// to motor port #1 (M1 and M2) #2 (M3 and M4)
AF_Stepper motor1(200, 1);
AF_Stepper motor2(200, 2);


void setup() {
  // set up Serial library at 9600 bps
  Serial.begin(9600);
  Serial.println("Stepper test!");
  motor1.setSpeed(50); // 40 rpm
  motor2.setSpeed(50);
  
}

void loop() {
  Serial.println("Micrsostep steps");
  motor1.step(100, FORWARD, MICROSTEP);
  motor1.step(100, BACKWARD, MICROSTEP);
  motor1.step(250, FORWARD, MICROSTEP);
  motor1.step(250, BACKWARD, MICROSTEP);

    motor2.step(100, FORWARD, MICROSTEP);
  motor2.step(100, BACKWARD, MICROSTEP);
  motor2.step(250, FORWARD, MICROSTEP);
  motor2.step(250, BACKWARD, MICROSTEP);


  delay(1000);
}
