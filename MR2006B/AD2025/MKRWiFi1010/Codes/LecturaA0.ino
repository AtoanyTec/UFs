const int pinAnalogico = A0;   // Pin analógico a leer
const float referenciaV = 3.3; // Voltaje de referencia del MKR (3.3 V)
const int resolucionBits = 12; // Resolución deseada (MKR SAMD21 soporta 12 bits)

void setup() 
{
  Serial.begin(9600);
  while (!Serial) ;                     // espera puerto serie
  analogReadResolution(resolucionBits); // fijar resolución a 12 bits (0..4095)
  Serial.println("Lectura analogica A0");
}

void loop() {

  // Leer valor analógico (0 - 4096)
  int ValorLeido = analogRead(pinAnalogico);

  Serial.println(ValorLeido);
}
