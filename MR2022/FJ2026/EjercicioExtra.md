## Ejercicio – Sistema de seguridad para cortina industrial

Una **cortina industrial motorizada** es controlada mediante un **Arduino** y un **motor de corriente directa** conectado a un **puente H**.

El sistema funciona de la siguiente manera:

- Un **botón de apertura** permite abrir la cortina.
- Un **botón de cierre** permite cerrar la cortina.
- Un **sensor infrarrojo TCRT5000** detecta si hay un objeto debajo de la cortina.
- Si el sensor detecta un objeto **mientras la cortina se está cerrando**, el sistema debe:
  - **detener el motor**
  - **invertir el sentido de giro del motor durante 2 segundos** para subir ligeramente la cortina.

---

### Se pide

### 1. Identificación de elementos del sistema

Completa la siguiente tabla:

| Elemento del sistema | Componente |
|---|---|
| Entradas del sistema | |
| Sensor | |
| Controlador | |
| Actuador | |
| Salida del sistema | |

---

### 2. Tabla de comportamiento del sistema

Completa la siguiente tabla de funcionamiento:

| Botón abrir | Botón cerrar | Sensor detecta objeto | Acción del sistema |
|---|---|---|---|
| 1 | 0 | 0 | |
| 0 | 1 | 0 | |
| 0 | 1 | 1 | |
| 0 | 0 | 0 | |

---

### 3. Análisis del sistema

Responde:

1. ¿Por qué es importante invertir el sentido del motor cuando se detecta un objeto durante el cierre?
2. ¿Qué riesgos existirían si el sistema no tuviera sensor?

---

### 4. Diagrama del sistema

Dibuja un **diagrama a bloques** que incluya:

- Botones de control  
- Sensor TCRT5000  
- Arduino  
- Puente H  
- Motor de la cortina

Explica brevemente cómo interactúan estos elementos.
