# 🛰️ Proyecto Final - Sistema de Control y Monitoreo Inteligente

## 🎯 OBJETIVO GENERAL

Desarrollar un sistema integral de control y monitoreo que combine control local, IoT, sensórica avanzada e interfaces visuales para aplicaciones de automatización y seguridad.

## 📋 ESPECIFICACIONES TÉCNICAS DETALLADAS
**1. 🎨 Control de LEDs RGB**
Requerimientos:
- Control local mediante botones táctiles del Carrier
- Control remoto vía Arduino IoT Cloud
- Estados de los LEDs en una interfaz en el display OLED

**2. 🌡️ Sistema de Control de Temperatura**
Requerimientos:
- Monitoreo continuo de temperatura con LM35
- Umbral automático: 25°C
- Activación de relevador para foco de 100W en caso de que se supera el umbral
- Control manual remoto vía IoT del encendido del foco

**3. 📡 Detección de Movimiento y Gestos**
Requerimientos:
- Detección de movimiento vertical/horizontal --> Encendido de un segundo de un led rojo local y virtual
- Detección de gesto UP --> Encendido del buzzer durante un segundo

**4. 📊 Interfaz OLED Integral**
Requerimientos:
- Estados de todos los componentes del sistema
- Valores de sensores en tiempo real
- Notificaciones de eventos
- Diseño organizado y legible

## 🔧 MATERIAL REQUERIDO
**Componentes Electrónicos**

| Componente | Cantidad | Especificaciones | Notas |
|------------|----------|------------------|-------|
| **Placa Principal** | | | |
| Arduino MKR WiFi 1010 | 1 | Microcontrolador IoT | Incluye conectividad WiFi |
| MKR IoT Carrier Rev2 | 1 | Shield con periféricos | Display OLED, sensores, LEDs integrados |
| **Sensores** | | | |
| Sensor de Temperatura LM35 | 1 | Rango: -55°C a 150°C | Precisión: ±0.5°C |
| **Actuadores y Cargas** | | | |
| Foco Incandescente | 1 | 100W, 120V/220V | **¡PRECAUCIÓN! Alto voltaje** |
| Portalámparas con Cable | 1 | E27 estándar | Con cable de alimentación |
| **Fuentes de Poder** | | | |
| Fuente para Arduino | 1 | 5V DC, 2.5A | USB-C o barrel jack |
| Fuente para Foco | 1 | 120VAC o 220VAC | Depende del país |
| **Cables y Conectores** | | | |
| Cables Jumper | 10 | M-M, 20cm | Para conexiones |
| Protoboard | 1 | 400 puntos | Para conexiones temporales |
| **Herramientas** | | | |
| Multímetro Digital | 1 | - | Para mediciones y pruebas |
| Pelacables | 1 | - | Para preparar cables |
| Cinta Aislante | 1 | Rollo | Para aislamiento eléctrico |


**⚠️ Advertencias de Seguridad**

1. **ALTO VOLTAJE** - El foco de 100W opera a 120V/220V
2. **Aislamiento** - Mantener circuitos de alto y bajo voltaje separados
3. **Supervisión** - No dejar el sistema encendido sin supervisión
4. **Conexiones** - Verificar todas las conexiones antes de energizar


## 📱 CONFIGURACIÓN ARDUINO IOT CLOUD DASHBOARD
**Widgets Requeridos:**
- Switch LED Rojo - Control ON/OFF
- Switch LED Verde - Control ON/OFF
- Switch LED Azul - Control ON/OFF
- Switch Relevador/Foco - Control ON/OFF
- Gauge Temperatura - Monitoreo en tiempo real
- Status Movement - Indicador de movimiento detectado
- Status Gesture - Indicador de gesto detectado

**Variables Virtuales**
- ledRed, ledGreen, ledBlue (CloudColor)
- relayState (CloudBoolean)
- movementDetected (CloudBoolean)
- gestureDetected (CloudBoolean)
- temperature (CloudTemperature)

## 🚀 ENTREGABLES
- Código completo con comentarios en github (URL)
- Circuito físico funcionando
- Dashboard IoT Cloud configurado
- Video demostrativo (5 min max)
- Reporte técnico con:
    1. Diagramas de conexión
    2. Explicación del programa
    3. Pruebas y resultados
    4. Conclusiones y mejoras
