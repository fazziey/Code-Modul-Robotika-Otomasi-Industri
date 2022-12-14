// Tentukan pin yang terhubung dengan motor
const int motorPin1 = 2, motorPin2 = 3, motorPin3 = 4, motorPin4 = 5;

// Tentukan waktu tunda
int timeDelay = 100;

// Mulai langkah dari 0
long steps = 0;

void Print(int T){
  delay(T);
  Serial.print("Steps : ");
  Serial.println(steps);
  steps++;
}

void setup() {
  // Mengatur Komunikasi Serial
  Serial.begin(9600);
  // Atur pin motor sebagai output
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop() {
  // Langkah motor maju satu langkah
  digitalWrite(motorPin1, HIGH);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  delay(100);

  // Langkahkan motor maju selangkah lagi
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, HIGH);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, LOW);
  Print(timeDelay);

  // Langkahkan motor maju selangkah lagi
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, HIGH);
  digitalWrite(motorPin4, LOW);
  Print(timeDelay);

  // Langkahkan motor maju selangkah lagi
  digitalWrite(motorPin1, LOW);
  digitalWrite(motorPin2, LOW);
  digitalWrite(motorPin3, LOW);
  digitalWrite(motorPin4, HIGH);
  Print(timeDelay);
}
