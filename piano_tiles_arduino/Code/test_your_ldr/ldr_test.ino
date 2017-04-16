void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("LDR1 Reading: ");
  Serial.print(analogRead(A0));
  Serial.print(", LDR2 Reading: ");
  Serial.print(analogRead(A1));
  Serial.print(", LDR3 Reading: ");
  Serial.print(analogRead(A2));
  Serial.print(", LDR4 Reading: ");
  Serial.println(analogRead(A3));
}
