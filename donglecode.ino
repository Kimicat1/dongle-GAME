#define G1  P14
#define G2  P15
#define G3  P16
#define G4  P17
#define S1 P34
#define S2  P33

void setup() {
pinMode(G1,OUTPUT);
pinMode(G2,OUTPUT);
pinMode(G3,OUTPUT);
pinMode(G4,OUTPUT);
pinMode(S1,OUTPUT);
pinMode(S2,OUTPUT);
}

void loop() {
  digitalWrite(G1, HIGH);
  delay(50); 
  digitalWrite(G2, HIGH);                     
  digitalWrite(G1, LOW);   
  delay(50);       
  digitalWrite(G3, HIGH);               
  digitalWrite(G2, LOW);
  delay(50);      
  digitalWrite(G4, HIGH);                
  digitalWrite(G3, LOW);   
  delay(50);                      
  digitalWrite(G4, LOW);   

 delay(100);

 digitalWrite(S1, HIGH);
 delay(10);
 digitalWrite(S1, LOW);
 delay(10); 
 digitalWrite(S2, HIGH);
 delay(10);
 digitalWrite(S2, LOW);
 delay(10);
  digitalWrite(S1, HIGH);
  delay(10);
  digitalWrite(S1, LOW);
  delay(10); 
 digitalWrite(S2, HIGH);
  delay(10);
  digitalWrite(S2, LOW);
   delay(10);
   digitalWrite(S1, HIGH);
   delay(10);
   digitalWrite(S1, LOW);
   delay(10); 
   digitalWrite(S2, HIGH);
   delay(10);
   digitalWrite(S2, LOW);
    delay(10);
    digitalWrite(S1, HIGH);
    delay(10);
    digitalWrite(S1, LOW);
    delay(10); 
    digitalWrite(S2, HIGH);
    delay(10);
    digitalWrite(S2, LOW);
}
