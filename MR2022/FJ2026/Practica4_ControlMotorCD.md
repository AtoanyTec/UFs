# 🔁 Práctica 4: Control del Sentido de Giro de un Motor CD con Push Buttons y Sensor Óptico

---

## 🎯 Objetivo

Diseñar e implementar un sistema que permita:

1. Controlar el **sentido de giro** de un motor de corriente directa (CD) mediante **dos push buttons**.
2. Detener automáticamente el motor cuando un **sensor óptico** detecte un objeto.

---

## 🧠 Fundamento Teórico

### ⚡ Motor de Corriente Directa (CD)

Un motor CD gira cuando se aplica una diferencia de potencial entre sus terminales.

- Si se invierte la **polaridad**, se invierte el **sentido de giro**.
- Para controlar el sentido de giro se puede utilizar:
  - Un **puente H** (ej. L298N, L293D)
  - Un arreglo con transistores

---

### 👆 Push Buttons

Se utilizarán dos botones:

- 🔵 Botón 1 → Giro en sentido horario
- 🔴 Botón 2 → Giro en sentido antihorario

Cada botón deberá:

- Estar correctamente conectado con resistencia **pull-up** o **pull-down**.
- Tener una lectura estable (evitar rebotes si es necesario).

---

### 📡 Sensor Óptico

El sensor óptico permite detectar la presencia de un objeto cercano.

- Entrega una señal digital (HIGH o LOW).
- Cuando detecte un objeto → el motor debe **detenerse inmediatamente**, sin importar qué botón esté presionado.

---

## 🛠️ Desarrollo de la Práctica

### 🔌 1. Diseño del Circuito

Antes de armar el circuito:

- Realiza el **diagrama esquemático**.
- Identifica claramente:
  - Pines de control del puente H
  - Pines de los botones
  - Pin de salida del óptico
  - Alimentación del motor

⚠️ El circuito debe estar:
- Ordenado
- Sin falsos contactos
- Con cableado limpio

---

### 💻 2. Lógica de Funcionamiento

El sistema debe cumplir la siguiente lógica:

| Condición | Acción del Motor |
|------------|------------------|
| Botón 1 presionado | Giro horario |
| Botón 2 presionado | Giro antihorario |
| Ningún botón presionado | Motor detenido |
| Sensor óptico detecta objeto | Motor detenido (prioridad máxima) |

🔎 El sensor tiene prioridad sobre los botones.

---

### 🧩 3. Implementación

El programa deberá:

1. Configurar correctamente los pines como entradas y salidas.
2. Leer continuamente:
   - Estado del Botón 1
   - Estado del Botón 2
   - Estado del sensor IR
3. Controlar el puente H según la lógica establecida.
4. Garantizar que:
   - Nunca se activen simultáneamente ambos sentidos.
   - El motor se detenga al detectar un objeto.

---

## 📋 Entregables

### 🎥 1. Video (máximo 2 minutos)

Debe mostrar claramente:

- El circuito físico funcionando.
- El motor girando en ambos sentidos.
- La detección del objeto por el sensor.
- La detención inmediata del motor.

---

### 📄 2. Código Fuente Comentado

El código debe incluir comentarios explicando:

- Configuración de pines.
- Lógica de control.
- Condición de seguridad del sensor.

---

### 🧠 3. Explicación Técnica (1 cuartilla)

Responder las siguientes preguntas:

1. ¿Cómo se invierte el sentido de giro de un motor CD?
2. ¿Qué función cumple el puente H?
3. ¿Por qué el sensor tiene prioridad sobre los botones?
4. ¿Qué ocurre si ambos botones se presionan al mismo tiempo?

---

## 📊 Rúbrica de Evaluación

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (84-75) | Insuficiente (<75) |
|------------|--------------------|---------------|--------------------|--------------------|
| Funcionamiento del sistema | Cumple toda la lógica sin errores | Funciona con pequeños detalles | Funciona parcialmente | No funciona |
| Control de sentido de giro | Implementado correctamente y estable | Presenta leves fallas | Funciona solo un sentido | Incorrecto |
| Integración del sensor IR | Detención inmediata y consistente | Se detiene con ligero retraso | Detención inconsistente | No detiene |
| Organización del circuito | Cableado limpio y ordenado | Funcional pero desordenado | Poco claro | Desorganizado |
| Explicación técnica | Clara y fundamentada | Parcialmente clara | Superficial | Incorrecta |

---
