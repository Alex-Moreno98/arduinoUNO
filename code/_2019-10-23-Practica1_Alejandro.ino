
//Practica 1

void setup() 
{
  pinMode(13, OUTPUT);
}

void loop() 
{
  allON();
  delay(1000);
  allOFF();
  delay(1000);                       
}

void allON()
{
  digitalWrite(3,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(A3,HIGH);
  digitalWrite(9,HIGH);    
}

void allOFF()
{
  digitalWrite(3,LOW);
  digitalWrite(7,LOW);
  digitalWrite(A3,LOW);
  digitalWrite(9,LOW);    
}
