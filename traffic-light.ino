void setup() {
  pinMode(13, OUTPUT); // Red LED
  pinMode(12, OUTPUT); // Yellow LED
  pinMode(11, OUTPUT); // Green LED
}

void loop() {
  // Red Light ON (5 seconds)
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(5000);

  // Yellow Light ON (2 seconds)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  delay(2000);

  // Green Light ON (5 seconds)
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(5000);
}
