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

    // Delay between readings (DHT11 requires ~1 second interval)
    delay(2000);

    // Read humidity
    float humidity = dht.readHumidity();

    // Read temperature in Celsius
    float temperature = dht.readTemperature();


    // Validate readings
    if (isnan(humidity) || isnan(temperature)) {
        Serial.println("Error: Failed to read from DHT11 sensor.");
        return;
    }

    // TODO 10:
    // Print formatted temperature and humidity values

    // TODO 11:
    // Add a 2-second delay before next reading
}
