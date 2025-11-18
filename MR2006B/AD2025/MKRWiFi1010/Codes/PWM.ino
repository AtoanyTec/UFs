// PWM cruda en MKR WiFi 1010 usando TCC0 (sin librerías externas)
// Salida: pin D4
// Frecuencia aproximada: 10 kHz
// Ciclo de trabajo: 85 %
// Atoany Fierro

#include "wiring_private.h"   // Para g_APinDescription y registros SAMD21

// Parámetros de la señal PWM
const uint8_t  PWM_PIN   = 4;        // Pin digital D4 en el MKR WiFi 1010
const float    PWM_FREQ  = 10000.0;  // Frecuencia deseada (Hz)
const float    DUTY      = 0.85;     // 85 % de ciclo de trabajo

void configureGCLKForTCC0() {
  // Usamos el generador de reloj GCLK5 con fuente DFLL48M (48 MHz)
  // y lo conectamos a TCC0/TCC1

  // 1) Divisor del generador de reloj 5 → división 1 (sin dividir)
  GCLK->GENDIV.reg = GCLK_GENDIV_ID(5) |  // ID = 5 (GCLK5)
                     GCLK_GENDIV_DIV(1);  // Divisor = 1
  while (GCLK->STATUS.bit.SYNCBUSY);      // Esperar sincronización

  // 2) Configurar GCLK5: fuente DFLL48M, habilitar, duty mejorado
  GCLK->GENCTRL.reg = GCLK_GENCTRL_ID(5) |         // GCLK5
                      GCLK_GENCTRL_SRC_DFLL48M |   // Fuente 48 MHz
                      GCLK_GENCTRL_IDC |           // Improve Duty Cycle
                      GCLK_GENCTRL_GENEN;          // Habilitar generador
  while (GCLK->STATUS.bit.SYNCBUSY);              // Esperar sincronización

  // 3) Enrutar GCLK5 hacia TCC0 y TCC1
  GCLK->CLKCTRL.reg = GCLK_CLKCTRL_ID_TCC0_TCC1 |  // Reloj para TCC0/TCC1
                      GCLK_CLKCTRL_GEN_GCLK5 |     // Usar GCLK5
                      GCLK_CLKCTRL_CLKEN;          // Habilitar
  while (GCLK->STATUS.bit.SYNCBUSY);              // Esperar sincronización
}

void configurePWMPin() {
  // Configurar el pin D4 para que en lugar de ser GPIO,
  // esté conectado al periférico TCC0 (función F).

  uint8_t port = g_APinDescription[PWM_PIN].ulPort;
  uint8_t pin  = g_APinDescription[PWM_PIN].ulPin;

  // Habilitar el multiplexor del pin
  PORT->Group[port].PINCFG[pin].bit.PMUXEN = 1;

  // Cada par de pines comparte un registro PMUX (pin par → PMUXE, impar → PMUXO)
  if (pin & 1) {
    // Pin impar → nibble alto (O) → usar función F
    PORT->Group[port].PMUX[pin >> 1].reg |= PORT_PMUX_PMUXO_F;
  } else {
    // Pin par → nibble bajo (E) → usar función F
    PORT->Group[port].PMUX[pin >> 1].reg |= PORT_PMUX_PMUXE_F;
  }
}

void configureTCC0() {
  const uint32_t GCLK_FREQ = 48000000UL; // 48 MHz del DFLL

  // Calcular el periodo para la frecuencia deseada:
  // f_PWM = f_clk / (prescaler * (PER + 1))
  // Usamos prescaler = 1 → PER = f_clk / f_PWM - 1
  uint32_t period = (uint32_t)( (GCLK_FREQ / PWM_FREQ) - 1 );

  // Asegurarnos de que TCC0 está apagado antes de configurarlo
  TCC0->CTRLA.bit.ENABLE = 0;
  while (TCC0->SYNCBUSY.bit.ENABLE);

  // Modo de onda: NPWM (Normal PWM, single-slope)
  TCC0->WAVE.reg = TCC_WAVE_WAVEGEN_NPWM;
  while (TCC0->SYNCBUSY.bit.WAVE);

  // Establecer el periodo (TOP)
  TCC0->PER.reg = period;
  while (TCC0->SYNCBUSY.bit.PER);

  // Establecer el ciclo de trabajo en el canal 0 (CC0 → WO[0] y WO[4])
  // D4 es WO[4], así que usamos CC0.
  uint32_t ccValue = (uint32_t)((period + 1) * DUTY);  // aprox. 85 %
  if (ccValue > period) ccValue = period;

  TCC0->CC[0].reg = ccValue;
  while (TCC0->SYNCBUSY.bit.CC0);

  // Prescaler = 1, habilitar TCC0
  TCC0->CTRLA.reg |= TCC_CTRLA_PRESCALER_DIV1 | TCC_CTRLA_ENABLE;
  while (TCC0->SYNCBUSY.bit.ENABLE);
}

void setup() {
  // No uses analogWrite() en el mismo pin: interferiría con esta configuración.

  configureGCLKForTCC0(); // Configura GCLK5 a 48 MHz hacia TCC0/TCC1
  configurePWMPin();      // Asocia D4 al TCC0/WO[4] (función F)
  configureTCC0();        // Configura frecuencia y duty
}

void loop() {
  // La PWM se mantiene automáticamente por hardware.
  // Aquí podrías, por ejemplo, cambiar el duty en tiempo real
  // ajustando TCC0->CC[0].reg y esperando SYNCBUSY.bit.CC0.
}
