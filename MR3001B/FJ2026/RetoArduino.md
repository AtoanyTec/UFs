# 🤖 Reto  
## AGV Mensajero para el Laboratorio de Electrónica  

---

## 🎯 Objetivo del proyecto
Diseñar, construir y programar un **AGV (Automated Guided Vehicle)** a escala, utilizando **Arduino UNO**, capaz de **transportar materiales de laboratorio** desde la oficina del encargado hasta una estación de estudiantes y **regresar automáticamente a su punto de origen**, cumpliendo criterios de **automatización, integración mecatrónica, seguridad e ingeniería ética**.

---

## 🚚 ¿Qué debe hacer tu AGV?
Tu AGV debe ser capaz de realizar la siguiente **misión completa**:

1. Iniciar en la **oficina del encargado (Home)**  
2. Seleccionar una **estación de destino** (A, B, C o D)  
3. **Navegar de forma autónoma** siguiendo una ruta definida  
4. **Detectar y evadir obstáculos** colocados en el camino  
5. **Llegar a la estación**, avisar su llegada y esperar confirmación  
6. **Regresar automáticamente a Home**  
7. Detenerse de forma segura y quedar listo para otra misión  

---


## 🧭 Entorno de trabajo
- El laboratorio contará con:
  - **Rutas marcadas en el piso** (cinta negra)
  - **Intersecciones** que conducen a estaciones A, B, C y D
  - **Obstáculos físicos** (cajas, mochilas, etc.) colocados intencionalmente

📌 El AGV debe seguir la ruta, elegir la estación correcta y **evadir obstáculos sin colisionar**.

---

## 🧠 Estrategia de navegación esperada
Tu equipo deberá implementar, como mínimo:

### 🔹 Seguimiento de línea
- Uso de sensores infrarrojos (IR)
- Control del movimiento mediante lógica o control proporcional (P / PD)

### 🔹 Selección de estación
- Mediante botones, interruptores o DIP-switch en Home
- Uso de **conteo de intersecciones** para decidir el giro correcto

### 🔹 Evasión de obstáculos
- Uso de sensores de distancia (ej. ultrasónico)
- Comportamiento típico esperado:
  1. Detenerse
  2. Retroceder
  3. Maniobrar
  4. Reincorporarse a la ruta

---

## 🔁 Automatización (obligatoria)
El comportamiento del AGV debe estar basado en una **Máquina de Estados Finitos (FSM)**.

Ejemplo de estados esperados:
- `IDLE (Home)`
- `SELECT_DESTINATION`
- `FOLLOW_LINE`
- `OBSTACLE_AVOID`
- `ARRIVED`
- `DELIVERY_WAIT`
- `RETURN_HOME`
- `DOCKED`
- `FAILSAFE / EMERGENCY`

📄 Deberás entregar el **diagrama de estados y su justificación**.

---

## 🔐 Seguridad (obligatoria)
Tu AGV debe incluir:
- 🛑 **Botón de paro de emergencia (E-Stop)**
- 🔊 Señal audible o visual cuando esté en movimiento
- 🐢 Velocidad limitada para uso en laboratorio

⚠️ Cualquier AGV inseguro **no será evaluado en demo**.

---

## 📐 Modelación y experimentación (nivel ingeniería)
Además de construir el AGV, deberás **demostrar que entiendes cómo funciona**.

### 🔬 Actividades obligatorias:
- Modelación cinemática del robot diferencial
- Relación **PWM → velocidad** de cada motor
- Calibración de sensores
- Pruebas de seguimiento de línea
- Pruebas de evasión de obstáculos
- Validación del comportamiento real vs esperado

📄 Todo debe documentarse en un **reporte técnico** con gráficas, tablas y análisis.

---

## 📦 Entregables del proyecto
Tu equipo deberá entregar:

1. **Documento de especificación del sistema**
2. **Estado del arte** (AGVs, line following, sensores, seguridad)
3. **Diseño del sistema**
   - Diagramas de bloques  
   - Esquemático eléctrico  
   - Diseño mecánico / ensamble
4. **Reporte de modelación y validación experimental**
5. **Código comentado** + README
6. **Lista de materiales (BOM) y análisis de factibilidad**
7. **Video de demostración** (misión completa)
8. **Bitácora individual de contribuciones**

---

## 👥 Trabajo en equipo (evaluación individual)
- El proyecto es **en equipo**, pero:
  - Cada estudiante será evaluado **de forma individual**
  - Cada integrante debe dominar y explicar **una parte del sistema**
- Habrá una **defensa técnica individual** durante la evaluación final

---

## ⚖️ Ética e integridad
- Todo el código, diseños y textos deben ser **propios o correctamente citados**
- Uso responsable de IA (si se usa, debe declararse)
- El plagio o simulación de resultados **anula el proyecto**

---

## 🏆 Criterio de éxito
Un proyecto exitoso es aquel que:
- Completa la **misión completa sin intervención humana**
- Evade obstáculos sin colisiones
- Está **bien documentado y justificado**
- Funciona de manera **repetible y segura**
- Demuestra **ingeniería, no solo armado**

