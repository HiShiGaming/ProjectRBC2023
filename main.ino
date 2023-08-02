// Thư viên bluetooth và động cơ Servo
#include <ESP32_Servo.h>
#include "BluetoothSerial.h"
#include "Functions.h"

void loop() 
{
  // Kiểm tra có thiết bị nào kết nối với Bluetooth hay không
  if (SerialBT.hasClient()) 
  {
    // Kiểm tra ký tự điều khiển
    if (Serial.available()) 
    {
    char receivedChar = Serial.read();
    switch (receivedChar) 
      {
        case 'A':
            MaxpwmValue = 0;
            Serial.println(MaxpwmValue);
            break;
        case 'S':
            MaxpwmValue = 28;
            Serial.println(MaxpwmValue);
            break;
        case 'D':
            MaxpwmValue = 56;
            Serial.println(MaxpwmValue);
            break;
        case 'F':
            MaxpwmValue = 84;
            Serial.println(MaxpwmValue);
            break;
        case 'G':
            MaxpwmValue = 112;
            Serial.println(MaxpwmValue);
            break;
        case 'H':
            MaxpwmValue = 140;
            Serial.println(MaxpwmValue);
            break;
        case 'J':
            MaxpwmValue = 168;
            Serial.println(MaxpwmValue);
            break;
        case 'K':
            MaxpwmValue = 196;
            Serial.println(MaxpwmValue);
            break;
        case 'L':
            MaxpwmValue = 224;
            Serial.println(MaxpwmValue);
            break;
        case 'M':
            MaxpwmValue = 255;
            Serial.println(MaxpwmValue);
            break;
        //***************************************************//
        case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'Q'
          Serial.println("Tien");
          val=(valplus(val));
          up(pwmValue,MaxpwmValue,val);
          pwmValue=up(pwmValue,MaxpwmValue,val);
          Serial.println(pwmValue);
          break;
        case 'W':
          // Xử lý cho trường hợp nhận được ký tự 'W'
          Serial.println("Lui");
          val=(valplus(val));
          back(pwmValue,MaxpwmValue,val);
          pwmValue=back(pwmValue,MaxpwmValue,val);
          Serial.println(pwmValue);
          break;
        case 'E':
          // Xử lý cho trường hợp nhận được ký tự 'E'
          Serial.println("Dung");
          dung();
          pwmValue=(dung());
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
        //****************************************************//
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
    if (SerialBT.available()) 
    {
    char receivedChar = SerialBT.read();
    switch (receivedChar) 
      {
        case 'A':
            MaxpwmValue = 0;
            Serial.println(MaxpwmValue);
            break;
        case 'S':
            MaxpwmValue = 28;
            Serial.println(MaxpwmValue);
            break;
        case 'D':
            MaxpwmValue = 56;
            Serial.println(MaxpwmValue);
            break;
        case 'F':
            MaxpwmValue = 84;
            Serial.println(MaxpwmValue);
            break;
        case 'G':
            MaxpwmValue = 112;
            Serial.println(MaxpwmValue);
            break;
        case 'H':
            MaxpwmValue = 140;
            Serial.println(MaxpwmValue);
            break;
        case 'J':
            MaxpwmValue = 168;
            Serial.println(MaxpwmValue);
            break;
        case 'K':
            MaxpwmValue = 196;
            Serial.println(MaxpwmValue);
            break;
        case 'L':
            MaxpwmValue = 224;
            Serial.println(MaxpwmValue);
            break;
        case 'M':
            MaxpwmValue = 255;
            Serial.println(MaxpwmValue);
            break;
        //***************************************************//
        case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'Q'
          Serial.println("Tien");
          val=(valplus(val));
          up(pwmValue,MaxpwmValue,val);
          pwmValue=up(pwmValue,MaxpwmValue,val);
          Serial.println(pwmValue);
          break;
        case 'W':
          // Xử lý cho trường hợp nhận được ký tự 'W'
          Serial.println("Lui");
          val=(valplus(val));
          back(pwmValue,MaxpwmValue,val);
          pwmValue=back(pwmValue,MaxpwmValue,val);
          Serial.println(pwmValue);
          break;
        case 'E':
          // Xử lý cho trường hợp nhận được ký tự 'E'
          Serial.println("Dung");
          dung();
          pwmValue=(dung());
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
        //****************************************************//
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
  else 
    {
      dung();
      pwmValue=dung();
      stopservo();
      Serial.println("Vui long ket noi Bluetooth va thu lai !");
    }
  }
}
