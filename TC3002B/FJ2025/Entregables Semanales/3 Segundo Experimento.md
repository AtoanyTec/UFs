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



##✅  ** Mejoras obligatorias**
