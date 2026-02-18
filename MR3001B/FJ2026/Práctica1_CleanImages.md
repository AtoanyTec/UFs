# 🧪 Práctica1: Restauración de Imágenes y Evaluación con PSNR  
## Procesamiento Digital de Imágenes – Google Colab

---

## 🎯 Objetivo de aprendizaje

Al finalizar esta actividad, el/la estudiante será capaz de:

- Comprender la diferencia entre **ruido impulsivo (sal y pimienta)** y **ruido gaussiano**.
- Implementar contaminación artificial de imágenes.
- Aplicar correctamente:
  - Filtro **Promedio (Mean Filter)**
  - Filtro **Mediano (Median Filter)**
- Evaluar cuantitativamente resultados usando **PSNR (Peak Signal-to-Noise Ratio)**.
- Tomar decisiones técnicas basadas en evidencia.
- Utilizar herramientas de **IA generativa como apoyo cognitivo** de manera crítica.

---

# 📌 Descripción general

La práctica se realizará en **Google Colab** utilizando Python y OpenCV.

Se trabajará con una imagen en escala de grises y se evaluará el desempeño de filtros de restauración frente a distintos tipos de ruido.

---

# 🔹 Parte 1 – Lectura de imagen

1. Leer una imagen en escala de grises.
2. Mostrar la imagen original.
3. Guardarla como referencia para comparación posterior.

---

# 🔹 Parte 2 – Generación de ruido impulsivo (20%)

1. Crear una copia de la imagen original.
2. Contaminar el **20% de los píxeles** con ruido sal y pimienta.
3. Mostrar la imagen resultante.
4. Explicar cómo se implementó el 20% de contaminación.

---

# 🔹 Parte 3 – Generación de ruido gaussiano (20%)

1. Crear otra copia de la imagen original.
2. Agregar ruido gaussiano con intensidad equivalente al 20%.
3. Mostrar la imagen resultante.
4. Explicar cómo se definió la desviación estándar.

---

# 🔹 Parte 4 – Aplicación de filtros

Para **cada imagen ruidosa**, aplicar:

## 1️⃣ Filtro Promedio
- Usar kernel 3x3 o 5x5.
- Mostrar la imagen filtrada.
- Justificar el tamaño del kernel.

## 2️⃣ Filtro Mediano
- Usar tamaño 3x3 o 5x5.
- Mostrar la imagen filtrada.
- Justificar el tamaño del kernel.

---

# 🔹 Parte 5 – Cálculo de PSNR

Calcular el PSNR comparando:

- Imagen original vs imagen filtrada con promedio
- Imagen original vs imagen filtrada con mediano

Para ambos tipos de ruido.

## Fórmula

$\[
PSNR = 10 \log_{10} \left( \frac{255^2}{MSE} \right)
\]$

Donde:

$\[
MSE = \frac{1}{MN} \sum (I_{original} - I_{filtrada})^2
\]$

Presentar resultados en una tabla comparativa:

| Tipo de Ruido | PSNR Promedio | PSNR Mediano | Mejor Filtro |
|--------------|---------------|--------------|--------------|

---

# 🔹 Parte 6 – Análisis y Conclusión

Responder con fundamento técnico:

1. ¿Qué filtro funcionó mejor para ruido impulsivo? ¿Por qué?
2. ¿Qué filtro funcionó mejor para ruido gaussiano? ¿Por qué?
3. ¿Existe un filtro universal óptimo?
4. ¿Qué implicaciones tiene esto en visión robótica o sistemas industriales?
5. ¿PSNR es suficiente como métrica? ¿Qué limitaciones tiene?

---

# 🤖 Uso obligatorio de herramientas de IA

Los estudiantes deberán:

- Utilizar herramientas de IA generativa (ChatGPT, Copilot, Gemini, etc.).
- Documentar:

  - Prompts utilizados
  - Código sugerido por la IA
  - Modificaciones realizadas
  - Errores encontrados
  - Decisiones técnicas tomadas
  - Reflexión personal sobre el uso de IA

⚠️ Se evaluará comprensión y análisis, no copia textual.

---

# 📦 Entregables

Subir un **PDF único** que incluya:

1. Código completo y comentado.
2. Imágenes originales, ruidosas y filtradas.
3. Tabla comparativa de PSNR.
4. Respuestas argumentadas.
5. Sección de reflexión sobre uso de IA.

---

# 📊 Rúbrica de Evaluación

| Criterio | Excelente (95-100) | Bueno (85-94) | Básico (75-84) | Insuficiente (<75) |
|-----------|----------------|------------|-------------|--------------------|
| Implementación de ruido impulsivo (20%) | Correcta distribución y justificación matemática | Funciona pero sin explicación clara | Parcialmente correcto | Incorrecto |
| Implementación de ruido gaussiano (20%) | Parámetros correctamente definidos y justificados | Funciona pero sin análisis | Implementación débil | Incorrecto |
| Aplicación de filtro promedio | Kernel correctamente aplicado y justificado | Funciona pero sin justificar | Uso básico | Incorrecto |
| Aplicación de filtro mediano | Implementación correcta y explicación adecuada | Funciona parcialmente | Uso incorrecto | Incorrecto |
| Cálculo de PSNR | Fórmula correctamente implementada y explicada | Funciona pero sin análisis | Errores menores | Incorrecto |
| Análisis técnico comparativo | Argumentación sólida basada en teoría y métricas | Análisis adecuado pero superficial | Análisis limitado | Sin análisis |
| Uso crítico de IA | Evidencia clara de reflexión y mejora del código | Uso evidente pero poco reflexivo | Uso mínimo | Copia directa |
| Claridad y estructura del reporte | Profesional y bien organizado | Ordenado | Desorganizado | Incompleto |

---

# 🧠 Pregunta de reflexión avanzada

> Si el PSNR del filtro promedio es mayor que el del filtro mediano para ruido impulsivo,  
> ¿significa necesariamente que visualmente es mejor?  
> Justifica tu respuesta técnica y conceptualmente.

---

## 💡 Nota final

Esta práctica evalúa:

- Comprensión estadística del ruido.
- Selección adecuada de técnicas de restauración.
- Interpretación de métricas cuantitativas.
- Pensamiento crítico.
- Uso estratégico y ético de IA generativa.
