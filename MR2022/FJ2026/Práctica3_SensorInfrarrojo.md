# 🔴🔵 Práctica 3: Detección con Sensor Óptico TCRT5000

## 🎯 Objetivo

Diseñar e implementar un sistema utilizando el **sensor óptico reflectivo TCRT5000** que permita:

- 🔴 Encender un LED rojo cuando el sensor detecte presencia/objeto.
- 🔵 Encender un LED azul cuando NO detecte presencia/objeto.

---

## 🧠 Competencias a Desarrollar

- Comprensión del principio de reflexión infrarroja.
- Interpretación de señales digitales provenientes de sensores ópticos.
- Implementación de lógica condicional en sistemas embebidos.
- Buenas prácticas de montaje electrónico profesional.
- Análisis de sensibilidad y calibración de sensores.

---

## 🧰 Materiales

- 1 Sensor óptico **TCRT5000**
- 1 LED rojo
- 1 LED azul
- 2 Resistencias (220Ω – 330Ω)
- 1 Arduino
- Protoboard
- Cables de conexión (cortados a medida)
- Cable USB

---

## 🔎 Investigación Previa (Obligatoria)

Antes de armar el circuito, deberás investigar y responder:

1. ¿Cómo funciona el sensor TCRT5000?
2. ¿Qué componentes internos tiene? (LED IR y fototransistor)
3. ¿Qué significa que sea un sensor reflectivo?
4. ¿Qué tipo de señal entrega (analógica, digital o ambas según el módulo)?
5. ¿Cómo influye el color del objeto en la detección?

---

## 🔌 Actividades a Realizar

### 1️⃣ Conexión

- Sensor<br>  <img width="30%" height="30%" alt="image" src="https://github.com/user-attachments/assets/b8fe87e4-4f96-484c-b580-626553459e8e" />


---

### 2️⃣ Montaje físico (Requisito obligatorio de presentación)

- Arma el circuito en el protoboard.
- Verifica polaridad de los LEDs.
- ⚠️ **Las conexiones deben quedar completamente al ras del protoboard.**
- ⚠️ **No se permite el uso de jumpers largos o cables elevados.**
- ⚠️ Los cables deben estar cortados exactamente a la medida necesaria.  
- El montaje debe verse limpio, ordenado y profesional.
- Revisa todas las conexiones antes de energizar el sistema.

> 🔎 La presentación física será evaluada con rigor técnico.

---

### 3️⃣ Programación

Implementa la lógica para que:

- Cuando el sensor detecte reflexión (objeto presente) → LED rojo encendido y LED azul apagado.
- Cuando NO detecte reflexión → LED azul encendido y LED rojo apagado.

El programa debe:

- Configurar correctamente los pines.
- Leer el estado del sensor.
- Utilizar una estructura condicional clara.
- Mostrar en el monitor serie el estado del sistema.
- Ajustar el potenciómetro del módulo si es necesario para calibrar sensibilidad.

---

### 4️⃣ Pruebas y Calibración

- Coloca diferentes objetos frente al sensor (blanco, negro, colores).
- Determina a qué distancia detecta correctamente.
- Ajusta el potenciómetro para mejorar la estabilidad.
- Verifica que nunca estén encendidos ambos LEDs al mismo tiempo.

---

## 🎥 Entregable

### 📹 Video (máximo 2 minutos)

Debe mostrar:

- El circuito físico funcionando.
- Enfoque claro del cableado (acercamiento).
- Pruebas con distintos objetos.
- Monitor serie mostrando los cambios de estado.
- Demostración de calibración.

---

### 📄 Código fuente comentado

Debe incluir:

- Configuración de pines.
- Lógica de decisión.
- Comentarios explicativos claros.

---

### 🧠 Explicación técnica breve

Responder:

1. ¿Por qué el TCRT5000 detecta mejor superficies claras?
2. ¿Qué pasaría en ambientes con mucha luz externa?
3. ¿Cuál es una aplicación industrial real de este sensor?
4. ¿Qué diferencia hay entre usar salida digital y analógica?

---

## 📊 Rúbrica de Evaluación

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (75-84) | Insuficiente (<75) |
|----------|-------------------|--------------|-------------------|-------------------|
| Funcionamiento | Sistema estable y correctamente calibrado | Funciona con pequeños ajustes | Funciona parcialmente | No funciona |
| Lógica implementada | Clara, estructurada y correcta | Funcional pero poco organizada | Errores menores | Lógica incorrecta |
| Conexiones físicas | Cableado profesional, al ras del protoboard y sin jumpers | Funcional con ligeros detalles | Desordenado | Uso de jumpers o montaje inadecuado |
| Análisis técnico | Explicación profunda y bien fundamentada | Explicación adecuada | Superficial | No explica |

---
