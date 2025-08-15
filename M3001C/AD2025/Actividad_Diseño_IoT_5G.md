# 🏭 Proyecto IoT 5G para Monitoreo en Fabricación de Máscaras

## 🎯 Objetivo
Aplicar los conceptos de **IoT**, **MQTT** y **5G** para diseñar un sistema de monitoreo en tiempo real de **humedad** 💧 y **temperatura** 🌡️ en una fábrica de máscaras, integrando tecnologías de I**ndustria 4.0**.

## SafeMask
SafeMask es una empresa que se dedica a la fabricación de máscaras a nivel mundial. La empresa cuenta con 3 líneas de producción. Cada línea de producción se compone de una banda transportadora que lleva las máscaras en grupos de 10 hacia un horno. El horno se encarga de realizar el proceso de secado y otra banda transportadora lleva las máscaras a almacenamiento. El proceso de fabricación de las 3 líneas de producción se realiza de forma manual, por lo que existe una gran ocurrencia de errores humanos, como por ejemplo, calentar el horno a una temperatura incorrecta o sacar las máscaras muy secas o aún humedas. Para ello, se te ha pedido que realices una propuesta de implementación de **IoT**, **5G** y **Cloud Computing** para automatizar el proceso, aumentar la producción y reducir costos de producción minimizando la fabricación de máscaras defectuosas.

## 📋 Instrucciones
1. **Contexto:**
   * La empresa **SafeMask** necesita optimizar su producción con un sistema **IoT + 5G + Cloud Computing** que monitoree la zona de fabricación 🏗️
   * Los datos deben de visualizar en un **dashboard central** 📊 con alertas en tiempo real.
2. **⚙️ Requisitos Técnicos:**
     * **🔷Diagrama a Bloques** que incluya:
         - **📡 Dispositivos IoT**: Conexiones de sensores (DHT11, ESP32), actuadores y IoT Gateway.
         - **📶Protocolo MQTT**: Conexiones de broker(MQTTX), suscribers, publishers, topics (ej: `safemask/fabricacion/temperatura`) en los dispositivos IoT. Utilizar wildcards (+, #) para diferentes tipos de visualización en dashboards.
         - **📡Red 5G**: Conexión de la red 5G - Estación base (**gNodeB**), **Core Network**, y **Edge Computing**- con los dispotivos IoT y el protocolo MQTT.
         - **☁️ Plataforme en la nube**: Conexión de la nube con los dispositivos IoT, protocolo MQTT y la red 5G. Mostrar un ejemplo de dashboard para la visualización de las variables.
      
3. **📤 Entregables**
     * **🖥️Diagrama digital** (draw.io/Lucidchart) detallado y con leyendas claras
     * **🎤 Presentación oral** de la propuesta que incluya:
         - **Introducción**: contexto de la importancia de la industria 4.0 en SafeMask.
         - **Diagrama a bloques**: diagrama a bloques detallado del sistema propuesto.
         - **Diagrama a bloques**: detallado por etapas y justificación de cada componente del sistema.
         - **Mensajes MQTT**: ejemplo de los mensajes MQTT en formato JSON
         - **Justificación**: cómo MQTT garantiza la comunicación eficiente entre sensores y el broker.
         - **Dashboard**: visualización de cómo se vería el dashboard con las lecturas de sensores y/o actuadores.
         - **5G vs 4G** ventajas de la 5G con respecto al 4G.
     * **📄 Reporte PDF** con:
         - **Introducción**: contexto de la importancia de la industria 4.0 en SafeMask.
         - **Diagrama a bloques**: diagrama a bloques detallado del sistema propuesto.
         - **Justificación** de cada componente del sistema.
         - Ejemplo de **mensaje MQTT** (formato JSON) enviado por un sensor
         - Cómo MQTT garantiza comunicación eficiente entre sensores y el broker ✅
         - Ejemplo de cómo se vería el dashboard para la visualización de lecturas de sensores y/o actuadores
         - Ventajas de **5G vs 4G** ⚡
      
## 📋 Rúbrica de Evaluación

       


