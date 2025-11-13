// Ejemplo: PWM al 85% en el MKR WiFi 1010

const int pwmPin = 2;      // Usa un pin con PWM (revisa que tenga el símbolo ~ en la serigrafía)
const int dutyPercent = 85;

void setup() {
  pinMode(pwmPin, OUTPUT);

  // En placas SAMD (como MKR WiFi 1010) la resolución por defecto de analogWrite es 8 bits (0–255)
  const int maxValue = 255;
  
  // Calculamos el valor para ~85% de ciclo de trabajo
  int dutyValue = (maxValue * dutyPercent) / 100; // ≈ 216 (84.7%)
  // Si quieres acercarte más al 85%, puedes usar 217 directamente:
  // int dutyValue = 217;

  analogWrite(pwmPin, dutyValue);  // Genera la PWM fija al 85% aprox.
}

void loop() {
  // No es necesario hacer nada aquí; la PWM se mantiene automáticamente
}
