# 🏭 Situación Problema
## Diseño y Maqueta Funcional de una Cortina Industrial Automatizada

---

## 🎯 Objetivo del proyecto

Diseñar un **sistema mecatrónico factible** para la **automatización de una cortina industrial** y **validar su funcionamiento** mediante la construcción de una **maqueta a escala funcional**, utilizando **Arduino Uno, sensores y actuadores reales**, asegurando el cumplimiento de todos los **requerimientos técnicos del sistema industrial real**.

---

## 🧩 Descripción general del reto

En este proyecto deberás:

- Diseñar una **cortina industrial real**, considerando dimensiones, cargas, seguridad y control  
- Seleccionar y justificar **sensores y actuadores** adecuados  
- Construir una **maqueta a escala funcional** que represente fielmente el comportamiento del sistema real  

⚠️ **La maqueta no es decorativa**: debe demostrar físicamente el funcionamiento del sistema.

---

## 📐 Requerimientos técnicos de la cortina industrial (sistema real)

### 🔹 Dimensiones
- **Ancho:** 3 a 4 m  
- **Altura:** 3 a 7 m  

### 🔹 Material de la cortina
- Hule termo-formado (hule transparente + opaco)  
- **Peso promedio:** 900 g por yarda cuadrada  
- **Barras metálicas tensoras:**
  - 35 kg cada una  
  - Colocadas cada 2 m de ancho  

---

### 🔹 Movimiento y desempeño
- La cortina debe subir y bajar mediante enrollado  
- Debe operar con **dos velocidades**:
  - 🔼 Velocidad alta al subir  
  - 🔽 Velocidad baja para detenerse y al bajar  

---

### 🔹 Límites de movimiento
- Límite superior e inferior definidos por:
  - Sensores de posición
- Los sensores deben proteger los límites mecánicos del sistema  

---

### 🔹 Seguridad
- Durante el descenso:
  - Si se detecta un obstáculo, la cortina debe **detenerse e invertir el movimiento**
  - El sistema debe **subir nuevamente** y reiniciar el ciclo  
- El **tiempo de espera se pausa** mientras el obstáculo esté presente  

---

## 🤖 Requerimientos de control y operación

### 🔹 Modos de operación

#### 🖐️ Modo manual
- Control mediante botones físicos:
  - Subir
  - Bajar
  - Paro
- La cortina se mueve **solo mientras el botón esté presionado**
- Se detiene automáticamente al llegar a los límites

#### 🔁 Modo automático
Ciclo completo:
1. Subir a velocidad alta  
2. Detenerse en límite superior  
3. Esperar un tiempo configurable  
4. Bajar a velocidad lenta  
5. Detectar obstáculos y reaccionar  

---

### 🔹 Usuarios del sistema

#### 👤 Operador
- Ver estado del sistema  
- Ver alarmas (detección de obstáculo)  
- Seleccionar modo manual o automático  
- Operar la cortina  

#### 👨‍💼 Supervisor
- Ajustar:
  - Límites de movimiento  
  - Tiempos de espera  
  - Velocidades  
- Acceso protegido con contraseña  
- Puede realizar todas las funciones del operador  

---

## 🧱 Requerimientos de la maqueta a escala

### 🔹 Hardware obligatorio
- Arduino Uno  
- Actuador (motor DC, motorreductor o servo)  
- Sensores:
  - Límite superior  
  - Límite inferior  
  - Sensor de obstáculo (ultrasónico, IR, etc.)  
- Botones físicos  
- Fuente de alimentación adecuada  

### 🔹 Funcionamiento mínimo
La maqueta debe demostrar:
- Subida y bajada de la cortina  
- Paro automático en límites  
- Detección de obstáculos  
- Modos manual y automático  
- Diferencia clara entre velocidad rápida y lenta  

📐 **Escala sugerida:** 1:10, 1:15 o 1:20  

---

## 📄 Entregables

### 1️⃣ Reporte de diseño de la cortina industrial (PDF)
Debe incluir:
- Definición del problema  
- Diseño de la cortina real  
- Análisis mecánico (peso, fuerza, torque)  
- Selección de sensores y actuadores  
- Diagramas de bloques  
- Lógica de control  
- Justificación de factibilidad del sistema  

---

### 2️⃣ Maqueta a escala funcional
- Totalmente operativa  
- Cableado ordenado  
- Sensores visibles  
- Demostración en clase  

---

### 3️⃣ Código en Arduino
- Bien comentado  
- Implementa:
  - Modos manual y automático  
  - Control de velocidades  
  - Sensores de límite  
  - Sensor de obstáculo  
  - Seguridad del sistema  

---

## 📊 Rúbrica de evaluación

| Criterio | Nivel 4 – Excelente | Nivel 3 – Satisfactorio | Nivel 2 – Básico | Nivel 1 – Insuficiente |
|--------|---------------------|-------------------------|------------------|------------------------|
| Diseño de la cortina real | Cumple totalmente los requerimientos técnicos y presenta análisis mecánico completo y correcto. | Cumple la mayoría de los requerimientos con análisis adecuado. | Cumple parcialmente; análisis incompleto. | No cumple requerimientos; sin análisis. |
| Selección de actuadores | Actuador adecuado y plenamente justificado. | Actuador funcional con justificación parcial. | Actuador poco justificado. | Actuador incorrecto o sin justificación. |
| Selección de sensores | Sensores adecuados, bien implementados y justificados. | Sensores funcionales con detalles menores. | Sensores limitados o mal justificados. | Sensores incorrectos o no funcionales. |
| Lógica de control y código | Implementa correctamente todos los modos y funciones; código claro y comentado. | Funciona correctamente con detalles menores. | Funciona parcialmente; faltan funciones. | No funciona o no cumple requerimientos. |
| Funcionamiento de la maqueta | Representa fielmente el sistema real y cumple todos los comportamientos. | Funciona correctamente con ligeras omisiones. | Funcionamiento incompleto. | No funciona. |
| Seguridad del sistema | Responde correctamente ante obstáculos y situaciones de riesgo. | Responde, pero puede mejorar. | Respuesta inconsistente. | No hay seguridad. |
| Reporte técnico | Claro, completo y bien estructurado. | Claro con detalles menores. | Incompleto o poco claro. | Deficiente o no entregado. |

---

## 📝 Nota final

Este proyecto simula un **problema real de ingeniería**. Se evaluará tanto el **funcionamiento físico de la maqueta** como la **coherencia técnica del diseño del sistema real**.

> No basta con que la maqueta se mueva: **el diseño debe tener sentido ingenieril y ser factible**.
