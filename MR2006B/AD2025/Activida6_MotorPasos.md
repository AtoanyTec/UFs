# Actividad 6 - Control de Motor a Pasos 🔌⚙️

## 🎯 Objetivo
Programar un **microcontrolador de 4 bits** para controlar la secuencia de encendido de un **motor a pasos**, haciendo que gire en ambos sentidos.

## ⚙️ ¿Qué vamos a hacer?
Vamos a crear un programa en **lenguaje máquina** que envíe señales eléctricas en una secuencia específica a las bobinas del motor a pasos, controlando su movimiento paso a paso.

## 📋 Lo que necesitamos entender:

### 🔧 Componentes clave:
- **Microcontrolador de 4 bits** - Nuestro "cerebro" digital
- **Motor a pasos** - Motor que se mueve en pasos angulares precisos

### 🔄 Como funciona el motor a pasos:
```
Cada bobina se activa en secuencia:
PASO 1: 1010 → Bobina A encendida
PASO 2: 1001 → Bobina B encendida  
PASO 3: 0101 → Bobina C encendida
PASO 4: 0110 → Bobina D encendida
⬆️ Esta secuencia hace girar el motor ⬆️
```

## 📦 Entregables - Lo que debes entregar:

### 1. 📁 `motor_pasos.bin` - **Archivo binario ejecutable**
   - El programa compilado listo para cargar en el microcontrolador
   - Contiene las instrucciones en código de máquina

### 2. 📊 `secuencia_motor.xlsx` - **Código fuente en Excel**
   - Tabla con todas las instrucciones paso a paso
   - Incluye: dirección, instrucción, código hexadecimal

### 3. 🎥 `explicacion_motor.mp4` - **Video explicativo**
   - **Muestra el diagrama de bloques** del microcontrolador
   - **Explica** cómo fluyen los datos entre CPU, memoria y puertos
   - **Demuestra** la secuencia de control del motor paso a paso en Proteus

## 🛠️ Proceso de trabajo:
1. **✍️ Diseñar** la secuencia de pasos en Excel
2. **🔢 Convertir** a código binario
3. **⚡ Probar** la secuencia en el simulador
4. **🎬 Grabar** la explicación del funcionamiento

## 💡 Resultado esperado:
Al ejecutar el programa, el motor girará suavemente siguiendo la secuencia programada, demostrando el control preciso que podemos lograr con solo 4 bits! 🎯✨
