void setup() {
  Serial.begin(9600);
}

void loop() {
  int adc_val = analogRead(A0);
  Serial.println(adc_val);
  delay(100);
}
