#include "declaretions.h"
int valplus(int val)
{
  if (val<20)
  {
    val+=1;
  }
  return val;
}
int valminus(int val)
{
  if (val>0)
  {
    val-=1;
  }
  return val;
}
void tang_toc(unsigned char pwmValue,unsigned char MaxpwmValue)
{
  if (pwmValue<=MaxpwmValue)
  {
    for (unsigned char pwmValue;pwmValue<=MaxpwmValue;pwmValue+=(MaxpwmValue / 10),delay(600)) 
      {
      Serial.println(pwmValue);
      }
  }
}
void giam_toc(unsigned char pwmValue)
{
  if (pwmValue>=0)
  {
    for (unsigned char pwmValue;pwmValue>=0;pwmValue-=(MaxpwmValue / 10),delay(600)) 
      {
      Serial.println(pwmValue);
      }
  }
}
int fast(unsigned char pwmValue,int MaxpwnValue,int val)
{ 
  if (pwmValue>MaxpwmValue)
  {
    pwmValue=MaxpwmValue;
  }
  if (pwmValue<MaxpwmValue)
  {
    pwmValue=map(val,0,20,0,MaxpwmValue);
  }
  return pwmValue;
}
int slow(unsigned char pwmValue,unsigned char MaxpwmValue,int val)
{ 
  if (pwmValue>0)
  {
    pwmValue=map(val,0,20,0,MaxpwmValue);
  }
  return pwmValue;
}
int up(unsigned char pwmValue,unsigned char MaxpwmValue,int val) 
{
  fast(pwmValue,MaxpwmValue,val);
  analogWrite(Motor1Pin1, pwmValue);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, pwmValue);
  return fast(pwmValue,MaxpwmValue,val);
}

int back(unsigned char pwmValue,unsigned char MaxpwmValue,int val) 
{
  fast(pwmValue,MaxpwmValue,val);
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, pwmValue);
  analogWrite(Motor2Pin1, pwmValue);
  analogWrite(Motor2Pin2, LOW);
  return fast(pwmValue,MaxpwmValue,val);
}

unsigned char  dung() 
{
  analogWrite(Motor1Pin1, LOW);
  analogWrite(Motor1Pin2, LOW);
  analogWrite(Motor2Pin1, LOW);
  analogWrite(Motor2Pin2, LOW);
  return pwmValue=0;
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

