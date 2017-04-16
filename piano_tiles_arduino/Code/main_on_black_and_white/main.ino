void setup()
{
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW); 
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW); 
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW); 
  
}

int delay1 = 80;
int delay2 = 75;

int count =0;
void loop()
{
  count = count +1;
  if(count==25)//as the speed increases approx after 25,if that is noticed at different level change this value accordingly
  {
    delay1 = 70;
    delay2 = 75;
  }
 
  if(analogRead(A3)<700) // if black ,activating touch
  {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
    
  }
  else if(analogRead(A2)<700)
  {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
  }
  else if(analogRead(A1)<700)
  {
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
  }
  else if(analogRead(A0)<700)
  {
    digitalWrite(3, HIGH);
    delay(delay2);
    digitalWrite(3, LOW);
    delay(delay1);
  }
  delay(10);
}
