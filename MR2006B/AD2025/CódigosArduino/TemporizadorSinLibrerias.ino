int led_rojo = 13;

unsigned long tiempoAnterior = 0;
const unsigned long intervalo = 1000;  // 1 segundo

bool estadoLED = false;

void setup() 
{
  pinMode(led_rojo, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  unsigned long tiempoActual = millis();
  
  Serial.print("Tiempo Actual: ");
  Serial.println(tiempoActual);
  
  if (tiempoActual - tiempoAnterior >= intervalo) 
  {
    Serial.print("Intervalo: ");
    Serial.print(tiempoActual - tiempoAnterior);
    Serial.println(" milisegundos");
    tiempoAnterior = tiempoActual;
    
    estadoLED = !estadoLED;
    digitalWrite(led_rojo, estadoLED);
    
    // Puedes añadir más código aquí que se ejecutará simultáneamente
  }
  
  // Otras tareas se ejecutan aquí sin ser bloqueadas
}
