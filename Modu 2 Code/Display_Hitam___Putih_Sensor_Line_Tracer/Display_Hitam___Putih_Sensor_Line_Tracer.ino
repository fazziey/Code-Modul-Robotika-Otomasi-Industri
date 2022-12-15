int adc_val; // variabel untuk menampung pembacaan nilai ADC dari sensor
unsigned long waktuSebelum = 0; // menampung nilai millis sebelumnya

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (millis() - waktuSebelum >= 200 || waktuSebelum == 0) {
    adc_val = analogRead(A0);
    waktuSebelum = millis();
  }
  if (adc_val >= 20 && adc_val < 30) {
    Serial.println("PUTIH");
    while (adc_val >= 20 && adc_val < 30) {
      adc_val = analogRead(A0);
    }
  }
  if (adc_val >= 35 && adc_val < 40) {
    Serial.println("HITAM");
    while (adc_val >= 35 && adc_val < 40) {
      adc_val = analogRead(A0);
    }
  }
}
