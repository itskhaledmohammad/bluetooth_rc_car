int state = 0;
int motorPins[] = {8, 9, 10 ,11};
void forward()
{
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}
void backward()
{
  digitalWrite(motorPins[0], LOW);
  digitalWrite(motorPins[1], HIGH);
  digitalWrite(motorPins[2], LOW);
  digitalWrite(motorPins[3], HIGH);
}
void left()
{
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}
void right()
{
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}
void headLight(int switchState)
{   
}

void setup()
{
  Serial.begin(9600);
  for(int i = 8; i <= 11; i++){
    pinMode(i, OUTPUT);
  }
}
void loop()
{
  
  if(Serial.available() > 0)
  {
    state = Serial.read();
    if(state == 'F')
    {
      forward();
    }
    else if(state == 'B')
    {
      backward();
    }
    else if(state == 'L')
    {
      left();
    }
    else if(state == 'R')
    {
      right();
    }
    if(state == 'S')
    {
      Serial.println(state);  
      for(int i = 0; i < 4; i++)
      {
        digitalWrite(motorPins[i], LOW);  
      }   
    }
  }

  /*
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW); */

}
