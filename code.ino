#include <Wire.h>

#define PCA1_ADDR 0x40
#define PCA2_ADDR 0x41

#define SDA_PIN 33
#define SCL_PIN 35

void writeReg(uint8_t devAddr, uint8_t regAddr, uint8_t value) {
  Wire.beginTransmission(devAddr);
  Wire.write(regAddr);
  Wire.write(value);
  Wire.endTransmission();
}

void initPCA9685(uint8_t devAddr) {
  writeReg(devAddr, 0x00, 0x10);
  writeReg(devAddr, 0xFE, 0x79);
  writeReg(devAddr, 0x00, 0x00);
  delay(5);
  writeReg(devAddr, 0x00, 0xA1);
}

void setPWM(uint8_t devAddr, uint8_t channel, uint16_t onTime, uint16_t offTime) {
  Wire.beginTransmission(devAddr);
  Wire.write(0x06 + (channel * 4));
  Wire.write((uint8_t)(onTime & 0xFF));
  Wire.write((uint8_t)(onTime >> 8));
  Wire.write((uint8_t)(offTime & 0xFF));
  Wire.write((uint8_t)(offTime >> 8));
  Wire.endTransmission();
}

void driveMotor(uint8_t motorIndex, int16_t speed) {
  uint8_t devAddr = (motorIndex < 8) ? PCA1_ADDR : PCA2_ADDR;
  uint8_t baseChan = (motorIndex % 8) * 2;
  
  if (speed > 4095) speed = 4095;
  if (speed < -4095) speed = -4095;

  if (speed >= 0) {
    setPWM(devAddr, baseChan, 0, speed);
    setPWM(devAddr, baseChan + 1, 4096, 0);
  } else {
    setPWM(devAddr, baseChan, 4096, 0);
    setPWM(devAddr, baseChan + 1, 0, -speed);
  }
}

void setServoAngle(uint8_t pinIndex, uint16_t angle) {
  uint8_t devAddr = (pinIndex < 16) ? PCA1_ADDR : PCA2_ADDR;
  uint8_t channel = pinIndex % 16;

  if (angle > 180) angle = 180;

  uint16_t offTime = 150 + ((angle * 450) / 180);
  setPWM(devAddr, channel, 0, offTime);
}

void processCommand(String input) {
  input.trim();
  if (input.length() == 0) return;

  char cmdType = input.charAt(0);
  int firstSpace = input.indexOf(' ');
  if (firstSpace == -1) return;

  int idx = input.substring(1, firstSpace).toInt();
  int val = input.substring(firstSpace + 1).toInt();

  if (cmdType == 'm' || cmdType == 'M') {
    driveMotor(idx, val);
    Serial.print("Motor ");
    Serial.print(idx);
    Serial.print(" speed set to: ");
    Serial.println(val);
  } 
  else if (cmdType == 's' || cmdType == 'S') {
    setServoAngle(idx, val);
    Serial.print("Servo Pin ");
    Serial.print(idx);
    Serial.print(" angle set to: ");
    Serial.println(val);
  }
}

void setup() {
  Serial.begin(115200);
  delay(1000);
  Wire.begin(SDA_PIN, SCL_PIN, 400000);
  initPCA9685(PCA1_ADDR);
  initPCA9685(PCA2_ADDR);
  Serial.println("System Ready. Commands: 'm[index] [speed]' or 's[pin] [angle]'");
}

void loop() {
  if (Serial.available() > 0) {
    String inputString = Serial.readStringUntil('\n');
    processCommand(inputString);
  }
}
