#include <Keypad.h>

// --- Configuración del teclado ---
const byte FILAS = 4;      // Número de filas
const byte COLUMNAS = 4;   // Número de columnas

// Mapa del teclado
char teclas[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Pines conectados a las filas y columnas del teclado
// ✅ Elegidos para no interferir con WiFi, I2C o SPI
byte pinesFilas[FILAS] = {2, 3, 4, 5};      // Pines digitales para las filas
byte pinesColumnas[COLUMNAS] = {6, 7, 8, 9}; // Pines digitales para las columnas

// Crear el objeto Keypad
Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLUMNAS);

void setup() {
  Serial.begin(9600);
  while (!Serial); // Espera que el puerto serie esté listo (importante en MKR)
  Serial.println("=== Lector de Teclado Matricial - MKR WiFi 1010 ===");
  Serial.println("Presiona una tecla...");
}

void loop() {
  char tecla = teclado.getKey();  // Lee la tecla presionada

  if (tecla) {  // Si se presionó una tecla
    Serial.print("Tecla presionada: ");
    Serial.println(tecla);
  }
}
