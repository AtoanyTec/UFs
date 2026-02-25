# 🧠🤖 Práctica 2: Seguimiento de Persona con YOLOv8-Seg

## 🎯 Objetivo
Implementar **YOLOv8 para segmentación** en la **Raspberry Pi** del robot móvil para **detectar una persona** y, al localizarla, **mover el robot hacia ella** usando **cinemática** (controlando **velocidad lineal `v`** y **velocidad angular `ω`**).  
El giro debe basarse en el **ángulo requerido** para alinear al robot con la persona.

---

## ✅ Requisitos
### Hardware
- Robot móvil (diferencial u orugas) con **Raspberry Pi**
- **Cámara** (USB o CSI) montada al frente del robot
- Sistema de control de motores operativo (driver/microcontrolador/ROS)
- Medición de parámetros físicos del robot:
  - **Separación entre ruedas/orugas**: $b (m)$
  - **Radio de rueda** (si aplica): $r (m)$

### Software
- Sistema operativo en Raspberry (Raspberry Pi OS o Ubuntu)
- Entorno Python + librerías para:
  - Captura de video
  - YOLOv8 (Ultralytics) para segmentación
  - Control del robot (GPIO/serial/ROS)

---

## 🧩 Parte A — Verificación del sistema base (antes de YOLO)
1. **Encender robot** y confirmar:
   - La Raspberry inicia sin errores.
   - La cámara es reconocida y entrega video estable.
2. **Verificar control de motores**:
   - El robot debe poder:
     - Avanzar
     - Girar a la izquierda
     - Girar a la derecha
     - Detenerse
3. Registrar en el reporte:
   - $b$ (y $r$ si aplica)
   - Cómo se envían comandos a motores (ej. PWM, ROS `/cmd_vel`, microcontrolador por serial)

✅ **Evidencia**: video corto de 20–30 s mostrando cámara + movimientos básicos.

---

## 🧠 Parte B — Detección por segmentación (YOLOv8-Seg)
### 1) Selección del modelo
- Usar un modelo de segmentación **ligero** para Raspberry (recomendación: versión “nano” o equivalente).
- Justificar la elección considerando **FPS** y estabilidad.

### 2) Configurar detección SOLO de persona
Tu pipeline debe:
- Procesar cada frame de la cámara
- Ejecutar segmentación
- Filtrar resultados para la clase **person**
- Aplicar un umbral de confianza (ej. `conf ≥ 0.5`, ajustable)

### 3) Extraer mediciones mínimas por frame
Para la persona detectada (idealmente la de mayor confianza):
- **Centroide** `(cx, cy)` de la detección (puede ser del bounding box o de la máscara)
- **Ancho de imagen** `W` (pixeles)
- **Área** aproximada de la máscara o caja (para estimar cercanía)

✅ **Evidencia**: captura/overlay o screenshot donde se aprecie:
- máscara o contorno
- caja de detección
- etiqueta “person”
- centroide (o punto medio)

---

## 🧭 Parte C — De imagen a ángulo (para girar “los grados correspondientes”)

### 1) Error horizontal (desalineación)
Define:
- `W`: ancho de imagen
- `cx`: coordenada x del centroide de la persona
- Centro de imagen: $W/2$`

Error en pixeles:
- $e_x = cx - (W/2)$

Error normalizado:
- $e = e_x / (W/2)$  → rango aproximado `[-1, 1]`

Interpretación:
- `e < 0`: persona a la izquierda
- `e > 0`: persona a la derecha
- `e ≈ 0`: persona centrada

### 2) Convertir error a ángulo (grados o radianes)
Necesitas el **FOV horizontal** de la cámara (Field of View), aproximado o medido.
- Denótalo como $FOV_h$ (en grados)

Ángulo estimado hacia la persona:
- $θ_target ≈ e * (FOV_h / 2)$

✅ Esto te da “los grados correspondientes” que el robot debe girar para apuntar a la persona.

📌 **En el reporte**:
- Indica de dónde obtuviste $FOV_h$ (datasheet, medición aproximada, o calibración).

---

## 🔁 Parte D — Control cinemático para orientar y avanzar
Tu robot debe usar **cinemática** para convertir la percepción en movimiento.

### 1) Velocidad angular `ω` (orientación)
Plantea una ley de control proporcional:
- $ω = k_ω * θ_target$

Con:
- saturación: $|ω| ≤ ω_max$
- regla de seguridad: si `|θ_target|` es grande, prioriza girar antes de avanzar.

📌 Recomendación operativa:
- Si $|θ_target| > θ_align$ (ej. 10°–15°):  
  - **v = 0** y solo giras con `ω`
- Si $|θ_target| ≤ θ_align$:  
  - permites avance (v>0)

### 2) Velocidad lineal `v` (avance)
Define una condición de “cercanía” usando el tamaño del objeto:
- área de máscara o área de bounding box: `A`

Regla:
- Si `A < A_target`: la persona está lejos → **avanza**
- Si `A ≥ A_target`: persona suficientemente cerca → **detente**

✅ Esto evita choque y genera comportamiento de “acercamiento”.

---

## 🚗 Parte E — Conversión de (v, ω) a velocidades de rueda/oruga (cinemática)
### Robot diferencial / orugas (modelo diferencial)
Con separación `b`:
- $v_R = v + (b/2) * ω$
- $v_L = v - (b/2) * ω$

En el reporte, explica:
- cómo conviertes $v_L$ y $v_R$ a tu forma de control (PWM, RPM, comando ROS, etc.)
- límites y saturación para no exigir más de lo que los motores pueden dar

✅ **Evidencia**: tabla o ejemplos numéricos con un caso:
- persona a la derecha (θ_target positivo)
- calcula `ω`
- obtiene $v_R, v_L$
- explica cómo se traduce a señal de motor

---

## 🧠 Parte F — Máquina de estados (OBLIGATORIA)
Implementar al menos estos estados:

### Estado 0: BUSCAR
Condición: no hay persona confiable detectada.
Acción:
- `v = 0`
- `ω = ω_search` (giro lento constante) o barrido por intervalos
Transición:
- a SEGUIR cuando detectes “person” por N frames consecutivos (para evitar falsos positivos)

### Estado 1: ALINEAR
Condición: persona detectada pero $|θ_target| > θ_align$.
Acción:
- `v = 0`
- `ω` según ley proporcional a $θ_target$
Transición:
- a AVANZAR cuando $|θ_target| ≤ θ_align$
- a BUSCAR si se pierde detección por M frames

### Estado 2: AVANZAR
Condición: persona centrada ($|θ_target| ≤ θ_align$) y $A < A_target$.
Acción:
- `v > 0` (con reducción si no está perfectamente centrada)
- `ω` pequeño para mantener centrado
Transición:
- a DETENER si $A ≥ A_target$
- a ALINEAR si $|θ_target|$ crece (la persona se sale del centro)
- a BUSCAR si se pierde detección

### Estado 3: DETENER
Condición: persona cerca ($A ≥ A_target$).
Acción:
- `v = 0`, `ω = 0`
Transición:
- a AVANZAR si $A < A_target$ (persona se aleja)
- a BUSCAR si no hay detección

✅ **Entregable adicional**: diagrama de estados (tipo bloque o UML simple).

---

## 🧪 Pruebas obligatorias (mínimo 4)
1. Persona aparece al frente → el robot deja de buscar y **se alinea**.
2. Persona a la izquierda → el robot gira hasta quedar centrado.
3. Persona a la derecha → el robot gira hasta quedar centrado.
4. Persona al frente y lejos → el robot avanza y se detiene a distancia segura.

⚠️ Seguridad:
- Área despejada
- Límite de velocidad bajo
- Botón de paro o comando de emergencia listo

---

## 📦 Entregables
1. 🎥 **Video (2–4 min)** mostrando:
   - BUSCAR → detectar → ALINEAR → AVANZAR → DETENER
   - Evidencia visual de segmentación (máscara/caja)
2. 📄 **Reporte técnico (1–2 páginas)** que incluya:
   - Parámetros físicos `b` (y `r` si aplica)
   - Ecuaciones usadas (de `e` → `θ_target` → `ω` → `v_L, v_R`)
   - Diagrama de máquina de estados
3. 📁 **Repositorio** (o zip) con:
   - Documentación de instalación/ejecución
   - Evidencias (capturas)
4. 🧠 **AI_LOG.md**
   - prompts usados
   - decisiones tomadas
   - problemas encontrados y cómo los resolvieron

---

## 📊 Rúbrica (100 pts)
| Criterio | Pts |
|---|---:|
| Segmentación YOLOv8 de persona estable (con filtro de confianza) | 20 |
| Cálculo correcto de error/ángulo (`e` → `θ_target`) y justificación de FOV | 15 |
| Control cinemático: `ω` para alineación + reglas de seguridad | 20 |
| Conversión cinemática a ruedas/orugas (`v, ω` → `vL, vR`) + explicación | 15 |
| Máquina de estados robusta (buscar/alinear/avanzar/detener) | 10 |
| Pruebas en físico (4 casos) con evidencia clara | 10 |
| Reporte y documentación reproducible | 5 |
| AI_LOG completo y reflexivo | 5 |

---

## ✅ Checklist de aprobación
- [ ] Cámara ok y video estable
- [ ] YOLOv8-seg detecta “person”
- [ ] Se obtiene centroide y área
- [ ] Se calcula `θ_target` y se usa para orientar
- [ ] Se generan `v` y `ω` con límites
- [ ] Se convierte a `vL` y `vR` mediante cinemática
- [ ] Máquina de estados implementada
- [ ] Video evidencia completo
