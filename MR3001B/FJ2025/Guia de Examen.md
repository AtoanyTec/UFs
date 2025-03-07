# Guía de Estudio para Estudiantes: Robótica Móvil y Visión Computacional 🚀🤖👁️

Esta guía de estudio está diseñada para ayudarte a comprender los conceptos clave de **Robótica Móvil** y **Visión Computacional** basados en los archivos proporcionados. La guía se divide en dos secciones principales: **Robótica Móvil** y **Visión Computacional**, cada una con subtemas, ejercicios y referencias para facilitar tu aprendizaje. 📚💡

---

## **1. Robótica Móvil** 🤖🛠️

### **1.1. Conceptos Básicos** 🧠
- **Definición de Robots Móviles**: Los robots móviles son dispositivos capaces de moverse en diferentes entornos (tierra, agua, aire). Ejemplos históricos incluyen **Elsie la tortuga** (1940) 🐢 y **Shakey** (1960), que fueron pioneros en la percepción y navegación autónoma.
- **AGVs (Autonomous Guided Vehicles)**: Estos robots fueron las primeras aplicaciones comerciales de robots móviles en la década de 1980. Hoy en día, operan sin infraestructura de navegación. 🚗🤖

### **1.2. Locomoción en Robots Móviles** 🚴‍♂️
- **Robots con Ruedas**: La locomoción sobre ruedas es una de las innovaciones más importantes de la humanidad. Los robots móviles con ruedas son similares a los automóviles, pero tienen limitaciones en su movimiento. 🚗
- **Modelo Cinemático de Bicicleta**: Este modelo es comúnmente utilizado para describir el movimiento de robots móviles a bajas velocidades. Se basa en la relación entre el centro instantáneo de rotación y las ruedas del robot. 🚲

#### **Ejercicio 1**:
Calcula la distancia entre el centro instantáneo de rotación y la llanta trasera para que un vehículo dé una vuelta completa en 5 segundos, dado un radio específico. 🧮

### **1.3. Navegación Autónoma** 🧭
- **Dead Reckoning**: Es un método de estimación de posición basado en la dirección y distancia recorrida desde un punto inicial. Se utiliza información de los **encoders** de las ruedas para calcular la distancia recorrida.
  - **Fórmula de Distancia Recorrida**:
    $
    \[
    \text{Distancia recorrida} = k \times 2\pi R
    \]
    $
    
    Donde \( k \) es el número de vueltas de la rueda y \( R \) es el radio de la rueda. 📏

#### **Experimento 7: Dead Reckoning** 🧪
- **Objetivo**: Simular la navegación de un robot móvil desde un punto A hasta un punto B utilizando **dead reckoning** en Simulink.
- **Materiales**: MATLAB/Simulink, Stateflow, encoders.
- **Instrucciones**:
  1. Calcular la distancia recorrida a partir de los datos de los encoders. 🛠️
  2. Implementar la simulación en Simulink. 💻
  3. Utilizar Stateflow para controlar el movimiento del robot y detenerlo al alcanzar una distancia predefinida. 🛑

#### **Ejercicio 2**:
Implementa un controlador **PID** en Simulink para que el robot se detenga exactamente a 1 metro del punto inicial. Ajusta los parámetros del controlador para minimizar el error. 🎯

### **1.4. Control PID en Robots Móviles** 🎛️
- **Controlador PID (Proporcional-Integral-Derivativo)**: Es un sistema de control que ajusta la velocidad del robot en función del error entre la posición deseada y la posición actual.
  - **Controlador Proporcional (P)**: $\( P = k_p \times e(t) \)$
  - **Controlador Integral (I)**: $\( I = k_i \int e(t) \, dt \)$
  - **Controlador Derivativo (D)**: $\( D = k_d \frac{de(t)}{dt} \)$
  - **Controlador PID**: $\( PID = k_p e(t) + k_i \int e(t) \, dt + k_d \frac{de(t)}{dt} \)$

#### **Experimento 8: Control de un Robot Móvil con PID** 🧪
- **Objetivo**: Implementar y ajustar un controlador PID en un robot móvil mediante simulación en Simulink.
- **Materiales**: MATLAB/Simulink, Mobile Robotics Training Library.
- **Instrucciones**:
  1. Configurar un controlador P con una ganancia de 1. 🛠️
  2. Ajustar los parámetros del controlador PID utilizando la herramienta de ajuste automático (Tune). 🔧
  3. Analizar el desempeño del sistema y optimizar los parámetros para mejorar la estabilidad y precisión. 📊

#### **Ejercicio 3**:
Implementa un controlador **PI** con una ganancia \( k_p = 5 \) y \( k_i = 1 \). Analiza las ventajas y desventajas del sistema. 📈📉

---

## **2. Visión Computacional** 👁️💻

### **2.1. Introducción a la Visión Artificial** 🧠
- **Definición**: La visión artificial combina hardware y software para capturar y procesar imágenes, permitiendo a los dispositivos realizar tareas específicas. 📸
- **Aplicaciones**:
  - **Guiado**: Localización y orientación de piezas. 🧩
  - **Identificación**: Lectura de códigos de barras y caracteres impresos. 🏷️
  - **Medición**: Cálculo de distancias y dimensiones. 📏
  - **Inspección**: Detección de defectos en productos manufacturados. 🔍

### **2.2. Componentes de un Sistema de Visión Artificial** 🛠️
- **Iluminación**: Es clave para obtener imágenes de calidad. Tipos de iluminación incluyen:
  - **Iluminación de fondo**: Destaca el contorno de un objeto. 🌟
  - **Iluminación difusa axial**: Proporciona una iluminación uniforme. 💡
  - **Iluminación estructurada**: Proyecta patrones de luz para obtener información dimensional. 🌈
- **Lentes**: Capturan la imagen y la entregan al sensor de imagen. 📷
- **Sensor de Imagen**: Convierte la luz en señales eléctricas (CCD o CMOS). ⚡
- **Procesamiento de Visión**: Extrae información de la imagen digital mediante software. 💻

### **2.3. Procesamiento de Imágenes** 🖼️
- **Imágenes Digitales**: Representadas como matrices de píxeles (RGB, escala de grises, binarias). 🎨
- **Histograma**: Muestra la distribución de los niveles de gris en una imagen. 📊
- **Ecualización de Histograma**: Transformación que busca obtener una distribución uniforme de los niveles de gris. 🔄
- **Filtros**: Utilizados para suavizar imágenes, eliminar ruido y detectar bordes.
  - **Filtro Promedio**: Suaviza la imagen. 🌫️
  - **Filtro Gaussiano**: Elimina ruido. 🧹
  - **Filtro de Sobel**: Detecta bordes mediante operadores de gradiente. 🧮

#### **Ejercicio 4**:
Implementa un filtro de Sobel en MATLAB para detectar bordes en una imagen en escala de grises. Analiza los resultados. 🖥️

### **2.4. Detección de Bordes** 🖼️
- **Métodos de Detección de Bordes**:
  - **Sobel**, **Prewitt**, **Roberts**, **Canny**: Diferentes algoritmos para identificar bordes en una imagen. 🧮
- **Modelos de Borde**:
  - **Escalón**, **Rampa**, **Techo**: Describen los tipos de cambios de intensidad que representan bordes. 📈

#### **Experimento 5: Segmentación y Reconocimiento de Imágenes** 🧪
- **Objetivo**: Aplicar técnicas de segmentación y reconocimiento de imágenes en un sistema de visión artificial.
- **Materiales**: MATLAB, imágenes digitales.
- **Instrucciones**:
  1. Utilizar filtros para preprocesar la imagen. 🛠️
  2. Aplicar algoritmos de detección de bordes. 🔍
  3. Segmentar la imagen para identificar objetos. 🧩

---

## **3. Referencias y Recursos Adicionales** 📚🔗
- **Robótica Móvil**:
  - **Peter Corke**, *Robotics, Vision and Control – Fundamental Algorithms in MATLAB*. 📖
  - **Práctica 7 - Moviéndose a un Punto.pdf**. 📄
  - **Práctica 8 - Robot Móvil controlado por PID.pdf**. 📄
- **Visión Computacional**:
  - **Introducción a la Visión Artificial**, COGNEX. 📖
  - **Visión Computacional.pptx**. 📄


---

¡Buena suerte en tu estudio! Recuerda practicar con los ejercicios y simulaciones para afianzar tus conocimientos. 🚀📚💪
