// ESP32 Power Activation Firmware

unsigned long startTime;

void setup() {
  pinMode(2, OUTPUT);     // Internal LED (usually GPIO 2)
  Serial.begin(115200);

  startTime = millis();

  Serial.println("Energy detected. System starting...");

  // Blink 3 times on startup
  for(int i = 0; i < 3; i++) {
    digitalWrite(2, HIGH);
    delay(200);
    digitalWrite(2, LOW);
    delay(200);
  }
}

void loop() {
  unsigned long currentTime = millis();
  unsigned long uptime = (currentTime - startTime) / 1000;

  Serial.print("Active for: ");
  Serial.print(uptime);
  Serial.println(" seconds");

  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(900);
}
