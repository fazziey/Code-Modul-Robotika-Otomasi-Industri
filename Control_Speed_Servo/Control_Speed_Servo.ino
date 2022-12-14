#include <Servo.h>
Servo servo;
int pos;

void setup() {
  servo.attach(9);
}

void loop() {
  for (pos = 0; pos < 180; pos += 2){
    servo.write(pos);
    delay(100);
  }
  for (pos = 180; pos > 0; pos -= 2){
    servo.write(pos);
    delay(100);
  }
}
