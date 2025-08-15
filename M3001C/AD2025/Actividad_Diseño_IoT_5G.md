# 🏭 Proyecto IoT 5G para Monitoreo en Fabricación de Máscaras

## 🎯 Objetivo
Aplicar los conceptos de **IoT**, **MQTT** y **5G** para diseñar un sistema de monitoreo en tiempo real de **humedad** 💧 y **temperatura** 🌡️ en una fábrica de máscaras, integrando tecnologías de **Industria 4.0**.

## SafeMask
SafeMask es una empresa que se dedica a la fabricación de máscaras a nivel mundial. La empresa cuenta con 3 líneas de producción. Cada línea de producción se compone de una banda transportadora que lleva las máscaras en grupos de 10 hacia un horno. El horno se encarga de realizar el proceso de secado y otra banda transportadora lleva las máscaras a almacenamiento. El proceso de fabricación de las 3 líneas de producción se realiza de forma manual, por lo que existe una gran ocurrencia de errores humanos, como por ejemplo, calentar el horno a una temperatura incorrecta o sacar las máscaras muy secas o aún humedas. Para ello, se te ha pedido que realices una propuesta de implementación de **IoT**, **5G** y **Cloud Computing** para automatizar el proceso, aumentar la producción y reducir costos de producción minimizando la fabricación de máscaras defectuosas.

## 📋 Instrucciones
La empresa **SafeMask** necesita optimizar su producción con un sistema **IoT + 5G + Cloud Computing**. Los datos se deben de visualizar en un **dashboard central** con alertas en tiempo real. A continuación se presentan los requisitos técnicos:

**🔷Diagrama a Bloques** que incluya:
- **📡 Dispositivos IoT**: Conexiones de sensores (DHT11, ESP32), actuadores y IoT Gateway.
- **📶Protocolo MQTT**: Conexiones de broker(MQTTX), suscribers, publishers, topics (ej: `safemask/fabricacion/temperatura`) en los dispositivos IoT. Utilizar wildcards (+, #) para diferentes tipos de visualización en dashboards.
- **📡Red 5G**: Conexión de la red 5G - Estación base (**gNodeB**), **Core Network**, y **Edge Computing**- con los dispotivos IoT y el protocolo MQTT.
- **☁️ Plataforma en la nube**: Conexión de la nube con los dispositivos IoT, protocolo MQTT y la red 5G. Mostrar un ejemplo de dashboard para la visualización de las variables.

## **📤 Entregables**
* **🖥️Diagrama digital** (draw.io/Lucidchart) detallado y con leyendas claras.
* **🎤 Presentación oral** de la propuesta que incluya:
  - **Introducción**: contexto de la importancia de la industria 4.0 en SafeMask.
  - **Diagrama a bloques**: diagrama a bloques detallado del sistema propuesto.
  - **Diagrama a bloques**: detallado por etapas y justificación de cada componente del sistema.
  - **Mensajes MQTT**: ejemplo de los mensajes MQTT en formato JSON.
  - **Justificación**: cómo MQTT garantiza la comunicación eficiente entre sensores y el broker.
  - **Dashboard**: visualización de cómo se vería el dashboard con las lecturas de sensores y/o actuadores.
  - **5G vs 4G** ventajas de la 5G con respecto al 4G.
  - **Referencias bibliográficas**
* **📄 Reporte PDF** con:
  - **Introducción**: contexto de la importancia de la industria 4.0 en SafeMask.
  - **Diagrama a bloques**: diagrama a bloques detallado del sistema propuesto.
  - **Justificación** de cada componente del sistema.
  - Ejemplo de **mensaje MQTT** (formato JSON) enviado por un sensor.
  - Cómo MQTT garantiza comunicación eficiente entre sensores y el broker.
  - Ejemplo de cómo se vería el dashboard para la visualización de lecturas de sensores y/o actuadores.
  - Ventajas de **5G vs 4G**.
  - **Referencias bibliográficas**
      
## 📋 Rúbrica de Evaluación
| Criterio               | Destacado 🔥 | Sólido 👍 | Básico 💭 | Incipiente ⚠️ |
|------------------------|----------------------|------------------|--------------------------|------------------|
| **Diagrama a Bloques** | Diagrama completo con todas las conexiones (IoT+5G+MQTT+Nube), leyendas técnicas y flujo de datos detallado | Diagrama completo pero falta 1-2 elementos secundarios | Diagrama presente pero con omisiones importantes (ej: falta core 5G) | Diagrama incompleto o con errores graves |
| **Implementación MQTT** | Demuestra uso avanzado de wildcards (+/#) y estructura de topics jerárquica | Topics bien definidos pero sin wildcards | Topics presentes pero sin estructura lógica | Faltan elementos clave del protocolo |
| **Arquitectura 5G** | Integra correctamente gNodeB, Core Network y Edge Computing con ventajas técnicas detalladas | Describe componentes 5G pero sin profundizar en ventajas | Menciona 5G pero sin conexión clara con IoT | Omite componentes críticos de 5G |
| **Dashboard Cloud** | Prototipo funcional con visualización de datos en tiempo real y alertas configurables | Diseño claro pero sin funcionalidad en tiempo real | Bosquejo estático sin interacción | No presenta dashboard o es irrelevante |
| **Presentación Oral** 🎤 | Exposición clara, demuestra dominio técnico, usa apoyos visuales efectivos y responde preguntas | Buen flujo pero con detalles técnicos superficiales | Estructura básica pero con dificultades para explicar conceptos | Presentación desorganizada o con errores graves |
| **Reporte Técnico** | Documentación profesional con justificaciones técnicas, ejemplos JSON y análisis costo-beneficio | Reporte completo pero con 1-2 elementos faltantes | Contenido presente pero desorganizado o superficial | Faltan secciones clave o contiene errores |

       


