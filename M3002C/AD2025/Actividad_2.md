# 📈 Implementación de Regresión Lineal

## 🎯Objetivo: 
Utilizar la regresión lineal para predecir la demanda futura de un producto, basándote en la actividad anterior. 

#### **Pasos a seguir:**

1.  **Importar librerías:** Importa todas las librerías necesarias para el análisis de datos, el modelado y la evaluación, como `numpy`, `pandas` y las funciones de `sklearn`. 📚
2.  **Descargar y cargar el dataset:** Utiliza `kagglehub` para descargar el dataset y cárgalo en un `DataFrame` de pandas. 💾
3.  **Análisis y selección de variables:**
    * **Variables predictoras (X):** Analiza el dataset e identifica las variables de demanda de los meses anteriores (`Jan_Demand`, `Feb_Demand`, `Mar_Demand`). 👀
    * **Variable objetivo (Y):** Selecciona la demanda de abril (`Apr_Demand`) como la variable que deseas predecir. 🎯
    * **Crea una nueva variable:** Genera una variable adicional, como el promedio de la demanda mensual del primer trimestre (`promedio_demanda_trimestral`), para mejorar el modelo. 💡
4.  **Preprocesamiento de datos:**
    * **Estandarización:** Estandariza las variables predictoras (X) para que tengan una escala similar, usando `StandardScaler`. 📏
    * **División de datos:** Divide el dataset en un conjunto de **entrenamiento (80%)** y un conjunto de **prueba (20%)** para entrenar y evaluar el modelo. ✂️
5.  **Entrenamiento del modelo:**
    * Declara el modelo de regresión lineal en una variable. 🤖
    * Entrena el modelo utilizando el conjunto de datos de entrenamiento. 💪
6.  **Predicción y evaluación:**
    * Realiza predicciones utilizando el conjunto de datos de prueba. 🔮
    * Calcula e imprime las métricas de evaluación clave: **$R^2$**, **RMSE** (Raíz del Error Cuadrático Medio) y **MAE** (Error Absoluto Medio). 📊
7.  **Inferencia con un nuevo ejemplo:**
    * Crea un nuevo ejemplo de datos que no se haya usado en el entrenamiento o la prueba. 🧪
    * Utiliza el modelo ya entrenado para predecir el valor de ventas para este nuevo ejemplo. 📈
8.  **Presentación:** Prepara una presentación (sin usar el cuaderno) donde expliques cada uno de los pasos anteriores, justificando por qué realizaste cada acción. 🗣️

---

**Criterios de evaluación:**

* **Implementación del código:** El código debe ser funcional, seguir los pasos lógicos y estar bien documentado. ✅
* **Análisis y comprensión:** Debes ser capaz de justificar la selección de las variables, la estandarización y la creación de la nueva variable. 🤔
* **Interpretación de métricas:** Explica el significado de las métricas ($R^2$, RMSE, MAE) y cómo interpretas los resultados para evaluar el rendimiento del modelo. 🧠
* **Preguntas y respuestas:** Demuestra tu comprensión del proceso respondiendo con precisión a preguntas sobre tu implementación y las decisiones que tomaste. 💬
