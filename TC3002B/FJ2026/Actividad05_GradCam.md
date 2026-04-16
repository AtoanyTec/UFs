# 🧠 Actividad 5: Interpretabilidad del Modelo con Grad-CAM

## 🎯 Objetivo
Analizar el comportamiento de su modelo de clasificación de lesiones cutáneas utilizando **Grad-CAM**, con el fin de evaluar **en qué regiones de la imagen se enfoca** y si dichas decisiones tienen **sentido clínico**.

---

## 📦 Instrucciones

### 1️⃣ Cargar el mejor modelo
- Utiliza el **modelo con mejor desempeño** que hayas entrenado hasta el momento.
- Justifica brevemente por qué lo consideras tu mejor modelo (ej. accuracy, F1-score, etc.).

---

### 2️⃣ Selección de imágenes
Selecciona al menos:

- ✅ **3 imágenes correctamente clasificadas**
- ❌ **3 imágenes incorrectamente clasificadas**

📌 Asegúrate de incluir variedad de clases (si es posible).

---

### 3️⃣ Generación de Grad-CAM
Para cada imagen seleccionada:

- Genera su correspondiente mapa de calor utilizando **Grad-CAM**
- Superpón el mapa sobre la imagen original

📌 Resultado esperado:
- Imagen original  
- Grad-CAM  
- Imagen combinada (overlay)

---

### 4️⃣ Análisis de resultados

Para **cada imagen**, responde:

#### 🔍 ¿Dónde se enfoca el modelo?
- Describe qué regiones de la imagen están siendo utilizadas para tomar la decisión

#### 🏥 ¿Tiene sentido clínico?
- Evalúa si el modelo está observando zonas relevantes de la lesión (ej. bordes, textura, color)
- Justifica tu respuesta

#### ⚠️ ¿Qué errores se observan?
- Identifica posibles problemas, por ejemplo:
  - Enfoque en zonas irrelevantes (fondo, piel sana)
  - Falta de atención a la lesión
  - Ruido o activaciones dispersas

---

### 5️⃣ Reflexión global

Responde de manera general:

- ¿Tu modelo realmente está aprendiendo características relevantes?
- ¿Qué mejoras propondrías?
  - Más datos
  - Data augmentation
  - Fine-tuning
  - Cambio de arquitectura
- ¿Cómo ayuda Grad-CAM a entender tu modelo?

---

## 📄 Entregables

Subir un documento en PDF que incluya:

### 🔹 Sección 1: Modelo
- Descripción breve del modelo seleccionado
- Métricas principales

### 🔹 Sección 2: Resultados visuales
Para cada imagen:
- Imagen original  
- Grad-CAM  
- Overlay  

### 🔹 Sección 3: Análisis
- Respuestas a las preguntas planteadas

### 🔹 Sección 4: Reflexión final
- Análisis global del comportamiento del modelo

---

## ⚠️ Consideraciones importantes
- No se aceptarán trabajos sin análisis  
- No basta con mostrar imágenes → **deben interpretar resultados**  
- Cuida la claridad de las figuras  
- Evita solo screenshots sin explicación  

---

## 📊 Criterios de evaluación

| Criterio | Descripción |
|--------|------------|
| Implementación | Correcta generación de Grad-CAM |
| Evidencia | Imágenes claras y bien presentadas |
| Análisis | Profundidad en la interpretación |
| Pensamiento crítico | Identificación de errores y mejoras |
| Claridad | Organización y redacción |

---
