#define CamPin 10
uint8_t commandIn;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  pinMode(CamPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0)
  {
    commandIn = Serial.read();
    switch (commandIn)
    {
      case 'a':
        {
          digitalWrite(CamPin, HIGH);   // turn the LED on (HIGH is the voltage level)
          delay(250);                       // wait for a second
          digitalWrite(CamPin, LOW);    // turn the LED off by making the voltage LOW
          delay(250);
          break;
        }
      case 'b':
        {
          for (int i = 0 ; i < 3; i++)
          {
            digitalWrite(CamPin, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(250);                       // wait for a second
            digitalWrite(CamPin, LOW);    // turn the LED off by making the voltage LOW
            delay(250);
          }
          break;
        }
      case 'c':
        {
          for (int i = 0 ; i < 5; i++)
          {
            digitalWrite(CamPin, HIGH);   // turn the LED on (HIGH is the voltage level)
            delay(250);                       // wait for a second
            digitalWrite(CamPin, LOW);    // turn the LED off by making the voltage LOW
            delay(250);
          }
          break;
        }
    }
  }
}
