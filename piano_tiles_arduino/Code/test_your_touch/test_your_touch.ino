void setup()
{
  Serial.begin(9600);

  pinMode(3,OUTPUT);
  digitalWrite(3,LOW); 
  pinMode(4,OUTPUT);
  digitalWrite(4,LOW); 
  pinMode(5,OUTPUT);
  digitalWrite(5,LOW); 
  pinMode(6,OUTPUT);
  digitalWrite(6,LOW); 
  
}

int delay1 = 400;
int delay2 = 400;

void loop()
{
    Serial.println("Simulating touch for 1");
    digitalWrite(3, HIGH);
    delay(delay2);
    digitalWrite(3, LOW);
    delay(delay1);

    Serial.println("Simulating touch for 2");
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);

    Serial.println("Simulating touch for 3");
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);

    Serial.println("Simulating touch for 4");
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
}
