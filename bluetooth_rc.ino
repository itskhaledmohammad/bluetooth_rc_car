void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
void loop()
{
  /*
  if(Serial.available() > 0)
  {
    state = Serial.read();
    if(state == 70)
    {
      digitalWrite(8, HIGH);   
    }
    else if(state == 66)
    {
      digitalWrite(8, LOW);  
    }
    if(state != 83)
    {
          Serial.println(state);  
    }
  }*/
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);  

}
