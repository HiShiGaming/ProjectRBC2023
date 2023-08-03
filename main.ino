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
            MaxpwmValue = pwmValue_0();
            Serial.println(MaxpwmValue);
            break;
        case 'S':
            MaxpwmValue = pwmValue_28();
            Serial.println(MaxpwmValue);
            break;
        case 'D':
            MaxpwmValue = pwmValue_56();
            Serial.println(MaxpwmValue);
            break;
        case 'F':
            MaxpwmValue = pwmValue_84();
            Serial.println(MaxpwmValue);
            break;
        case 'G':
            MaxpwmValue = pwmValue_112();
            Serial.println(MaxpwmValue);
            break;
        case 'H':
            MaxpwmValue = pwmValue_140();
            Serial.println(MaxpwmValue);
            break;
        case 'J':
            MaxpwmValue = pwmValue_168();
            Serial.println(MaxpwmValue);
            break;
        case 'K':
            MaxpwmValue = pwmValue_196();
            Serial.println(MaxpwmValue);
            break;
        case 'L':
            MaxpwmValue = pwmValue_224();
            Serial.println(MaxpwmValue);
            break;
        case 'M':
            MaxpwmValue = pwmValue_255();
            Serial.println(MaxpwmValue);
            break;
        //***************************************************//
        case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'Q'
          while (pwmValue<MaxpwmValue)
          {
            delay(50);
            pwmValue+=1;
            up();
            Serial.println(pwmValue);
          }
          break;
        case 'W':
          while (pwmValue<MaxpwmValue)
          {
            delay(50);
            pwmValue+=1;
            back();
            Serial.println(pwmValue);
          }
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
    if (receivedChar =='Q' && pwmValue<MaxpwmValue)
    {
        delay(50);
        pwmValue+=1;
        up();
        Serial.println(pwmValue);
    }
    if (receivedChar== 'W' && pwmValue<MaxpwmValue)
    {
        delay(50);
        pwmValue+=1;
        back();
        Serial.println(pwmValue);
    }
      
    switch (receivedChar) 
    {
        case 'A':
            MaxpwmValue = pwmValue_0();
            Serial.println(MaxpwmValue);
            break;
        case 'S':
            MaxpwmValue = pwmValue_28();
            Serial.println(MaxpwmValue);
            break;
        case 'D':
            MaxpwmValue = pwmValue_56();
            Serial.println(MaxpwmValue);
            break;
        case 'F':
            MaxpwmValue = pwmValue_84();
            Serial.println(MaxpwmValue);
            break;
        case 'G':
            MaxpwmValue = pwmValue_112();
            Serial.println(MaxpwmValue);
            break;
        case 'H':
            MaxpwmValue = pwmValue_140();
            Serial.println(MaxpwmValue);
            break;
        case 'J':
            MaxpwmValue = pwmValue_168();
            Serial.println(MaxpwmValue);
            break;
        case 'K':
            MaxpwmValue = pwmValue_196();
            Serial.println(MaxpwmValue);
            break;
        case 'L':
            MaxpwmValue = pwmValue_224();
            Serial.println(MaxpwmValue);
            break;
        case 'M':
            MaxpwmValue = pwmValue_255();
            Serial.println(MaxpwmValue);
            break;
        //***************************************************//
        //case 'Q':
          // Xử lý cho trường hợp nhận được ký tự 'Q'

          /*while (pwmValue<MaxpwmValue)
          {
            delay(50);
            pwmValue+=1;
            up();
            Serial.println(pwmValue);
          }
          break;
          
        case 'W':
          while (pwmValue<MaxpwmValue)
          {
            delay(50);
            pwmValue+=1;
            back();
            Serial.println(pwmValue);
          }
          break;
          */
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
  }
  else 
  {
      dung();
      pwmValue=dung();
      stopservo();
      Serial.println("Vui long ket noi Bluetooth va thu lai !");
  }
}
