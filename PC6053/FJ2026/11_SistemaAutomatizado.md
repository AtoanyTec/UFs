# 🔌 Actividad 11: Sistema Automatizado

## 🎯 Objetivo

Desarrollar un sistema con **ESP32** y un **sensor PIR** que permita simular un sistema inteligente de automatización de un salón de clases:

- Si **NO hay presencia**:
  - El monitor serie debe imprimir: `"No hay nadie"`
  - Se deben apagar dos LEDs:
    - 💡 LED 1 → Luces del salón  
    - ❄️ LED 2 → Aire acondicionado  

- Si **hay presencia detectada**:
  - El monitor serie debe imprimir: `"Hay personas"`
  - Se deben encender ambos LEDs.

---

## 🧰 Materiales

- 1 × ESP32  
- 1 × Sensor PIR (HC-SR501 o similar)  
- 2 × LEDs (colores distintos)  
- 2 × Resistencias de 220Ω  
- Protoboard  
- Cables jumper  
- Cable USB  

---

## 📌 Conexiones

### 🔹 Sensor PIR

| PIR | ESP32 |
|------|--------|
| VCC  | 5V o 3.3V |
| GND  | GND |
| OUT  | GPIO 14 |

### 🔹 LED 1 (Luces del salón)

- Ánodo → GPIO 26  
- Cátodo → Resistencia 220Ω → GND  

### 🔹 LED 2 (Aire acondicionado)

- Ánodo → GPIO 27  
- Cátodo → Resistencia 220Ω → GND  

---

## 💻 Código Base (Arduino IDE)

```cpp
// Definición de pines
const int pirPin = 14;
const int ledLuz = 26;
const int ledAire = 27;

void setup() {
  Serial.begin(115200);

  pinMode(pirPin, INPUT);
  pinMode(ledLuz, OUTPUT);
  pinMode(ledAire, OUTPUT);

  digitalWrite(ledLuz, LOW);
  digitalWrite(ledAire, LOW);
}

void loop() {
  int estadoPIR = digitalRead(pirPin);

  if (estadoPIR == HIGH) {
    Serial.println("Hay personas");
    digitalWrite(ledLuz, HIGH);
    digitalWrite(ledAire, HIGH);
  } 
  else {
    Serial.println("No hay nadie");
    digitalWrite(ledLuz, LOW);
    digitalWrite(ledAire, LOW);
  }

  delay(1000);
}
```

## 🧪 Procedimiento

1. Realiza el diagrama de conexiones antes de armar el circuito.  
2. Arma el circuito en protoboard.  
3. Carga el código en el ESP32.  
4. Abre el Monitor Serie (115200 baudios).  
5. Verifica:

   - Que al detectar movimiento se enciendan ambos LEDs.  
   - Que al no detectar movimiento se apaguen.  
   - Que los mensajes correspondan correctamente.  

---

## 🎥 Entregable

El entregable deberá incluir:

### 📹 Video (máximo 2 minutos) donde se muestre:

- El circuito físico funcionando.  
- El monitor serie mostrando los mensajes.  
- Prueba con y sin detección de presencia.  

### 📄 Código fuente comentado

### 🧠 Explicación breve:

- ¿Cómo funciona el sensor PIR?  
- ¿Qué tipo de señal entrega?  
- ¿Qué mejoras implementarías?  

---

## 📊 Rúbrica de Evaluación

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (84-75) | Insuficiente (<75) |
|-----------|-------------------|---------------|-------------------|-------------------|
| Funcionamiento | Sistema opera perfectamente en todos los casos | Funciona con pequeños errores | Funciona parcialmente | No funciona |
| Conexiones físicas | Cableado limpio y ordenado | Cableado funcional pero desordenado | Conexiones poco claras | Conexiones incorrectas |
| Código | Bien estructurado y comentado | Funcional pero poco comentado | Desorganizado | Incorrecto |
| Explicación técnica | Explicación clara y fundamentada | Explicación básica | Explicación incompleta | No explica |

---




