# 📘 Ejemplo de Cinemática de Robot con Orugas (Modelo Diferencial)

## 🔹 Datos del problema

- Ancho entre orugas:  
  $\( b = 10 \text{ cm} = 0.10 \text{ m} \)$

- Condiciones iniciales:  
  $\[
  (x_0, y_0, \theta_0) = (0, 0, 0)
  \]$

- Relaciones cinemáticas:
  $\[
  v = \frac{v_R + v_L}{2}
  \]$
  $\[
  \omega = \frac{v_R - v_L}{b}
  \]$

---

# 🚗 Tramo 1: Avance recto (3 s)

Velocidades de orugas:
- $\( v_L = 0.60 \text{ m/s} \)$
- $\( v_R = 0.60 \text{ m/s} \)$
- $\( t_1 = 3 \text{ s} \)$

## 1️⃣ Cálculo de velocidades del robot

$\[
v_1 = \frac{0.60 + 0.60}{2} = 0.60 \text{ m/s}
\]$

$\[
\omega_1 = \frac{0.60 - 0.60}{0.10} = 0
\]$

## 2️⃣ Cálculo de la pose

$\[
x_1 = x_0 + v_1 t_1 \cos(\theta_0)
\]$
$\[
x_1 = 0 + 0.60(3)\cos(0) = 1.8
\]$

$\[
y_1 = y_0 + v_1 t_1 \sin(\theta_0)
\]$
$\[
y_1 = 0 + 0.60(3)\sin(0) = 0
\]$

$\[
\theta_1 = \theta_0 + \omega_1 t_1 = 0
\]$

### ✅ Estado al final del tramo 1

$\[
(x_1, y_1, \theta_1) = (1.8,\; 0,\; 0)
\]$

---

# 🔄 Tramo 2: Giro con velocidades dadas en orugas (3 s)

Velocidades de orugas:
- $\( v_L = 0.58 \text{ m/s} \)$
- $\( v_R = 0.62 \text{ m/s} \)$
- $\( t_2 = 3 \text{ s} \)$

---

## 1️⃣ Calcular \( v \) y \( \omega \)

$\[
v_2 = \frac{0.62 + 0.58}{2} = 0.60 \text{ m/s}
\]$

$\[
\omega_2 = \frac{0.62 - 0.58}{0.10}
\]$

$\[
\omega_2 = \frac{0.04}{0.10} = 0.4 \text{ rad/s}
\]$

---

## 2️⃣ Calcular orientación final

$\[
\theta_2 = \theta_1 + \omega_2 t_2
\]$

$\[
\theta_2 = 0 + 0.4(3) = 1.2 \text{ rad}
\]$

---

## 3️⃣ Cálculo de posición final (integración exacta)

Para $\( \omega \neq 0 \)$:

$\[
x_2 = x_1 + \frac{v_2}{\omega_2}
\left[
\sin(\theta_1 + \omega_2 t_2) - \sin(\theta_1)
\right]
\]$

$\[
y_2 = y_1 - \frac{v_2}{\omega_2}
\left[
\cos(\theta_1 + \omega_2 t_2) - \cos(\theta_1)
\right]
\]$

Calculamos:

$\[
\frac{v_2}{\omega_2} = \frac{0.60}{0.4} = 1.5
\]$

Valores trigonométricos:

$\[
\sin(1.2) \approx 0.9320
\]$
$\[
\cos(1.2) \approx 0.3624
\]$

Entonces:

$\[
x_2 = 1.8 + 1.5(0.9320 - 0)
\]$

$\[
x_2 = 1.8 + 1.398 = 3.198
\]$

$\[
y_2 = 0 - 1.5(0.3624 - 1)
\]$

$\[
y_2 = -1.5(-0.6376) = 0.9564
\]$

---

# 🎯 Resultado Final

$\[
(x_f, y_f, \theta_f) \approx (3.198,\; 0.956,\; 1.2 \text{ rad})
\]$

En grados:

$\[
1.2 \text{ rad} \approx 68.75^\circ
\]$

---

# 📌 Resumen de velocidades por tramo

| Tramo | \( v_L \) (m/s) | \( v_R \) (m/s) | Tipo de movimiento |
|--------|----------------|----------------|-------------------|
| 1 | 0.60 | 0.60 | Recto |
| 2 | 0.58 | 0.62 | Giro con avance |

---
