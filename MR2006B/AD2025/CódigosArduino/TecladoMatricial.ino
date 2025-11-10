#include <Keypad.h>

// --- Configuración del teclado ---
const byte FILAS = 4;  // número de filas
const byte COLUMNAS = 4; // número de columnas

// Definición de las teclas del teclado matricial
char teclas[FILAS][COLUMNAS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Pines conectados a las filas y columnas del teclado
byte pinesFilas[FILAS] = {9, 8, 7, 6};      // Cambia según tu conexión
byte pinesColumnas[COLUMNAS] = {5, 4, 3, 2}; // Cambia según tu conexión

// Crear el objeto Keypad
Keypad teclado = Keypad(makeKeymap(teclas), pinesFilas, pinesColumnas, FILAS, COLUMNAS);

void setup() {
  Serial.begin(9600);
  Serial.println("=== Lector de Teclado Matricial ===");
}

void loop() {
  // Lee la tecla presionada
  char tecla = teclado.getKey();

  // Si se presionó una tecla, la muestra
  if (tecla) {
    Serial.print("Tecla presionada: ");
    Serial.println(tecla);
  }
}
