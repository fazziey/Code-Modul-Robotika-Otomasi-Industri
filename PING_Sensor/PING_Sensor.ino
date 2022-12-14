#define pinPing 8
int durasiPulsa;
int cm;
unsigned long TimeLast = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned long TimeNow = millis();
  pinMode(pinPing, OUTPUT);
  digitalWrite(pinPing, LOW);
  delayMicroseconds(5);
  digitalWrite(pinPing, HIGH);
  delayMicroseconds(5);
  digitalWrite(pinPing, LOW);
  pinMode(pinPing, INPUT);
  durasiPulsa = pulseIn(pinPing, HIGH);
  cm = (durasiPulsa * 0.0343) / 2;
  if (TimeNow - TimeLast >= 250 || TimeLast == 0) {
    Serial.print(cm);
    Serial.println(" cm");
    TimeLast = TimeNow;
  }
}
