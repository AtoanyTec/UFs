# 🔬 Práctica 4 – Expresiones Canónicas en Minterminos, Simulación y Circuito Físico

## 🎯 Objetivo

- Obtener la **expresión canónica en minterminos (Suma de Productos – SOP)** a partir de las tablas de verdad proporcionadas.
- Implementar la función lógica en **Proteus**.
- Construir el circuito en **protoboard** utilizando compuertas lógicas.
- Demostrar el funcionamiento correcto del sistema.

---

# 🧠 Parte 1 – Obtención de la Expresión Canónica

Deberás trabajar con:

- ✅ Tabla de 3 variables (A, B, C)
 <img width="694" height="550" alt="image" src="https://github.com/user-attachments/assets/ed84abad-967e-4c8f-b682-0efc0b695f72" />




- ✅ Tabla de 4 variables (A, B, C, D)

<img width="561" height="679" alt="image" src="https://github.com/user-attachments/assets/fa8b6734-4ccc-4171-b146-aff2ae38527b" />


---

## 📌 Paso 1: Identificar los minterminos

1. Observa la tabla de verdad.
2. Identifica todas las combinaciones donde: X=1

---

## 📌 Paso 2: Construcción de cada mintermino

Para cada fila donde X = 1:

- Si la variable vale **0** → se escribe **negada**
- Si la variable vale **1** → se escribe **directa**

### Ejemplo

| A | B | C | Mintermino |
|---|---|---|------------|
| 0 | 1 | 1 | A̅ · B · C |

---

## 📌 Paso 3: Escribir la expresión canónica (SOP)
Escribe la ecuación de tu función lógica

# 💻 Parte 2 – Simulación en Proteus

## 🔧 Requisitos

- Implementar exactamente la expresión canónica obtenida.
- Utilizar únicamente:
  - AND
  - OR
  - NOT

---

## 📋 Procedimiento

1. Diseñar el circuito en Proteus.
2. Colocar:
   - Toggles para entradas.
   - Logic Probes para la salida.
3. Probar todas las combinaciones posibles.
4. Verificar que la salida coincide con la tabla original.

⚠️ Si la tabla no coincide, hay error en la expresión o en el cableado.

---

# 🔌 Parte 3 – Implementación Física

## 📦 Material

- Protoboard
- 74LS08 (AND)
- 74LS32 (OR)
- 74LS04 (NOT)
- LEDs
- Resistencias 220Ω
- Fuente de 5V
- Cables

---

## ⚠️ Requisitos técnicos

- Cableado ordenado
- No dejar entradas flotantes
- Uso correcto de tierra común
- LEDs con resistencia
- Cables al ras del protoboard

---

# 🎥 Demostración del Funcionamiento

El estudiante deberá demostrar:

- Que la salida coincide con la tabla original.
- Que puede explicar qué mintermino está activo.
- Que entiende el flujo lógico del circuito.

---

# 📁 Entregables

## 1️⃣ Reporte en PDF

Debe incluir:

- Desarrollo paso a paso de los minterminos
- Expresión canónica desarrollada
- Capturas de simulación en Proteus
- Fotografías claras del circuito físico
- Conclusión técnica

---

## 2️⃣ Video (Máximo 3 minutos)

Debe mostrar:

- Simulación funcionando
- Circuito físico funcionando
- Explicación breve del funcionamiento

---

# 📊 Rúbrica de Evaluación

| Criterio | Excelente (100-95) | Bueno (95-84) | Suficiente (85-74) | Insuficiente (<75) |
|-----------|-------------------|---------------|--------------------|--------------------|
| Minterminos | Todos correctos y bien justificados | 1-2 errores menores | Varios errores conceptuales | Incorrectos o incompletos |
| Expresión Canónica | Correcta y estructurada | Pequeños errores de notación | Error en estructura | Incorrecta |
| Simulación en Proteus | Coincide totalmente con la tabla | Funciona con detalles menores | Funciona parcialmente | No funciona |
| Implementación Física | Circuito limpio y funcional | Funciona con desorden | Funciona parcialmente | No funciona |
| Explicación Técnica | Domina completamente el tema | Explica con algunas dudas | Explicación básica | No sabe explicar |

---
