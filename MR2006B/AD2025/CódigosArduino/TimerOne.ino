#include <TimerOne.h>

const int led = 13;
const int led2 = 12;

bool estadoLED = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  
  // Inicializar timer1 cada 1,000,000 microsegundos (1 segundos)
  Timer1.initialize(1000000);
  
  // Asignar la función que se ejecutará
  Timer1.attachInterrupt(parpadearLED);
}

void parpadearLED() {
  estadoLED = !estadoLED;
  digitalWrite(led, estadoLED);
}

void loop() {
  // El loop principal está libre para otras tareas
  // El parpadeo se maneja automáticamente por el timer
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
}
