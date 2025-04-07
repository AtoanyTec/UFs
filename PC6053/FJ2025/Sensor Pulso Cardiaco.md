# 🚀 Proyecto Final: Monitoreo de Pulso Cardíaco con Arduino IoT Cloud ❤️

## 📖 Introducción
En este proyecto, construirán un sistema que permita monitorear el pulso cardíaco en tiempo real utilizando un sensor, un microcontrolador compatible con **Arduino IoT Cloud**. Aprenderán a integrar hardware y software para crear una solución tecnológica aplicable en el campo de la salud. ¡Es hora de combinar electrónica, programación y IoT! 💻🔧📶

---

## 🎯 Objetivo
Desarrollar un sistema IoT que mida el pulso cardíaco de una persona y envíe los datos a la plataforma **Arduino IoT Cloud** para su visualización en tiempo real. ¡Conviértanse en ingenieros de IoT! 🌐❤️

---

## 📦 Materiales Necesarios
1. **Sensor de pulso cardíaco**: MAX30100 o MAX30102. ❤️
2. **Microcontrolador compatible con Arduino IoT Cloud**:
   - Arduino MKR WiFi 1010. 🛠️
   - ESP8266 o ESP32 (con soporte para Arduino IoT Cloud). 📡
3. **Cables y protoboard**: Para conectar los componentes. 🔌
4. **Fuente de alimentación**: Batería recargable o cable USB. 🔋
5. **Computadora**: Para programar el microcontrolador. 💻
6. **Cuenta en Arduino IoT Cloud**: Regístrate en [Arduino IoT Cloud](https://create.arduino.cc/iot/). 🌐

---

## 🛠️ Pasos a Seguir

### 1. Conectar el Hardware 🔌
1. Conecta el sensor de pulso cardíaco al microcontrolador:
   - **VCC** del sensor a **3.3V** del microcontrolador. ⚡
   - **GND** del sensor a **GND** del microcontrolador. ⚡
   - **SCL** del sensor a **SCL** (o GPIO 5 en ESP8266/ESP32). 📶
   - **SDA** del sensor a **SDA** (o GPIO 4 en ESP8266/ESP32). 📶
2. Conecta el microcontrolador a la computadora mediante un cable USB. 🔌

---

### 2. Configurar Arduino IoT Cloud 🌐
1. **Crear una cuenta**:
   - Si no tienes una, regístrate en [Arduino IoT Cloud](https://create.arduino.cc/iot/). 📝
2. **Crear un nuevo Thing**:
   - En la plataforma, haz clic en **"Create Thing"**. 🛠️
   - Asigna un nombre a tu proyecto, por ejemplo, "Monitoreo de Pulso Cardíaco". ❤️
3. **Configurar el dispositivo**:
   - Si usas un Arduino MKR WiFi 1010, sigue las instrucciones para configurarlo. 🛠️
   - Si usas un ESP8266 o ESP32, asegúrate de que esté soportado por Arduino IoT Cloud. 📡
4. **Agregar una variable**:
   - Crea una variable llamada `heartRate` de tipo **Entero (int)**. 🔢
   - Esta variable almacenará el valor del pulso cardíaco. ❤️

---

### 3. Programar el Microcontrolador 💻
1. **Abrir el Arduino Web Editor**:
   - Conéctate a [Arduino IoT Cloud](https://create.arduino.cc/iot/) y abre el editor en línea. 🌐
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





3. **Subir el código**:
   - Conecta tu microcontrolador y sube el código desde el Arduino Web Editor. ⬆️

---

### 4. Configurar el Dashboard en Arduino IoT Cloud 📊

1. **Crear un dashboard**:
   - En la plataforma, ve a la sección **Dashboards** y crea uno nuevo. 🛠️
2. **Agregar un widget**:
   - Añade un widget de tipo **Gauge** o **Value** para mostrar el pulso cardíaco. 📈
   - Asocia el widget a la variable `heartRate` que creaste anteriormente. 🔗
3. **Personalizar el dashboard**:
   - Puedes agregar más widgets, como gráficos en tiempo real o alertas. 🚨

---

### 5. Probar el Sistema �

1. Coloca el sensor en tu dedo o en la muñeca. 👆
2. Enciende el sistema y verifica que los datos se envíen correctamente a Arduino IoT Cloud. 📶
3. Asegúrate de que las lecturas sean precisas y estables. ✔️

---

## Entregables 📄

1. **Video Formato TikTok**: Incluir en el video una explicación de cómo lo realizaron y su funcionamiento. 💻
2. **Reporte**: Incluir un reporte con las siguientes secciones.💻
   - Portada
   - Introducción (importancia de la electrónica, microcontroladores e Internet de las Cosas)
   - Descripción del sistema
   - Resultados
   - Conclusiones
   - Referencias
4. **Presentación**: Muestren el sistema en funcionamiento y cómo se visualizan los datos en Arduino IoT Cloud. 🎥

---
## Rúbrica para evaluar el reporte
| Criterio               | Dominio Avanzado (95-100)                                                                 | Dominio Competente (85-94)                                                         | Dominio Básico (75-84)                                                          | Dominio Inicial (0-75)                                                          |
|------------------------|------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------|--------------------------------------------------------------------------------|--------------------------------------------------------------------------------|
| **Portada**            | Incluye todos los elementos requeridos con diseño profesional y creativo                 | Incluye todos los elementos requeridos con formato adecuado                       | Faltan 1-2 elementos o el formato no es del todo adecuado                      | Faltan más de 2 elementos o el formato es incorrecto                           |
| **Introducción**       | Exposición clara y completa con excelente fundamentación teórica y relevancia demostrada | Buena fundamentación teórica pero falta profundidad en algunas áreas              | Fundamentación teórica básica con algunas omisiones importantes                | Fundamentación teórica insuficiente o con errores conceptuales                 |
| **Descripción**        | Descripción detallada con diagramas claros y explicación exhaustiva del código          | Descripción adecuada con diagramas y explicación del código, pero falta detalle   | Descripción básica con diagramas poco claros o explicación superficial        | Descripción incompleta o con errores técnicos                                  |
| **Resultados**         | Presentación profesional de datos con análisis profundo y visualizaciones efectivas      | Presentación adecuada de datos con análisis básico y visualizaciones claras       | Presentación básica de datos con análisis superficial o gráficas poco claras   | Presentación incompleta de datos o sin análisis                                |
| **Conclusiones**       | Conclusiones bien fundamentadas con propuestas innovadoras de mejora                     | Conclusiones adecuadas con algunas propuestas de mejora                           | Conclusiones básicas sin propuestas de mejora o poco fundamentadas             | Conclusiones ausentes o muy superficiales                                      |
| **Referencias**        | Referencias completas y correctamente citadas (mínimo 5 fuentes confiables)              | Referencias adecuadas (3-4 fuentes) con formato APA correcto                      | Referencias básicas (1-2 fuentes) con algunos errores de formato               | Faltan referencias o tienen formato incorrecto                                 |
| **Redacción y Formato**| Excelente redacción, sin errores y formato profesional consistente                       | Buena redacción con pocos errores y formato adecuado                              | Redacción aceptable con varios errores o formato inconsistente                 | Redacción deficiente con muchos errores o formato incorrecto                   |
| **Creatividad**        | Soluciones innovadoras y presentación creativa del reporte                               | Algunos elementos creativos en la presentación del reporte                        | Poca evidencia de creatividad en el reporte                                   | Ausencia total de elementos creativos                                         |


---

# 📹 Rúbrica de Evaluación para Video TikTok 

| Criterio               | 🌟 Excelente (95-100)                                                                 | 👍 Bueno (85-94)                                                       | 🆗 Regular (75-84)                                                  | 📉 Deficiente (0-75)                                               |
|------------------------|-------------------------------------------------------------------------------------|-----------------------------------------------------------------------|-------------------------------------------------------------------|-------------------------------------------------------------------|
| **📢 Explicación**     | Explicación clara, concisa y completa del proyecto                                  | Explicación clara pero falta profundidad en algunos aspectos          | Explicación confusa o incompleta                                 | Explicación ausente o incomprensible                             |
| **🎬 Calidad Visual** | Video bien iluminado, con encuadre profesional y edición creativa                  | Buena calidad visual con algunas áreas de mejora                     | Calidad visual aceptable pero con problemas técnicos             | Video de mala calidad, oscuro o desenfocado                      |
| **⏱️ Duración**      | Duración perfecta (60-90 seg), información bien distribuida                        | Duración adecuada pero ritmo irregular                               | Muy corto o muy largo (fuera del rango)                          | Duración inadecuada afecta comprensión                           |
| **🔧 Demostración**   | Muestra claramente el hardware y datos en tiempo real de forma didáctica            | Muestra el sistema pero falta claridad en algunas partes             | Demostración poco clara o incompleta                             | No muestra el funcionamiento real del sistema                    |
| **💡 Creatividad**    | Uso innovador de efectos, transiciones y recursos visuales                         | Algunos elementos creativos pero podrían mejorarse                   | Poca creatividad en la presentación                              | Ausencia total de elementos creativos                            |
| **🗣️ Participación** | Todos los integrantes participan activamente con roles definidos                   | Participación grupal pero desigual en aportes                         | Solo algunos integrantes participan                              | Un solo integrante aparece en el video                           |
| **📱 Hashtags**       | Uso correcto de #TecSalud2025 y otros hashtags relevantes                          | Solo incluye el hashtag principal                                    | Hashtags incorrectos o irrelevantes                              | No incluye hashtags requeridos                                   |
| **🔊 Audio**          | Audio claro, buena música de fondo (si aplica) y volumen adecuado                  | Audio aceptable con algunos problemas de volumen                     | Audio con problemas que dificultan la comprensión                | Audio inaudible o muy deficiente                                 |

## 📊 Escala de Evaluación:
- **95-100 pts**: 🏆 Excelente - Video profesional y completo
- **85-94 pts**: 🎉 Bueno - Cumple con todos los requisitos
- **75-84 pts**: 🤔 Regular - Necesita mejorar varios aspectos
- **0-74 pts**: ❌ Deficiente - No cumple con los estándares mínimos

---
# 🗣️ Rúbrica de Evaluación para Presentación Oral

| Criterio               | 🌟 Excelente (95-100)                                                                 | 👍 Bueno (85-94)                                                       | 🆗 Regular (75-84)                                                  | 📉 Deficiente (0-74)                                               |
|------------------------|-------------------------------------------------------------------------------------|-----------------------------------------------------------------------|-------------------------------------------------------------------|-------------------------------------------------------------------|
| **🎯 Contenido Técnico** | Demuestra dominio completo del tema, explica claramente todos los componentes técnicos | Explica bien los conceptos pero con algunos vacíos técnicos menores | Exposición superficial con varios errores técnicos | Contenido técnico confuso o con graves errores conceptuales |
| **📊 Demostración Práctica** | Muestra perfectamente el sistema funcionando con datos en tiempo real | Muestra el funcionamiento pero con pequeñas dificultades | Demostración parcial o con problemas técnicos visibles | No logra demostrar el funcionamiento del sistema |
| **🗣️ Comunicación** | Habla con claridad, volumen adecuado y entusiasmo, excelente contacto visual | Comunicación clara pero con algunos momentos de poca fluidez | Dificultades evidentes en la comunicación (volumen, ritmo) | Comunicación muy deficiente, inaudible o lectura constante |
| **⏱️ Manejo del Tiempo** | Usa el tiempo asignado (5-7 min) perfectamente, sin prisas ni sobrante | Buen manejo del tiempo con pequeño desfase (±1 min) | Notable desfase de tiempo (±2 min) o ritmo irregular | Fuera completamente del tiempo asignado |
| **🤝 Participación Grupal** | Todos los miembros participan equitativamente con roles definidos | Participación desigual pero todos contribuyen | Algunos miembros no participan activamente | Solo 1-2 personas llevan la presentación |
| **📝 Estructura** | Presentación bien organizada con introducción, desarrollo y cierre claros | Estructura adecuada pero algunas transiciones mejorables | Falta de secuencia lógica en algunas partes | Estructura confusa o desorganizada |
| **❓ Respuestas a Preguntas** | Responde con precisión y seguridad a todas las preguntas técnicas | Responde adecuadamente pero con alguna duda | Respuestas incompletas o con errores | No puede responder preguntas técnicas |

## 📈 Escala de Evaluación:
- **95-100 pts**: 🏆 Excelente - Presentación profesional y completa
- **85-94 pts**: 🎉 Bueno - Cumple satisfactoriamente con todos los requisitos
- **75-84 pts**: 🤔 Regular - Necesita mejorar varios aspectos importantes
- **0-74 pts**: ❌ Deficiente - No alcanza los estándares mínimos requeridos


---

## Criterios de Evaluación 📝

1. **Funcionalidad**: El sistema debe medir y enviar el pulso correctamente. ✔️
2. **Creatividad**: Puntos extra si añaden funcionalidades adicionales (por ejemplo, alertas o gráficos avanzados). 🎨
3. **Documentación**: El reporte debe estar completo y bien explicado. 📄
4. **Presentación**: Deben explicar claramente cómo funciona su proyecto. 🗣️

---

## Consejos Finales 💡

- Trabajen en equipo y dividan las tareas (hardware, programación, documentación). 👥
- Prueben cada parte del sistema por separado antes de integrarlo todo. 🧪
- Si tienen dudas, ¡pregunten! Estamos aquí para ayudarlos. 🙋‍♂️🙋‍♀️

---

¡Manos a la obra y mucha suerte con su proyecto! 🚀❤️
