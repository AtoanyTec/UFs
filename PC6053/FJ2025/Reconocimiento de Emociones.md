# Proyecto Final: Clasificación de Emociones Faciales con Teachable Machine

Este proyecto está diseñado para alumnos de tercer año de preparatoria. El objetivo es crear un modelo de inteligencia artificial que clasifique emociones faciales utilizando **Teachable Machine**, una herramienta accesible y fácil de usar.

---

## **Guía paso a paso para el proyecto**

### **1. Introducción al proyecto**
- **Objetivo**: Crear un modelo de IA que clasifique emociones faciales (feliz, triste, enojado, sorprendido, etc.).
- **Herramientas**: Teachable Machine, cámara web, y opcionalmente, un editor de texto para integración web (como Visual Studio Code).
- **Entregables**:
  - Un modelo entrenado.
  - Una demostración funcional (en Teachable Machine o integrada en una página web).
  - Un video en formato TikTok que explique el proceso y los resultados.
  - Presentación oral

---

### **2. Planificación y organización del equipo**
- **Asignar roles**:
  - Estudiante 1: Recopilación de datos.
  - Estudiante 2: Entrenamiento del modelo.
  - Estudiante 3: Pruebas y ajustes.
  - Estudiante 4: Video formato TikTok
- **Calendario**: Establezcan plazos para cada fase del proyecto.

---

### **3. Recopilación de datos**
- **Opción 1: Usar un dataset público**:
  - Descarguen datasets como [FER-2013](https://www.kaggle.com/datasets/msambare/fer2013) o [CK+](https://www.kaggle.com/datasets/shawon10/ckplus).
  - Dividan las imágenes en carpetas por emoción (ejemplo: "feliz", "triste", etc.).
- **Opción 2: Crear su propio dataset**:
  - Usen una cámara web para tomar fotos de rostros expresando diferentes emociones.
  - Tomen al menos 50-100 imágenes por emoción.
  - Recorten las imágenes para centrar el rostro y redúzcanlas a un tamaño uniforme (ejemplo: 48x48 píxeles).

---

### **4. Entrenamiento del modelo con Teachable Machine**
1. **Acceder a Teachable Machine**:
   - Visiten [Teachable Machine](https://teachablemachine.withgoogle.com/).
   - Seleccionen "Image Project".
2. **Crear clases**:
   - Agreguen una clase por cada emoción (ejemplo: "feliz", "triste", "enojado").
3. **Subir imágenes**:
   - Carguen las imágenes correspondientes a cada clase.
4. **Entrenar el modelo**:
   - Hagan clic en "Train Model".
   - Teachable Machine entrenará automáticamente el modelo.
5. **Probar el modelo**:
   - Usen la cámara web o suban imágenes para probar el modelo.

---

### **5. Exportar y probar el modelo**
- **Integración en una página web**:
  - Da clic en Exportar Modelo
  - Da clic en Subir mi modelo
  - Se te generará una liga URL la cual al abrirla en un navegador, podrás probar tu modelo

---

### **6. Evaluación y mejora**
- **Pruebas**:
  - Pidan a otros compañeros o profesores que prueben el modelo.
- **Mejoras**:
  - Si el modelo no es preciso, agreguen más imágenes de entrenamiento o ajusten las clases.

---

### **7. Presentación del proyecto**
- **Demostración**:
  - Muestren cómo funciona el modelo en tiempo real usando la cámara web.
- **Presentación Oral**:
  - Expliquen el proceso, los desafíos y cómo los resolvieron.
  - Incluyan capturas de pantalla o fotos del proceso.

---

### **8. Evaluación del proyecto**
- **Criterios de evaluación**:
  - Calidad del modelo (precisión en la clasificación).
  - Creatividad en la recopilación de datos o presentación.
  - Claridad y organización de la presentación.
  - Trabajo en equipo y participación de todos los miembros.

---

## **Consejos para los estudiantes**
1. **Mantenganlo simple**: No es necesario que el modelo sea perfecto. Lo importante es que funcione y que aprendan el proceso.
2. **Divídanse el trabajo**: Trabajar en equipo hará que el proyecto sea más fácil y divertido.
3. **Experimenten**: Si tienen tiempo, prueben agregar más emociones o mejorar el modelo con más datos.
4. **Documenten todo**: Tomen notas y fotos del proceso para incluirlas en su informe o presentación.

---

## **Recursos adicionales**
- [Tutorial de Teachable Machine](https://www.youtube.com/watch?v=DFBbSTvtpy4) (en inglés, pero muy visual).
- [Introducción a TensorFlow.js](https://www.tensorflow.org/js) (para quienes quieran profundizar en la integración web).

---
