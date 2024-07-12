#include <Servo.h>

int potenciometro=A5;
int rangoP;
int rangoS;

Servo miservo;


void setup()
{
	miservo.attach(2);
 	pinMode(potenciometro, INPUT);
  	Serial.begin(9600);
}

void loop()
{
  	rangoP=analogRead(potenciometro);
  	rangoS=map(rangoP, 0, 1023, 0, 180);
  	Serial.println(rangoS);
	miservo.write(rangoS);
  	delay(100);
 
}
