// ESP32 GPIO 40 Blink Sketch
// For ESP32 variants that expose GPIO 40 (for example, ESP32-S3).
// Connect LED anode to GPIO 40 through a 220-330 ohm resistor,
// and LED cathode to GND.

#define LED_PIN 40

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(1000);

  digitalWrite(LED_PIN, LOW);
  delay(1000);
}
