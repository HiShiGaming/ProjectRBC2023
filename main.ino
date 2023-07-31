// Thư viên bluetooth và động cơ Servo
#include <ESP32_Servo.h>
#include "BluetoothSerial.h"
#include "Functions.h"

void loop() {
  // Kiểm tra có thiết bị nào kết nối với Bluetooth hay không
  if (SerialBT.hasClient()) {
    // Kiểm tra ký tự điều khiển
    if (Serial.available()) {
    char receivedChar = SerialBT.read();
    switch (receivedChar) {
        case 'A':
            pwmValue = 0;
            Serial.println(pwmValue);
            break;
        case 'S':
            pwmValue = 28;
            Serial.println(pwmValue);
            break;
        case 'D':
            pwmValue = 56;
            Serial.println(pwmValue);
            break;
        case 'F':
            pwmValue = 84;
            Serial.println(pwmValue);
            break;
        case 'G':
            pwmValue = 112;
            Serial.println(pwmValue);
            break;
        case 'H':
            pwmValue = 140;
            Serial.println(pwmValue);
            break;
        case 'J':
            pwmValue = 168;
            Serial.println(pwmValue);
            break;
        case 'K':
            pwmValue = 196;
            break;
        case 'L':
            pwmValue = 224;
            Serial.println(pwmValue);
            break;
        case 'M':
            pwmValue = 255;
            Serial.println(pwmValue);
            break;
        case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'Q'
          Serial.println("Tien");
          up();
          break;
        case 'W':
          // Xử lý cho trường hợp nhận được ký tự 'W'
          Serial.println("Lui");
          back();
          break;
        case 'E':
          // Xử lý cho trường hợp nhận được ký tự 'E'
          Serial.println("Dung");
          dung();
          break;
        case 'R':
          // Xử lý cho trường hợp nhận được ký tự 'R'
          Serial.println("Quay trai");
          turnleft();
          break;
        case 'T':
          // Xử lý cho trường hợp nhận được ký tự 'T'
          Serial.println("Quay phai");
          turnright();
          break;
        case 'C':
          // Nâng cấu kiện
          Serial.println("nang cau kien");
          nangcaukien();
          break;
        case 'V':
          // Hạ cấu kiện
          Serial.println("ha cau kien");
          hacaukien();
          break;  
        case 'U':
        // Dùng động cơ nâng / hạ
          stopservo();
          Serial.println("dung dong co nang, ha");
          break;  
        case 'I':
          myservo.write(0); 
          Serial.println("I");
          break;  
        case 'O':
          myservo.write(90);
          Serial.println("O");
          break;  
        case 'P':
          myservo.write(180);
          Serial.println("P");
      }
    }

    // Kiểm tra giá trị của Bluetooth7
    if (SerialBT.available()) {
    char receivedChar = SerialBT.read();
    switch (receivedChar) {
        case 'A':
            pwmValue = 0;
            Serial.println(pwmValue);
            break;
        case 'S':
            pwmValue = 28;
            Serial.println(pwmValue);
            break;
        case 'D':
            pwmValue = 56;
            Serial.println(pwmValue);
            break;
        case 'F':
            pwmValue = 84;
            Serial.println(pwmValue);
            break;
        case 'G':
            pwmValue = 112;
            Serial.println(pwmValue);
            break;
        case 'H':
            pwmValue = 140;
            Serial.println(pwmValue);
            break;
        case 'J':
            pwmValue = 168;
            Serial.println(pwmValue);
            break;
        case 'K':
            pwmValue = 196;
            Serial.println(pwmValue);
            break;
        case 'L':
            pwmValue = 224;
            Serial.println(pwmValue);
            break;
        case 'M':
            pwmValue = 255;
            Serial.println(pwmValue);
            break;
        case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'F'
          Serial.println("Tien");
          up();
          break;
        case 'W':
          // Xử lý cho trường hợp nhận được ký tự 'B'
          Serial.println("Lui");
          back();
          break;
        case 'E':
          // Xử lý cho trường hợp nhận được ký tự 'S'
          Serial.println("Dung");
          dung();
          break;
        case 'R':
          // Xử lý cho trường hợp nhận được ký tự 'L'
          Serial.println("Quay trai");
          turnleft();
          break;
        case 'T':
          // Xử lý cho trường hợp nhận được ký tự 'R'
          Serial.println("Quay phai");
          turnright();
          break;
        case 'C':
          // Nâng cấu kiện
          Serial.println("nang cau kien");
          nangcaukien();
          break;  
        case 'V':
          // Hạ cấu kiện
          hacaukien();
          Serial.println("ha cau kien");
          break;  
        case 'U':
        // Dừng động cơ nâng / hạ
          stopservo();
          Serial.println("dung dong co nang, ha");
          break;  
        case 'I':
          myservo.write(0); 
          Serial.println("I");
          break;  
        case 'O':
          myservo.write(90);
          Serial.println("O");
          break;  
        case 'P':
          myservo.write(180);
          Serial.println("P");
      }
    }
 
  } else {
      dung();
      stopservo();
      Serial.println("Vui long ket noi Bluetooth va thu lai !");
    }
}