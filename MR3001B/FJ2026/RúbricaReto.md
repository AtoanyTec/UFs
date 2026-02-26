# 🤖 Rúbrica de Evaluación  
# AGV Autónomo para Entrega de Material de Laboratorio

---

# 🎯 Objetivo General

Diseñar, modelar, implementar y validar un **Robot Móvil Autónomo (AGV)** capaz de entregar material de laboratorio de electrónica a **4 estaciones**, identificadas mediante marcadores ArUco, operando bajo principios formales de:

- Modelación cinemática  
- Control de movimiento  
- Máquina de Estados Finita (FSM)  
- Seguridad industrial  
- Validación experimental  

---


# ⚙️ Requisitos Técnicos Obligatorios

---

## 1️⃣ Arquitectura de Control (Máquina de Estados)

El robot **debe estar programado mediante una Máquina de Estados Finita (FSM)**.


### Debe entregarse:

- Diagrama formal de estados  
- Tabla de transiciones  
- Eventos y condiciones de cambio  
- Correspondencia entre diagrama y código implementado  

---

## 2️⃣ Programación Basada en Cinemática

Los movimientos deben definirse mediante el modelo cinemático correspondiente al robot (diferencial, triciclo u orugas).

### El reporte debe incluir:

- Parámetros físicos reales del robot  
- Justificación matemática  
- Estrategia de control (ej. proporcional, go-to-goal, seguimiento visual)  
- Comparación entre comportamiento teórico y experimental  

⚠ No se aceptan movimientos definidos por prueba-error sin fundamento matemático.

---

## 3️⃣ Sistema de Visión

Debe incluir:

- Detección de marcadores ArUco  
- Visualización en pantalla del ID detectado  
- Comparación entre ID esperado e ID detectado  
- Evidencia clara en el video  

---


## 4️⃣ Seguridad Obligatoria

El sistema debe incluir:

### 🛑 Botón físico de paro de emergencia
- Corte inmediato de motores  
- Cambio automático al estado EMERGENCIA  

### 🔊 Indicador visual o audible cuando el robot esté en movimiento
- LED intermitente o buzzer  
- Activado únicamente cuando el robot se desplaza  
 

---

# 🔬 Modelación y Validación (Obligatorio)

Además de implementar el sistema, deberán justificarlo teórica y experimentalmente.

---

## 1️⃣ Modelación Cinématica

Incluir:

- Derivación matemática  
- Supuestos  
- Restricciones físicas  
- Parámetros reales del robot  

---

# 📐 Diagramas Obligatorios

## 📌 Diagrama de Máquina de Estados
Debe incluir:

- Estados  
- Eventos  
- Transiciones  
- Condiciones  

---

## 📌 Diagrama a Bloques del Sistema

Debe representar:

- Cámara  
- Detector ArUco  
- Control cinemático  
- FSM  
- Interfaz usuario  
- Control de motores  
- Sensores de seguridad  

---


# 🎥 Entregables

## 1️⃣ Video (Máximo 5 minutos)

Debe mostrar:

- Flujo completo (Punto Cero → Almacén → Estación → Regreso)  
- ID ArUco visible en pantalla  
- Indicador de movimiento activo  
- Activación del paro de emergencia  
- Ejecución repetida al menos 3 veces consecutivas  

---

## 2️⃣ Reporte Técnico

Debe incluir:

- Portada  
- Abstract  
- Marco teórico  
- Modelación matemática  
- Diseño del sistema  
- Diagramas  
- Gráficas  
- Métricas  
- Análisis crítico  
- Conclusiones  
- Trabajo futuro  

---

# 📊 RÚBRICA DE EVALUACIÓN DEL PROTOTIPO

| Criterio | Excelente (100–95) | Bueno (94–85) | Suficiente (84–75) | Insuficiente (<75) |
|-----------|-------------------|---------------|--------------------|--------------------|
| Video flujo completo | Flujo continuo, correcto y sin intervención manual | Flujo completo con errores menores | Flujo parcial | No funciona correctamente |
| Evidencia ArUco | ID visible y validado correctamente | ID visible sin validación | Detección parcial | No hay evidencia |
| Programación basada en cinemática | Modelado matemático validado experimentalmente | Modelo parcial | Aplicación básica | Sin base matemática |
| Implementación por FSM | FSM completamente funcional | FSM parcial | FSM incompleta | No usa FSM |
| Botón de paro | Funcional e integrado a FSM | Funcional sin integración total | Respuesta tardía | No existe |
| Indicador en movimiento | Correctamente sincronizado con estados | Presente pero inconsistente | Poco visible | No existe |
| Robustez y repetibilidad | 3 ejecuciones consecutivas exitosas y tolerancia a variaciones | Funciona la mayoría de veces | Funciona ocasionalmente | No es repetible |

---

# 📊 RÚBRICA DE EVALUACIÓN DEL REPORTE TÉCNICO  

| Criterio | Excelente (100–95) | Bueno (94–85) | Suficiente (84–75) | Insuficiente (<75) |
|------------|------------------|---------------|--------------------|--------------------|
| **Estructura y organización** | Documento profesional, con portada, índice, secciones claramente delimitadas y redacción técnica formal. Flujo lógico impecable. | Estructura clara con ligeros problemas de organización. | Presenta estructura básica pero desordenada. | Desorganizado o incompleto. |
| **Marco teórico** | Explicación profunda y bien fundamentada de cinemática, control, ArUco y FSM. Incluye referencias técnicas adecuadas. | Marco teórico correcto pero con profundidad limitada. | Marco teórico superficial o incompleto. | No presenta marco teórico adecuado. |
| **Modelación cinemática** | Derivación matemática clara, ecuaciones correctas, parámetros reales y análisis crítico. | Modelación correcta con explicación limitada. | Presenta ecuaciones sin desarrollo claro. | No presenta modelación formal. |
| **Descripción de la arquitectura del sistema** | Explicación detallada de hardware y software. Integración claramente documentada. | Arquitectura descrita con algunos detalles faltantes. | Descripción básica del sistema. | No explica adecuadamente la arquitectura. |
| **Diagramas técnicos (FSM y bloques)** | Diagramas claros, profesionales y coherentes con el sistema implementado. | Diagramas correctos pero con pequeñas inconsistencias. | Diagramas incompletos o poco claros. | No incluye diagramas adecuados. |
| **Validación experimental y métricas** | Presenta datos cuantitativos (errores, precisión, tiempos), gráficas claras y análisis comparativo teórico vs experimental. | Presenta métricas pero con análisis limitado. | Presenta datos sin análisis crítico. | No presenta validación experimental. |
| **Análisis crítico y discusión** | Reflexión técnica profunda sobre limitaciones, errores, mejoras y robustez del sistema. | Incluye análisis pero superficial. | Análisis limitado o descriptivo. | No incluye análisis crítico. |
| **Calidad de gráficas y tablas** | Gráficas bien etiquetadas, unidades correctas, interpretación clara. | Gráficas correctas con pequeños errores de formato. | Gráficas poco claras o mal etiquetadas. | No incluye gráficas relevantes. |
| **Conclusiones técnicas** | Conclusiones claras, basadas en resultados y coherentes con objetivos. | Conclusiones adecuadas pero poco profundas. | Conclusiones generales sin sustento en datos. | No presenta conclusiones claras. |
| **Redacción técnica y ortografía** | Lenguaje formal, técnico y sin errores ortográficos. | Pocos errores menores. | Varios errores que afectan claridad. | Redacción deficiente. |

---

# 📊 RÚBRICA DE EVALUACIÓN DE PRESENTACIÓN FINAL DEL PROTOTIPO 

La evaluación será:

- 📌 **Individual (60%)** → Respuestas a preguntas técnicas realizadas por el profesor.
- 📌 **Desempeño grupal en presentación y demostración (40%)**

Cada estudiante debe demostrar dominio técnico completo del sistema, independientemente de su rol en el equipo.

## 📊 Distribución de Ponderación

| Componente | Peso |
|------------|------|
| 🔍 Evaluación individual (preguntas técnicas) | **60%** |
| 🎤 Claridad y calidad de la presentación | 10% |
| ⚙ Demostración técnica del prototipo | 15% |
| 📐 Dominio de modelación y decisiones de diseño | 10% |
| 🧠 Capacidad de análisis y pensamiento crítico | 5% |

## 📋 Criterios de Evaluación

| Criterio | Excelente (100–95) | Bueno (94–85) | Suficiente (84–75) | Insuficiente (<75) |
|-----------|-------------------|---------------|--------------------|--------------------|
| **Dominio técnico individual (60%)** | Responde con seguridad, explica ecuaciones, arquitectura, FSM, control, validación y seguridad sin apoyo del equipo. Demuestra comprensión profunda. | Responde correctamente la mayoría de preguntas con pequeñas dudas. | Responde parcialmente y depende del equipo. | No puede explicar el funcionamiento del sistema. |
| **Claridad y estructura de la presentación (10%)** | Presentación organizada, profesional, visualmente clara y con secuencia lógica. | Presentación clara con pequeños problemas de organización. | Presentación básica y poco estructurada. | Presentación desordenada o improvisada. |
| **Demostración funcional del prototipo (15%)** | Consulta rúbrica de evaluación del prototipo. | Consulta rúbrica de evaluación del prototipo. | Consulta rúbrica de evaluación del prototipo. | Consulta rúbrica de evaluación del prototipo. |
| **Explicación de modelación y decisiones de diseño (10%)** | Justifica matemáticamente la cinemática, el control y la arquitectura. Argumenta decisiones técnicas con fundamentos. | Explica decisiones pero con menor profundidad matemática. | Explicación superficial. | No puede justificar decisiones de diseño. |
| **Análisis crítico y capacidad de mejora (5%)** | Identifica limitaciones reales, fuentes de error y propone mejoras viables. | Identifica algunas mejoras. | Comentarios generales sin análisis profundo. | No reconoce limitaciones del sistema. |

---

---

# 🚨 Penalizaciones

- No usar modelo cinemático formal en la programación (-10 pts)    
- No implementar máquina de estados (-10 pts)  
- No incluir botón de paro (-10 pts)  
- No presentar validación experimental (-10 pts)   

---

