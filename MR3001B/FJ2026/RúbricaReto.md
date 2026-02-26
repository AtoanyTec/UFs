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
| Diagrama FSM | Formal, completo y coherente con implementación | Correcto con omisiones menores | Básico | No corresponde al sistema |
| Diagrama a bloques | Completo y profesional | Mayormente completo | Incompleto | Incorrecto |
| Manual operación | Claro, técnico y estructurado | Funcional pero limitado | Incompleto | No presentado |
| Programación basada en cinemática | Modelado matemático validado experimentalmente | Modelo parcial | Aplicación básica | Sin base matemática |
| Implementación por FSM | FSM completamente funcional | FSM parcial | FSM incompleta | No usa FSM |
| Botón de paro | Funcional e integrado a FSM | Funcional sin integración total | Respuesta tardía | No existe |
| Indicador en movimiento | Correctamente sincronizado con estados | Presente pero inconsistente | Poco visible | No existe |
| Robustez y repetibilidad | 3 ejecuciones consecutivas exitosas y tolerancia a variaciones | Funciona la mayoría de veces | Funciona ocasionalmente | No es repetible |

---

# 🚨 Penalizaciones

- No usar modelo cinemático formal en la programación (-10 pts)    
- No implementar máquina de estados (-10 pts)  
- No incluir botón de paro (-10 pts)  
- No presentar validación experimental (-10 pts)   

---

