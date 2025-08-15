# 🏭 Proyecto IoT 5G para Monitoreo en Fabricación de Máscaras

## 🎯 Objetivo
Aplicar los conceptos de **IoT**, **MQTT** y **5G** para diseñar un sistema de monitoreo en tiempo real de **humedad** 💧 y **temperatura** 🌡️ en una fábrica de máscaras, integrando tecnologías de I**ndustria 4.0**.

## SafeMask
SafeMask es una empresa que se dedica a la fabricación de máscaras a nivel mundial. La empresa cuenta con 3 líneas de producción. Cada línea de producción se compone de una banda transportadora que lleva las máscaras en grupos de 10 hacia un horno. El horno se encarga de realizar el proceso de secado y otra banda transportadora lleva las máscaras a almacenamiento. El proceso de fabricación de las 3 líneas de producción se realiza de forma manual, por lo que existe una gran ocurrencia de errores humanos, como por ejemplo, calentar el horno a una temperatura incorrecta o sacar las máscaras muy secas o aún humedas. Para ello, se te ha pedido que realices una propuesta de implementación de **IoT**, **5G** y **Cloud Computing** para automatizar el proceso, aumentar la producción y reducir costos de producción minimizando la fabricación de máscaras defectuosas.

## 📋 Instrucciones
1. **Contexto:**
   * La empresa **SafeMask** necesita optimizar su producción con un sistema **IoT + 5G** que monitoree la zona de fabricación 🏗️
   * Los datos deben de visualizar en un **dashboard central** 📊 con alertas en tiempo real.
2. **⚙️ Requisitos Técnicos:**
     * **🔷Diagrama a Bloques** que incluya:
         - **📡 Dispositivo IoT**: Sensores (DHT11, ESP32), actuadores y IoT Gateway.
         - **📶Protocolo MQTT**: Broker(MQTX), topics (ej: `safemask/fabricacion/temperatura`)
         - **📡Red 5G**: Estación base (**gNodeB**), **Core Network**, y **Edge Computing** para baja latencia.
         - **☁️ Plataforme en la nube**: Procesamiento de datos y dashboard de visualización.
      * **📝Reporte Técnico** (2 páginas) que explique:
          - Cómo MQTT garantiza comunicación eficiente entre sensores y el broker ✅
          - Ventajas de **5G vs 4G** ⚡
3. **📤 Entregables**
     * **🖥️Diagrama digital** (draw.io/Lucidchart) detallado y con leyendas claras
     * **Presentación oral** de la propuesta que incluya:
         - **Introducción**: contexto de la importancia de la industria 4.0 en las empresas
         - **Red IoT**: el diagramaa bloques tiene que
     * **📄 Reporte PDF** con:
         - Justificación de cada componente del sistema.
         - Ejemplo de **mensaje MQTT** (formato JSON) enviado por un sensor
         - Esquema de la red 5G mostrando la ruta de los datos: **sensor -> 5G -> Nube**
      
## 📋 Rúbrica de Evaluación

       


