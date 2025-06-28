// Define sensor pins
const int flameSensorPin = 2;
const int waterSensorPin = 3;
const int vibrationSensorPin = 4;

// Variables to store sensor states
int flameState = HIGH;
int waterState = LOW;
int vibrationState = LOW;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  
  // Set up the sensor pins as input
  pinMode(flameSensorPin, INPUT);
  pinMode(waterSensorPin, INPUT);
  pinMode(vibrationSensorPin, INPUT);
}

void loop() {
  // Read the states of the sensors
  flameState = digitalRead(flameSensorPin);
  waterState = digitalRead(waterSensorPin);
  vibrationState = digitalRead(vibrationSensorPin);

  // Check for fire
  if (flameState == LOW) {
    Serial.println("Fire detected!");
    delay(5000); // Avoid spamming messages
  }

  // Check for flood
  if (waterState == HIGH) {
    Serial.println("Flood detected!");
    delay(5000); // Avoid spamming messages
  }

  // Check for earthquake
  if (vibrationState == HIGH) {
    Serial.println("Earthquake detected!");
    delay(5000); // Avoid spamming messages
  }

  // Small delay to stabilize sensor readings
  delay(100);
}
