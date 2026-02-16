# 🧠🔧 Actividad: Instalación de Ubuntu en Raspberry Pi y Control de un LED

## 🎯 Objetivo de aprendizaje

Al finalizar esta actividad, el/la estudiante será capaz de:

- Instalar correctamente el sistema operativo **Ubuntu** en una Raspberry Pi.
- Configurar el entorno básico del sistema.
- Controlar un GPIO desde Python.
- Encender un LED utilizando la Raspberry Pi.
- Documentar el funcionamiento mediante evidencia en video.

---

## 🧰 Materiales necesarios

- 1 Raspberry Pi (recomendado Raspberry Pi 4)
- 1 tarjeta microSD (mínimo 16 GB)
- Fuente de alimentación compatible
- Cable HDMI + monitor
- Teclado y mouse
- Protoboard
- 1 LED
- 1 resistencia de 220Ω o 330Ω
- Cables jumper

---

# 🖥️ Parte 1: Instalación de Ubuntu en Raspberry Pi

## 1️⃣ Descargar Ubuntu

Descargar la imagen oficial desde:

https://ubuntu.com/download/raspberry-pi

Seleccionar:
- **Ubuntu Desktop 22.04 LTS (ARM64)** (recomendado)

---

## 2️⃣ Grabar la imagen en la microSD

Utilizar **Raspberry Pi Imager** o **Balena Etcher**:

1. Insertar microSD en tu computadora.
2. Seleccionar la imagen descargada.
3. Grabar en la microSD.
4. Esperar a que finalice el proceso.

---

## 3️⃣ Primer arranque

1. Insertar la microSD en la Raspberry Pi.
2. Conectar monitor, teclado y mouse.
3. Encender la Raspberry Pi.
4. Completar configuración inicial:
   - Usuario
   - Contraseña
   - Configuración regional
   - Conexión WiFi

Verificar que el sistema inicie correctamente.

---

# 🔌 Parte 2: Conexión del LED

## 📍 Conexión eléctrica

- Conectar el **ánodo del LED** (pierna larga) al **GPIO 18** (pin físico 12).
- Conectar el **cátodo del LED** a una resistencia de 220Ω.
- Conectar la resistencia a **GND** (pin físico 6).

⚠️ Nunca conectes un LED directamente sin resistencia.

---

# 💻 Parte 3: Programación en Python

## 1️⃣ Instalar librerías necesarias

Abrir terminal y ejecutar:

```bash
sudo apt update
sudo apt install python3-rpi.gpio
```

---

## 2️⃣ Crear el archivo

Crear archivo:

```bash
nano led.py
```

Copiar el siguiente código:

```python
import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)
GPIO.setup(18, GPIO.OUT)

GPIO.output(18, GPIO.HIGH)
print("LED ENCENDIDO")
time.sleep(5)

GPIO.output(18, GPIO.LOW)
print("LED APAGADO")

GPIO.cleanup()

```

Guardar con:
- CTRL + X
- Y
- ENTER

## 3️⃣ Ejecutar el programa

```bash
python3 led.py
```
El LED debe encender durante 5 segundos y luego apagarse.

## 🎥 Entregable
### 📌 Video 

El video debe mostrar:

- Raspberry Pi encendida con Ubuntu funcionando.
- Explicación breve de la conexión del circuito.
- Ejecución del programa.
- Funcionamiento del LED.

⚠️ El video debe ser claro y continuo (sin cortes en la demostración).
✔️ Utiliza la IA como asistente




