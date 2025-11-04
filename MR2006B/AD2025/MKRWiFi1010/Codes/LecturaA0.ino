const int pinAnalogico = A0;   // Pin analógico a leer
const int resolucionBits = 12; // Resolución deseada (MKR SAMD21 soporta 12 bits)
const float referenciaV = 3.3; // Voltaje de referencia del MKR (3.3 V)
const int lecturasPromedio = 8; // número de lecturas para promediar (ruido)

void setup() 
{
  Serial.begin(9600);
  while (!Serial) ;                     // espera puerto serie
  analogReadResolution(resolucionBits); // fijar resolución a 12 bits (0..4095)
  Serial.println("Lectura analogica A0");
}

void loop() {
  unsigned long suma = 0;
  
  for (int i = 0; i < lecturasPromedio; ++i) 
  {
    suma += analogRead(pinAnalogico);
    delay(5); // pequeño retraso entre lecturas
  }
  
  int lecturaProm = suma / lecturasPromedio;

  int maxValor = (1 << resolucionBits) - 1; // 2^resolucion - 1 (por ejemplo 4095)
  
  float voltaje = ( (float)lecturaProm * referenciaV ) / (float)maxValor;

  Serial.print("Raw: ");
  Serial.print(lecturaProm);
  Serial.print("  / ");
  Serial.print(maxValor);
  Serial.print("   Volt: ");
  Serial.print(voltaje, 3); // 3 decimales
  Serial.println(" V");

  delay(500);
}

