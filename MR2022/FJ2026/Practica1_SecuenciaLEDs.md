# 🔁💡 Práctica 1: Secuencia de LEDs con Arduino  

**Unidad de Formación:** MR2022 – Análisis de Elementos de la Mecatrónica  
**Profesor:** Atoany Fierro  
**Versión:** FJ2025  

---

## 📌 Descripción

En esta práctica desarrollarás un sistema básico de control utilizando un **Arduino UNO** para encender una secuencia de 8 LEDs de izquierda a derecha.

La secuencia deberá activarse únicamente cuando se presione un botón 🔘 y ejecutarse **una sola vez por cada pulsación**.

Esta actividad fortalece la integración de:

- 🔌 Electrónica básica  
- 💻 Programación en Arduino  
- ⚙️ Integración hardware–software  
- 🧠 Pensamiento lógico  

---

## 🎯 Objetivos de Aprendizaje

Al finalizar la práctica serás capaz de:

- Diseñar un circuito con múltiples salidas digitales  
- Implementar una lógica secuencial en Arduino  
- Utilizar un botón con resistencia pull-down  
- Documentar correctamente un proyecto de ingeniería  

---

## 🧰 Materiales

- 1 Arduino UNO  
- 8 LEDs  
- 8 resistencias de 220Ω o 330Ω  
- 1 resistencia para pull-down  
- 1 push button  
- 1 protoboard  
- Cables de conexión (NO jumpers)  
- Cable USB  
- IDE de Arduino  

---

# 🅰️ Parte 1: Conexión del Circuito

## 🔧 Pasos

1. Coloca los 8 LEDs en el protoboard.
2. Conecta todos los cátodos a GND.
3. Coloca una resistencia (220Ω o 330Ω) entre cada ánodo y un pin digital del Arduino.
4. Conecta el pin GND del Arduino a la línea de tierra del protoboard.
5. Conecta el push button a un pin digital.
6. Implementa una resistencia pull-down en el botón.
7. Verifica que el circuito esté limpio, ordenado y sin jumpers sueltos.

📌 Mantén los cables al ras del protoboard.

---

# 🅱️ Parte 2: Programación

## 💻 Requisitos del Programa

El sketch debe:

- Encender los LEDs de izquierda a derecha.
- Activarse únicamente cuando se presione el botón.
- Ejecutar la secuencia una sola vez por cada pulsación.
- Apagar todos los LEDs al finalizar la secuencia.

---

## 🔌 Carga del Programa

1. Conecta el Arduino vía USB.
2. Selecciona la placa correcta.
3. Selecciona el puerto correspondiente.
4. Sube el programa.

---

# 🧪 Parte 3: Pruebas

1. Presiona el botón.
2. Observa la secuencia.
3. Si no funciona:
   - Revisa conexiones.
   - Verifica la lógica del código.
4. Documenta el funcionamiento.

---

# 📦 Entregables

## 1️⃣ Circuito Funcional
- Protoboard ensamblado correctamente.
- Secuencia operando con botón.

## 2️⃣ Código Fuente

Nombrar el archivo como:  

```python
Practica1_NombreApellido.ino
```

## 3️⃣ Evidencia Visual
- Fotografías claras del circuito.
- Video de 1–2 minutos explicando:
  - Funcionamiento.
  - Código.
  - Conexiones.

## 4️⃣ Reporte en PDF

Debe incluir:

### Portada
- Nombre del estudiante  
- Nombre de la práctica  
- Fecha  

### Diagrama de conexión

### Código comentado

### Conclusión
- Dificultades
- Aprendizajes
- Reflexión técnica

---

# 📊 Rúbrica de Evaluación

| Criterio | 95–100 | 85–94 | 75–84 | 0–74 |
|----------|--------|-------|-------|------|
| Funcionamiento | Secuencia perfecta y estable | Funciona con detalles menores | Funciona parcialmente | No funciona |
| Ensamblaje | Limpio, profesional, sin jumpers | Ordenado con mínimos detalles | Desordenado parcialmente | Incorrecto o inestable |
| Código | Claro, comentado y optimizado | Funcional con poca claridad | Parcial o con errores | No cumple requisitos |
| Reporte | Completo y bien estructurado | Completo con áreas de mejora | Incompleto | Deficiente |

---

# 🧠 Recomendaciones Finales

✔ Comenta tu código  
✔ Verifica polaridad de los LEDs  
✔ No energices sin revisar conexiones  
✔ Mantén orden y limpieza  
✔ Prueba el botón varias veces  

---

# 🚀 Buenas Prácticas de Ingeniería

Organización • Claridad • Documentación • Seguridad • Funcionamiento estable
