int state = 0;
int motorPins[] = {8, 9, 10 ,11};
void forward()
{
}
void backward()
{
}
void left()
{
}
void right()
{
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
      digitalWrite(motorPins[0], HIGH);
      digitalWrite(motorPins[1], LOW);
    }
    else if(state == 'B')
    {
      digitalWrite(motorPins[2], HIGH);
      digitalWrite(motorPins[3], LOW);
    }
    else if(state != 'L')
    {
      for(int i = 0; i < 4; i++)
      {
        digitalWrite(motorPins[i], LOW);  
      }   
    }
    if(state != 'S')
    {
      Serial.println(state);  
    }
  }
  /*
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW); 
  */ 

}
