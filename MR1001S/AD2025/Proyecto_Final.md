# 🕵️ Proyecto Final: Esteganografía LSB - Ocultando Mensajes en Imágenes

## 📌 Nombre de la Actividad

**"Esteganografía LSB: Ocultando y Revelando Mensajes Secretos en Imágenes"**

## 🎯 Objetivo de la Actividad

Desarrollar un programa en MATLAB que permita ocultar un mensaje de texto en una imagen utilizando la técnica de los bits menos significativos (LSB) y crear un decodificador que pueda recuperar el mensaje oculto. Los estudiantes aplicarán conceptos de manipulación de bits, procesamiento de imágenes y programación en MATLAB.

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

- El programa debe manejar imágenes a color o escala de grises.
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
| **Contenido Técnico** | No explica los conceptos técnicos o lo hace de manera incorrecta. | Explica algunos conceptos técnicos de forma superficial. | Explica adecuadamente los conceptos técnicos y su implementación. | Explica de manera clara y profunda todos los conceptos técnicos, con ejemplos ilustrativos. |
| **Demostración** | No muestra el funcionamiento del proyecto o la demostración falla. | Muestra una demostración básica con algunas dificultades. | Demuestra adecuadamente el funcionamiento de ambas partes del proyecto. | Demuestra fluidamente el proyecto, mostrando casos de uso y posibles aplicaciones. |
| **Comunicación** | No se expresa claramente, usa lenguaje no apropiado o no mantiene contacto visual. | Se expresa con cierta claridad pero con dificultades en la fluidez o terminología técnica. | Se expresa con claridad, usando terminología técnica apropiada y manteniendo engagement con la audiencia. | Comunica de manera excepcional, con gran claridad, confianza y dominio del tema. |
| **Organización y Tiempo** | La presentación está desorganizada y no cumple con el tiempo establecido. | La presentación tiene una estructura básica pero tiene problemas de tiempo (±2 minutos). | La presentación está bien organizada y cumple con el tiempo establecido (±1 minuto). | La presentación está excelentemente estructurada, con timing perfecto y transiciones fluidas. |
| **Calidad Visual** | Las diapositivas son confusas, con mucho texto o diseño pobre. | Las diapositivas son básicas pero transmiten la información esencial. | Las diapositivas son claras, visualmente atractivas y apoyan efectivamente la presentación. | Las diapositivas son excepcionales, con diseño profesional, multimedia y elementos visuales de alta calidad. |

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
