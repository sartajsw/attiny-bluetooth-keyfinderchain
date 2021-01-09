const int buttonPin = 12;
int buttonState = 1;

void setup() 
{
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  //digitalWrite(buttonPin, HIGH);
}

void loop()
{
/*
 if(BTSerial.available() > 0)
 { 
    // Checks whether data is comming from the serial port
    state = BTSerial.read(); // Reads the data from the serial port
 }
*/
 // Controlling the LED
 buttonState = digitalRead(buttonPin);
 Serial.println(buttonState);
/*
 if (state == '1') 
 {
  digitalWrite(ledPin, HIGH); // LED ON
  state = 0;
 }
 else if (state == '0') 
 {
  digitalWrite(ledPin, LOW); // LED ON
  state = 0;
 }
*/
}
