#include <Servo.h>

Servo miservo;
int e_y = A1;
int e_x = A0;
int angulo;
int position_x;
int laser = 8;

void setup () {
  miservo.attach(9);
  pinMode(A1,INPUT);
  Serial.begin(9600);


  pinMode(laser, OUTPUT);
  digitalWrite(laser, HIGH);
 
  
}

void loop() {
  /*miservo.write(90);
  delay(200);
  miservo.write(0);
  delay(200);
  miservo.write(90);
  delay(200);
  miservo.write(0);
  delay(200);*/
  //-------------------
  //digitalWrite(laser,LOW);
  
  //--------------------
  position_x = analogRead(A0);
  angulo = map(position_x,0,1024,0,180);
  miservo.write(angulo);
  Serial.print(angulo);
  //Serial.print(position_x);
  Serial.print("\n");
  delay(100);
  

}
