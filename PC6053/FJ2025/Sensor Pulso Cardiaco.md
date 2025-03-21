# Proyecto Final: Monitoreo de Pulso Cardíaco con Arduino IoT Cloud

## Introducción
En este proyecto, construirán un sistema que permita monitorear el pulso cardíaco en tiempo real utilizando un sensor, un microcontrolador compatible con Arduino IoT Cloud. Aprenderán a integrar hardware y software para crear una solución tecnológica aplicable en el campo de la salud.

---

## Objetivo
Desarrollar un sistema IoT que mida el pulso cardíaco de una persona y envíe los datos a la plataforma **Arduino IoT Cloud** para su visualización en tiempo real.

---

## Materiales Necesarios
1. **Sensor de pulso cardíaco**: MAX30100 o MAX30102.
2. **Microcontrolador compatible con Arduino IoT Cloud**:
   - Arduino MKR WiFi 1010.
   - ESP8266 o ESP32 (con soporte para Arduino IoT Cloud).
3. **Cables y protoboard**: Para conectar los componentes.
4. **Fuente de alimentación**: Batería recargable o cable USB.
5. **Computadora**: Para programar el microcontrolador.
6. **Cuenta en Arduino IoT Cloud**: Regístrate en [Arduino IoT Cloud](https://create.arduino.cc/iot/).

---

## Pasos a Seguir

### 1. Conectar el Hardware
1. Conecta el sensor de pulso cardíaco al microcontrolador:
   - **VCC** del sensor a **3.3V** del microcontrolador.
   - **GND** del sensor a **GND** del microcontrolador.
   - **SCL** del sensor a **SCL** (o GPIO 5 en ESP8266/ESP32).
   - **SDA** del sensor a **SDA** (o GPIO 4 en ESP8266/ESP32).
2. Conecta el microcontrolador a la computadora mediante un cable USB.

---

### 2. Configurar Arduino IoT Cloud
1. **Crear una cuenta**:
   - Si no tienes una, regístrate en [Arduino IoT Cloud](https://create.arduino.cc/iot/).
2. **Crear un nuevo Thing**:
   - En la plataforma, haz clic en **"Create Thing"**.
   - Asigna un nombre a tu proyecto, por ejemplo, "Monitoreo de Pulso Cardíaco".
3. **Configurar el dispositivo**:
   - Si usas un Arduino MKR WiFi 1010, sigue las instrucciones para configurarlo.
   - Si usas un ESP8266 o ESP32, asegúrate de que esté soportado por Arduino IoT Cloud.
4. **Agregar una variable**:
   - Crea una variable llamada `heartRate` de tipo **Entero (int)**.
   - Esta variable almacenará el valor del pulso cardíaco.

---

### 3. Programar el Microcontrolador
1. **Abrir el Arduino Web Editor**:
   - Conéctate a [Arduino IoT Cloud](https://create.arduino.cc/iot/) y abre el editor en línea.
2. **Escribir el código**:
   - El editor generará automáticamente un esqueleto de código. Completa el código con la lógica para leer el sensor de pulso cardíaco. Aquí tienes un ejemplo:

   ```cpp
   #include <ArduinoIoTCloud.h>
   #include <Arduino_ConnectionHandler.h>
   #include <Wire.h>
   #include <MAX30100_PulseOximeter.h>

   PulseOximeter pox;

   // Variables de Arduino IoT Cloud
   int heartRate;

   void setup() {
       Serial.begin(115200);
       // Inicializa el sensor
       if (!pox.begin()) {
           Serial.println("Error al inicializar el sensor");
           while (1);
       }
       // Conecta a Arduino IoT Cloud
       initProperties();
       ArduinoCloud.begin(ArduinoIoTPreferredConnection);
   }

   void loop() {
       ArduinoCloud.update();
       pox.update();
       heartRate = pox.getHeartRate(); // Lee el pulso cardíaco
       delay(1000); // Espera 1 segundo antes de la siguiente lectura
   }

   void onHeartRateChange() {
       // Esta función se ejecuta cuando el valor de heartRate cambia
   }
