# 🛞📐 Actividad: Cinemática de Robot Móvil (Modelo Bicicleta)

## 🎯 Objetivo
Aplicar el **modelo cinemático tipo bicicleta** para calcular la postura del robot móvil:
$\[
(x, y, \theta)
\]$
y representar su **diagrama cinemático** en **reposo** y en **t = 15 s**.

---

## 🧾 Enunciado del problema
Un robot móvil avanza durante **15 segundos** con:

- Velocidad lineal: **v = 0.9 m/s**
- Ángulo de dirección: **δ = 0°**
- Distancia entre ejes: **L = 0.8 m**
- Condiciones iniciales:
  - \(x(0)=0\)
  - \(y(0)=0\)
  - \(\theta(0)=0\)

### ✅ Tu tarea
1. **Calcula** la postura final \((x, y, \theta)\) en **t = 15 s**.
2. **Dibuja** el **diagrama cinemático** del robot:
   - Estado de **reposo** (t = 0)
   - Estado en **t = 15 s**

---

## 📌 Modelo cinemático (modelo bicicleta)
Usa las ecuaciones:

\[
\dot{x} = v\cos(\theta)
\]
\[
\dot{y} = v\sin(\theta)
\]
\[
\dot{\theta} = \frac{v}{L}\tan(\delta)
\]

📍 **Nota:** recuerda convertir \( \delta \) a radianes si lo usas en calculadora científica o software.

---

## 🧠 Recomendaciones
- Muestra tu procedimiento paso a paso (no solo el resultado).
- Incluye **unidades** en cada cálculo.
- En el diagrama, incluye:
  - Ejes globales **X, Y**
  - Orientación del robot **θ**
  - Dirección del movimiento (flecha)
  - Indica claramente **δ** (aunque sea 0°)

---

## 📦 Entregables (subir a GitHub)
Crea una carpeta con el nombre:

`Apellido_Nombre_CinematicaRobot/`

Dentro incluye:

1. **README.md** con:
   - Datos del problema
   - Desarrollo matemático
   - Resultados finales \((x, y, \theta)\)
2. **Diagrama cinemático** (uno o dos dibujos) en formato:
   - `PNG`, `JPG` o `PDF`
   - Nombre sugerido: `diagrama_cinematico.png`
3. (Opcional) Si usaste software:
   - Archivo fuente (`.ipynb`, `.m`, `.pdf`, etc.)

---

## ✅ Rúbrica de evaluación (100 pts)

| Criterio | Excelente (25) | Bueno (20) | Suficiente (15) | Insuficiente (0–10) |
|---|---|---|---|---|
| **Planteamiento del modelo** | Usa correctamente las 3 ecuaciones y explica variables (v, L, δ, θ) | Ecuaciones correctas pero con explicación parcial | Ecuaciones incompletas o poco claras | Modelo incorrecto o no incluido |
| **Desarrollo y procedimiento** | Procedimiento completo, ordenado, con sustitución clara y unidades | Procedimiento casi completo, con pequeños saltos | Procedimiento parcial o con varios pasos omitidos | Sin procedimiento o incoherente |
| **Resultados \((x, y, \theta)\)** | Resultados correctos y bien presentados con unidades | Resultados correctos con presentación mejorable | Resultados con errores menores de cálculo/unidades | Resultados incorrectos o faltantes |
| **Diagrama cinemático (t=0 y t=15s)** | Diagramas claros, con ejes, θ, dirección de avance y δ indicado | Diagramas claros pero falta 1 elemento (ejes/θ/δ) | Diagramas poco legibles o incompletos | Sin diagramas o no corresponden |

---

## 📤 Entrega
- Sube tu carpeta al repositorio indicado por tu profesor(a).
- Verifica que los archivos se vean correctamente desde GitHub (previsualización del README y del diagrama).

---

## 🔍 Checklist antes de entregar
- [ ] Incluí las ecuaciones del modelo bicicleta  
- [ ] Mostré el procedimiento completo  
- [ ] Mis resultados tienen unidades  
- [ ] Dibujé reposo (t=0) y estado final (t=15s)  
- [ ] Subí README + diagrama en la carpeta correcta  

---
