#define IR_SENSOR_PIN 5    // Define the pin to which the IR sensor is connected
#define RELAY_PIN 2        // Define the pin to which the relay is connected

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);
  Serial.begin(9600); // Initialize serial communication for debugging
}

void loop() {
  int obstacleValue = digitalRead(IR_SENSOR_PIN);

  if (obstacleValue == LOW) {
    // Obstacle detected, turn on relay
    digitalWrite(RELAY_PIN, HIGH);
    delay(5000);  // Adjust the delay as needed
    Serial.println("Obstacle detected"); // Print message for debugging
  } else {
    // No obstacle, turn off relay
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("No obstacle detected"); // Print message for debugging
  }

  // Add a delay to avoid rapid switching due to sensor noise
  delay(100);  // Adjust the delay as needed
}
