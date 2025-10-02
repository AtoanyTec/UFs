# Actividad 2 - LED Parpadeante (Blinking LED) 💫💡

## 🎯 Objetivo
Programar un **microcontrolador de 4 bits** para crear un efecto de parpadeo en un LED, alternando entre encendido y apagado con intervalos de tiempo.

## ⚙️ ¿Qué vamos a hacer?
Crear un programa en **lenguaje máquina** que:
- **Encienda un LED** durante un periodo de tiempo
- **Lo apague** durante otro periodo de tiempo  
- **Repita este ciclo** infinitamente
- **Utilice retardos** para controlar la velocidad del parpadeo

## 🔧 Diagrama de Arquitectura del Microcontrolador:

```mermaid
graph TD
    A[Memoria ROM<br/>Programa] --> B[CPU<br/>Procesador 4 bits]
    B --> C[Unidad de Control<br/>Decodificador]
    C --> D[ALU<br/>Unidad Aritmética]
    D --> E[Registros<br/>R0, R1, R2, R3]
    E --> F[Puerto de Salida<br/>P0, P1, P2, P3]
    F --> G[LED<br/>Conectado a P0]
    
    style A fill:#e1f5fe
    style B fill:#f3e5f5
    style C fill:#e8f5e8
    style F fill:#fff3e0
    style G fill:#ffebee
```

## 🛠️ Funcionamiento del Programa:

### 🔄 Diagrama de Flujo:
```mermaid
flowchart TD
    A[INICIO] --> B[Configurar P0 como SALIDA]
    B --> C[Encender LED<br/>P0 = 1]
    C --> D[Esperar Retardo 1]
    D --> E[Apagar LED<br/>P0 = 0]
    E --> F[Esperar Retardo 2]
    F --> C
```

## 📦 Entregables - Lo que debes entregar:

### 1. 📁 `led_parpadeante.bin` - Archivo binario ejecutable

### 2. 📊 `codigo_parpadeo.xlsx` - Código fuente en Excel

### 3. 🎥 `explicacion_parpadeo.mp4` - Video explicativo

**Temas a cubrir en el video:**
- 📋 **Introducción** al microcontrolador de 4 bits
- 🏗️ **Arquitectura completa** y componentes
- 🔄 **Ciclo Fetch-Decode-Execute**
- 💡 **Control del LED** mediante el puerto P0
- ⏱️ **Implementación de retardos** 
- 🔁 **Bucle infinito** con instrucción JMP
- 🎬 **Demostración práctica** del parpadeo

## 🔌 Conexiones del Circuito:

```
Microcontrolador ────→ LED ────→ Resistencia ────→ Tierra
     (Puerto P0)    (Ánodo)    (220Ω-330Ω)      (GND)
```

## 💡 Conceptos Clave Explicados:

- **🔄 Ciclo de Instrucción**: Cómo la CPU ejecuta cada paso
- **🎛️ Control de Puertos**: Escritura digital de salida
- **⏰ Temporización**: Uso de retardos para control de tiempo
- **💾 Contador de Programa**: Seguimiento de la dirección actual
- **🔗 Bucle Infinito**: Mantener el programa ejecutándose continuamente

## 🚀 Resultado Esperado:
El LED conectado al puerto P0 parpadeará continuamente con un intervalo constante de 500ms, demostrando el control básico de E/S y temporización con un microcontrolador de 4 bits! ✨
