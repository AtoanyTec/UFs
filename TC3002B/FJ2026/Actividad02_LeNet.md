# 🧠 Actividad: Implementación de LeNet from Scratch para Clasificación de Lesiones de la Piel

## 🎯 Objetivo
Implementar, entrenar y evaluar una red neuronal convolucional tipo **LeNet** para la clasificación de lesiones de la piel, utilizando el cuaderno proporcionado por el profesor. Además de ejecutar el entrenamiento, deberás demostrar que comprendes cómo funciona una **Convolutional Neural Network (CNN)** y cómo se aplica al problema de clasificación de imágenes médicas.

---

## 📚 Descripción de la actividad
En esta actividad trabajarás con una arquitectura **LeNet** implementada **from scratch**. El objetivo es entrenar el modelo durante **10 épocas**, observar su desempeño y analizar los resultados obtenidos en la etapa de evaluación.

Aunque el código base ya fue proporcionado, esta actividad **no consiste únicamente en ejecutar el notebook**, sino en comprender:

- cómo entra la imagen al modelo,
- qué hacen las capas convolucionales,
- cómo se reduce la dimensionalidad,
- cómo se extraen características,
- y cómo el modelo toma una decisión final de clasificación.

---

## 🛠️ Instrucciones
1. Abre el cuaderno proporcionado por el profesor.
2. Revisa cuidadosamente la arquitectura de **LeNet** implementada.
3. Identifica en el código:
   - las capas convolucionales,
   - las funciones de activación,
   - las capas de pooling,
   - las capas fully connected,
   - y la salida final del modelo.
4. Ejecuta el entrenamiento del modelo durante **10 épocas**.
5. Guarda y analiza los resultados obtenidos durante el entrenamiento:
   - pérdida de entrenamiento,
   - accuracy de entrenamiento y/o validación,
   - resultados finales de evaluación.
6. Ejecuta la evaluación final del modelo.
7. Responde las preguntas de análisis conceptual incluidas en esta actividad.
8. Entrega las evidencias solicitadas.

---

## 🔍 Parte conceptual: comprensión de CNN
Además de correr el código, deberás responder con tus propias palabras las siguientes preguntas:

### Preguntas de comprensión
1. ¿Qué es una red neuronal convolucional (CNN) y por qué es adecuada para clasificación de imágenes?
2. ¿Cuál es la función de una **capa convolucional** dentro de LeNet?
3. ¿Qué son los **filtros** o **kernels** y qué aprende cada uno durante el entrenamiento?
4. ¿Qué función cumple la activación no lineal dentro de la red?
5. ¿Para qué sirve una capa de **pooling**?
6. ¿Cuál es la diferencia entre una capa convolucional y una capa fully connected?
7. ¿Qué ocurre con la información de la imagen conforme avanza por las capas de la red?
8. ¿Qué significa que el modelo fue entrenado por 10 épocas?
9. ¿Qué representa la función de pérdida en este problema?
10. ¿Cómo se interpreta el resultado final de evaluación del modelo?

### Análisis del modelo
11. Describe el flujo de datos dentro de LeNet, desde la imagen de entrada hasta la predicción final.
12. Explica qué podría ocurrir si el modelo entrena más épocas de las necesarias.
13. Explica qué significa que un modelo tenga buen accuracy, pero aún así pueda cometer errores importantes en clasificación médica.
14. Menciona al menos **dos limitaciones** de usar una arquitectura simple como LeNet en un problema real de lesiones dermatológicas.

---

## 📦 Entregables
Cada estudiante deberá entregar un archivo en formato **PDF o Markdown** que incluya lo siguiente:

### 1. Evidencia de ejecución
Incluye capturas de pantalla donde se observe claramente:

- el código de entrenamiento ejecutándose,
- las **10 épocas** de entrenamiento,
- los resultados finales de evaluación del modelo.

### 2. Resultados obtenidos
Reporta de manera clara:

- número de épocas entrenadas,
- valor final de pérdida,
- accuracy final,
- cualquier otra métrica mostrada en el cuaderno.

### 3. Respuestas conceptuales
Responde todas las preguntas de la sección **Parte conceptual: comprensión de CNN**.

### 4. Breve reflexión personal
Escribe un breve párrafo respondiendo:

- ¿Qué aprendiste sobre el funcionamiento de una CNN?
- ¿Qué parte del modelo te resultó más clara o más difícil de comprender?
- ¿Qué ventajas y retos observas al aplicar CNNs en imágenes médicas?

---

## ⚠️ Consideraciones importantes
- La actividad es **individual**.
- No se evaluará únicamente que el código corra, sino que demuestres comprensión del modelo.
- Las respuestas deben estar redactadas con tus propias palabras.
- No copies explicaciones directamente de internet o de herramientas de IA sin entenderlas.
- Si utilizas IA generativa como apoyo, debes usarla de forma responsable y asegurarte de comprender lo que entregas.
- Evidencias incompletas o respuestas superficiales afectarán la calificación.

---

## ✅ Recomendaciones
Antes de entregar, asegúrate de poder explicar con claridad:

- qué hace cada bloque principal de LeNet,
- cómo aprende una CNN,
- y qué significan los resultados obtenidos.

Piensa en esta actividad no solo como “entrenar un modelo”, sino como una oportunidad para entender la lógica básica de una arquitectura clásica de visión por computadora.

---

## 📊 Criterios de evaluación sugeridos
| Criterio | Descripción | Puntos |
|---|---|---:|
| Ejecución correcta del entrenamiento | El modelo fue entrenado correctamente durante 10 épocas y se muestran evidencias claras | 25 |
| Evidencia de resultados | Se reportan adecuadamente loss, accuracy y evaluación final | 20 |
| Comprensión de la arquitectura LeNet | Explica correctamente las partes del modelo y su función | 20 |
| Comprensión de conceptos de CNN | Responde con claridad y precisión las preguntas conceptuales | 25 |
| Reflexión y análisis | Presenta una reflexión personal bien fundamentada sobre el uso de CNN en este problema | 10 |
| **Total** |  | **100** |

---

## 🧾 Formato de entrega
- Subir un solo archivo en **PDF** o **Markdown**
- Nombre sugerido del archivo:  
  `Actividad_LeNet_Nombre_Apellido.pdf`  
  o  
  `Actividad_LeNet_Nombre_Apellido.md`

---
