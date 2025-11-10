#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

// Colores
const uint16_t BG      = ST77XX_BLACK;
const uint16_t FG      = ST77XX_WHITE;
const uint16_t CARD    = ST77XX_BLUE;
const uint16_t C_TEMP  = ST77XX_ORANGE;
const uint16_t C_HUM   = ST77XX_CYAN;
const uint16_t C_PRES  = ST77XX_GREEN;

// Ciclo de variables (una por pantalla)
enum Screen { S_TEMP=0, S_HUM=1, S_PRES=2 };
Screen current = S_TEMP;
const unsigned long ROTATE_MS = 2500;   // tiempo por pantalla
unsigned long lastSwitch = 0;

// Área donde se imprimen los valores (para limpiar solo ahí)
struct Area { int x,y,w,h; } valueArea;

// Utilidades
void drawFrame(Screen s);
void clearValue();
void printCentered(int cx, int cy, const char *txt, uint8_t size, uint16_t color);
void printValueBig(float v, uint8_t decimals, const char* unit, uint16_t color);

void setup() {
  Serial.begin(9600);
  delay(1500);

  CARRIER_CASE = true;
  carrier.begin();

  // Base UI
  carrier.display.fillScreen(BG);

  // Área para valor grande (centrada)
  // 240x240; dejamos encabezado arriba y pie abajo
  valueArea = { 20, 92, 200, 56 }; // ancho ~200, alto ~56 sobre una "tarjeta"

  drawFrame(current);
  lastSwitch = millis();
}

void loop() {
  // Lecturas
  float t    = carrier.Env.readTemperature(); // °C
  float h    = carrier.Env.readHumidity();    // %
  float pres = carrier.Pressure.readPressure();    // hPa

  // Rotación automática
  if (millis() - lastSwitch >= ROTATE_MS) {
    current = (Screen)((current + 1) % 3);
    drawFrame(current);           // Redibuja encabezados/colores de esa pantalla
    lastSwitch = millis();
  }

  // Actualiza solo el valor
  clearValue();
  switch (current) {
    case S_TEMP: printValueBig(t,    1, "°C",  C_TEMP); break;
    case S_HUM:  printValueBig(h,    1, "%",   C_HUM);  break;
    case S_PRES: printValueBig(pres, 1, "hPa", C_PRES); break;
  }

  // Serie para depuración
  Serial.print("T="); Serial.print(t,1);
  Serial.print("C  H="); Serial.print(h,1);
  Serial.print("%  P="); Serial.print(pres,1);
  Serial.println("kPa");

  delay(120); // refresco suave
}

// ================== Dibujo de cada pantalla ==================
void drawFrame(Screen s) {
  auto &d = carrier.display;

  // Fondo
  d.fillScreen(BG);

  // Título superior
  printCentered(120, 22, "Mediciones", 2, FG);

  // Subtítulo según variable
  const char* title = (s==S_TEMP ? "Temperatura" : s==S_HUM ? "Humedad" : "Presion");
  uint16_t col      = (s==S_TEMP ? C_TEMP : s==S_HUM ? C_HUM : C_PRES);
  printCentered(120, 44, title, 2, col);

  // Tarjeta central donde va el valor
  int x = 16, y = 70, w = 208, h = 100;
  d.fillRoundRect(x, y, w, h, 12, CARD);
  d.drawRoundRect(x, y, w, h, 12, col);
  d.drawFastHLine(x+10, y+22, w-20, col);

  // Etiqueta fija "Valor"
  d.setTextSize(1);
  d.setTextColor(col);
  d.setCursor(x + 12, y + 8);
  d.print("Valor");

  // Línea inferior con unidad grande (decorativa)
  d.drawFastHLine(24, 190, 192, col);

  // Pie: indicación de rotación
  d.setTextColor(FG);
  d.setTextSize(1);
  printCentered(120, 212, "Cambia automaticamente", 1, FG);
  printCentered(120, 226, "Cada 2.5 s", 1, FG);
}

// Limpia solo el rectángulo del valor
void clearValue() {
  carrier.display.fillRect(valueArea.x, valueArea.y, valueArea.w, valueArea.h, CARD);
}

// Imprime número grande + unidad, alineados en línea
void printValueBig(float v, uint8_t decimals, const char* unit, uint16_t color) {
  auto &d = carrier.display;

  d.setTextWrap(false);
  d.setTextColor(color);

  // Número grande
  d.setTextSize(3);
  d.setCursor(valueArea.x + 6, valueArea.y + 6);
  d.print(v, decimals);

  // Unidad a la derecha
  d.setTextSize(2);
  int16_t cx = d.getCursorX();
  int16_t cy = d.getCursorY();
  d.setCursor(cx + 6, cy - 6);
  d.print(unit);
}

// Centrado aproximado (fuente 6x8 en size=1)
void printCentered(int cx, int cy, const char *txt, uint8_t size, uint16_t color) {
  auto &d = carrier.display;
  uint16_t w = 6 * size * strlen(txt);
  uint16_t h = 8 * size;
  d.setTextColor(color);
  d.setTextSize(size);
  d.setCursor(cx - w/2, cy - h/2);
  d.print(txt);
}
