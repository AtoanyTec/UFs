# 📈 Predicción de la Demanda de un Producto

## 🎯Objetivo: 
Utilizar la regresión lineal para predecir la demanda futura de un producto, basándote en la actividad anterior. 

## 💡 Instrucciones
Utilizando el mismo dataset, implementa la regresión logística para predecir la demanda de un producto A de categoría B. Analiza el dataset para saber qué variables predictoras necesitas. Puedes crear variables adicionales, como, por ejemplo, la demanda mensual promedio. Utiliza la IA como asistente.

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

## 📚 Preguntas

### **1. Preguntas sobre Conceptos Fundamentales**

1.  ¿Qué es la regresión lineal y para qué tipo de problemas se utiliza?
2.  ¿Cuál es la diferencia principal entre una variable predictora (independiente) y una variable objetivo (dependiente)?
3.  ¿Qué significa el término "relación lineal" en el contexto de la regresión?
4.  Explica la diferencia entre regresión lineal simple y regresión lineal múltiple.
5.  ¿Por qué es importante estandarizar o normalizar los datos antes de aplicar un modelo de regresión lineal?

---

### **2. Preguntas sobre la Preparación de los Datos y el Código**

6.  ¿Por qué dividimos el dataset en conjuntos de entrenamiento y prueba?
7.  Si tuviéramos un $R^2$ de 0.99 en el conjunto de entrenamiento pero de 0.50 en el de prueba, ¿qué podría estar ocurriendo?
8.  ¿Qué función de `sklearn` se utiliza para dividir los datos? ¿Qué parámetros son esenciales en esta función?
9.  ¿Cómo se crea una nueva variable predictora, como el promedio de demanda, usando pandas?
10. ¿Qué hace el método `.fit()` en el modelo de regresión?
11. ¿Qué hace el método `.predict()`?
12. ¿Por qué es crucial usar el mismo `scaler` entrenado para estandarizar los datos de prueba y de inferencia?
13. ¿Qué pasaría si no estandarizamos los datos antes de entrenar el modelo?
14. Si tuvieras datos categóricos (como el nombre de la categoría), ¿cómo los prepararías para usarlos en el modelo de regresión lineal?
15. ¿Qué significa el término `random_state` en `train_test_split` y por qué se utiliza?

---

### **3. Preguntas sobre la Evaluación del Modelo**

16. ¿Qué métricas de evaluación se utilizan comúnmente en la regresión?
17. Explica qué mide el coeficiente de determinación ($R^2$). ¿Qué significa un valor de $R^2$ cercano a 1?
18. ¿Cuál es la principal diferencia entre el Error Cuadrático Medio (RMSE) y el Error Absoluto Medio (MAE)?
19. Si tu MAE es 1500, ¿qué te dice ese número sobre el rendimiento de tu modelo?
20. ¿Puedes tener un valor de $R^2$ negativo? Si es así, ¿qué significa?
21. ¿Qué métrica de evaluación te parece más fácil de interpretar para una persona no técnica y por qué?
22. ¿Cómo puedes determinar si tu modelo está sobreajustado (overfitting)?
23. ¿Qué harías si las métricas de evaluación muestran que tu modelo no tiene un buen rendimiento?

---

### **4. Preguntas sobre Inferencia y Conclusión**

24. Describe el proceso para realizar una predicción con un nuevo conjunto de datos.
25. ¿Por qué no podemos simplemente pasar los nuevos datos al modelo para una predicción sin preprocesarlos?
26. Si el modelo predice una demanda negativa, ¿qué podría significar en el contexto de tu negocio?
27. ¿Qué limitaciones tiene el modelo de regresión lineal?
28. ¿Cómo podrías mejorar el modelo para obtener mejores predicciones? (Ej: ¿Qué otros modelos o variables podrías usar?).
29. Basado en tus resultados, ¿cuál es tu conclusión sobre la capacidad del modelo para predecir la demanda de abril?
30. Si tuvieras que explicar este proyecto a un gerente no técnico, ¿en qué te enfocarías?

