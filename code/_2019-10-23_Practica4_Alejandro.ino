
//Practica 4

void setup() 
{
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() 
{
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  //al no poner delay pasa al siguiente puerto
  digitalWrite(7, HIGH);
  delay(1000);
  digitalWrite(7, LOW);
  
  digitalWrite(A3, HIGH);
  delay(500);
  digitalWrite(A3, LOW);
  
  digitalWrite(9, HIGH);
  delay(250);
  digitalWrite(9, LOW);
  delay(1500); 
                                
}
