/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mon: Mang Cam Bien - Tuan 03
 * Version: 3 kenh (A0, A1, A2) - Dinh dang JSON
 */

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  // Doc 3 cam bien (cua SV A)
  int adcValue1 = analogRead(A0);
  int adcValue2 = analogRead(A1);
  int adcValue3 = analogRead(A2);

  float temp1 = (adcValue1 * 500.0) / 1023.0;
  float temp2 = (adcValue2 * 500.0) / 1023.0;
  float temp3 = (adcValue3 * 500.0) / 1023.0;

  // Xuat JSON (cua SV B) - 3 cam bien
  Serial.print("{");
  Serial.print("\"temp1\":");
  Serial.print(temp1);
  Serial.print(",");
  Serial.print("\"temp2\":");
  Serial.print(temp2);
  Serial.print(",");
  Serial.print("\"temp3\":");
  Serial.print(temp3);
  Serial.println("}");

  delay(1000);
}