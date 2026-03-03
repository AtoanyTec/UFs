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

| A | B | C | M (Motor) |
|---|---|---|-----------|
| 0 | 0 | 0 |           |
| 0 | 0 | 1 |           |
| 0 | 1 | 0 |           |
| 0 | 1 | 1 |           |
| 1 | 0 | 0 |           |
| 1 | 0 | 1 |           |
| 1 | 1 | 0 |           |
| 1 | 1 | 1 |           |

---

## 3️⃣ Obtener Expresiones Canónicas (Suma de Minterminos)

A partir de la tabla:

- Escriba la función **M(A,B,C)** como suma de minterminos.

## 4️⃣ Reducción con Mapas de Karnaugh 🧠

Para **cada salida (M y E):**

1. Dibuje el mapa de Karnaugh de 3 variables.
2. Coloque los valores correspondientes.
3. Realice las agrupaciones válidas.
4. Obtenga la expresión mínima simplificada.

⚠️ Recuerde usar código Gray en el orden del mapa.

---

## 5️⃣ Dibujar el Diagrama Lógico

Implemente las expresiones reducidas utilizando compuertas básicas:

- AND
- OR
- NOT

El diagrama debe incluir:
- Entradas etiquetadas (A, B, C)
- Salidas etiquetadas (M y E)
- Señales intermedias si existen

---

## 6️⃣ Simulación (Si aplica)

Simular en:
- Proteus
- Logicly
- Multisim

Verificar las 8 combinaciones posibles y comprobar que:

- El motor se activa correctamente.
- El LED de emergencia responde según las reglas.

---

# 📦 Entregables

- ✅ Tabla de verdad completa
- ✅ Expresiones canónicas en minterminos
- ✅ Mapas de Karnaugh (M y E)
- ✅ Expresiones reducidas
- ✅ Diagrama lógico con compuertas
- ✅ Evidencia de simulación (capturas de pantalla)

---

# ✔️ Lista de Verificación Final

- [ ] La tabla cumple exactamente las reglas.
- [ ] Los minterminos corresponden a las filas donde la salida es 1.
- [ ] El mapa de Karnaugh está correctamente construido.
- [ ] Las agrupaciones son válidas.
- [ ] Las expresiones reducidas coinciden con la tabla.
- [ ] El diagrama lógico está correctamente etiquetado.




