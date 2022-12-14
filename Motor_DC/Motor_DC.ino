// Deklarasi pin
const int motorSpeed = 3, InA = 4, InB = 5;

void setup() {
  pinMode(motorSpeed, OUTPUT);
  pinMode(InA, OUTPUT);
  pinMode(InB, OUTPUT);
}

void loop() {
  // Motor berputar searah jarum jam
  analogWrite(motorSpeed, 100); // 0 - 255
  digitalWrite(InA, LOW);
  digitalWrite(InB, HIGH);
}
