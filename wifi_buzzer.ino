// Include the necessary libraries
//#include <WiFi.h>

// Define the pin connections
#define PIR_PIN 13   // PIR motion sensor pin
#define BUZZER_PIN 12 // Buzzer pin

// Define the WiFi credentials
//const char* ssid = "haris";
//const char* password = "12345678";

// Initialize the WiFi client
//WiFiClient client;

void setup() {
  Serial.begin(115200);
  // Set the pin modes
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}
  // Connect to WiFi network
//  WiFi.begin(ssid, password);
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(1000);
//    Serial.println("Connecting to WiFi...");
//  }
//  Serial.println("Connected to WiFi");
//
//  // Print the ESP32 IP address
//  Serial.println(WiFi.localIP());
//}

void loop() {
  // Read the PIR motion sensor value
  int pir_value = digitalRead(PIR_PIN);

  // Check if motion is detected
  if (pir_value == HIGH) {
    Serial.println("Motion detected!");
    Serial.println(pir_value);

    // Turn on the buzzer
    digitalWrite(BUZZER_PIN, HIGH);

    // Wait for 1 second
    delay(100);

    // Turn off the buzzer
    digitalWrite(BUZZER_PIN, LOW);
  }
  
  // Wait for 100 milliseconds before checking again
//  delay(100);
}
