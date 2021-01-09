//this is slave

#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11);

int state = 0;
const int led = 13;
//const int button = 2;
//int buttonstate = 1;

void setup() 
{
  Serial.begin(9600);
  BTSerial.begin(38400);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH);
  //pinMode(button, INPUT);
  //digitalWrite(button, HIGH);
}
void loop() 
{
 if(BTSerial.available() > 0)
 { 
    // Checks whether data is comming from the serial port
    Serial.println("Reading...");
    state = BTSerial.read(); // Reads the data from the serial port
 }
 
 /* // Reading the button
 buttonstate = digitalRead(button);
 if (buttonstate == LOW) 
 {
   BTSerial.write('1'); // Sends '1' to the master to turn on LED
 }
 else
 {
   BTSerial.write('0');
 }  
*/
  if (state == '1') 
 {
  Serial.println(1);
  digitalWrite(led, HIGH); // LED ON
  state = 0;
 }
 else if (state == '0') 
 {
  Serial.println(0);
  digitalWrite(led, LOW); // LED ON
  state = 0;
 }
}
