
int LED1 = 13;
int LED2 = 12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(6,INPUT);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 if (digitalRead(6) == HIGH) 
 {   
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    Serial.println("Active");

  }

  else 
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    Serial.println("Inactive");

  }

}
