#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

void setup() {
  Serial.begin(9600);
  delay(1500);

  // Si usas el case del IoT Carrier, habilita la rotación correcta
  CARRIER_CASE = true;

  // Inicializa el Carrier (pantalla, sensores, etc.)
  carrier.begin();

  // --- Configuración del Display ---
  carrier.display.fillScreen(ST77XX_BLUE);    // Fondo azul
  carrier.display.setTextColor(ST77XX_WHITE); // Letras blancas
  carrier.display.setTextSize(3);             // Tamaño del texto
  carrier.display.setTextWrap(false);         // No dividir líneas automáticamente

  // Ajustar posición del texto (x, y)
  carrier.display.setCursor(40, 120);
  carrier.display.print("Hola Mundo");

  float valor = 123.4432;
  carrier.display.setCursor(40, 150);
  carrier.display.print(valor, 2);
}

void loop() {
  
}
