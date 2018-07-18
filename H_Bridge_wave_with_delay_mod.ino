 int n =  0;
void setup() {
 
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(8,OUTPUT);   
    pinMode(7,OUTPUT);
}

void loop() {
 
  if(n==0)
  {
    
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delayMicroseconds(3);
     
    n++;
  }
  else if(n==1)
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delay(14);
     
    n++;
  }
  else if(n==2)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delayMicroseconds(6);
   
    n++;
  }
  else if(n==3)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,HIGH);
    delay(14);  
    
    n++;
  }
  else if(n==4)
  {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    delayMicroseconds(6);
   
    n=1;
  }
}
