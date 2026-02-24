# Práctica 3: Expresión Canónica en Mintérminos (SOP) + Simulación en Proteus 🧠⚙️

## 🎯 Objetivo
A partir de las tablas de verdad proporcionadas:

1. Obtener la **expresión canónica en mintérminos (SOP)**.
2. Implementar la función lógica en **Proteus**.
3. Incluir el **diagrama del circuito lógico** correctamente estructurado.

---

## 📘 Parte 1: Obtención de la expresión en mintérminos

### ✅ Procedimiento

1. Identifica todas las filas donde **X = 1**.
2. Construye el mintérmino correspondiente:
   - Variable en 0 → va negada (A̅)
   - Variable en 1 → va directa (A)
3. Suma todos los mintérminos (OR).
4. Escribe la función en:
   - Forma desarrollada (SOP completa)
   - Forma compacta:  
     $\[
     X = \Sigma m(\text{índices})
     \]$

⚠️ Recuerda:  
Cada mintérmino debe contener **todas las variables**.

#### Tabla de Verdad 1

<img width="50%" height="50%" alt="image" src="https://github.com/user-attachments/assets/476b64f0-ae06-4aee-8500-225def38b7b8" />

#### Tabla de Verdad 2
<img width="50%" height="50%" alt="image" src="https://github.com/user-attachments/assets/8e7ea240-bf5d-44e4-9a7a-784246f389e3" />



---

## 📐 Parte 2: Diagrama del Circuito Lógico (Obligatorio)

El estudiante deberá incluir en el reporte:

- 🧩 El **diagrama del circuito lógico dibujado** (puede ser digital o a mano escaneado).
- Debe mostrar claramente:
  - Entradas (A, B, C, D según corresponda)
  - Compuertas NOT
  - Compuertas AND (una por cada mintérmino)
  - Compuerta(s) OR final(es)
  - Salida X

📌 El diagrama debe:
- Estar limpio y ordenado
- Tener etiquetas claras en entradas y salida
- Mostrar la estructura real basada en la expresión obtenida

No se aceptan diagramas incompletos o sin etiquetar.

---

## 🔬 Parte 3: Simulación en Proteus

### Requisitos

- Implementar exactamente la función obtenida en forma SOP.
- Usar:
  - Switches lógicos para entradas
  - Compuertas AND, OR, NOT
  - LED o Logic Probe para visualizar X
- Verificar todas las combinaciones posibles:
  - 3 variables → 8 combinaciones
  - 4 variables → 16 combinaciones

---

## 📦 Entregables

El estudiante deberá subir:

1. 📄 Reporte en PDF que incluya:
   - Tablas de verdad
   - Desarrollo completo de mintérminos
   - Notación Σm(...)
   - Diagrama del circuito lógico
   - Capturas de la simulación en Proteus
2. 💾 Archivo de Proteus (.pdsprj)
3. 📷 Evidencia de verificación de combinaciones

---

## 📊 Rúbrica de Evaluación (100 puntos)

| Criterio | Puntos |
|----------|--------|
| Identificación correcta de mintérminos | 20 |
| Notación Σm correcta | 10 |
| Expresión SOP desarrollada correctamente | 20 |
| Diagrama lógico correcto y bien estructurado | 15 |
| Implementación funcional en Proteus | 20 |
| Verificación completa de combinaciones | 10 |
| Presentación y orden del reporte | 5 |

---

## ⚠️ Errores comunes que bajan puntos

- Olvidar negar variables en 0
- No incluir todas las variables en el mintérmino
- No incluir el diagrama lógico
- Diagrama sin etiquetas
- Simulación que no coincide con la tabla
