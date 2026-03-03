# 🧪 Práctica: Diseño de Circuito de Control de Motor con 3 Botones

## 🎯 Objetivo
Diseñar un **circuito lógico combinacional** que controle:

- **M (Motor)** → Activa el motor.

A partir de tres entradas:

- **A**
- **B**
- **C**

(1 = botón presionado, 0 = botón no presionado)

---

## 📋 Reglas del Sistema

El circuito debe cumplir exactamente con las siguientes condiciones:

1. ✅ Si se presionan **los tres botones (A, B y C)** →  
   - Motor = 1  

2. 🚨 Si se presionan **exactamente dos botones** →  
   - Motor = 1  

3. 🚨 Si se presiona **exactamente un botón** →  
   - Motor = 0  

4. ⛔ Si no se presiona ningún botón →  
   - Motor = 0   

---

# 📝 Instrucciones

## 1️⃣ Definir Variables

**Entradas:**
- A
- B
- C

**Salida:**
- M (Motor)

---

## 2️⃣ Construir la Tabla de Verdad

Complete la siguiente tabla considerando las reglas del sistema:

| A | B | C | M (Motor) | E (LED) |
|---|---|---|-----------|---------|
| 0 | 0 | 0 |           |         |
| 0 | 0 | 1 |           |         |
| 0 | 1 | 0 |           |         |
| 0 | 1 | 1 |           |         |
| 1 | 0 | 0 |           |         |
| 1 | 0 | 1 |           |         |
| 1 | 1 | 0 |           |         |
| 1 | 1 | 1 |           |         |

---

## 3️⃣ Obtener Expresiones Canónicas (Suma de Minterminos)

A partir de la tabla:

- Escriba la función **M(A,B,C)** como suma de minterminos.

workspace
|
-


