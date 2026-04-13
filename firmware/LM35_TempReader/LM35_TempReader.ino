int sensorPin1 = A0;
int sensorPin2 = A1;
int sensorPin3 = A2;

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
  int adcValue1 = analogRead(sensorPin1);
  int adcValue2 = analogRead(sensorPin2);
  int adcValue3 = analogRead(sensorPin3);

  float temp1 = (adcValue1 * 500.0) / 1023.0;
  float temp2 = (adcValue2 * 500.0) / 1023.0;
  float temp3 = (adcValue3 * 500.0) / 1023.0;

  Serial.print("{\"temp1\":");
  Serial.print(temp1);
  Serial.print(",\"temp2\":");
  Serial.print(temp2);
  Serial.print(",\"temp3\":");
  Serial.print(temp3);
  Serial.println("}");

  delay(1000);
}