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

    // Structured output
    Serial.println("----- Environmental Data -----");
    
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.println("------------------------------");

    delay(2000);
}
