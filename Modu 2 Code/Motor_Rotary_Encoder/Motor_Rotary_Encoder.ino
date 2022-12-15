// Deklarasi pin
const int encoderPinA = 2, encoderPinB = 3, InA = 4, InB = 5, speedMotor = 6;

// Variabel encoder
long valRotary, lastRotary;
long encoderPos = 0;

// Variabel millis
unsigned long Time = 0;

void setup() {
  Serial.begin(9600);
  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);
  pinMode(InA, OUTPUT);
  pinMode(InB, OUTPUT);
  pinMode(speedMotor, OUTPUT);
  attachInterrupt(0, doEncoder, CHANGE); // Interrupt
}

void loop() {
  // Motor berputar searah jarum jam
  digitalWrite(InA, HIGH); // Logic Pin
  digitalWrite(InB, LOW); // Logic Pin
  analogWrite(speedMotor, 255); // 0 - 255
  delay(10);
}

// Fungsi encoder
void doEncoder() {
  if (digitalRead(encoderPinA) == digitalRead(encoderPinB)) {
    encoderPos++;
  } else {
    encoderPos--;
  }
  valRotary = encoderPos / 2.5;
  if (millis() - Time >= 100 || Time == 0) {
    Time = millis();
    if (valRotary > lastRotary)
    {
      Serial.print(valRotary);
      Serial.println("  CW");
    }
    if (valRotary < lastRotary)  {
      Serial.print(valRotary);
      Serial.println("  CCW");
    }
    lastRotary = valRotary;
  }
}
