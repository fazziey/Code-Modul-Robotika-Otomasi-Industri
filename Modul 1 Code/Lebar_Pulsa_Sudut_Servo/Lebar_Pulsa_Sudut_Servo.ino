#define servo 9 // pin sinyal kontrol servo
int lebarPulsa = 600; // dalam mikro detik
int period = 20000; 
// 0 deg = 600
// 180 deg = 2400

void setup() {
  pinMode(servo, OUTPUT); // set pin 9 sebagi output
}

void loop() {
  digitalWrite(servo, HIGH); // set output high
  delayMicroseconds(lebarPulsa); // lebar pulsa dalam mikro detik
  digitalWrite(servo, LOW); // set output low
  delayMicroseconds(period - lebarPulsa);
}
