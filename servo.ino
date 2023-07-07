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
  } else {
    int angle = map(distance, 360, -360, 180, 0);  // Mesafeyi açıya dönüştür
    servo.write(angle);
  }

}
