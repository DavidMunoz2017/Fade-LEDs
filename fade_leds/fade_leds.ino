/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
 const int A = A1 ;          // donar nom al pin 4 de l’Arduino
 const int led0 = 3;          // donar nom al pin 5 de l’Arduino
 const int led1 = 5;          // donar nom al pin 6 de l’Arduino
 const int led2 = 6;          // donar nom al pin 7 de l’Arduino
 const int led3 = 9;          // donar nom al pin 8 de l’Arduino
 const int led4 = 10;          // donar nom al pin 9 de l’Arduino
 const int led5 = 11;         // donar nom al pin 10 de l’Arduino
 
 int velocitat = 500;         // velocitat de l'acció en ms


 
 
  

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 10 com una sortida
  
  
  pinMode(A, INPUT);     // definir el pin 5 com una sortida
 
}
//********** Loop *****************************************************************
void loop()
{
  if ( digitalRead(A ) == 1) 
  {
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
  delay(velocitat);          // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 5);    // posar PWM del pin 3 a 125
  analogWrite(led1, 0);    // posar PWM del pin 5 a 125
  analogWrite(led2, 0);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 15);    // posar PWM del pin 3 a 255
  analogWrite(led1, 35);    // posar PWM del pin 5 a 255
  analogWrite(led2, 0);    // posar PWM del pin 6 a 255
  analogWrite(led3, 0);    // posar PWM del pin 9 a 255
  analogWrite(led4, 0);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 105);    // posar PWM del pin 3 a 125
  analogWrite(led1, 70);    // posar PWM del pin 5 a 125
  analogWrite(led2, 35);    // posar PWM del pin 6 a 125
  analogWrite(led3, 0);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 140);    // posar PWM del pin 3 a 125
  analogWrite(led1, 105);    // posar PWM del pin 5 a 125
  analogWrite(led2, 70);    // posar PWM del pin 6 a 125
  analogWrite(led3, 35);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat
  
  analogWrite(led0, 175);    // posar PWM del pin 3 a 125
  analogWrite(led1, 140);    // posar PWM del pin 5 a 125
  analogWrite(led2, 105);    // posar PWM del pin 6 a 125
  analogWrite(led3, 70);    // posar PWM del pin 9 a 125
  analogWrite(led4, 35);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 175);    // posar PWM del pin 5 a 125
  analogWrite(led2, 140);    // posar PWM del pin 6 a 125
  analogWrite(led3, 105);    // posar PWM del pin 9 a 125
  analogWrite(led4, 70);    // posar PWM del pin 10 a 125
  analogWrite(led5, 35);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 210);    // posar PWM del pin 5 a 125
  analogWrite(led2, 175);    // posar PWM del pin 6 a 125
  analogWrite(led3, 140);    // posar PWM del pin 9 a 125
  analogWrite(led4, 105);    // posar PWM del pin 10 a 125
  analogWrite(led5, 70);    // posar PWM del pin 11 a 125
  
  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 210);    // posar PWM del pin 5 a 125
  analogWrite(led2, 210);    // posar PWM del pin 6 a 125
  analogWrite(led3, 175);    // posar PWM del pin 9 a 125
  analogWrite(led4, 140);    // posar PWM del pin 10 a 125
  analogWrite(led5, 105);    // posar PWM del pin 11 a 125

  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 210);    // posar PWM del pin 5 a 125
  analogWrite(led2, 210);    // posar PWM del pin 6 a 125
  analogWrite(led3, 210);    // posar PWM del pin 9 a 125
  analogWrite(led4, 175);    // posar PWM del pin 10 a 125
  analogWrite(led5, 140);    // posar PWM del pin 11 a 125

  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 210);    // posar PWM del pin 5 a 125
  analogWrite(led2, 210);    // posar PWM del pin 6 a 125
  analogWrite(led3, 210);    // posar PWM del pin 9 a 125
  analogWrite(led4, 210);    // posar PWM del pin 10 a 125
  analogWrite(led5, 175);    // posar PWM del pin 11 a 125

  delay(velocitat);           // es queden leds velocitat ms en aquest estat

  analogWrite(led0, 210);    // posar PWM del pin 3 a 125
  analogWrite(led1, 210);    // posar PWM del pin 5 a 125
  analogWrite(led2, 210);    // posar PWM del pin 6 a 125
  analogWrite(led3, 210);    // posar PWM del pin 9 a 125
  analogWrite(led4, 210);    // posar PWM del pin 10 a 125
  analogWrite(led5, 210);    // posar PWM del pin 11 a 125
}
}
//********** Funcions *************************************************************

  
    


