#include <ESP32_Servo.h>
#include "BluetoothSerial.h"
// Khai báo chân động cơ
const int Motor1Pin1 = 12;
const int Motor1Pin2 = 23;
const int Motor2Pin1 = 33;
const int Motor2Pin2 = 32;
const int Motor3Pin1 = 4;
const int Motor3Pin2 = 16;
// 
int pwmValue = 0;
String device_name = "Robot";
BluetoothSerial SerialBT;
Servo myservo;
int pos = 0;
int servoPin = 17;
void setup() {
  // Khởi tạo các chân kết nối với động cơ là OUTPUT
  pinMode(Motor1Pin1, OUTPUT);
  pinMode(Motor1Pin2, OUTPUT);
  pinMode(Motor2Pin1, OUTPUT);
  pinMode(Motor2Pin2, OUTPUT);
  pinMode(Motor3Pin2, OUTPUT);
  pinMode(Motor3Pin2, OUTPUT);
  // Khởi tạo cổng kết nối
  Serial.begin(115200); 
  SerialBT.begin(device_name); 
  myservo.attach(servoPin); 
  myservo.write(pos);
}