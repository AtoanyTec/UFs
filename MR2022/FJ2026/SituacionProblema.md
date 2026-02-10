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
3. Esperar tres segundos  
4. Bajar a velocidad lenta  
5. Detectar obstáculos y reaccionar  

---

### 🔹 Usuarios del sistema

#### 👤 Operador
- Ver estado del sistema  
- Ver alarmas (detección de obstáculo)  
- Seleccionar modo manual 
- Operar la cortina  

#### 👨‍💼 Supervisor 
- Acceso protegido con contraseña
- Seleccionar modo manual o automático 
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
### Maqueta a Escala – Cortina Industrial Automatizada  
**(Requerimientos técnicos observables en la maqueta)**

| **Requerimiento técnico** | **Nivel 4 – Excelente** | **Nivel 3 – Satisfactorio** | **Nivel 2 – Básico** | **Nivel 1 – Insuficiente** |
|---------------------------|-------------------------|-----------------------------|----------------------|----------------------------|
| **Diseño de la cortina real** | Cumple totalmente los requerimientos técnicos y presenta análisis mecánico completo y correcto. | Cumple la mayoría de los requerimientos con análisis adecuado. | Cumple parcialmente; análisis incompleto. | No cumple requerimientos; sin análisis. |
| **Selección de actuadores** | Actuador adecuado y plenamente justificado. | Actuador funcional con justificación parcial. | Actuador poco justificado. | Actuador incorrecto o sin justificación. |
| **Selección de sensore**s | Sensores adecuados, bien implementados y justificados. | Sensores funcionales con detalles menores. | Sensores limitados o mal justificados. | Sensores incorrectos o no funcionales. |
| **Reporte técnico** | Claro, completo y bien estructurado. | Claro con detalles menores. | Incompleto o poco claro. | Deficiente o no entregado. |
| **Movimiento de enrollado/desenrollado** | La maqueta reproduce claramente el enrollado y desenrollado de la cortina de forma estable y continua. | El movimiento es correcto, con ligeras vibraciones o desalineaciones. | El movimiento es irregular o poco claro. | No se observa correctamente el enrollado/desenrollado. |
| **Subida completa hasta el límite superior** | La cortina sube siempre hasta el límite superior definido y se detiene correctamente. | Llega al límite, pero con ligeros retrasos o ajustes. | Llega de forma inconsistente al límite. | No respeta el límite superior. |
| **Bajada completa hasta el límite inferior** | La cortina baja hasta el límite inferior y se detiene correctamente. | Llega al límite con pequeños errores. | La bajada es incompleta o inestable. | No respeta el límite inferior. |
| **Sensores de límite superior e inferior** | Ambos sensores funcionan de manera confiable y detienen el movimiento en todo momento. | Los sensores funcionan, pero presentan fallas ocasionales. | Solo uno de los sensores funciona correctamente. | No hay sensores o no funcionan. |
| **Diferenciación de velocidades** | Se observa claramente una velocidad rápida (subida) y una velocidad lenta (bajada/paro). | Las velocidades son distinguibles, pero poco marcadas. | Las velocidades son casi iguales. | No existe control de velocidades. |
| **Modo manual (botones)** | La cortina se mueve únicamente mientras el botón está presionado y se detiene al soltarlo. | El modo manual funciona con pequeños retrasos. | El control manual es impreciso. | No existe modo manual funcional. |
| **Modo automático (ciclo completo)** | Ejecuta correctamente todo el ciclo automático sin intervención externa. | El ciclo funciona con ligeros errores. | El ciclo es incompleto. | No existe modo automático. |
| **Tiempo de espera en posición superior** | El tiempo de espera es claramente observable y configurable. | El tiempo existe, pero no es configurable. | El tiempo es poco claro. | No hay tiempo de espera. |
| **Detección de obstáculos** | El sensor detecta confiablemente obstáculos durante la bajada. | Detecta obstáculos, pero con retraso. | La detección es inconsistente. | No hay detección de obstáculos. |
| **Respuesta ante obstáculo** | Al detectar obstáculo, la cortina se detiene, sube y reinicia el ciclo correctamente. | Responde, pero el reinicio es parcial. | La respuesta es incorrecta o tardía. | No hay respuesta de seguridad. |
| **Pausa del tiempo de espera por obstáculo** | El tiempo de espera se suspende correctamente mientras el obstáculo está presente. | El tiempo se suspende parcialmente. | El tiempo no se gestiona correctamente. | No existe esta funcionalidad. |
| **Paro de emergencia / paro seguro** | El sistema se detiene de forma inmediata y segura ante una orden de paro. | El paro funciona con ligero retardo. | El paro es poco confiable. | No existe paro seguro. |
| **Estabilidad mecánica de la maqueta** | La estructura es sólida, estable y segura durante toda la operación. | La estructura es funcional, con ligeras vibraciones. | La estructura es frágil o inestable. | La maqueta es insegura. |
| **Correspondencia con el sistema real** | La maqueta representa fielmente el comportamiento del sistema industrial real. | La representación es adecuada con pequeñas simplificaciones. | La representación es limitada. | No representa el sistema real. |
| **Orden y seguridad del cableado** | Cableado ordenado, seguro y bien identificado. | Cableado funcional con detalles menores. | Cableado desordenado o poco seguro. | Cableado inseguro o incorrecto. |



---

## 📝 Nota final

Este proyecto simula un **problema real de ingeniería**. Se evaluará tanto el **funcionamiento físico de la maqueta** como la **coherencia técnica del diseño del sistema real**.

> No basta con que la maqueta se mueva: **el diseño debe tener sentido ingenieril y ser factible**.
