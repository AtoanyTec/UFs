# Examen Parcial 1

| **Nombre**      | Atoany Nazareth Fierro | **Clase** | PC6053       |
|-----------------|------------------------|-----------|--------------|
| **Profesor**    | Radilla                | **Período**| Parcial 1    |

**Fecha:**  

**Lee con atención las preguntas y responde correctamente**

---

### 1. ¿Qué tipo de aprendizaje utiliza datos etiquetados?  
**Opciones:**  
a. Aprendizaje no supervisado  
b. Aprendizaje supervisado  
c. Aprendizaje por refuerzo  
d. Aprendizaje automático  

---

### 2. ¿Qué tipo de aprendizaje utiliza datos no etiquetados?  
**Opciones:**  
a. Aprendizaje supervisado  
b. Aprendizaje no supervisado  
c. Aprendizaje por refuerzo  
d. Aprendizaje automático  

---

### 3. ¿Qué algoritmo de aprendizaje no supervisado se utiliza para agrupamiento?  
**Opciones:**  
a. Regresión lineal  
b. K-means  
c. Árboles de decisión  
d. Redes neuronales  

---

### 4. ¿Qué es el Deep Learning?  
**Opciones:**  
a. Un tipo de aprendizaje automático que utiliza redes neuronales profundas  
b. Un tipo de hardware avanzado  
c. Un lenguaje de programación  
d. Un algoritmo de regresión  

---

### 5. ¿Qué tipo de aprendizaje se utiliza para predecir la temperatura de una ciudad?  
**Opciones:**  
a. Aprendizaje supervisado  
b. Aprendizaje no supervisado  
c. Aprendizaje por refuerzo  
d. Aprendizaje automático  

---

### 6. ¿Qué tipo de aprendizaje se utiliza para identificar tipos de clientes en una empresa?  
**Opciones:**  
a. Aprendizaje supervisado  
b. Aprendizaje no supervisado  
c. Aprendizaje por refuerzo  
d. Aprendizaje automático  

---

### 7. ¿Qué es la regresión lineal?  
**Opciones:**  
a. Un algoritmo de clasificación  
b. Un algoritmo de regresión que modela la relación entre variables  
c. Un algoritmo de clustering  
d. Un algoritmo de detección de anomalías  

---

### 8. ¿Qué tipo de variable predice la regresión lineal?  
**Opciones:**  
a. Variables categóricas  
b. Variables continuas  
c. Variables binarias  
d. Variables discretas  

---

### 9. ¿Qué mide la función de costo en la regresión lineal?  
**Opciones:**  
a. La precisión del modelo  
b. El error entre las predicciones y los valores reales  
c. La velocidad del algoritmo  
d. La complejidad del modelo  

---

### 10. ¿Qué es el gradiente descendente?  
**Opciones:**  
a. Un algoritmo de optimización para minimizar la función de costo  
b. Un algoritmo de clasificación  
c. Un algoritmo de clustering  
d. Un algoritmo de detección de anomalías  

---

### 11. ¿Qué tipo de problema resuelve la regresión lineal?  
**Opciones:**  
a. Clasificación  
b. Regresión  
c. Clustering  
d. Detección de anomalías  

---

### 12. ¿Cuál es la función de costo en la regresión logística?  
**Opciones:**  
a. La entropía cruzada  
b. El error cuadrático medio  
c. La precisión del modelo  
d. La complejidad del modelo  

---

###13. ¿Qué es el subajuste en un modelo de regresión logística?  
**Opciones:**  
a. Cuando el modelo es demasiado simple y no se ajusta bien a los datos de entrenamiento  
b. Cuando el modelo se ajusta demasiado a los datos de entrenamiento  
c. Cuando el modelo es demasiado complejo  
d. Cuando el modelo es demasiado rápido  

---

###14. ¿Qué es el aprendizaje profundo (Deep Learning)?  
**Opciones:**  
a. Un tipo de aprendizaje automático que utiliza redes neuronales profundas  
b. Un tipo de aprendizaje que utiliza solo datos etiquetados  
c. Un tipo de aprendizaje que utiliza solo datos no etiquetados  
d. Un tipo de aprendizaje que utiliza algoritmos de clustering  

---

###15. Del siguiente conjunto de datos:  

a. Calcula la predicción de la regresión lineal ($\widehat{y}$) si $h_{\theta}(x) = \theta_{0} + \theta_{1}x$, con $\theta_{0} = 0,\ \theta_{1} = 1$. Una vez que hayas calculado la predicción, grafica $x,\ y$ y $\widehat{y}$.  

![](media/image1.png){width="1.256114391951006in" height="1.1080555555555556in"}  

b. Calcula el error utilizando la función de costo del error cuadrático medio:  
$$J(\theta) = \frac{1}{2m}\sum_{i = 1}^{m}\left( {\widehat{y}}_{i} - y_{i} \right)^{2}$$  

c. Calcula el nuevo valor de $\theta_{1}$ utilizando el optimizador gradiente descendente:  
$$\theta_{1} = \theta_{1} - \alpha \times \frac{\partial J\left( \theta_{1} \right)}{\partial\theta_{1}}$$  
Sabiendo que:  
$$\alpha = 0.01$$  
$$\frac{\partial J\left( \theta_{1} \right)}{\partial\theta_{1}} = \frac{1}{m}\sum_{i = 1}^{n}{\left( {\widehat{y}}_{i} - y_{i} \right) \times x}$$  

d. Calcula la nueva predicción utilizando el nuevo valor de $\theta_{1}$.  

e. Calcula el nuevo error con la nueva predicción.  

f. Escribe tus observaciones con respecto al nuevo error obtenido.  
