# 🧪 Segundo Examen Parcial - Examen Práctico  
## ESP32 + Sensor PIR + Arduino IoT Cloud

---

## 📌 Información general
- **Duración:** 90 minutos  
- **Modalidad:** En equipo  
- **Valor:** 100 puntos  

---

## 🎯 Objetivo
Desarrollar un sistema IoT utilizando un **ESP32**, un **sensor PIR** y **LEDs**, integrando un **dashboard en Arduino IoT Cloud** para monitoreo y control en tiempo real.

---

## 📚 Material de apoyo
Para ayudarte durante el examen, revisa las **diapositivas 83 a la 109** de la presentación del curso, donde se explica la integración con **Arduino IoT Cloud** y el uso del **sensor PIR**.

---

## 🧠 Descripción del reto

Debes diseñar e implementar un sistema que:

1. Detecte presencia utilizando un **sensor PIR**  
2. Controle **dos LEDs virtuales en el dashboard**:
   - 💡 Luces del salón  
   - ❄️ Aire acondicionado  
3. Controle **un LED físico desde el dashboard**
4. Muestre mensajes en el **Serial Monitor de Arduino IoT Cloud**

---

## 🔧 Requerimientos técnicos

### Hardware
- ESP32  
- Sensor PIR  
- 1 LED físico  
- Resistencias (220Ω recomendada)  
- Protoboard y cables  

### Software
- Arduino IDE  
- Arduino IoT Cloud  
- Arduino Create Agent  

---

## ⚙️ Funcionalidad esperada

### 🔹 Parte 1 – Detección de presencia
- Cuando el sensor PIR detecte movimiento:
  - Encender LED virtual "Luces"
  - Encender LED virtual "A/C"
  - Imprimir: `"Hay presencia"`
  
- Cuando NO detecte movimiento:
  - Apagar ambos LEDs virtuales
  - Imprimir: `"No hay presencia"`

---

### 🔹 Parte 2 – Control desde la nube
- Crear un botón en el dashboard:
  - Al activarlo → encender LED físico
  - Al desactivarlo → apagar LED físico  

---

### 🔹 Parte 3 – Integración IoT
- Todas las variables deben estar sincronizadas con Arduino IoT Cloud:
  - Variable booleana: `presencia`
  - Variable booleana: `luces`
  - Variable booleana: `ac`
  - Variable booleana: `ledFisico`

---

## 🧪 Procedimiento

1. Realiza el **diagrama de conexiones**
2. Arma el circuito en protoboard
3. Configura el dispositivo en Arduino IoT Cloud
4. Define las variables en la nube
5. Programa el ESP32
6. Verifica funcionamiento:
   - Con y sin movimiento
   - Control desde dashboard

---

## 🎥 Entregables

### 📹 Video (máx. 2 minutos)
Debe mostrar:
- Circuito físico funcionando
- Detección de presencia
- Dashboard en acción
- Control del LED físico
- Monitor serie en la nube

---

### 📄 Código fuente
- Comentado
- Subido a repositorio o archivo

---

### 🧠 Explicación breve
Responder:

1. ¿Cómo funciona el sensor PIR?  
2. ¿Qué tipo de señal entrega?  
3. ¿Cómo se comunica el ESP32 con Arduino IoT Cloud?  
4. ¿Qué mejoras implementarías al sistema?

---

## 📊 Rúbrica de evaluación

| Criterio | Excelente (100–90) | Bueno (89–80) | Suficiente (79–70) | Insuficiente (<70) |
|----------|------------------|--------------|-------------------|-------------------|
| **Funcionamiento del sistema** | Todo funciona perfectamente (PIR, LEDs, IoT) | Funciona con pequeños errores | Funciona parcialmente | No funciona |
| **Integración con IoT Cloud** | Variables bien sincronizadas y dashboard funcional | Pequeños errores de sincronización | Integración incompleta | No integra |
| **Control del LED físico** | Control remoto correcto y estable | Funciona con fallas menores | Funciona parcialmente | No funciona |
| **Monitor serie (nube)** | Mensajes claros y correctos | Mensajes con errores menores | Mensajes incompletos | No implementado |
| **Código** | Bien estructurado, comentado y claro | Entendible con pocos comentarios | Poco claro | Desordenado o incompleto |
| **Video evidencia** | Completo y claro | Falta algún elemento | Poco claro | No evidencia funcionamiento |
| **Explicación técnica** | Respuestas completas y bien fundamentadas | Buenas pero superficiales | Incompletas | Incorrectas |

--- 
