# 📘 Examen Práctico (35 puntos)

**Equipo:**__________________________________
**Fecha**: ___________________________

---

## Subcompetencias a evaluar
1. **SIIT0102C** - Demuestra el funcionamiento de sistemas o dispositivos ingenieriles mediante la selección de las reglas fundamentales que definen la estructura del sistema estudiado con el fin de generar resultados o comportamientos deseados. Crea prototipos físicos o conceptuales, aplicando metodologías científicas, que representan el funcionamiento del sistema o dispositivo ingenieril estudiado.
2. **SIIT0401C** - Aplica los estándares y normas propios de sistemas y dispositivos ingenieriles contrastádolos contra las restricciones de uso de acuerdo al proceso, producto o servicio donde se va a aplicar usando las normas y estándares más relevantes al dominio del problema que se va a resolver, distinguiendo claramente entre ambos.
3. **SEG0701B** - Participa en el entorno digital actual para la construcción de una vida política y cultural en la sociedad en red. Para esto identifica y reconoce los riesgos de la presencia de los nuevos entornos digitales. Enumera las diferentes comunidades en entornos digitales. Conoce el alcance de la información digital y la seguridad en entornos digitales. Maneja opciones tecnológicas para crear una identidad digital. Utiliza la tecnología con un sentido de respeto y tolerancia.
4. **SEG0702B** - Evalúa diversas tecnologías con apertura a la búsqueda de alternativas relevantes en la transformación de su práctica profesional. Para esto aplica razonamiento algorítmico para generar soluciones ligadas que faciliten su práctica profesional. Utiliza tecnologías emergentes ligadas a su área de conocimiento. Demuestra la importancia del uso pertinente de diferentes tecnologías emergentes. Toma conciencia de la importancia de la transformación digital. Utiliza de manera eficiente las tecnologías digitales. Respeta las leyes del uso adecuado de las nuevas tecnologías digitales.

## 🔧 Sección 3: Ejercicios Prácticos
1. Implementa un sistema IoT en donde monitorees temperatura, humedad, sensación térmica (DHT11) y calidad del aire (MQ2). La información recolectada por los sensores se deberá de poder monitorear en tu celular a través de IoT. La lectura se deberá de mostrar utilizando un gadget de valor y un gadget de gráfica para cada variable. El sistema deberá de realizar lo siguiente:
   * Si la temperatura sobre pasa los 20°C, se deberá de encender un LED rojo, de lo contrario se deberá de encender un LED verde
   * Si la humedad sobre pasa el 70%, se deberá de encender un LED azul, de lo contrario de mantiene apagado
   * Si la sensación térmica esta arriba de 26°C, se deberá de encender un LED ambar.
   * Si la calidad del aire es mala, se deberá de encender un pequeño ventilador.

---

## 📦 Entregables
**1. Prototipo funcional (físico o simulado)**
   * Integración de los sensores DHT11 (temperatura, humedad, sensación térmica) y MQ2 (calidad del aire).
   * Activación de actuadores según condiciones (LEDs rojo, verde, azul, ámbar y ventilador).
   * Conexión a una plataforma IoT que muestre los datos en el celular.

**2. Dashboard IoT**
   * Debe contener:
     - Gadgets de valor para cada variable.
     - Gráficas en tiempo real para cada variable.
   * Evidencias en forma de capturas de pantalla o video corto mostrando la interfaz funcionando.

**3. Código fuente documentado**
   * Archivo del programa en Arduino IDE o PlatformIO.
   * Comentarios en el código que expliquen la lógica de lectura de sensores, envío de datos, activación de actuadores y configuración IoT.

**4. Informe técnico en PDF (5–7 cuartillas)**
   * Portada con datos del equipo.
   * Introducción: descripción del caso y objetivos.
   * Metodología: diseño del sistema (diagramas de conexión y de bloques).
   * Normas y estándares aplicados (ej. comunicación IoT, seguridad eléctrica, protocolos de datos).
   * Resultados: capturas de dashboards, funcionamiento de actuadores, descripción de pruebas.
   * Análisis de riesgos digitales y medidas de seguridad.
   * Reflexión sobre tecnologías emergentes (IoT, cloud, transformación digital).
   * Conclusiones y posibles mejoras.

**5. Presentación oral (5–10 min)**
   * Demostración del prototipo en funcionamiento.
   * Justificación de las decisiones técnicas (protocolos, normas, seguridad).
   * Reflexión crítica sobre el impacto de IoT y la transformación digital en la ingeniería.

---

## 📊 Rúbrica de Evaluación – Actividad IoT


## Entregables evaluados
1. Prototipo funcional  
2. Dashboard IoT  
3. Código fuente documentado  
4. Informe técnico  
5. Presentación oral  

---

## Rúbrica

| **Criterio** | **Incipiente (0-74)** | **Básico (75-84)** | **Sólido (85-94)** | **Destacado (95-100)** |
|--------------|----------------------|----------------|--------------------|------------------------|
| **Prototipo funcional** | No se integran sensores ni actuadores; el sistema no funciona. | Integra parcialmente sensores/actuadores; el sistema presenta fallas constantes. | Integra correctamente sensores y actuadores; el sistema funciona de acuerdo con lo solicitado. | El prototipo funciona de forma impecable, estable y con mejoras adicionales respecto a lo solicitado. |
| **Dashboard IoT** | No se entrega dashboard o los datos no son legibles. | Se entrega dashboard básico pero incompleto (faltan gadgets o gráficas). | Se entregan gadgets de valor y gráficas en tiempo real para todas las variables. | Dashboard completo, estético y funcional, con interpretación clara de los datos y evidencias de uso. |
| **Código fuente documentado** | No se entrega código o es ilegible. | El código funciona parcialmente y tiene poca documentación. | El código está completo, funcional y con comentarios que explican la lógica. | El código está optimizado, bien estructurado y con documentación clara y profesional. |
| **Informe técnico** | No se entrega informe o carece de estructura. | Informe incompleto (faltan apartados importantes como normas o riesgos). | Informe bien estructurado, incluye diseño, normas aplicadas, resultados y conclusiones. | Informe detallado y profesional, con análisis crítico, reflexión sobre tecnologías emergentes y excelente redacción. |
| **Presentación oral** | No se presenta o carece de organización. | Presentación poco clara, con fallas en la demostración del prototipo. | Presentación clara, organizada y con demostración funcional del prototipo. | Presentación sobresaliente, con excelente comunicación, demostración fluida y análisis crítico del proyecto. |

---

## Escala de desempeño final
- **95–100 puntos** → Destacado  
- **85–94 puntos** → Sólido  
- **75–84 puntos** → Básico  
- **<= 74 puntos** → Incipiente  

---




