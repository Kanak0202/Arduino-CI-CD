// Simple Blink Sketch
#define LED_PIN 13  // Change to LED_BUILTIN if your board supports it

void setup() {
    pinMode(LED_PIN, OUTPUT); // Set LED pin as an output
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Turn LED on
    delay(1000); // Wait for 1 second
    digitalWrite(LED_PIN, LOW); // Turn LED off
    delay(1000); // Wait for 1 second
}
