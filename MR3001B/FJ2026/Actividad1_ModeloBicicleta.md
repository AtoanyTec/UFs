# 🤖 Actividad: Cinemática de un Robot Móvil (Modelo Bicicleta)

## 🎯 Objetivo de aprendizaje

Al finalizar esta actividad, el/la estudiante será capaz de:

- 📐 Aplicar el modelo cinemático tipo bicicleta con referencia en el eje trasero.
- 🧮 Calcular la evolución de los estados \((x, y, $\theta$)\) bajo condiciones de velocidad constante.
- 🔄 Analizar el movimiento rectilíneo y el movimiento en arco.
- 🧠 Interpretar geométricamente la trayectoria del robot.

---

## 📘 Descripción del problema

Un robot móvil tipo bicicleta realiza el siguiente movimiento:

### 1️⃣ Primer tramo (Movimiento recto)
- Tiempo: **7 segundos**
- Velocidad lineal: $\(v = 0.5\ \text{m/s}\)$
- Ángulo de dirección: $\(\delta = 0^\circ\)$

### 2️⃣ Segundo tramo (Movimiento con giro)
- Tiempo: **5 segundos**
- Velocidad lineal: $\(v = 0.5\ \text{m/s}\)$
- Ángulo de dirección: $\(\delta = 20^\circ\)$

---

## 🧭 Modelo cinemático a utilizar

Utilizar el **modelo bicicleta con referencia en el eje trasero**:

$\[
\dot{x} = v \cos \theta
\]$

$\[
\dot{y} = v \sin \theta
\]$

$\[
\dot{\theta} = \frac{v}{L} \tan \delta
\]$

Donde:

- $\(L\)$ = distancia entre ejes del robot  
- $\(v\)$ = velocidad lineal  
- $\(\delta\)$ = ángulo de dirección  

---

## 📝 Actividades a realizar

---

### 🔹 Parte 1 – Movimiento Rectilíneo (7 segundos)

1. Establece las condiciones iniciales:

$\[
x(0)=0, \quad y(0)=0, \quad \theta(0)=0
\]$

2. Integra el modelo cinemático.
3. Calcula el estado final:

$\[
(x_1, y_1, \theta_1)
\]$

4. Explica por qué la orientación no cambia en este tramo.

---

### 🔹 Parte 2 – Movimiento con Giro (5 segundos)

1. Usa como condiciones iniciales:

$\[
(x_1, y_1, \theta_1)
\]$

2. Calcula:

- La velocidad angular $\(\omega\)$
- El cambio total de orientación $\(\Delta \theta\)$
- El radio de giro $\(R\)$

3. Determina el estado final:

$\[
(x_2, y_2, \theta_2)
\]$

4. Interpreta físicamente el significado del radio de giro.

---

### 🔹 Parte 3 – Diagramas Cinemáticos ✏️

Realiza tres diagramas claramente etiquetados:

1. Robot en reposo  
2. Estado después de 7 segundos  
3. Estado después del giro  

Cada diagrama debe incluir:

- Sistema de referencia $\(x,y\)$
- Posición del eje trasero
- Orientación $\(\theta\)$
- Ángulo de dirección $\(\delta\)$ (cuando aplique)
- Trayectoria recorrida

---

## 📦 Entregables

Subir un archivo en **PDF** que incluya:

- Desarrollo matemático completo
- Sustitución numérica
- Resultados finales con unidades
- Diagramas hechos a mano (escaneados) o digitales
- Explicación conceptual breve (máximo 1 página)

---

## ⚠️ Consideraciones importantes

- Todas las operaciones deben estar claramente justificadas.
- No se aceptan resultados sin desarrollo.
- Especificar el valor de $\(L\)$ utilizado.
- Cuidar consistencia de unidades.
- Expresar $\(\theta\)$ en radianes.

---

## 📊 Criterios de Evaluación

| Criterio | Excelente (95-100) | Bueno (85-94) | Suficiente (75-84) | Insuficiente (≤74) |
|----------|----------------|------------|----------------|-------------------|
| Desarrollo matemático | Integración correcta y bien justificada | Errores menores | Procedimiento incompleto | Desarrollo incorrecto |
| Cálculo de estados | Resultados correctos y consistentes | Error numérico leve | Varias inconsistencias | Incorrecto |
| Diagramas | Claros, completos y bien etiquetados | Faltan detalles menores | Poco claros | No incluidos |
| Interpretación física | Explicación profunda y correcta | Explicación básica | Poco clara | No explica |

---

## 🧠 Pregunta de reflexión (obligatoria)

¿Qué sucede con la trayectoria si el valor de \(L\) aumenta?  
Explique físicamente el efecto en el radio de giro.
