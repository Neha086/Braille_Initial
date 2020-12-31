#include <CapacitiveSensor.h>
 
CapacitiveSensor sensor1 = CapacitiveSensor(4,5); // sets 4 as send pin and 5 as receive pin
CapacitiveSensor sensor2 = CapacitiveSensor(6,7); // sets 6 as send pin and 7 as receive pin
 
void setup()                    
{
  Serial.begin(9600);
}
 
void loop()                    
{
  long total1 =  sensor1.capacitiveSensor(30);
  long total2 =  sensor2.capacitiveSensor(30);
  long thresh = 50;
  bool a,b;

  
  if(total1>thresh){
    Serial.print('a');
    Serial.print('\n');
    digitalWrite(8,HIGH);
  }
  if(total2>thresh){
    Serial.print('b');
    Serial.print('\n');
    digitalWrite(9,HIGH);
  }
  delay(10);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
