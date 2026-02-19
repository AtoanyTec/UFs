# 📌 Ejemplo: Cálculo de Posición Final de un Robot Diferencial  
(Movimiento Recto + Giro)

---

## 🔹 Datos del Robot

- Radio de rueda: \( r = 0.05 \, m \)
- Distancia entre ruedas: \( L = 0.30 \, m \)
- Condiciones iniciales:

$\[
x(0)=0, \quad y(0)=0, \quad \theta(0)=0
\]$

(El robot inicia orientado hacia el eje X positivo)

---

# 🚗 Tramo 1: Movimiento Recto

### ⏱ Tiempo
$\[
t_1 = 4 \, s
\]$

### ⚙️ Velocidades angulares
$\[
\omega_r = \omega_l = 8 \, rad/s
\]$

### 📐 Velocidad lineal

$\[
v_1 = \frac{r}{2}(\omega_r + \omega_l)
\]$

$\[
v_1 = \frac{0.05}{2}(8+8)
\]$

$\[
v_1 = 0.025(16) = 0.4 \, m/s
\]$

### 📐 Velocidad angular

$\[
\omega_1 = \frac{r}{L}(\omega_r - \omega_l) = 0
\]$

El robot no gira, por lo tanto:

$\[
\theta_1 = 0
\]$

---

### 📍 Posición al final del tramo 1

$\[
x_1 = x(0) + v_1 t_1 \cos(0)
\]$

$\[
x_1 = 0 + (0.4)(4)(1) = 1.6 \, m
\]$

$\[
y_1 = y(0) + v_1 t_1 \sin(0)
\]$

$\[
y_1 = 0
\]$

---

### ✅ Estado después del tramo 1

$\[
(x_1, y_1, \theta_1) = (1.6, \; 0, \; 0)
\]$

---

# 🔄 Tramo 2: Giro (Movimiento en Arco)

### ⏱ Tiempo
$\[
t_2 = 3 \, s
\]$

### ⚙️ Nuevas velocidades angulares
$\[
\omega_r = 10 \, rad/s
\]$
$\[
\omega_l = 6 \, rad/s
\]$

---

## 📐 Velocidad lineal

$\[
v_2 = \frac{r}{2}(\omega_r + \omega_l)
\]$

$\[
v_2 = \frac{0.05}{2}(10+6)
\]$

$\[
v_2 = 0.025(16) = 0.4 \, m/s
\]$

---

## 📐 Velocidad angular

$\[
\omega_2 = \frac{r}{L}(\omega_r - \omega_l)
\]$

$\[
\omega_2 = \frac{0.05}{0.30}(4)
\]$

$\[
\omega_2 = 0.6667 \, rad/s
\]$

---

## 📐 Cambio de orientación

$\[
\Delta\theta = \omega_2 t_2
\]$

$\[
\Delta\theta = (0.6667)(3)
\]$

$\[
\Delta\theta = 2.0 \, rad
\]$

$\[
\theta_2 = 2.0 \, rad
\]$

---

# 📍 Cálculo de posición durante giro

Cuando $\( v \)$ y $\( \omega \)$ son constantes:

$\[
x_2 = x_1 + \frac{v_2}{\omega_2}
\left[
\sin(\theta_2) - \sin(\theta_1)
\right]
\]$

$\[
y_2 = y_1 - \frac{v_2}{\omega_2}
\left[
\cos(\theta_2) - \cos(\theta_1)
\right]
\]$

---

## 📐 Cálculo intermedio

$\[
\frac{v_2}{\omega_2} = \frac{0.4}{0.6667} = 0.6
\]$

Valores trigonométricos:

$\[
\sin(2.0) \approx 0.9093
\]$
$\[
\cos(2.0) \approx -0.4161
\]$

---

## 📍 Posición final

$\[
x_2 = 1.6 + 0.6(0.9093)
\]$

$\[
x_2 = 1.6 + 0.5456
\]$

$\[
x_2 = 2.1456 \, m
\]$

---

$\[
y_2 = 0 - 0.6(-0.4161 - 1)
\]$

$\[
y_2 = -0.6(-1.4161)
\]$

$\[
y_2 = 0.8497 \, m
\]$

---

# ✅ Resultado Final

$\[
(x_f, y_f, \theta_f) \approx
(2.146 \, m,\; 0.850 \, m,\; 2.0 \, rad)
\]$

---

## 🔁 Orientación en grados

$\[
2.0 \, rad \times \frac{180}{\pi}
\]$

$\[
\theta_f \approx 114.6^\circ
\]$

---

# 🎯 Resumen Final

El robot:

- Avanza **1.6 m en línea recta**
- Luego describe un **arco de circunferencia**
- Termina en:

$\[
(2.146,\; 0.850,\; 114.6^\circ)
\]$

---
