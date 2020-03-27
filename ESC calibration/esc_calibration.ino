/*This code is used to initilize and control the BLDC
 * basic servo library is used in the code
 *Vamsi krishna  
 */

#include <Servo.h>//Using servo library to control ESC
Servo esc;//Creating a servo class with name as esc

void setup()
{
  esc.attach(9);//Specify the esc signal pin,Here as D9
  esc.writeMicroseconds(2000);//initialize the signal to 1000
  delay(3000);
  esc.writeMicroseconds(1000);
  delay(2000);
  Serial.begin(57600);
}

void loop()
{
  esc.writeMicroseconds(1500); // write any value between 1000 to 2000. 
}
