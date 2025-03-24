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
- 📁 Dataset reducido usado (enlace a Google Drive/ZIP)  

---

## ⚙️ **Configuración Requerida**  
- Entorno: Google Colab Pro (GPU T4) o local con CUDA  
- Librerías:  
  ```python
  tensorflow==2.12.0  
  matplotlib==3.7.1  
  scikit-learn==1.2.2

  # 📊 **Rúbrica de Evaluación - Entregable 2: Primer Experimento con VGG16**

| **Criterio**               | **Nivel 4: Sobresaliente (9-10 pts)** 🏆 | **Nivel 3: Competente (7-8 pts)** 👍 | **Nivel 2: En Desarrollo (5-6 pts)** 📉 | **Nivel 1: Básico (0-4 pts)** ⚠️ |
|----------------------------|------------------------------------------|--------------------------------------|----------------------------------------|----------------------------------|
| **Implementación Técnica** 💻 | Implementa VGG16 con transfer learning, fine-tuning y callbacks de forma óptima. Código bien estructurado y documentado. | Implementación funcional pero con pequeños errores en fine-tuning o callbacks. Documentación básica. | Código funciona parcialmente, falta documentación o tiene errores críticos. | Implementación incompleta o no funcional. |
| **Análisis de Resultados** 📈 | Presenta gráficos de accuracy/loss y matriz de confusión con interpretación detallada. Identifica claramente overfitting/underfitting. | Muestra gráficos básicos con análisis superficial. Algunas métricas no están interpretadas. | Gráficos incompletos o sin análisis. Métricas clave faltantes. | Carece de visualizaciones o análisis de resultados. |
| **Reporte Técnico** 📝 | Reporte completo (3-5 páginas) con secciones claras, justificación de hiperparámetros y propuestas de mejora innovadoras. | Reporte cumple con estructura básica pero falta profundidad en análisis o propuestas. | Reporte desorganizado o con información incompleta. Faltan secciones clave. | Reporte muy breve o irrelevante al experimento. |
| **Originalidad/Creatividad** 💡 | Propone mejoras innovadoras basadas en resultados (ej: técnicas de aumento de datos personalizadas). | Sugiere mejoras estándar (ej: ajustar learning rate). | Mejoras genéricas sin relación directa con los resultados. | No incluye propuestas de mejora. |
| **Manejo de Dataset** 🖼️ | Usa dataset balanceado con preprocesamiento avanzado (normalización, aumento de datos). Incluye ejemplos visuales. | Dataset básico con preprocesamiento mínimo. Algunas imágenes de ejemplo. | Dataset desbalanceado o preprocesamiento incorrecto. | No evidencia manejo adecuado de datos. |
| **Reproducibilidad** 🔄 | Código ejecutable sin errores en Google Colab. Incluye requirements.txt y datos de muestra. | Código funciona con ajustes menores. Faltan algunas dependencias. | Código requiere modificaciones extensas para funcionar. | Código no reproducible. |

### **Puntaje Total**  
- **91-100 pts**: Excelente (💎)  
- **71-90 pts**: Bueno (🔵)  
- **51-70 pts**: Regular (🟡)  
- **0-50 pts**: Insuficiente (🔴)  

### 🔍 **Criterios Adicionales**  
- **Bonus (+5 pts)**: Uso de técnicas avanzadas (ej: visualización de feature maps, GANs para aumento de datos).  
- **Penalización (-5 pts)**: Entrega tardía sin justificación.  

---

**Instrucciones para evaluadores**:  
1. Asignar puntaje en cada categoría según el nivel alcanzado.  
2. Sumar puntos y aplicar bonus/penalizaciones.  
3. Proporcionar retroalimentación específica por cada criterio.  

📌 **Ejemplo de feedback para Nivel 4**:  
_"Excelente implementación de VGG16 con fine-tuning en capas específicas. Los gráficos de pérdida muestran un entrenamiento estable, y tu propuesta de usar SMOTE para balanceo de datos es innovadora. Considera añadir más visualizaciones de activaciones en la próxima iteración."_  

¿Necesitas ajustar algún criterio o agregar más detalles? 😊
