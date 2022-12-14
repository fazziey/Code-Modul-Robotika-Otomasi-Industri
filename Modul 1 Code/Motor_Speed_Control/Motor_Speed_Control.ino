// Deklarasikan pin digital yang akan digunakan untuk mengontrol kecepatan motor
const int motorSpeed = 3, InA = 4, InB = 5;
int timeDelay = 50;

void setup() {
  // Inisialisasi pin digital yang akan digunakan sebagai output
  pinMode(motorSpeed, OUTPUT);
  pinMode(InA, OUTPUT);
  pinMode(InB, OUTPUT);

  // Putaran motor searah jarum jam
  digitalWrite(InA, LOW);
  digitalWrite(InB, HIGH);
}

void loop() {
  // Tentukan kecepatan motor (0-255)
  int Speed = 0;

  // Ubah kecepatan motor dari lambat ke cepat secara bertahap
  for (int i = 0; i < 256; i++) {
    Speed = i;
    analogWrite(motorSpeed, Speed);
    delay(timeDelay);
  }

  // Ubah kecepatan motor dari cepat ke lambat secara bertahap
  for (int i = 255; i >= 0; i--) {
    Speed = i;
    analogWrite(motorSpeed, Speed);
    delay(timeDelay);
  }
}
