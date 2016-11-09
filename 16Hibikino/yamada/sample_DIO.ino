/*
 Make LSI 2016 １bit全加算器
 Digital2:Ain Digital3:Bin Digital4:Cin
 Digital12:Sout  Digital13:Cout に接続
 
 */

void setup() {
  Serial.begin(9600);
  
}


void loop() {

    pinMode(2,OUTPUT);
    pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
    Serial.println("===================================");  
    Serial.println("Ain    Bin    Cin    Sout    Cout"); 
     
 int i;
  for(i=0;i<8;i++){
    
switch (i) {
  case 0:
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    break;

  case 1:
    digitalWrite(2, LOW);
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH);
    break;
    
  case 2:
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    break;
    
  case 3:
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    break;
    
  case 4:
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    break;
    
  case 5:
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    break;
    
  case 6:
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    break;

   case 7:
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    break;
    
}
    

  Serial.print(digitalRead(2));
  Serial.print("\t");  
  Serial.print(digitalRead(3));
  Serial.print("\t");  
  Serial.print(digitalRead(4));
  Serial.print("\t");  
  Serial.print(digitalRead(12));
  Serial.print("\t");  
  Serial.println(digitalRead(13));


  }
      Serial.println("==================================="); 
      delay(10000);
}




