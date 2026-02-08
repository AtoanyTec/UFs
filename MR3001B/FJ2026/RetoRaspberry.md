# 🤖 Reto  
## AGV Mensajero con Visión por Computadora  

---

## 🎯 Objetivo del proyecto
Diseñar, construir y programar un **AGV (Automated Guided Vehicle)** capaz de **transportar materiales de laboratorio** desde la oficina del encargado hasta una estación de estudiantes y **regresar automáticamente a su punto de origen**, utilizando **visión por computadora** para la **detección y evasión de obstáculos**, así como para la **identificación del destino**.

El proyecto debe demostrar **integración mecatrónica avanzada**, **automatización**, **modelación**, **toma de decisiones autónoma** y **actuación ética y segura**.

---

## 🚚 ¿Qué debe hacer tu AGV?
El AGV debe ejecutar de forma autónoma la siguiente **misión completa**:

1. Iniciar en la **oficina del encargado (Home)**  
2. Seleccionar una **estación de destino** (A, B, C o D)  
3. Navegar de manera autónoma por el laboratorio  
4. **Detectar y evadir obstáculos usando visión por computadora**  
5. **Identificar visualmente la estación destino**  
6. Detenerse, notificar llegada y esperar confirmación  
7. **Regresar automáticamente a Home**  
8. Detenerse de forma segura y quedar listo para una nueva misión  

---

## ⚙️ Restricciones y lineamientos
- ✅ Uso obligatorio de **Raspberry Pi** como sistema de alto nivel  
- ✅ Uso de **cámara** (USB o CSI)  
- ✅ Uso de **visión por computadora** (OpenCV, ML ligero o técnicas equivalentes)  
- ✅ Se permite Arduino u otro microcontrolador **solo como controlador de bajo nivel** (motores, sensores)  
- ❌ No se permite control remoto humano durante la misión  
- ❌ No se permite intervención manual una vez iniciada la misión  

---

## 🧭 Entorno de trabajo
El AGV operará en un **ambiente controlado (laboratorio)** que contará con:

- Rutas definidas (pasillos)
- Estaciones A, B, C y D identificadas con:
  - **Marcadores visuales** (AprilTag, ArUco, QR, colores, etc.)
- Obstáculos dinámicos y estáticos:
  - Personas
  - Cajas
  - Mochilas

📌 El AGV debe **tomar decisiones en tiempo real** con base en la información visual.

---

## 🧠 Estrategia de navegación y percepción

### 👁️ Visión por computadora (obligatoria)
Tu sistema debe implementar al menos:

- **Detección de obstáculos** mediante:
  - Segmentación
  - Detección por color/forma
  - Detección por movimiento
  - o un modelo ligero de aprendizaje automático
- **Identificación del destino** mediante:
  - Marcadores visuales (ID de estación)
  - Posicionamiento relativo (centrado/aproximación)

📌 La cámara debe ser el **sensor principal** para la evasión.

---

### 🧭 Navegación
- Planeación reactiva o semi-reactiva
- Corrección de trayectoria basada en visión
- Comportamiento esperado ante obstáculos:
  1. Detectar
  2. Reducir velocidad
  3. Evadir
  4. Retomar trayectoria

---

## 🔁 Automatización del sistema
El AGV debe estar gobernado por una **Máquina de Estados Finitos (FSM)** implementada en software.

Estados mínimos esperados:
- `IDLE (Home)`
- `SELECT_DESTINATION`
- `NAVIGATE`
- `OBSTACLE_AVOID`
- `TARGET_DETECTION`
- `ARRIVED`
- `DELIVERY_WAIT`
- `RETURN_HOME`
- `DOCKED`
- `FAILSAFE / EMERGENCY`

📄 Debe entregarse el **diagrama de estados**, pseudocódigo y justificación.

---

## 🔐 Seguridad (obligatoria)
El sistema debe incluir:

- 🛑 **Botón de paro de emergencia (E-Stop)** físico  
- 🐢 Limitación de velocidad en interiores  
- 🔊 Indicador visual o audible cuando el AGV esté en movimiento  
- 🧯 Manejo seguro de fallas (pérdida de cámara, error de software)

⚠️ Un AGV inseguro **no será evaluado en demostración**.

---

## 📐 Modelación y validación (nivel ingeniería)
Además de implementar el sistema, deberás **justificarlo teórica y experimentalmente**.

### 🔬 Actividades obligatorias:
- Modelación cinemática del robot móvil
- Modelación del sistema de control de movimiento
- Calibración de cámara (parámetros intrínsecos básicos)
- Validación experimental de:
  - Detección de obstáculos
  - Identificación de estaciones
  - Precisión de llegada
- Comparación entre comportamiento esperado y real

📄 Todo debe documentarse en un **reporte técnico** con gráficas, métricas y análisis crítico.

---

## 📦 Entregables del proyecto
Cada equipo deberá entregar:

1. **Documento de especificación del sistema**
2. **Estado del arte**
   - AGVs con visión
   - Robótica móvil indoor
