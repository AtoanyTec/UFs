const int LM35 = A0;
float TensionA0;
 
void setup() 
{
 Serial.begin(9600); 
} 
 
void loop() {
  TensionA0 = analogRead(LM35);
  Serial.println(TensionA0);
  delay(200);
}
