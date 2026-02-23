# 🤖 Ejercicio 3: Control de Robot Móvil con Máquina de Estados (2 estados)

## 🎯 Objetivo
Programar un robot móvil usando una **máquina de estados determinística** con **dos estados**:
1. **Estado 1: REPOSO** 🛑  
2. **Estado 2: AVANZAR** 🚗💨  

Además, documentar la **cinemática** del robot en cada estado, identificando las ecuaciones de movimiento correspondientes.

---

## 🧩 Contexto
En robótica móvil, las **máquinas de estado** permiten organizar comportamientos del robot de forma clara, modular y fácil de depurar.  
En esta práctica implementarás una FSM mínima que alterna entre reposo y avance.

---

## 🛠️ Requisitos (Materiales)
- Robot móvil 
- Raspberry
- Driver de motores (ej. L298N, TB6612FNG, etc.)
- Fuente/batería adecuada
- Botón o condición de cambio de estado (elige UNA):
  - Opción A: Botón físico
  - Opción B: Señal por serial (teclado en monitor serial)
  - Opción C: Temporizador (cambia cada cierto tiempo)

---

## ✅ Descripción de la Actividad

### 1) Define los estados y transiciones
Tu robot debe cumplir:

- **Estado 1: REPOSO**
  - Motores apagados
  - Velocidad lineal: $\( v = 0 \)$
  - Velocidad angular: $\( \omega = 0 \)$
- **Estado 2: AVANZAR**
  - Motores encendidos hacia adelante
  - Velocidad lineal constante: $\( v = v_0 \)$ (elige un valor razonable)
  - Velocidad angular: $\( \omega = 0 \)$ (movimiento recto)

📌 **Transiciones**
- De `REPOSO` → `AVANZAR` cuando se cumpla la condición elegida (botón/serial/tiempo)
- De `AVANZAR` → `REPOSO` cuando se cumpla nuevamente la condición

---

## 2) Programa la máquina de estados
Implementa la FSM con:
- `enum` (o equivalente)
- `switch-case` (o equivalente)
- Funciones para cada acción: `reposo()` y `avanzar()`

✅ Debe verse claramente la lógica de estados y transiciones.

---

## 📐 3) Entregable de Cinemática (OBLIGATORIO)

### Cinemática esperada por estado
Asume un modelo cinemático de robot móvil en el plano:

$\[
\dot{x} = v\cos(\theta), \quad \dot{y} = v\sin(\theta), \quad \dot{\theta} = \omega
\]$

#### 🛑 Estado 1: REPOSO
$\[
v=0,\ \omega=0
\]$
Entonces:
$\[
\dot{x}=0,\quad \dot{y}=0,\quad \dot{\theta}=0
\]$
📌 Interpretación: el robot no cambia su posición ni orientación.

#### 🚗 Estado 2: AVANZAR
$\[
v=v_0,\ \omega=0
\]$
Entonces:
$\[
\dot{x} = v_0\cos(\theta),\quad \dot{y} = v_0\sin(\theta),\quad \dot{\theta}=0
\]$

📌 Si además asumes que el robot inicia con $\( \theta(0)=0 \)$, entonces:
$\[
x(t)=x_0 + v_0t,\quad y(t)=y_0,\quad \theta(t)=0
\]$

✅ En tu entrega debes incluir:
- Ecuaciones por estado
- Significado físico (1–2 líneas por estado)
- Un diagrama simple del robot y sus variables $\((x,y,\theta)\)$

---

# 📦 Entregables

## Entregable 1: Código fuente
- Archivo `.py` 
- Debe incluir comentarios mínimos:
  - Definición de estados
  - Condiciones de transición
  - Acciones por estado

## Entregable 2: Documento PDF (Cinemática + FSM)
Un **PDF** con:
1. Diagrama de estados (2 estados y sus transiciones)
2. Cinemática en **Estado REPOSO** (ecuaciones + interpretación)
3. Cinemática en **Estado AVANZAR** (ecuaciones + interpretación)
4. Evidencia de pruebas (foto del robot o captura del monitor serial, según el caso)

📌 Formato sugerido del PDF:
- Portada (nombre, matrícula, grupo, fecha)
- Secciones numeradas
- Ecuaciones claras

---

# 🧪 Pruebas y Validación (Checklist)
Antes de entregar, verifica:

- [ ] El robot inicia en REPOSO
- [ ] Cambia a AVANZAR con la condición definida
- [ ] Vuelve a REPOSO correctamente
- [ ] El código tiene FSM clara (no solo `if` sueltos)
- [ ] El PDF incluye cinemática por estado y diagrama de estados

---

# 📊 Rúbrica de Evaluación (100 pts)

| Criterio | Excelente (25) | Bueno (20) | Suficiente (15) | Insuficiente (0–10) |
|---|---|---|---|---|
| Implementación FSM (2 estados) | Estados/transiciones claros, código modular | FSM clara con pocos detalles faltantes | FSM funciona pero confusa o poco modular | No hay FSM o no funciona |
| Funcionamiento del robot | Cambia de estado de forma confiable y repetible | Funciona con fallas menores | Funciona parcialmente | No funciona |
| Cinemática por estado (ecuaciones) | Ecuaciones correctas y completas por estado | Casi completa, errores menores | Incompleta o con errores conceptuales | Ausente o incorrecta |
| Diagrama y documentación (PDF) | Diagrama de estados + explicación clara | Diagrama o explicación con detalles faltantes | Documento desordenado o incompleto | No entrega PDF o está mal presentado |

---

# ⭐ Extra (Opcional +10 pts)
Implementa un indicador visual por estado:
- LED apagado en REPOSO
- LED encendido en AVANZAR
o imprime el estado actual en el monitor serial.


---
