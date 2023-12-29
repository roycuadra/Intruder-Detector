#define IR_SENSOR_PIN 2    // Define the pin to which the IR sensor is connected
#define RELAY_PIN 0        // Define the pin to which the relay is connected

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
}

void loop() {
  int obstacleValue = digitalRead(IR_SENSOR_PIN);

  if (obstacleValue == LOW) {
    // Obstacle detected, turn on relay
    digitalWrite(RELAY_PIN, HIGH);
    delay(5000);  // Delay for 5 seconds
  } else {
    // No obstacle, turn off relay
    digitalWrite(RELAY_PIN, LOW);
  }

  // Add a delay to avoid rapid switching due to sensor noise
  delay(100);  // Adjust the delay as needed
}
