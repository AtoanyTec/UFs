# 🔎📡 Práctica 10: Detección de Presencia con Sensor PIR y ESP32  

## 🎯 Objetivo

Al finalizar esta práctica, el estudiante será capaz de:

- Comprender cómo funciona un sensor PIR 🧠  
- Conectar correctamente un sensor PIR al ESP32 🔌  
- Programar el ESP32 para detectar presencia 👨‍💻  
- Interpretar señales digitales (HIGH y LOW) 🟢🔴  

---

## 🧠 ¿Qué es un sensor PIR?

Un **PIR (Passive Infrared Sensor)** detecta cambios en la radiación infrarroja emitida por el cuerpo humano.

📌 Características principales:
- Detecta movimiento de personas.
- Tiene 3 pines:
  - **VCC**
  - **GND**
  - **OUT**

Cuando detecta movimiento:
- OUT = HIGH (1) 🟢  

Cuando no detecta movimiento:
- OUT = LOW (0) 🔴  

---

## 🧰 Materiales

- 1 ESP32  
- 1 Sensor PIR (HC-SR501 o similar)  
- 1 Protoboard  
- Cables jumper  
- Cable USB  

---

## 🔌 Conexión del circuito

### 📍 Conexiones

| Sensor PIR | ESP32 |
|------------|--------|
| VCC        | 5V o 3.3V |
| GND        | GND |
| OUT        | GPIO 14 |



### 📍 Esquemático

<img width="30%" height="30%" alt="image" src="https://github.com/user-attachments/assets/485bbfc9-bcf7-4ef2-b83b-2640f83e6c3f" />


### 📍 Potenciómetros

<img width="30%" height="30%" alt="image" src="https://github.com/user-attachments/assets/d18720fb-0633-4e03-94fb-4c89fa253de7" />

<br>
El módulo PIR tiene dos potenciómetros: uno ajusta la sensibilidad, el otro ajusta la distancia de detección. Para hacer que el módulo PIR funcione mejor, necesitas girar ambos en sentido antihorario hasta el final

### 📍 Cableado

<img width="30%" height="30%" alt="image" src="https://github.com/user-attachments/assets/d2cd24f9-84de-4f6e-af24-847bfccf6737" />



⚠️ Verifica que tu sensor sea compatible con 3.3V.  

---

## 🖥️ Configuración en Arduino IDE

1. Abrir Arduino IDE.
2. Seleccionar la placa:
   - Herramientas → Placa → **ESP32 Dev Module**
3. Seleccionar el puerto correcto.
4. Verificar velocidad del Monitor Serial: **115200 baudios**.

---

## 💻 Código del programa

Copia y pega el siguiente código en Arduino IDE:

```cpp
const int pirPin = 14;   
int estadoPIR = 0;

void setup() {
  Serial.begin(115200);
  pinMode(pirPin, INPUT);
  Serial.println("Sistema de detección iniciado...");
}

void loop() {
  estadoPIR = digitalRead(pirPin);

  if (estadoPIR == HIGH) {
    Serial.println("Movimiento detectado");
  } else {
    Serial.println("Sin movimiento");
  }

  delay(500);
}
```

## ▶️ Procedimiento

1. Armar el circuito en el protoboard.
2. Conectar el ESP32 a la computadora.
3. Subir el programa.
4. Abrir el Monitor Serial.
5. Esperar 10–30 segundos a que el sensor se estabilice.
6. Mover la mano frente al sensor.
7. Observar los mensajes en pantalla.

## ✅ Evidencias / Entregables

Debes subir:

1. 📷 Foto clara del circuito físico.
2. 📸 Captura del Monitor Serial mostrando detección.
3. 📄 Archivo del código (.ino).
4. 📝 Responder:
   - ¿Por qué el sensor PIR no detecta objetos fríos?
   - ¿Qué aplicaciones reales tiene este sistema?
  

## 🚀 Reto adicional (Opcional)

Agregar un LED que:

- Se encienda cuando detecte movimiento 💡
- Se apague cuando no haya movimiento
  

## 🧪 Rúbrica de Evaluación  

| Criterio | Excelente (95-100) | Bueno (85-94) | Básico (75-84) | Insuficiente (0-74) |
|-----------|----------------|------------|------------|----------------|
| 🔌 Conexión del circuito | Conexiones correctas, ordenadas y seguras. Uso adecuado del protoboard. | Conexión funcional con pequeños detalles de orden. | Funciona parcialmente o presenta errores menores de conexión. | Conexión incorrecta o no funcional. |
| 💻 Programación | Código limpio, bien estructurado y completamente funcional. | Código funcional con pequeños errores de estructura. | Código con errores que afectan parcialmente el funcionamiento. | Código no funcional o incompleto. |
| 🧠 Comprensión del funcionamiento | Explica claramente cómo funciona el sensor PIR y la señal digital. | Explicación correcta pero poco profunda. | Explicación limitada o con confusiones. | No demuestra comprensión del funcionamiento. |
| 📸 Evidencias entregadas | Entrega todas las evidencias solicitadas con claridad (foto, captura y código). | Entrega casi todas las evidencias. | Evidencias incompletas o poco claras. | No entrega evidencias suficientes. |
| 📝 Reflexión final | Responde correctamente las preguntas de análisis con argumentos claros. | Respuestas correctas pero breves. | Respuestas incompletas o superficiales. | No responde o respuestas incorrectas. |

---

🔥 ¡Éxito en tu práctica!
