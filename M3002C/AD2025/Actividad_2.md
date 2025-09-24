# 📈 Implementación de Regresión Lineal

## 🎯Objetivo: 
Utilizar la regresión lineal para predecir la demanda futura de un producto, basándote en la actividad anterior. 

## 💡 Instrucciones
Utilizando el mismo dataset, implementa la regresión logística para predecir el valor de ventas de un producto A, de categoría B. Analiza el dataset para saber qué variables predictoras necesitas. Puedes crear variables adicionales, como, por ejemplo, la demanda mensual promedio. Utiliza la IA como asistente.

#### **Pasos a seguir:**
1. Importar librerías
2. Descargar dataset de Kaggle
3. Cargar el dataset al cuaderno
4. Seleccionar las variables predictoras y guardarlas en X
5. Seleccionar la variable target y guardarlas en Y
6. Estandarización de datos
7. Crea los subsets train (80%) y test (20%)
8. Declara la regresión lineal en la variable model y entena
9. Obten las predicciones con el subset test en la variable pred
10. Calcula las métricas 𝑅^2, RMSE y MAE e imprimelas en pantalla
11. Haz una inferencia con un ejemplo que no haya sido utilizado en el entrenamiento ni en prueb


---

**Rúbrica de Evaluación:**

| Criterio | Incipiente (0-74) | Básico (75-84) | Sólido (85-94| Destacado (95-100) |
| :--- | :--- | :--- | :--- | :--- |
| **1. Implementación del código** | El código no se ejecuta o tiene errores graves. No implementa los pasos clave. | El código se ejecuta, pero contiene errores menores o no sigue el flujo lógico de los pasos. Falta una o más secciones. | El código se ejecuta sin errores. Ha implementado todos los pasos solicitados y las métricas. | El código es limpio, bien comentado y sigue todos los pasos lógicamente. Ha implementado una variable adicional correctamente. |
| **2. Análisis y comprensión de los datos** | No identifica las variables predictoras ni la variable objetivo. No muestra evidencia de haber explorado el dataset. | Identifica las variables, pero no justifica su selección. No explica la importancia de la estandarización. | Identifica y justifica la selección de las variables. Explica la importancia de la estandarización y cómo funciona. | Muestra un análisis profundo de los datos, justificando la selección de variables y la creación de una nueva variable predictora. |
| **3. Interpretación de métricas** | No calcula las métricas solicitadas o no entiende lo que significan. | Calcula las métricas, pero tiene dificultad para explicar su significado o la interpretación de los valores obtenidos. | Calcula las métricas correctamente y explica con precisión el significado de $R^2$, RMSE y MAE en el contexto del problema. | No solo calcula e interpreta las métricas, sino que también sugiere cómo podrían usarse para comparar diferentes modelos y por qué una es más adecuada que otra. |
| **4. Preguntas y respuestas (Q&A)** | Responde a las preguntas de forma superficial o incorrecta. Depende por completo de la IA sin poder justificar las respuestas. | Responde a las preguntas, pero con explicaciones incompletas o ambiguas. Le cuesta elaborar sobre los conceptos. | Responde con claridad y precisión a la mayoría de las preguntas. Demuestra que entiende los conceptos detrás del código. | Responde a todas las preguntas con una comprensión profunda. Puede explicar por qué se tomaron ciertas decisiones de codificación y cómo se podría mejorar el modelo. |


