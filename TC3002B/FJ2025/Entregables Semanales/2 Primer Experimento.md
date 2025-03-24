# 📋 **ENTREGABLE 2: PRIMER EXPERIMENTO CON VGG16**  
*(Clasificación de Lesiones Primarias de la Piel)*  

## 🎯 **Objetivo**  
Implementar un primer prototipo de clasificación usando la arquitectura **VGG16** con transfer learning, que sirva como línea base para comparaciones futuras con otras arquitecturas.  

---

## 📂 **Qué Entregar**  

### 1. **Código Implementado** (Jupyter Notebook/Python)  
- ✅ Script completo con:  
  - Carga y preprocesamiento de imágenes (resize a 224x224, normalización)  
  - Data augmentation básico (rotaciones de ±20°, flip horizontal)  
  - Implementación de VGG16 con:  
    ```python
    base_model = VGG16(weights='imagenet', include_top=False, input_shape=(224,224,3))
    ```  
  - Fine-tuning de las últimas 3 capas convolucionales  
  - Callbacks (EarlyStopping con paciencia=5, ModelCheckpoint)  

### 2. **Reporte Técnico** (PDF, 3-5 páginas)  
- 📊 **Sección 1: Datos**  
  - Descripción del dataset usado 
  - Ejemplos visuales de cada clase (grid de imágenes)  

- 🤖 **Sección 2: Modelo**  
  - Diagrama de la arquitectura modificada (usar `model.summary()`)  
  - Hiperparámetros configurados:  
    ```markdown
    - Batch size: 32  
    - Optimizador: Adam (lr=0.0001)  
    - Épocas: 30  
    ```

- 📈 **Sección 3: Resultados**  
  - Gráficos de accuracy/loss (entrenamiento vs validación)  
  - Matriz de confusión (usar `sklearn.metrics`)  
  - Métricas por clase (precision, recall, F1)  

- ❓ **Sección 4: Análisis**  
  - Dificultades técnicas encontradas (ej: overfitting, desbalanceo)  
  - Propuestas de mejora para el siguiente sprint  

### 3. **Evidencias Adicionales**  
- 🖼️ Capturas de:  
  - Terminal durante el entrenamiento (mostrando epochs/accuracy)  
  - Feature maps de la primera capa convolucional (opcional)  
- 📁 Dataset reducido usado (enlace a Google Drive/ZIP)  

---

## ⚙️ **Configuración Requerida**  
- Entorno: Google Colab Pro (GPU T4) o local con CUDA  
- Librerías:  
  ```python
  tensorflow==2.12.0  
  matplotlib==3.7.1  
  scikit-learn==1.2.2
