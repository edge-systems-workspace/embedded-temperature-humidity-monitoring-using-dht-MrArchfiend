#include <Arduino.h>
#include <DHT.h>

// Define sensor pin and type
#define DHTPIN 2
#define DHTTYPE DHT11

// Create DHT sensor object
DHT dht(DHTPIN, DHTTYPE);

void setup() {

    Serial.begin(9600);
    dht.begin();

    Serial.println("======================================");
    Serial.println(" DHT11 Temperature & Humidity Monitor ");
    Serial.println("======================================");
}
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
