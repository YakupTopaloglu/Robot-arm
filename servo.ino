#include <Servo.h>

Servo servo_y;
Servo servo_x;

void setup() {
  Serial.begin(9600);
  servo_y.attach(10);  // Servo motorun bağlandığı pini belirtin
  servo_x.attach(5);   // Servo motorun bağlandığı pini belirtin
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');  // Python'dan gelen veriyi okuyun
    int commaIndex = data.indexOf(',');
    int distance_y = data.substring(0, commaIndex).toInt();
    int distance_x = data.substring(commaIndex + 1).toInt();
    moveServo(distance_y, distance_x);
  }
}

void moveServo(int distance_y, int distance_x) {
  if (distance_y == 0 && distance_x == 0) {
    servo_y.write(90);  // Eğer mesafeler 0 ise servo motoru 90 dereceye ayarla
    servo_x.write(90);
  } else {
    int angle_y = map(distance_y, 360, -360, 180, 0);  // Mesafeyi açıya dönüştür
    int angle_x = map(distance_x, 640, -640, 0, 180);  // Mesafeyi açıya dönüştür
    servo_y.write(angle_y );  
    servo_x.write(angle_x);
  }
}

