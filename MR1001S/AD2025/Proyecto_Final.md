# 🕵️ Proyecto Final: Esteganografía LSB - Ocultando Mensajes en Imágenes

## 📌 Nombre de la Actividad

**"Esteganografía LSB: Ocultando y Revelando Mensajes Secretos en Imágenes"**

## 🎯 Objetivo de la Actividad

Desarrollar un programa en MATLAB que permita ocultar un mensaje de texto de 10 caracteres en una imagen utilizando la técnica de los bits menos significativos (LSB) y crear un decodificador que pueda recuperar el mensaje oculto. Los estudiantes aplicarán conceptos de manipulación de bits, procesamiento de imágenes y programación en MATLAB.

## 📋 Instrucciones

### Parte 1: Codificador de Mensajes

1. **Selección de Imagen**: Elija una imagen en formato PNG o BMP (sin pérdida) para ocultar el mensaje.
2. **Conversión de Imagen**: Convierta la imagen a una matriz de valores numéricos.
3. **Procesamiento del Mensaje**: Convierta el mensaje de texto a su representación binaria (ASCII).
4. **Inserción en LSB**: Reemplace los bits menos significativos de los píxeles de la imagen con los bits del mensaje.
5. **Guardado de Imagen**: Guarde la imagen modificada con el mensaje oculto.

### Parte 2: Decodificador de Mensajes

1. **Carga de Imagen**: Cargue la imagen que contiene el mensaje oculto.
2. **Extracción de Bits**: Extraiga los bits menos significativos de los píxeles de la imagen.
3. **Reconstrucción del Mensaje**: Convierta los bits extraídos de vuelta a caracteres ASCII para reconstruir el mensaje original.
4. **Visualización**: Muestre el mensaje decodificado.

## ⚙️ Requisitos Técnicos

- El programa debe manejar imágenes a color.
- Debe incluir manejo de errores (por ejemplo, si la imagen es demasiado pequeña para el mensaje).
- El mensaje debe incluir un delimitador al final para saber cuándo terminar la extracción.

## 📦 Entregables

- **Código MATLAB**: Dos scripts o funciones:
  - `ocultar_mensaje.m`: Para codificar el mensaje en la imagen.
  - `revealar_mensaje.m`: Para decodificar el mensaje de la imagen.
- **Imagen de Ejemplo**: Una imagen con un mensaje oculto creada por el estudiante.
- **Documentación Breve**: Un reporte que explique técnicamente el sistema.
- **Presentación Final**: Una presentación de 5-7 minutos que demuestre el funcionamiento del proyecto y explique los conceptos técnicos implementados.

## 📊 Rúbrica de Evaluación - Proyecto

| Criterio | Incipiente (0-74) | Básico (75-84) | Sólido (85-94) | Destacado (95-100) |
|----------|---------------------|--------------|-------------------|---------------|
| **Funcionalidad** | El código no funciona o no cumple con los requisitos básicos. | El código funciona parcialmente, pero con errores o limitaciones. | El código funciona correctamente para imágenes y mensajes simples. | El código funciona perfectamente para cualquier imagen y mensaje, con manejo de errores robusto. |
| **Calidad del Código** | Código desorganizado, sin comentarios y difícil de entender. | Código parcialmente organizado, con algunos comentarios. | Código bien estructurado, comentado y fácil de seguir. | Código excelente, muy bien comentado, eficiente y con buenas prácticas de programación. |
| **Documentación** | No hay documentación o es muy escasa. | Documentación mínima que explica básicamente el uso. | Documentación clara que explica el uso y tiene ejemplos. | Documentación exhaustiva con ejemplos, explicaciones técnicas y casos de prueba. |
| **Creatividad y Extras** | No hay elementos creativos o adicionales. | Algunos elementos adicionales simples. | Funciones adicionales como interfaz de usuario o soporte para múltiples formatos. | Elementos creativos destacados, como interfaz gráfica, opciones avanzadas o optimizaciones innovadoras. |

## 📊 Rúbrica de Evaluación - Presentación Final

| Criterio | Incipiente (0-74)| Básico (75-84) | Sólido (85-94) | Destacado (95-100) |
|----------|---------------------|--------------|-------------------|---------------|
| **Dominio Técnico** | No demuestra comprensión de los conceptos, explica de manera incorrecta o confusa. | Demuestra comprensión básica pero con errores técnicos significativos. |Demuestra buen dominio técnico con explicaciones claras y precisas. | Demuestra dominio excepcional, explica conceptos avanzados y detalles de implementación con profundidad. |
| **Autenticidad y Originalidad** | Evidencia clara de uso de IA (explicaciones genéricas, falta de profundidad, incoherencias). | Explicaciones superficiales que sugieren posible uso de IA o falta de comprensión personal. | Explicaciones auténticas que demuestran comprensión personal del trabajo realizado. | Explicaciones completamente originales, con insights personales y ejemplos creativos que evidencian autoría propia. |
| **Demostración Práctica** | No muestra el funcionamiento o la demostración falla completamente. | Demostración básica con asistencia del profesor o con múltiples errores. | Demuestra adecuadamente el funcionamiento completo sin asistencia. | Demostración fluida, con casos de prueba variados y explicación detallada de cada paso. |
| **Comunicación y Claridad** | No se expresa claramente, lectura de diapositivas, terminología incorrecta. | Se expresa con dificultad, uso limitado de terminología técnica apropiada. | Comunicación clara, uso adecuado de terminología técnica y buena estructura. | Comunicación excepcional, explica conceptos complejos con simplicidad, mantiene engagement perfecto. |
| **Calidad Visual** | Las diapositivas son confusas, con mucho texto o diseño pobre. | Las diapositivas son básicas pero transmiten la información esencial. | Las diapositivas son claras, visualmente atractivas y apoyan efectivamente la presentación. | Las diapositivas son excepcionales, con diseño profesional, multimedia y elementos visuales de alta calidad. |
| **Estructura y Tiempo** | Presentación desorganizada, no cumple con el tiempo (±3 minutos o más). | Estructura básica con problemas de tiempo (±2 minutos) o transiciones bruscas. | Bien organizada, cumple con el tiempo (±1 minuto) y tiene transiciones fluidas. | Excelente estructura, timing perfecto, ritmo adecuado y manejo profesional del tiempo. |

## 📊 Rúbrica de Evaluación - Sesión de Preguntas y Respuestas

| Criterio | Incipiente (0-74)| Básico (75-84) | Sólido (85-94) | Destacado (95-100) |
|----------|---------------------|--------------|-------------------|---------------|
| **Comprensión de Preguntas** | No comprende las preguntas o responde de manera irrelevante. | Comprende preguntas simples pero tiene dificultad con preguntas técnicas complejas. |Comprende adecuadamente todas las preguntas y responde de manera pertinente. | Comprende instantáneamente incluso preguntas complejas y responde con precisión. |
| **Profundidad de Respuestas** | Respuestas superficiales, evasivas o con información incorrecta. | Respuestas básicas pero correctas, sin profundidad técnica o ejemplos. | Respuestas técnicas adecuadas con explicaciones claras y ejemplos relevantes. | Respuestas profundas, técnicas detalladas, ejemplos concretos y demostración de dominio completo. |
| **Capacidad de Improvisación** | Se bloquea ante preguntas no preparadas, no puede responder. | Responde con dificultad a preguntas no preparadas, necesita mucha ayuda. | Responde adecuadamente a preguntas no anticipadas, mantiene la coherencia. | Improvisa excelentemente, elabora respuestas coherentes y técnicas incluso para preguntas inesperadas. |
| **Claridad en las Respuestas** | Respuestas confusas, incoherentes o con terminología incorrecta. | Respuestas entendibles pero con falta de claridad o estructura. | Respuestas claras, bien estructuradas y con terminología técnica apropiada. | Respuestas excepcionalmente claras, concisas y bien ejemplificadas. |
| **Tiempo de Respuesta** | Tiempos de respuesta excesivamente largos o necesita que repitan las preguntas múltiples veces. | Responde después de largas pausas o requiere que aclaren las preguntas. | Responde en tiempos adecuados, con pocas pausas para reflexionar. | Responde con agilidad, demuestra familiaridad inmediata con los conceptos preguntados. |


## ❌ Prohibición de Uso de Inteligencia Artificial

Está estrictamente prohibido utilizar cualquier forma de inteligencia artificial (IA) para generar el código, resolver el proyecto o crear la documentación. Esto incluye, pero no se limita a:

- ChatGPT
- GitHub Copilot
- Google Bard
- Microsoft Bing AI
- Cualquier otra herramienta de generación de código basada en IA

El proyecto debe ser realizado enteramente por el estudiante, utilizando solo sus conocimientos de MATLAB y los conceptos aprendidos en el curso. Se verificará la originalidad del código, y el uso de IA resultará en una calificación de cero en el proyecto.

### Razones de la prohibición:

- Asegurar que los estudiantes demuestren su comprensión real de los conceptos.
- Fomentar el desarrollo de habilidades de programación y resolución de problemas.
- Mantener la integridad académica y la equidad entre todos los estudiantes.

## 💡 Consejos para los Estudiantes

- Prueben con mensajes cortos al principio.
- Asegúrense de que la imagen tenga suficientes píxeles para contener el mensaje.
- Utilicen imágenes sin compresión con pérdida para evitar corrupción del mensaje.
- Consideren añadir una contraseña o cifrado al mensaje para mayor seguridad (opcional avanzado).
- Practiquen la presentación varias veces para asegurar que cumplan con el tiempo establecido.
- Preparen ejemplos visuales para hacer la demostración más impactante.

¡Buena suerte con el proyecto! 🚀
