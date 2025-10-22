int led_rojo = 13;
int led_verde = 12;


void setup() 
{
  pinMode(led_rojo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(led_rojo, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(500);
  digitalWrite(led_verde, LOW);
  delay(500);
  digitalWrite(led_rojo, LOW);
  delay(500);
  

}
