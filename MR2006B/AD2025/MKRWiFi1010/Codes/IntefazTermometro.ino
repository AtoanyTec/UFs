#include <Arduino_MKRIoTCarrier.h>

MKRIoTCarrier carrier;

// --- Colores UI ---
const uint16_t BG     = ST77XX_BLUE;
const uint16_t FG     = ST77XX_WHITE;
const uint16_t ACCENT = ST77XX_RED;   // Mercurio

// --- Resolución ---
const int SCREEN_W = 240;
const int SCREEN_H = 240;

// --- Rango de temperatura (para escala) ---
const float TEMP_MIN = 0.0;
const float TEMP_MAX = 50.0;

// --- Márgenes y layout ---
const int TITLE_Y = 32; // posición del título

// Termómetro (izquierda, reducido a ~50%)
const int TH_CENTER_X = 80;             // centrado visualmente a la izquierda
const int TH_CENTER_Y = SCREEN_H / 2 + 8;
const int BULB_R      = 12;             // antes 24 → reducido a la mitad
const int TUBE_W      = 8;              // antes 16
const int TUBE_H      = 55;             // antes 110 → mitad
const int TUBE_TOP    = TH_CENTER_Y - BULB_R - TUBE_H + 4;

// Caja del número (lado derecho)
const int NUM_W = 128;
const int NUM_H = 80;
const int NUM_X = SCREEN_W - 20 - NUM_W / 2;
const int NUM_Y = (SCREEN_H - NUM_H) / 2;

// Animación
float displayTemp = 22.0;
const float EASING = 0.18;
uint32_t lastFrameMs = 0;
const uint16_t FRAME_DT = 40; // 25 FPS

// --- Prototipos ---
void drawStaticUI();
void drawThermometerFrame();
void drawMercury(float tC);
void drawNumeric(float tC);
float clampf(float v, float vmin, float vmax);
float getTemperature(); // demo

void setup() {
  Serial.begin(115200);
  delay(1000);

  CARRIER_CASE = true;
  carrier.begin();

  carrier.display.setRotation(0);
  carrier.display.fillScreen(BG);

  drawStaticUI();
}

void loop() {
  float targetTemp = getTemperature();

  if (millis() - lastFrameMs >= FRAME_DT) {
    lastFrameMs = millis();

    // Suavizado hacia la temperatura objetivo
    displayTemp += (targetTemp - displayTemp) * EASING;

    // Capas dinámicas
    drawMercury(displayTemp);
    drawNumeric(displayTemp);
  }
}

/* =============================
 *  UI ESTÁTICA
 * ============================= */
void drawStaticUI() {
  // Título centrado
  carrier.display.setTextColor(FG);
  carrier.display.setTextSize(2);
  carrier.display.setTextWrap(false);

  String titulo = "Temperatura";
  int16_t x1, y1; uint16_t w, h;
  carrier.display.getTextBounds(titulo, 0, 0, &x1, &y1, &w, &h);
  carrier.display.setCursor((SCREEN_W - w) / 2, TITLE_Y);
  carrier.display.print(titulo);

  // Separador
  carrier.display.drawFastHLine(16, TITLE_Y + 18, SCREEN_W - 32, FG);

  // Termómetro reducido
  drawThermometerFrame();

  // Unidad °C al lado del número
  carrier.display.setTextSize(2);
  carrier.display.setCursor(NUM_X + (NUM_W / 2) - 14, NUM_Y + NUM_H / 2 - 8);
  carrier.display.print("C");
}

/* Dibuja el icono del termómetro (versión reducida) */
void drawThermometerFrame() {
  // Bulbo
  carrier.display.fillCircle(TH_CENTER_X, TH_CENTER_Y, BULB_R, FG);
  carrier.display.fillCircle(TH_CENTER_X, TH_CENTER_Y, BULB_R - 2, BG);

  // Tubo
  const int tubeX0 = TH_CENTER_X - (TUBE_W / 2);
  const int tubeY0 = TUBE_TOP;
  carrier.display.fillRoundRect(tubeX0 - 2, tubeY0 - 2, TUBE_W + 4, TUBE_H + 4, 3, FG);
  carrier.display.fillRoundRect(tubeX0, tubeY0, TUBE_W, TUBE_H, 2, BG);

  // Marcas de referencia (cada 10°C)
  for (int i = 0; i <= 5; i++) {
    int y = TUBE_TOP + (TUBE_H * i) / 5;
    carrier.display.drawFastHLine(tubeX0 + TUBE_W + 5, y, 8, FG);
  }

  // Brillo del bulbo
  carrier.display.fillCircle(TH_CENTER_X - 4, TH_CENTER_Y - 4, 3, FG);
  carrier.display.fillCircle(TH_CENTER_X - 4, TH_CENTER_Y - 4, 2, BG);
}

/* Mercurio animado */
void drawMercury(float tC) {
  tC = clampf(tC, TEMP_MIN, TEMP_MAX);
  float k = (tC - TEMP_MIN) / (TEMP_MAX - TEMP_MIN); // 0..1
  int hMerc = (int)(k * (TUBE_H - 4));

  const int tubeX0 = TH_CENTER_X - (TUBE_W / 2);
  const int tubeY0 = TUBE_TOP;

  // Limpia el tubo
  carrier.display.fillRoundRect(tubeX0, tubeY0, TUBE_W, TUBE_H, 2, BG);

  // Mercurio
  int mercY = tubeY0 + (TUBE_H - hMerc);
  carrier.display.fillRoundRect(tubeX0 + 1, mercY, TUBE_W - 2, hMerc, 2, ACCENT);

  // Bulbo
  carrier.display.fillCircle(TH_CENTER_X, TH_CENTER_Y, BULB_R - 4, ACCENT);
}

/* Número grande (centrado en su caja) */
void drawNumeric(float tC) {
  carrier.display.fillRect(NUM_X - (NUM_W / 2), NUM_Y, NUM_W, NUM_H, BG);
  carrier.display.setTextColor(FG);
  carrier.display.setTextSize(4);

  String s = String(clampf(tC, -99.9, 199.9), 1);
  int16_t x1, y1; uint16_t w, h;
  carrier.display.getTextBounds(s, 0, 0, &x1, &y1, &w, &h);

  int textX = NUM_X - (w / 2) - 10; // pequeño ajuste para la "C"
  int textY = NUM_Y + (NUM_H / 2) - (h / 2);

  carrier.display.setCursor(textX, textY);
  carrier.display.print(s);
}

/* Utilidades */
float clampf(float v, float vmin, float vmax) {
  if (v < vmin) return vmin;
  if (v > vmax) return vmax;
  return v;
}

/* Simulación de temperatura */
float getTemperature() {
  static float a = 0.0;
  a += 0.05;
  return 26.0 + 6.0 * sin(a * 0.7);
}
