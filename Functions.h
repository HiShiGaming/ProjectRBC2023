#include "declaretions.h"

void up() 
{
  //fast(pwmValue,MaxpwmValue,val);
  analogWrite(Motor1Pin1, pwmValue);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, pwmValue);
  //return fast(pwmValue,MaxpwmValue,val);
  return;
}

void back() 
{
  //fast(pwmValue,MaxpwmValue,val);
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, pwmValue);
  analogWrite(Motor2Pin1, pwmValue);
  analogWrite(Motor2Pin2, LOW);
  //return fast(pwmValue,MaxpwmValue,val);
  return;
}

unsigned char  dung() 
{
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, LOW);
  return pwmValue=0,val=0;
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
unsigned char pwmValue_0() {
  return  MaxpwmValue = 0;
}
unsigned char pwmValue_28() {
  return  MaxpwmValue = 28;
}
unsigned char pwmValue_56() {
  return  MaxpwmValue = 56;
}
unsigned char pwmValue_84() {
  return  MaxpwmValue = 84;
}
unsigned char pwmValue_112() {
  return  MaxpwmValue = 112;
}
unsigned char pwmValue_140() {
  return  MaxpwmValue = 140;
}
unsigned char pwmValue_168() {
  return  MaxpwmValue = 168;
}
unsigned char pwmValue_196() {
  return  MaxpwmValue = 196;
}
unsigned char pwmValue_224() {
  return  MaxpwmValue = 224;
}
unsigned char pwmValue_255() {
  return  MaxpwmValue = 255;
}

void gia_toc_up(unsigned char MaxpwmValue)
{ 
  if (pwmValue>=MaxpwmValue)
  { pwmValue=MaxpwmValue;
    up();
    Serial.println(pwmValue);
    return;
  }
  else
  {
    for(pwmValue;pwmValue<=MaxpwmValue;pwmValue+=1)
    {
      Serial.println(pwmValue);
      //delay(100);
      up();
      if (pwmValue==MaxpwmValue)
      {
        break;
      }
    }
  }
  return;
}

void gia_toc_back(unsigned char MaxpwmValue)
{ 
  if (pwmValue>=MaxpwmValue)
  { 
    pwmValue=MaxpwmValue;
    back();
    //Serial.println(pwmValue);
    return;
  }
  else
  {
    for(pwmValue;pwmValue<=MaxpwmValue;pwmValue+=1)
    {
      //Serial.println(pwmValue);
      //delay(100);
      back();
      if(pwmValue==MaxpwmValue)
      {
        break;
      }
    }
  }
  return ;
}

void test(char receivedChar, unsigned char MaxpwmValue)
{
  if(receivedChar == 'Q')
  { 
    if (pwmValue>=MaxpwmValue)
    {
      pwmValue=MaxpwmValue;
      up();
      Serial.println(pwmValue);
    }
    else
    {
    pwmValue+=1;
    up();
    Serial.println(pwmValue);
    }
  }
}

