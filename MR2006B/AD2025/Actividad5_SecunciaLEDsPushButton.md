# Actividad 5 - Secuencia de LEDs con Push Button 🔘💡

## 🎯 Objetivo
Programar un **microcontrolador de 4 bits** para controlar una secuencia específica de LEDs que se activa únicamente cuando se presiona un **push button**.

## ⚙️ ¿Qué vamos a hacer?
Crear un programa en **lenguaje máquina** que:
- **Espere** a que se presione un botón (entrada digital)
- **Active** una secuencia predefinida de LEDs (salida digital)
- **Repita** la secuencia infinitamente mientras el botón esté presionado
- **Se detenga** cuando el botón no esté presionado

## 📋 Secuencia de LEDs requerida:

```
PASO 0: 1111 ← Todos los LEDs encendidos
PASO 1: 0111 ← LED 0 apagado
PASO 2: 0110 ← LEDs 0 y 3 apagados  
PASO 3: 0010 ← Solo LED 2 encendido
PASO 4: 0000 ← Todos los LEDs apagados
```

## 🔧 Diagrama de Conexiones:

```
MICROCONTROLADOR 4 BITS
┌─────────────────────┐
│   PUERTO ENTRADA    │  ← Push Button (P4)
│   PUERTO SALIDA     │  → LEDs P0, P1, P2, P3
└─────────────────────┘
```

## 🛠️ Funcionamiento del Programa:

### 🔄 Diagrama de Flujo:
```
      [INICIO]
         │
         ▼
[Leer estado del botón] ←──┐
         │                 │
         ▼                 │
¿Botón presionado? ─NO──→ ESPERA
         │SI
         ▼
[Ejecutar secuencia completa]
         │
         └─────────────────┘
```

## 📦 Entregables - Lo que debes entregar:

### 1. 📁 `secuencia_leds.bin` - **Archivo binario ejecutable**
   - Programa compilado listo para el microcontrolador
   - Contiene todas las instrucciones en código máquina

### 2. 📊 `secuencia_leds.xlsx` - **Código fuente en Excel**
   - Tabla completa con:
     - Dirección de memoria
     - Instrucción en lenguaje máquina
     - Código binario (4 bits)
     - Explicación de cada paso

### 3. 🎥 `explicacion_secuencia.mp4` - **Video explicativo**
   - **Diagrama de bloques** del microcontrolador
   - **Flujo de datos** entre CPU, memoria y puertos I/O
   - **Demostración** de la secuencia con el botón
   - **Explicación** del control por entrada digital

### 4. 🔌 `simulacion_proteus.pdsprj` - **Archivo Proteus**
   - Simulación completa del circuito
   - Microcontrolador, LEDs, resistencia y push button
   - Configuración de puertos de entrada/salida


## 🚀 Resultado Esperado:
Al **presionar el botón**, los LEDs ejecutarán la secuencia completa en loop. Al **soltar el botón**, la secuencia se detendrá y los LEDs permanecerán en su último estado. ¡Control total con solo 4 bits! 🎯✨
