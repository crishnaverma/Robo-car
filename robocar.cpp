#include <AFMotor.h>

// === Bluetooth Serial ===
#define bluetoothSerial Serial  

// === Motors ===
AF_DCMotor motor1(1, MOTOR12_1KHZ);
AF_DCMotor motor2(2, MOTOR12_1KHZ);
AF_DCMotor motor3(3, MOTOR34_1KHZ);
AF_DCMotor motor4(4, MOTOR34_1KHZ);

#define SPEED 255   // Full throttle

void setup() {
  bluetoothSerial.begin(9600);
}

void loop() {

  if (bluetoothSerial.available()) {
    char c = bluetoothSerial.read();

    if (c == 'F') { forward(); }
    else if (c == 'B') { back(); }
    else if (c == 'L') { left(); }
    else if (c == 'R') { right(); }
    else if (c == 'H') { forwardRight(); }
    else if (c == 'G') { forwardLeft(); }
    else if (c == 'J') { backRight(); }
    else if (c == 'I') { backLeft(); }
    else if (c == 'S') { Stop(); }
  }
}
// === Your Motor Functions ===
void forward() {
  motor1.setSpeed(SPEED); motor1.run(FORWARD);
  motor2.setSpeed(SPEED); motor2.run(FORWARD);
  motor3.setSpeed(SPEED); motor3.run(BACKWARD);
  motor4.setSpeed(SPEED); motor4.run(BACKWARD);
}

void back() {
  motor1.setSpeed(SPEED); motor1.run(BACKWARD);
  motor2.setSpeed(SPEED); motor2.run(BACKWARD);
  motor3.setSpeed(SPEED); motor3.run(FORWARD);
  motor4.setSpeed(SPEED); motor4.run(FORWARD);
}

void left() {
  motor1.setSpeed(SPEED); motor1.run(FORWARD);
  motor2.setSpeed(SPEED); motor2.run(BACKWARD);
  motor3.setSpeed(SPEED); motor3.run(FORWARD);
  motor4.setSpeed(SPEED); motor4.run(BACKWARD);
}

void right() {
  motor1.setSpeed(SPEED); motor1.run(BACKWARD);
  motor2.setSpeed(SPEED); motor2.run(FORWARD);
  motor3.setSpeed(SPEED); motor3.run(BACKWARD);
  motor4.setSpeed(SPEED); motor4.run(FORWARD);
}

void Stop() {
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
}