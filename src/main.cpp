#include <Arduino.h>

// Define sensor pin and type
#define DHTPIN 2
#define DHTTYPE DHT11

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

#include <DHT.h>

Serial.begin(9600);
    dht.begin();

    Serial.println("======================================");
    Serial.println(" DHT11 Temperature & Humidity Monitor ");
    Serial.println("======================================");

void setup() {

    // TODO 4:
    // Initialize Serial communication (9600 baud rate)

    // TODO 5:
    // Initialize the DHT sensor

    // TODO 6:
    // Print a system initialization message
}

void loop() {

    // TODO 7:
    // Read humidity value from sensor

    // TODO 8:
    // Read temperature value from sensor

    // TODO 9:
    // Check if either reading failed using isnan()
    // If failed, print error message and return

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
