#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author Jaya
 * @date 2026-02-05
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

int ldrPin = A0;

void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
}

void loop() {
    int ldrValue = analogRead(ldrPin);
    int lightPercent = map(ldrValue, 0, 1023, 0, 100);
    Serial.print("Light :");
    Serial.println(ldrValue);
    Serial.print("Light percent:  ");
    Serial.println(lightPercent);
    delay(800);
}