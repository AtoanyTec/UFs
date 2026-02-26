# 🤖 Actividad 3 – Reto  
## Robot en reposo → botón → avance lineal con cinemática → detección ArUco → alto total

---

## 🎯 Objetivo

Programar el robot móvil para que:

1. Inicie en **estado de reposo**.  
2. Rompa el reposo mediante un **botón físico**.  
3. Avance en **línea recta utilizando su modelo cinemático**.  
4. Detecte un marcador ArUco y se detenga completamente.  

⚠️ La programación **debe estar basada en la cinemática del robot**, no en prueba-error.

---

# 🧠 Parte 1 – Máquina de Estados

El robot debe implementar **mínimo tres estados**:   

1️⃣ REPOSO   
2️⃣ AVANZAR   
3️⃣ DETENIDO   

📌 Deben entregar el **diagrama de la máquina de estados** con transiciones claramente indicadas.

---

# 📐 Parte 2 – Modelo Cinématico (Obligatorio)

Cada equipo debe usar el modelo que corresponda a su robot.

---

# 📊 Cálculos obligatorios (caso específico)

Deben reportar:

1. Medición real de parámetros físicos:
   - Distancia entre ruedas/orugas.
   - Radio de rueda (si aplica).
2. Ecuaciones utilizadas.
3. Sustitución numérica con valores reales.
4. Cálculo explícito de las velocidades usadas.
5. Justificación matemática de por qué el robot se mueve en línea recta.

🚫 No se acepta: *“funciona porque lo probé”*.  
Debe estar matemáticamente justificado.

---

# 🎥 Parte 3 – Detección de ArUco

El robot debe:

- Detectar el marcador.
- Identificar su ID.
- Mostrar en pantalla el ID detectado.
- Al confirmar detección válida:
  - Cambiar al estado **DETENIDO**.
  - Poner velocidades en cero inmediatamente.

---

# 📦 Entregables

## 1️⃣ Video (1–2 minutos)

Debe mostrar claramente:

- Estado de reposo.
- Activación con botón.
- Avance lineal estable.
- Detección del ArUco.
- Detención inmediata.

---

## 2️⃣ Código fuente

Debe incluir:

- Implementación de la máquina de estados.
- Implementación explícita de la cinemática.
- Comentarios donde se observen los cálculos aplicados.
- Claridad en las variables físicas utilizadas.

---

## 3️⃣ Reporte técnico (PDF)

Debe contener:

- Diagrama de máquina de estados.
- Modelo cinemático utilizado.
- Parámetros físicos medidos.
- Desarrollo matemático completo.
- Sustitución numérica.
- Conclusión técnica.

---

# 📊 Rúbrica de Evaluación

| Criterio | Excelente (95–100) | Bueno (85–94) | Suficiente (75–84) | Insuficiente (<75) |
|----------|-------------------|---------------|--------------------|--------------------|
| **Máquina de estados** | Estados bien definidos, transiciones robustas y control estable | Estados correctos con pequeños detalles por mejorar | Estados básicos con errores menores | No implementa máquina de estados |
| **Uso de la cinemática** | Control completamente basado en el modelo matemático | Uso parcial del modelo con pequeños ajustes empíricos | Modelo mencionado pero poco aplicado | Control sin modelo matemático |
| **Cálculos reportados** | Parámetros medidos, ecuaciones, sustitución numérica correcta y coherente | Cálculos correctos con omisiones menores | Cálculos incompletos o poco claros | No entrega cálculos o son incorrectos |
| **Funcionamiento del sistema** | Robot cumple el reto de forma estable y repetible | Funciona con pequeñas inconsistencias | Funciona parcialmente | No cumple el reto |

---

## 🚨 Condición importante

El robot debe cumplir el reto de manera **repetible y robusta**.  
Si funciona solo una vez, no se considera dominio completo.
