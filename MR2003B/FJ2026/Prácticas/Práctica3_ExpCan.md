# Práctica: Expresión canónica en mintérminos + simulación en Proteus 🧠⚙️

## 🎯 Objetivo
A partir de **dos tablas de verdad**, obtener la **expresión canónica en mintérminos (SOP)** de la salida **X** y **validarla mediante simulación en Proteus**.

---

## 📌 Conceptos clave (muy breve)
- Un **mintérmino** es un producto (AND) que incluye **todas las variables** (directas o negadas).
- Para obtener la forma canónica en mintérminos:
  1. Identifica todas las filas donde **Salida = 1**.
  2. Para cada fila, forma el mintérmino:
     - Variable en **0** → va **negada** (A̅)
     - Variable en **1** → va **directa** (A)
  3. Suma (OR) todos los mintérminos:  
     $\[
     X = \Sigma m(\text{índices})
     \]$
  4. También puedes escribirla como suma de productos completa (SOP canónica).

> **Orden de variables:** usa el orden que aparece en la tabla (ej. A,B,C o A,B,C,D) y considera A como bit más significativo para el índice.

---

## 🧪 Parte A: Tabla de verdad 1 (A, B, C → X)
### ✅ Procedimiento en papel / reporte
1. Copia la tabla de verdad en tu reporte.
2. Marca todas las combinaciones donde **X = 1**.
3. Convierte cada combinación marcada en su **mintérmino** (con A, B, C).
4. Escribe:
   - La lista de mintérminos en forma algebraica (SOP canónica).
   - La notación:
     $\[
     X = \Sigma m(\ldots)
     \]$

---

## 🧪 Parte B: Tabla de verdad 2 (A, B, C, D → X)
### ✅ Procedimiento en papel / reporte
1. Copia la tabla de verdad en tu reporte.
2. Marca todas las combinaciones donde **X = 1**.
3. Convierte cada combinación marcada en su **mintérmino** (con A, B, C, D).
4. Escribe:
   - La SOP canónica completa.
   - La notación:
     $\[
     X = \Sigma m(\ldots)
     \]$

---

## 🔬 Simulación en Proteus (para **cada** tabla)
### 🧩 Material sugerido en Proteus
- **Switches digitales** (Logic Toggle / Digital Interactive Input) para A, B, C (y D).
- **LED + resistencia** (o Logic Probe) para visualizar X.
- **Compuertas**:
  - AND (con 3 o 4 entradas según corresponda)
  - OR (para sumar mintérminos)
  - NOT (para negaciones)
- (Opcional) **Logic Analyzer** para observar señales.

### ✅ Pasos
1. Crea un nuevo diseño en Proteus y nómbralo:
   - `Tabla1_A_B_C.pdsprj`
   - `Tabla2_A_B_C_D.pdsprj`
2. Coloca entradas A, B, C (y D si aplica) con interruptores lógicos.
3. Implementa la función **X** usando tu expresión canónica:
   - Construye cada mintérmino con AND + NOT donde se requiera.
   - Une todos los mintérminos con OR para obtener X.
4. Conecta la salida **X** a un LED (o a una sonda lógica).
5. Simula y verifica **todas las combinaciones** de entrada:
   - Para 3 variables → 8 combinaciones
   - Para 4 variables → 16 combinaciones
6. Comprueba que la salida **X** coincide exactamente con la tabla de verdad.

---

## ✅ Entregables (lo que debes subir)
1. **Reporte en PDF** (máx. 2–3 páginas) con:
   - Tablas de verdad copiadas
   - Identificación de filas con X=1
   - **SOP canónica (mintérminos)**
   - Notación **Σm(...)** para cada tabla
   - Capturas de pantalla de Proteus mostrando el circuito
2. **Archivo(s) de Proteus** (`.pdsprj`) de ambas simulaciones.
3. **Evidencia de verificación**:
   - Capturas (o tabla) donde se vea que probaste todas las combinaciones.
   - (Opcional) Video corto (≤ 2 min) mostrando cambios de entradas y respuesta X.

---

## 📊 Rúbrica de evaluación (100 pts)

| Criterio | Excelente (100–90) | Bueno (89–80) | Suficiente (79–70) | Insuficiente (<70) | Pts |
|---|---|---|---|---|---:|
| Identificación de filas X=1 (Tabla 1) | Todas correctas | 1 error | 2 errores | ≥3 errores | 10 |
| Mintérminos correctos (Tabla 1) | Todos correctos y con variables completas | 1 error menor | Varios errores pero se entiende | Incorrecto/incompleto | 15 |
| Notación Σm (Tabla 1) | Índices correctos | 1 error | 2 errores | Incorrecto | 10 |
| Identificación de filas X=1 (Tabla 2) | Todas correctas | 1 error | 2 errores | ≥3 errores | 10 |
| Mintérminos correctos (Tabla 2) | Todos correctos y completos | 1 error menor | Varios errores | Incorrecto/incompleto | 15 |
| Notación Σm (Tabla 2) | Índices correctos | 1 error | 2 errores | Incorrecto | 10 |
| Implementación en Proteus (Tabla 1) | Circuito correcto y estable | Funciona con detalles menores | Funciona parcialmente | No funciona | 10 |
| Implementación en Proteus (Tabla 2) | Circuito correcto y estable | Funciona con detalles menores | Funciona parcialmente | No funciona | 10 |
| Validación (prueba de combinaciones) | Prueba completa (8 y 16) con evidencia clara | Falta 1–2 casos | Evidencia débil | Sin evidencia | 10 |

---

## 🧠 Tips (para evitar errores comunes)
- No olvides que la forma canónica **incluye todas las variables** en cada mintérmino.
- Revisa el orden de bits para los índices (A es el más significativo).
- En Proteus, verifica que las compuertas AND tengan el número correcto de entradas (3 o 4).
- Si una variable está en 0 en una fila con X=1, debe ir **negada** en ese mintérmino.

---

## (Solo docente) ✅ Clave rápida de verificación
> Úsala para revisar rápidamente entregas (evita compartir con estudiantes).

- **Tabla 1 (A,B,C):**  
  \[
  X = \Sigma m(0,3,4,6,7)
  \]
- **Tabla 2 (A,B,C,D):**  
  \[
  X = \Sigma m(1,5,7,15)
  \]
