// Global Variables.
int state = 0, motorPins[] = {8, 9, 10 ,11};

/*
 *  This function moves the car forward.
 */
void forward()
{
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}

/*
 * The function move the car backward.
 */
void backward()
{
  digitalWrite(motorPins[0], LOW);
  digitalWrite(motorPins[1], HIGH);
  digitalWrite(motorPins[2], LOW);
  digitalWrite(motorPins[3], HIGH);
}

/*
 * This function moves the car left.
 */
void left()
{
  digitalWrite(motorPins[0], LOW);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], HIGH);
  digitalWrite(motorPins[3], LOW);
}

/*
 * This function moves the car right.
 */
void right()
{
  digitalWrite(motorPins[0], HIGH);
  digitalWrite(motorPins[1], LOW);
  digitalWrite(motorPins[2], LOW);
  digitalWrite(motorPins[3], LOW);
}

void setup()
{
  // Setting up the serial monitor.
  Serial.begin(9600);

  // Setting the motor pins to output.
  for(int i = 8; i <= 11; i++){
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  // Check if we have any data to process.  
  if(Serial.available() > 0)
  {

    // Reading the data.
    state = Serial.read();

    // Take action acording to the ASCII value recieved. 
    if(state == 'F'){
      forward();
    }
    else if(state == 'B'){
      backward();
    }
    else if(state == 'L'){
      left();
    }
    else if(state == 'R'){
      right();
    }

    // Stop all the motors if no input is given by the user.
    if(state == 'S'){
      Serial.println(state);  
      for(int i = 0; i < 4; i++)
      {
        digitalWrite(motorPins[i], LOW);  
      }   
    }
  }
}
