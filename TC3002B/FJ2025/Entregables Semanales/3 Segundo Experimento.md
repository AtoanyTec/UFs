# 📋 **ENTREGABLE 3: PROTOTIPO 2 - ARQUITECTURA VGG16 OPTIMIZADA**  
*(Clasificación de Lesiones Primarias con ≥80% de Accuracy)*  

## 🎯 **Objetivo**  
Desarrollar una versión optimizada de VGG16 que logre **≥80% de accuracy** en la clasificación de lesiones primarias de la piel, aplicando técnicas avanzadas de fine-tuning y manejo de datos.  

---

## 📂 **Qué Entregar**  

### 1. **Código Optimizado** (Jupyter Notebook)  
```python
# Requisitos técnicos
base_model = VGG16(weights='imagenet', include_top=False, input_shape=(224,224,3))
for layer in base_model.layers[:-4]:  # Fine-tuning en últimas 4 capas
    layer.trainable = False
```

#### ✅  **Mejoras obligatorias**
* Aumento de datos avanzado (ej: `RandomBrightness`, `RandomContrast`)
* Regularización con `Dropout(0.5)` y `L2 Regularization`
* Optimización de hiperparámetros (lr=0.0001, batch_size=32)

### 📈 2. **Reporte de Rendimiento** (Jupyter Notebook)  

| Métrica               | Valor Mínimo Esperado | Resultado Obtenido | 
|-----------------------|-----------------------|--------------------|
| **Accuracy**          | ≥80%                  |                    | 
| **F1-Score (macro)**  | ≥0.75                 |                    |
| **Recall**           | ≥0.70                  |                    | 
| **Precisión**        | ≥0.75                  |                    | 
| **AUC-ROC**         | ≥0.85                  |                    | 



### 📊 **Detalles Adicionales:**
```python
# Ejemplo de cómo se calculan las métricas
from sklearn.metrics import classification_report
print(classification_report(y_true, y_pred, target_names=class_names))

