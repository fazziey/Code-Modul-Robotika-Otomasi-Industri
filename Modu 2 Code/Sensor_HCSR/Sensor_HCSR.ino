#define ECHO_PIN 12
#define TRIGGER_PIN 11

void setup() {
  // Inisialisasi komunikasi serial
  Serial.begin(9600);

  // Inisialisasi pin trigger sebagai output
  pinMode(TRIGGER_PIN, OUTPUT);

  // Inisialisasi pin echo sebagai input
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Mengirim pulsa trigger
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Menghitung waktu yang dibutuhkan oleh pulsa untuk mencapai target dan kembali
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Menghitung jarak dengan menggunakan kecepatan suara
  int distance = (duration / 2) * 0.034;

  // Menampilkan jarak pada serial monitor
  Serial.print("Jarak: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Menunggu 1 detik sebelum membaca jarak selanjutnya
  delay(1000);
}
