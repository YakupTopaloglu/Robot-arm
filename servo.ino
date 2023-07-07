#include <Servo.h>

Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(10);  // Servo motorun bağlandığı pini belirtin
}

void loop() {
  if (Serial.available() > 0) {
    int distance = Serial.parseInt();  // Python'dan gelen mesafeyi okuyun
    moveServo(distance);
  }
}

void moveServo(int distance) {
  if (distance == 0) {
    servo.write(90);  // Eğer mesafe 0 ise servo motoru 90 dereceye ayarla
  } else if (distance > 0) {
    int angle = map(distance, 0, 360, 0, 90);  // Mesafeyi açıya dönüştür
    servo.write(angle);
  } else if (distance < 0) {
    int angle = map(distance, 0, -360, 90, 180);  // Mesafeyi açıya dönüştür
    servo.write(angle);
  }
}
