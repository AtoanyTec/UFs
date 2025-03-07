# 📚 Guía de Estudio para el Módulo 3: Modelación de la Ingeniería con Matemática Computacional

---

## 🎯 **Objetivos del Módulo**
- Comprender los conceptos fundamentales de circuitos digitales y álgebra lineal.
- Aprender a modelar problemas de ingeniería utilizando matrices y sistemas de ecuaciones lineales.
- Desarrollar habilidades en el uso de herramientas computacionales como Python para resolver problemas matemáticos.
- Aplicar métodos numéricos para la solución de sistemas de ecuaciones lineales.
- Entender el procesamiento de imágenes digitales y la aplicación de filtros.

---

## 🧮 **Tema 1: Compuertas Lógicas y Circuitos Digitales**

### **Conceptos clave**:
- **Compuertas lógicas básicas**: NOT, AND, OR, XOR.
- **Compuertas complementarias**: NAND, NOR, NXOR.
- **Circuitos integrados**: Aplicación en dispositivos electrónicos.
- **Funciones lógicas**: Representación de circuitos lógicos a partir de tablas de verdad.

### **Preguntas de estudio**:
1. ¿Qué es una compuerta lógica y cuál es su función en un circuito digital?
2. Describe la función de las compuertas NOT, AND, OR y XOR. ¿En qué casos se utiliza cada una?
3. ¿Qué diferencia hay entre una compuerta NAND y una compuerta AND?
4. Diseña un circuito lógico que implemente la función **F = (A AND B) OR (NOT C)**. ¿Cuál sería su tabla de verdad?
5. ¿Cómo se representan las funciones lógicas en un circuito integrado? Da un ejemplo.

### **Actividades**:
- Resolver ejercicios de tablas de verdad.
- Diseñar circuitos lógicos simples utilizando simuladores como **Logisim**.

### **Recursos**:
- Libro de Álgebra Lineal de David C. Lay (Capítulo 1).
- Simuladores de circuitos digitales (ej: **Logisim**).

---

## 📡 **Tema 2: Codificación y Corrección de Errores - Algoritmo Hamming (7,4)**

### **Conceptos clave**:
- **Señales digitales**: Inmunidad al ruido.
- **Detección y corrección de errores**: Algoritmo Hamming (7,4).
- **Bits de paridad**: Cálculo y uso en la corrección de errores.

### **Preguntas de estudio**:
1. ¿Por qué las señales digitales son inmunes al ruido en comparación con las señales analógicas?
2. Explica el funcionamiento del algoritmo Hamming (7,4). ¿Cómo detecta y corrige errores?
3. ¿Cómo se calculan los bits de paridad en el algoritmo Hamming? Da un ejemplo.
4. Si un mensaje codificado con Hamming (7,4) tiene un error en el bit 5, ¿cómo se corrige?
5. ¿Qué ventajas tiene el uso de códigos detectores y correctores de errores en la transmisión de datos?

### **Actividades**:
- Implementar el algoritmo Hamming (7,4) en papel y en simulación.
- Analizar la eficiencia del sistema en la detección y corrección de errores.

### **Recursos**:
- Ejercicios prácticos de detección de errores.
- Simuladores de algoritmos de corrección de errores.

---

## 📊 **Tema 3: Álgebra Lineal - Matrices y Operaciones**

### **Conceptos clave**:
- **Operaciones con matrices**: Suma, multiplicación, transpuesta.
- **Propiedades del álgebra de matrices**: Igualdad de matrices, multiplicación de matrices.
- **Inversa de una matriz**: Cálculo y aplicaciones.
- **Valores y vectores propios**: Definición y aplicaciones.

### **Preguntas de estudio**:
1. ¿Qué condiciones deben cumplir dos matrices para que se puedan sumar? ¿Y para multiplicarse?
2. Explica el proceso para calcular la transpuesta de una matriz. ¿Qué propiedades tiene?
3. ¿Cómo se calcula la inversa de una matriz? ¿En qué casos una matriz no tiene inversa?
4. ¿Qué son los valores y vectores propios de una matriz? ¿Para qué se utilizan en ingeniería?
5. Resuelve el siguiente sistema de ecuaciones lineales utilizando matrices:
   \[
   \begin{cases}
   2x + 3y = 5 \\
   4x - y = 1
   \end{cases}
   \]

### **Actividades**:
- Resolver ejercicios de operaciones con matrices.
- Aplicar teoremas de álgebra lineal para resolver problemas prácticos.

### **Recursos**:
- Libro de Álgebra Lineal de David C. Lay (Capítulos 2 y 3).
- Ejercicios prácticos de matrices.

---

## 💻 **Tema 4: Representación Computacional y Solución de Sistemas Lineales**

### **Conceptos clave**:
- **Representación de matrices en Python**: Uso de librerías como **NumPy** y **SciPy**.
- **Solución de sistemas de ecuaciones lineales**: Métodos numéricos.
- **Conjunto solución**: Sistemas consistentes e inconsistentes.

### **Preguntas de estudio**:
1. ¿Cómo se representan las matrices en Python? Da un ejemplo de cómo crear una matriz en **NumPy**.
2. ¿Qué métodos numéricos se utilizan para resolver sistemas de ecuaciones lineales? Describe uno de ellos.
3. ¿Qué significa que un sistema de ecuaciones lineales sea consistente? ¿Y inconsistente?
4. Resuelve el siguiente sistema de ecuaciones lineales utilizando Python:
   \[
   \begin{cases}
   x + 2y - z = 3 \\
   2x - y + 3z = 1 \\
   3x + y + 2z = 4
   \end{cases}
   \]
5. ¿Cómo se determina si un sistema de ecuaciones tiene una solución única, infinitas soluciones o ninguna solución?

### **Actividades**:
- Implementar operaciones con matrices en Python.
- Resolver sistemas de ecuaciones lineales usando Python.

### **Recursos**:
- Tutoriales de Python para álgebra lineal.
- Librerías como **NumPy** y **SciPy**.

---

## 🖼️ **Tema 5: Procesamiento de Imágenes Digitales**

### **Conceptos clave**:
- **Imágenes digitales**: Representación matricial, escala de grises, imágenes binarias.
- **Filtros de imágenes**: Media, Gaussiano, mediana.
- **Eliminación de ruido**: Métodos y aplicaciones.
- **Métricas de calidad**: PSNR (Relación Señal-Ruido de Pico) y SSIM (Índice de Similitud Estructural).

### **Preguntas de estudio**:
1. ¿Cómo se representan las imágenes digitales en forma de matrices? Explica la diferencia entre imágenes a color, escala de grises y binarias.
2. ¿Qué es un filtro de media y cómo se aplica a una imagen? ¿Cuáles son sus ventajas y desventajas?
3. Describe el funcionamiento del filtro Gaussiano. ¿En qué se diferencia del filtro de media?
4. ¿Qué es el ruido en una imagen digital y cómo se puede eliminar?
5. ¿Cómo se calculan las métricas PSNR y SSIM? ¿Para qué se utilizan en el procesamiento de imágenes?

### **Actividades**:
- Aplicar filtros a imágenes digitales utilizando Python o MATLAB.
- Calcular métricas como PSNR y SSIM para evaluar la calidad de las imágenes.

### **Recursos**:
- Tutoriales de procesamiento de imágenes en **MATLAB** o **Python**.
- Librerías como **OpenCV** para Python.

---

## 📝 **Evaluación y Rúbricas**

---

### **Código Python** 🐍
- **Funcionalidad**: El código debe funcionar correctamente y manejar todos los casos posibles.
- **Estructura y organización**: El código debe estar bien organizado y modularizado.
- **Documentación**: El código debe estar completamente documentado con comentarios claros.
- **Eficiencia**: El código debe estar optimizado y utilizar las mejores prácticas.
- **Uso de bibliotecas**: Se deben utilizar bibliotecas como **NumPy** y **SciPy** de manera eficiente.

---

### **Video Formato TikTok** 🎥
- **Claridad de la explicación**: La explicación debe ser clara y cubrir todos los conceptos.
- **Contenido técnico**: Los conceptos técnicos deben explicarse de manera precisa y sin errores.
- **Creatividad**: El video debe ser creativo y visualmente atractivo.
- **Duración**: El video debe tener una duración máxima de 2 minutos y un ritmo dinámico.

---

### **Reporte** 📄
- **Explicación de los filtros**: Se debe explicar el funcionamiento de los filtros de manera detallada.
- **Tabla de resultados**: La tabla debe estar completa y bien organizada.
- **Análisis comparativo**: El análisis debe ser detallado y con conclusiones claras.
- **Uso de diagramas de Venn**: Los diagramas deben ser claros y relevantes.

---

### **Presentación Oral** 🗣️
- **Claridad de la explicación**: La explicación debe ser clara y cubrir todos los conceptos.
- **Uso de diagramas de Venn**: Los diagramas deben ser claros y relevantes.
- **Estructura y organización**: La presentación debe estar bien estructurada y organizada.
- **Manejo del tiempo**: La presentación debe durar exactamente 10 minutos.

---

## 📚 **Bibliografía Recomendada**
- **David C. Lay**. “Álgebra lineal y sus aplicaciones”. Tercera Edición.
- Tutoriales de Python y MATLAB para álgebra lineal y procesamiento de imágenes.
- Documentación oficial de **NumPy**, **SciPy** y **OpenCV**.

---

## 💡 **Consejos para el Éxito**
- **Organización**: Planifica tu tiempo y divide el contenido en sesiones de estudio.
- **Práctica**: Resuelve tantos ejercicios como puedas, especialmente en álgebra lineal y programación.
- **Colaboración**: Trabaja en equipo con tus compañeros para resolver problemas complejos.
- **Consulta**: No dudes en preguntar a tus profesores si tienes dudas.

---

¡Buena suerte en tus estudios! 🚀📖
