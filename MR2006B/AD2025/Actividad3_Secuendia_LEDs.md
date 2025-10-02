# Actividad 3 - Secuencia de LEDs 🔄💡

## 🎯 Objetivo
Programar un **microcontrolador de 4 bits** para crear una secuencia animada de LEDs que se enciendan de izquierda a derecha en forma de "carrera" o "barrido".

## ⚙️ ¿Qué vamos a hacer?
Crear un programa en **lenguaje máquina** que:
- **Active secuencialmente** 4 LEDs conectados a los puertos de salida
- **Cree un efecto visual** de movimiento de izquierda a derecha
- **Mantenga el patrón** en un bucle infinito
- **Incluya retardos** entre cada paso para visualización

## 📋 Secuencia de LEDs requerida:

```
PASO 1: 0001 → LED 0 encendido (izquierda)
PASO 2: 0010 → LED 1 encendido  
PASO 3: 0100 → LED 2 encendido
PASO 4: 1000 → LED 3 encendido (derecha)
PASO 5: Volver al PASO 1
```

## 📦 Entregables - Lo que debes entregar:

### 1. 📁 `secuencia_leds.bin` - **Archivo binario ejecutable**
   - Programa compilado listo para el microcontrolador
   - Contiene todas las instrucciones en código máquina de 4 bits
   - Listo para cargar en la memoria ROM

### 2. 📊 `codigo_secuencia.xlsx` - **Código fuente en Excel**
   - Tabla completa con:
     - **Dirección de memoria** (0000, 0001, 0010...)
     - **Código binario** (4 bits por instrucción)
     - **Explicación detallada** de cada paso
     - **Estado de los puertos** en cada instrucción

### 3. 🎥 `explicacion_secuencia.mp4` - **Video explicativo**
   - **Diagrama de bloques animado** del microcontrolador
   - **Flujo de datos** mostrando cómo las instrucciones viajan de ROM a CPU
   - **Proceso de decodificación** por la Unidad de Control
   - **Ejecución paso a paso** de la secuencia
   - **Señales de temporización** y control de puertos
   - **Demostración visual** del efecto de carrera en los LEDs

## 💡 Conceptos Clave a Explicar en el Video:

- **💾 Fetch** - Cómo la CPU obtiene instrucciones de la memoria ROM
- **🔍 Decode** - Cómo la Unidad de Control interpreta cada instrucción
- **⚡ Execute** - Cómo se ejecutan las operaciones en los puertos
- **⏱️ Timing** - Importancia de los retardos para la visualización
- **🔄 Program Counter** - Cómo salta entre direcciones de memoria
- **🎛️ Control de Puertos** - Escritura digital en los LEDs

## 🚀 Resultado Esperado:
Los 4 LEDs se encenderán secuencialmente creando un efecto visual de movimiento continuo de izquierda a derecha, demostrando el control secuencial básico con un microcontrolador de 4 bits! 🎯✨

## 🔄 Patrón Visual Continuo:
```
[●○○○] → [○●○○] → [○○●○] → [○○○●] → REPETIR
  LED0     LED1     LED2     LED3
```
