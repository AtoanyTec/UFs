# 🧠📸 Skin Lesion Classification System with CNN + Cloud Deployment (ISIC2019)

---

## 🚀 1. Overview

Skin cancer is one of the most prevalent diseases worldwide, and early diagnosis significantly increases the chances of successful treatment. Advances in **Artificial Intelligence (AI)** and **Deep Learning**, particularly **Convolutional Neural Networks (CNNs)**, have enabled the development of automated systems capable of analyzing medical images with high accuracy.

In this project, students will develop an **end-to-end AI system** for classifying skin lesions using the **ISIC 2019 dataset**. Beyond model development, this challenge integrates **real-world deployment**, requiring students to implement their solution in the cloud and design a **user-friendly interface** for practical usage.

---

## 🎯 2. Challenge Description

The objective of this challenge is to design, train, evaluate, and deploy a **CNN-based model** capable of classifying skin lesion images.

Students are expected to:

- 📥 Acquire and explore the ISIC2019 dataset  
- 🧹 Perform data preprocessing and augmentation  
- 🧠 Develop a CNN model (from scratch or transfer learning)  
- ⚙️ Train and optimize the model  
- 📊 Evaluate performance using standard metrics  
- ☁️ Deploy the model in the cloud (AWS, GCP, Azure, etc.)  
- 💻 Develop a **user interface (UI)** that allows:
  - Image upload  
  - Prediction visualization  
  - Confidence scores  

---

## 🗂️ 3. Project Structure

project/  
│  
├── data/  
│ ├── raw/  
│ ├── processed/  
│  
├── notebooks/  
│ ├── EDA.ipynb  
│ ├── training.ipynb  
│  
├── src/  
│ ├── data_preprocessing.py  
│ ├── model.py  
│ ├── train.py  
│ ├── evaluate.py  
│ ├── inference.py  
│  
├── app/  
│ ├── backend/ # API (Flask/FastAPI)  
│ ├── frontend/ # UI (Streamlit/React)  
│  
├── deployment/  
│ ├── Dockerfile  
│ ├── cloud_config/  
│  
├── models/  
│ ├── best_model.pth  
│  
├── results/  
│ ├── metrics/  
│ ├── plots/  
│  
├── README.md  
└── requirements.txt  

---

## 🛠️ 4. Project Stages

### 🔹 Stage 1: Problem Understanding
- Research skin lesion types  
- Explore dataset distribution  

### 🔹 Stage 2: Data Preparation
- Data cleaning  
- Train/validation/test split  
- Preprocessing (resize, normalization, augmentation)  

### 🔹 Stage 3: Model Development
- Select architecture (CNN or transfer learning)  
- Define loss function and optimizer  

### 🔹 Stage 4: Training & Optimization
- Train model  
- Monitor loss and accuracy  
- Apply regularization and early stopping  

### 🔹 Stage 5: Evaluation
- Evaluate on test set  
- Generate confusion matrix and classification report  

### 🔹 Stage 6: Cloud Deployment
- Export trained model  
- Deploy using API (Flask/FastAPI)  
- Host in cloud  

### 🔹 Stage 7: UI Development
- Build interface for predictions  
- Display results and confidence  

### 🔹 Stage 8: Analysis & Discussion
- Interpret results  
- Identify limitations and improvements  

### 🔹 Stage 9: Final Presentation
- Demonstrate full system  
- Present technical findings  

---

## 📊 5. Evaluation Metrics

- Accuracy  
- Precision  
- Recall  
- F1-score  
- Confusion Matrix  
- (Optional) ROC-AUC  

---

## ⚖️ 6. Ethical Considerations

- Bias in datasets  
- Risk of misclassification  
- Need for human supervision  
- Data privacy and security  

---

## 🧠 7. Suggested Models

- ResNet50  
- VGG16  
- EfficientNet  
- ConvNeXt  
- MobileNet  
- Custom CNN  

---

## 📦 8. Requirements

- torch
- torchvision
- numpy
- pandas
- matplotlib
- scikit-learn
- opencv-python
- flask / fastapi
- streamlit / gradio

---

## 📚 9. Dataset

- **ISIC 2019 Challenge Dataset**  
- https://huggingface.co/datasets/Atoany/ISIC2019

---

## 🏁 10. Deliverables

- ✅ Trained CNN model  
- ✅ Source code  
- ✅ Performance metrics and visualizations  
- ✅ Cloud deployment (working API)  
- ✅ Functional user interface  
- ✅ Technical report  
- ✅ Final presentation  

---

## 📊 11. Rúbrica de Evaluación – Presentación Final (Proyecto CNN + Cloud + UI)

| Criterio | Excelente (95–100) | Satisfactorio (85–94) | Básico (75–84) | Insuficiente (<75) |
|----------|--------------------|------------------------|----------------|--------------------|
| 🧠 Dominio individual del tema | Dominio completo del sistema (datos, modelo, métricas, deployment y UI). Explica con claridad y profundidad. | Buen dominio general con pequeñas imprecisiones. | Comprensión parcial del sistema. | No demuestra dominio del tema. |
| 🎤 Participación individual | Participación activa, clara, estructurada y con lenguaje técnico adecuado. | Participación clara pero con menor profundidad. | Participación limitada o poco clara. | Participación mínima o nula. |
| ❓ Respuestas a preguntas (profundidad) | Respuestas analíticas, justificadas y con pensamiento crítico. | Respuestas correctas con razonamiento adecuado. | Respuestas parciales o con dudas. | No responde correctamente. |
| 🧠 Rigor técnico del modelo | Justificación sólida de arquitectura, hiperparámetros y decisiones técnicas. | Justificación adecuada con algunos vacíos. | Justificación superficial. | Sin justificación técnica. |
| 📊 Análisis de resultados | Interpretación profunda de métricas, errores y comportamiento del modelo. | Buena interpretación con menor profundidad. | Interpretación limitada. | No interpreta resultados. |
| 🧪 Validación experimental | Uso correcto de splits, comparación de modelos y reproducibilidad. | Validación adecuada con algunos detalles faltantes. | Validación básica o incompleta. | Sin validación adecuada. |
| ☁️ Deployment en la nube | Sistema funcional, accesible, robusto y eficiente. | Deployment funcional con detalles menores. | Deployment parcial o inestable. | No hay deployment funcional. |
| 💻 Interfaz de usuario (UI/UX) | Interfaz intuitiva, clara, funcional y bien integrada con el modelo. | Interfaz funcional con buena usabilidad. | Interfaz básica o poco clara. | No hay interfaz funcional. |
| 🔗 Integración del sistema | Flujo completo (end-to-end) bien integrado y sin errores. | Integración funcional con pequeños fallos. | Integración parcial. | Componentes aislados sin integración. |
| ⚖️ Análisis ético | Reflexión profunda sobre sesgos, riesgos y uso responsable de IA. | Identifica aspectos éticos relevantes. | Reflexión superficial. | No considera aspectos éticos. |
| 🧩 Justificación de decisiones | Todas las decisiones están claramente justificadas y fundamentadas. | Justificación adecuada con algunas debilidades. | Justificación limitada. | No justifica decisiones. |
| 📁 Código y documentación | Código limpio, organizado, documentado y repositorio profesional. | Código bien estructurado con documentación básica. | Código desorganizado o poco documentado. | Código deficiente o inexistente. |
| 📈 Innovación / valor agregado | Incluye mejoras relevantes (XAI, comparación de modelos, features extra). | Incluye algunos elementos adicionales. | Poca innovación. | Sin valor agregado. |
| 🤖 Uso de IA generativa | Uso crítico, validado y mejorado de herramientas de IA (🟢). | Uso adecuado con validación parcial (🟡). | Uso dependiente o poco crítico (🔴/🟡). | Uso inadecuado o sin comprensión (🔴). |

---

## 📝 Notas

- La evaluación es **individual**, aunque el proyecto sea en equipo.
- Se realizarán **preguntas individuales** para validar el dominio real del estudiante.
- Se espera evidencia de un **sistema funcional completo (modelo + nube + UI)**.
- El enfoque principal es **pensamiento crítico + implementación real + responsabilidad en IA**.

---
