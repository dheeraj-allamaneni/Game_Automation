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
  //Instead of mentioning individual posibilities as below we can solve this by using timmers(Hardware) or another extra arduino which will measure the rate of occurance of black tile(Speed)
  //and the delays are adjusted by delay1=(x+(0.02)*(delay1))/3 and delay2=(x+(0.015)*(delay2))/3
  //These delays are formulated using another arduino as timmer , in my testing it adapts itself and plays like champ at any speed.
  //In that case Communication happens btw Arduino to Arduino
  //Transmitters side ***************
  //itoa(delay1, str, 10); //Turn value into a character array
  //Serial.write(str, 4);
  //Receivers Side****************
//  if (Serial.available()) {
//    delay(100); //allows all serial sent to be received together
//    while(Serial.available() && i<4) {
//      str[i++] = Serial.read();
//    }
//    str[i++]='\0';
//  }


//If you want to see the real champ try the above method,for any help feel free to ask dheeraj-allamaneni | chsvk  @git

  if(count==25)//as the speed increases approx after 25,hence adjusting the delays accordingly
  {
    delay1 = 70;
    delay2 = 75;
  }
  if(count==65)//as the speed increases approx after 65,hence adjusting the delays accordingly
  {
    delay1 = 50;
    delay2 = 43;
  }

 //I had used different LDR's due to lack of availability ,if you are using all four similar ldr then the ldr analogue values remains same
  if(analogRead(A3)<350 && analogRead(A3)>215) // if black ,activating touch
  {
    digitalWrite(6, HIGH);
    delay(delay2);
    digitalWrite(6, LOW);
    delay(delay1);
    
  }
  else if(analogRead(A2)<110 && analogRead(A2)>75)
  {
    digitalWrite(5, HIGH);
    delay(delay2);
    digitalWrite(5, LOW);
    delay(delay1);
  }
  else if(analogRead(A1)<10 && analogRead(A1)>0)
  {
    digitalWrite(4, HIGH);
    delay(delay2);
    digitalWrite(4, LOW);
    delay(delay1);
  }
  else if(analogRead(A0)<100 && analogRead(A0)>40)
  {
    digitalWrite(3, HIGH);
    delay(delay2);
    digitalWrite(3, LOW);
    delay(delay1);
  }
  delay(10);
}
