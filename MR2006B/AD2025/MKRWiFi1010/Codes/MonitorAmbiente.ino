#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

// Paleta de colores
const uint16_t BG      = ST77XX_BLACK;
const uint16_t FG      = ST77XX_WHITE;
const uint16_t ACCENT2 = ST77XX_ORANGE; // Temperatura
const uint16_t ACCENT1 = ST77XX_CYAN;   // Humedad
const uint16_t ACCENT3 = ST77XX_GREEN;  // Presión
const uint16_t CARD    = ST77XX_BLUE;

// Tamaño base de pantalla
int SCREEN_W = 240, SCREEN_H = 240;

// Escala de reducción (20%)
const float SCALE = 0.8;

// Márgenes y geometría
int M, CARD_W, CARD_H, GAP;
struct ValueArea { int x, y, w, h; };
ValueArea areaTemp, areaHum, areaPres;

// Prototipos
void drawFrame();
void drawCard(int x, int y, int w, int h, uint16_t outline, const char *title, uint16_t titleColor);
void clearValueBox(const ValueArea &a);
void printValue(int x, int y, float v, uint8_t decimals, const char *unit, uint16_t color);
void printCentered(int cx, int cy, const char* text, uint8_t size, uint16_t color);

void setup() {
  Serial.begin(9600);
  delay(1500);

  CARRIER_CASE = true;
  carrier.begin();

  SCREEN_W = carrier.display.width();
  SCREEN_H = carrier.display.height();

  // --- Dimensiones reducidas al 80% ---
  int uiWidth  = SCREEN_W  * SCALE;
  int uiHeight = SCREEN_H * SCALE;

  // Centrar la interfaz en la pantalla
  int offsetX = (SCREEN_W - uiWidth) / 2;
  int offsetY = (SCREEN_H - uiHeight) / 2;

  // Márgenes proporcionales
  M = offsetX + 8;
  GAP = 6;
  CARD_W = uiWidth - 2 * 8;
  CARD_H = (uiHeight - (M + GAP * 2 + 56)) / 3;

  // Áreas de valor ajustadas
  areaTemp = { M + 8,         offsetY + 56 + 22,        CARD_W - 16, 28 };
  areaHum  = { M + 8,         offsetY + 56 + CARD_H + GAP + 22,     CARD_W - 16, 28 };
  areaPres = { M + 8,         offsetY + 56 + 2 * (CARD_H + GAP) + 22, CARD_W - 16, 28 };

  drawFrame();
}

void loop() {
  float t    = carrier.Env.readTemperature(); // °C
  float h    = carrier.Env.readHumidity();    // %
  float pres = carrier.Pressure.readPressure();    // hPa

  clearValueBox(areaTemp);
  clearValueBox(areaHum);
  clearValueBox(areaPres);

  printValue(areaTemp.x, areaTemp.y, t,    1, "°C",  ACCENT2);
  printValue(areaHum.x,  areaHum.y,  h,    1, "%",   ACCENT1);
  printValue(areaPres.x, areaPres.y, pres, 1, "hPa", ACCENT3);

  delay(600);
}

// ================== UI ==================
void drawFrame() {
  auto &d = carrier.display;
  d.fillScreen(BG);

  // Encabezado
  printCentered(SCREEN_W / 2, 30, "MKR IoT Carrier", 2, FG);
  printCentered(SCREEN_W / 2, 52, "Lecturas",        2, FG);

  int startY = 70;
  int x = M;
  int y = startY;
  drawCard(x, y, CARD_W, CARD_H, ACCENT2, "Temperatura", ACCENT2);
  y += CARD_H + GAP;
  drawCard(x, y, CARD_W, CARD_H, ACCENT1, "Humedad",     ACCENT1);
  y += CARD_H + GAP;
  drawCard(x, y, CARD_W, CARD_H, ACCENT3, "Presion",     ACCENT3);
}

void drawCard(int x, int y, int w, int h, uint16_t outline, const char *title, uint16_t titleColor) {
  auto &d = carrier.display;
  d.fillRoundRect(x, y, w, h, 8, CARD);
  d.drawRoundRect(x, y, w, h, 8, outline);
  d.drawFastHLine(x + 6, y + 14, w - 12, outline);

  d.setTextWrap(false);
  d.setTextColor(titleColor);
  d.setTextSize(1);
  d.setCursor(x + 10, y + 3);
  d.print(title);
}

void clearValueBox(const ValueArea &a) {
  carrier.display.fillRect(a.x, a.y, a.w, a.h, CARD);
}

void printValue(int x, int y, float v, uint8_t decimals, const char *unit, uint16_t color) {
  auto &d = carrier.display;
  d.setTextWrap(false);
  d.setTextColor(color);

  d.setTextSize(2); // tamaño reducido
  d.setCursor(x, y);
  d.print(v, decimals);

  d.setTextSize(1);
  int16_t cx = d.getCursorX();
  int16_t cy = d.getCursorY();
  d.setCursor(cx + 4, cy - 4);
  d.print(unit);
}

void printCentered(int cx, int cy, const char* text, uint8_t size, uint16_t color) {
  auto &d = carrier.display;
  uint16_t charW = 6 * size;
  uint16_t charH = 8 * size;
  uint16_t len = strlen(text);
  uint16_t w = charW * len;
  uint16_t h = charH;
  d.setTextColor(color);
  d.setTextWrap(false);
  d.setTextSize(size);
  d.setCursor(cx - w / 2, cy - h / 2);
  d.print(text);
}
