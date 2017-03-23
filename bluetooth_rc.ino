int state = 0;
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
      digitalWrite(8, HIGH);
      digitalWrite(9, LOW);
    }
    else if(state == 'B')
    {
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
    }
    else if(state != 'L')
    {
            digitalWrite(8, LOW);
            digitalWrite(9, LOW);
            digitalWrite(10, LOW);
            digitalWrite(11, LOW);   
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
