// Define relay pins
int pump1Pin = 16;
int pump2Pin = 17;
int pump3Pin = 18;
int pump4Pin = 19;

void setup() {
  // Set relay pins as output
  pinMode(pump1Pin, OUTPUT);
  pinMode(pump2Pin, OUTPUT);
  pinMode(pump3Pin, OUTPUT);
  pinMode(pump4Pin, OUTPUT);
  
  // Start the serial communication
  Serial.begin(115200);
  Serial.println("Starting automatic pump test...");
  
  // Make sure all pumps are OFF at start
  digitalWrite(pump1Pin, HIGH); // HIGH = OFF for active LOW relay
  digitalWrite(pump2Pin, HIGH);
  digitalWrite(pump3Pin, HIGH);
  digitalWrite(pump4Pin, HIGH);
}

void loop() {
  // Test Pump 1
  Serial.println("Testing Pump 1...");
  digitalWrite(pump1Pin, LOW);  // ON
  delay(3000);
  digitalWrite(pump1Pin, HIGH); // OFF
  delay(1000);

  // Test Pump 2
  Serial.println("Testing Pump 2...");
  digitalWrite(pump2Pin, LOW);  // ON
  delay(3000);
  digitalWrite(pump2Pin, HIGH); // OFF
  delay(1000);

  // Test Pump 3
  Serial.println("Testing Pump 3...");
  digitalWrite(pump3Pin, LOW);  // ON
  delay(3000);
  digitalWrite(pump3Pin, HIGH); // OFF
  delay(1000);

  // Test Pump 4
  Serial.println("Testing Pump 4...");
  digitalWrite(pump4Pin, LOW);  // ON
  delay(3000);
  digitalWrite(pump4Pin, HIGH); // OFF
  delay(1000);
}
