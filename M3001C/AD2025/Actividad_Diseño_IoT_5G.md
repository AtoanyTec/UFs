# 🏭 Proyecto IoT 5G para Monitoreo en Fabricación de Máscaras

## 🎯 Objetivo
Aplicar los conceptos de **IoT**, **MQTT** y **5G** para diseñar un sistema de monitoreo en tiempo real de **humedad** 💧 y **temperatura** 🌡️ en una fábrica de máscaras, integrando tecnologías de I**ndustria 4.0**.

## 📋 Instrucciones
1. **Contexto:**
   * La empresa **SafeMask** necesita optimizar su producción con un sistema **IoT + 5G** que monitoree la zona de fabricación 🏗️
   * Los datos deben de visualizar en un **dashboard central** 📊 con alertas en tiempo real.
2. **⚙️ Requisitos Técnicos:**
     * **🔷Diagrama a Bloques** que incluya:
         - **📡 Dispositivo IoT**: Sensores (DHT11, ESP32), actuadores y IoT Gateway.
         - **📶Protocolo MQTT**: Broker(MQTX), topics (ej: `safemask/fabricacion/temperatura`)
         - **📡Red 5G**: Estación base (**gNodeB**), **Core Network**, y **Edge Computing** para baja latencia.
         - **☁️ Plataforme en la nube**: AWS,Azure, Google Cloud.
      * **📝Reporte Técnico** (2 páginas) que explique:
          - ¿Por qué MQTT es ideal para IoT? ✅
          - Ventajas de **5G vs 4G** ⚡
3. **📤 Entregables**
     * **🖥️Diagrama digital** (draw.io/Lucidchart) detallado y con leyendas claras
     * **📄 Reporte PDF** con:
         - Ejemplo de **mensaje MQTT** (JSON)
         - Flujo de datos desde el **sensor -> 5G -> Nube**
       


