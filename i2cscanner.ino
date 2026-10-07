#include <Wire.h>

#define SDA_PIN 33
#define SCL_PIN 35

void checkDevice(uint8_t addr) {
  Wire.beginTransmission(addr);
  uint8_t error = Wire.endTransmission();

  if (error == 0) {
    Serial.print("0x");
    if (addr < 16) Serial.print("0");
    Serial.print(addr, HEX);
    Serial.print(": ");

    if (addr == 0x40) Serial.println("PCA9685 PWM Controller #1");
    else if (addr == 0x41) Serial.println("PCA9685 PWM Controller #2");
    else if (addr == 0x70) Serial.println("PCA9685 All-Call Address");
    else Serial.println("Unknown Device");
  }
}

void verifyRegisters(uint8_t addr) {
  Wire.beginTransmission(addr);
  Wire.write(0x00);
  if (Wire.endTransmission() != 0) return;

  Wire.requestFrom(addr, (uint8_t)1);
  if (Wire.available()) {
    uint8_t mode1 = Wire.read();
    Serial.print(" -> Mode1 Register (0x00): 0x");
    if (mode1 < 16) Serial.print("0");
    Serial.println(mode1, HEX);
  }
}

void setup() {
  Serial.begin(115200);
  while (!Serial);
  
  Wire.begin(SDA_PIN, SCL_PIN, 100000);
  Serial.println("Scanning 100kHz...");
  for (uint8_t addr = 1; addr < 127; addr++) {
    checkDevice(addr);
  }

  Wire.setClock(400000);
  Serial.println("\nScanning 400kHz...");
  for (uint8_t addr = 1; addr < 127; addr++) {
    checkDevice(addr);
  }

  Serial.println("\nReading Active Configurations:");
  verifyRegisters(0x40);
  verifyRegisters(0x41);
}

void loop() {
}
