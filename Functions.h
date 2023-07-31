//Thư viện tạo hàm
#include "declaretions.h"
void up() 
{
  analogWrite(Motor1Pin1, pwmValue);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, pwmValue);
}

void back() 
{
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, pwmValue);
  analogWrite(Motor2Pin1, pwmValue);
  analogWrite(Motor2Pin2, LOW);
}

void dung() 
{
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, LOW);
}

void turnleft() 
{
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, pwmValue);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, pwmValue); 
}

void turnright() 
{
  analogWrite(Motor1Pin1, pwmValue); 
  analogWrite(Motor1Pin2, LOW); 
  analogWrite(Motor2Pin1, pwmValue); 
  analogWrite(Motor2Pin2, LOW); 
}

// Nâng cấu kiện
void nangcaukien() 
{
  analogWrite(Motor3Pin1, 255);
  analogWrite(Motor3Pin2, 0);
}
// Hạ cấu kiện
void hacaukien() 
{
  analogWrite(Motor3Pin1, 0);
  analogWrite(Motor3Pin2, 255);
}  
// Dừng chạy động cơ nâng / hạ
void stopservo() 
{
  analogWrite(Motor3Pin1, 0);
  analogWrite(Motor3Pin2, 0);
}
void ham_nang() 
{
  analogWrite(Motor3Pin1, 0);
  analogWrite(Motor3Pin2, 240);
}
void ham_ha() 
{
  analogWrite(Motor3Pin1, 240);
  analogWrite(Motor3Pin2, 0);
}
