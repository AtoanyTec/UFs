# 🔧 Práctica 5: Sistema de Control de Motor (Modo Manual / Automático)

## 🎯 Objetivo

Diseñar e implementar un sistema de control para un motor de corriente directa (CD) que opere en dos modos:

- 🖐 Modo Manual  
- 🤖 Modo Automático  

El sistema deberá integrar botones, un sensor óptico reflectivo y una etapa de potencia para el motor.

---

## 🧠 Descripción del Sistema

El sistema contará con:

- 2 botones para selección de modo:
  - Botón Modo Manual
  - Botón Modo Automático
- 2 botones para control de giro en modo manual
- 1 sensor óptico reflectivo
- 1 motor CD
- 1 puente H o driver de motor

---

# 🔵 Modo Manual

## Funcionamiento esperado

1. Al presionar el botón de **Modo Manual**, el sistema debe entrar en este estado.
2. En este modo:
   - Botón 1 → Giro en sentido horario.
   - Botón 2 → Giro en sentido antihorario.
3. Si ningún botón está presionado, el motor debe permanecer detenido.

---

# 🟢 Modo Automático

## Funcionamiento esperado

1. Al presionar el botón de **Modo Automático**, el sistema debe cambiar a este estado.
2. El motor deberá:
   - Girar en un sentido.
   - Esperar 3 segundos.
   - Invertir el sentido de giro.
   - Repetir continuamente el ciclo.

---

# 🚨 Condición de Seguridad (Sensor Óptico)

En cualquier modo:

- Si el sensor detecta un objeto:
  - El motor debe detenerse inmediatamente.
- El sistema podrá reanudar su funcionamiento cuando el objeto deje de detectarse (según diseño propuesto).

---

# 🔌 Requisitos de Electrónica

- El motor NO debe conectarse directamente al Arduino.
- Debe utilizarse un puente H o driver de potencia.
- Todas las tierras deben estar conectadas en común.
- El cableado debe estar:
  - Ordenado
  - Sin jumpers largos innecesarios
  - Con conexiones al ras del protoboard

---

# 💻 Requisitos de Programación

El programa debe incluir:

- Definición clara de pines.
- Lectura correcta de botones.
- Lógica para cambio de modos.
- Control de tiempos (3 segundos).
- Integración del sensor como condición prioritaria.

---

# 📦 Entregables

1. 🎥 Video en formato .mp4 donde se muestre:
   - Cambio entre modos.
   - Control manual del sentido.
   - Funcionamiento automático.
   - Detención por detección del sensor.
   - Explicación verbal del sistema.

2. 💻 Código fuente comentado.

3. 🧾 Diagrama de bloques del sistema.

4. 📸 Fotografía clara del circuito físico.

---

# 📊 Criterios de Evaluación

- Funcionamiento correcto del modo manual.
- Funcionamiento correcto del modo automático.
- Detención inmediata ante detección del sensor.
- Orden y calidad del circuito físico.
- Claridad en la explicación técnica.

---

## 🚀 Consideraciones Finales

Piensen en la robustez del sistema:

- ¿Qué ocurre si ambos botones de giro se presionan?
- ¿Qué sucede si se cambia de modo mientras el motor está girando?
- ¿El sistema responde inmediatamente al sensor?

Diseñen como ingenieros mecatrónicos. 🤖⚙️
