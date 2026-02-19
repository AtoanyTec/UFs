# 🚗 Actividad: Modelado Cinemático y Validación Experimental de su Robot Móvil

## 🎯 Objetivo

Modelar matemáticamente la cinemática del robot móvil físico que posee cada equipo (robot diferencial o robot con orugas), utilizando **sus parámetros físicos reales**, y validar el modelo mediante simulación.

---

## 🧠 Competencias a desarrollar

- Modelado matemático de sistemas físicos  
- Integración teoría–simulación  
- Validación experimental  
- Análisis crítico del error entre modelo ideal y sistema real  

---

# 🔹 Parte 1: Identificación del tipo de robot

Cada equipo deberá identificar qué tipo de robot posee:

---

## 1️⃣ Robot diferencial (2 ruedas + rueda loca)


### 📏 Parámetros físicos a medir

- Radio de rueda: $\( r \)$  
- Distancia entre ruedas: $\( b \)$  
- Velocidad angular rueda izquierda: $\( \omega_L \)$  
- Velocidad angular rueda derecha: $\( \omega_R \)$  

### 📐 Modelo cinemático

$\[
v = \frac{r}{2}(\omega_R + \omega_L)
\]$

$\[
\omega = \frac{r}{b}(\omega_R - \omega_L)
\]$

$\[
\dot{x} = v \cos\theta
\]$

$\[
\dot{y} = v \sin\theta
\]$

$\[
\dot{\theta} = \omega
\]$

---

## 2️⃣ Robot móvil con orugas


### 📏 Parámetros físicos a medir

- Distancia entre centros de orugas: $\( b \)$  
- Velocidad lineal oruga izquierda: $\( v_L \)$  
- Velocidad lineal oruga derecha: $\( v_R \)$  

### 📐 Modelo cinemático

$\[
v = \frac{v_R + v_L}{2}
\]$

$\[
\omega = \frac{v_R - v_L}{b}
\]$

$\[
\dot{x} = v \cos\theta
\]$

$\[
\dot{y} = v \sin\theta
\]$

$\[
\dot{\theta} = \omega
\]$

---

# 🔹 Parte 2: Desarrollo del Modelo

Cada equipo deberá:

## ✅ 1. Medir físicamente su robot

- Utilizar vernier o regla  
- Documentar con fotografía las mediciones  
- Justificar precisión de medición  

---

## ✅ 2. Definir un escenario de prueba

Ejemplo:

- Avanza recto 4 s  
- Luego gira 3 s  
- Luego avanza 2 s  

Cada equipo debe definir sus propias velocidades reales.

---

## ✅ 3. Calcular analíticamente

Determinar:

- $\( x(t) \)$  
- $\( y(t) \)$  
- $\( \theta(t) \)$  
- Posición final  
- Trayectoria esperada  

Mostrar desarrollo paso a paso.

---

# 🔹 Parte 3: Validación en Simulador

Utilizar el simulador correspondiente

- [Robot móvil con orugas](https://atoany-robot-oruga.netlify.app/)
- [Robot móvil diferencial](https://atoany-robot-movil-diferencial.netlify.app/)


## 📊 Comparar:

- Trayectoria simulada  
- Trayectoria teórica  
- Error porcentual  

---

# 🔹 Parte 4: Análisis Crítico

Responder:

1. ¿El modelo ideal representa correctamente su robot?  
2. ¿Qué errores observaron?  
3. ¿Qué factores reales no están considerados en el modelo?
   - Deslizamiento  
   - Fricción  
   - Saturación de motores  
   - Error en mediciones  
4. ¿Cómo mejorarían el modelo?  

---

# 📦 Entregables

## 📄 1. Reporte técnico (PDF)

Debe incluir:

1. Tipo de robot  
2. Mediciones físicas  
3. Modelo matemático  
4. Desarrollo analítico  
5. Trayectoria calculada  
6. Simulación  
7. Comparación y análisis de error  
8. Conclusiones técnicas  

---

## 🎥 2. Video corto (máx. 3 minutos)

Debe mostrar:

- Robot físico ejecutando el movimiento  
- Comparación con la trayectoria simulada  
- Explicación breve del resultado  

---

# 📊 Rúbrica de Evaluación

| Criterio | Excelente (100) | Bueno (85) | Suficiente (70) | Insuficiente (50) |
|----------|----------------|------------|----------------|----------------|
| Modelo matemático | Correcto y completamente desarrollado | Pequeños errores | Desarrollo incompleto | Modelo incorrecto |
| Uso de parámetros reales | Mediciones precisas y justificadas | Mediciones sin justificación | Mediciones poco claras | No usa parámetros reales |
| Validación en simulador | Coincidencia clara y análisis profundo | Coincidencia parcial | Simulación superficial | No hay validación |
| Análisis crítico | Reflexión técnica profunda | Análisis básico | Comentarios superficiales | No hay análisis |
| Presentación técnica | Profesional y clara | Clara | Poco estructurada | Desordenada |

---

# 🏁 Conclusión

El objetivo de esta actividad es que comprendan que un robot móvil:

> No es solo código — es un sistema físico que debe modelarse, validarse y analizarse críticamente.

La ingeniería real ocurre cuando teoría y práctica coinciden.
