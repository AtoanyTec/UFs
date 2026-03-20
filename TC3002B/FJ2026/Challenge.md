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
 
### 🤖 Use of Generative AI

Students are allowed and encouraged to use **generative AI tools** (e.g., ChatGPT, Copilot, Gemini) to:

- Generate code snippets (e.g., data preprocessing, model definition, training loops, deployment scripts)  
- Debug and improve existing code  
- Explore alternative implementations  

However, students must:

- Understand and be able to explain all generated code  
- Validate and critically evaluate AI-generated outputs  
- Adapt and improve the generated solutions  

The use of generative AI will be evaluated based on **critical thinking and responsible usage**, not mere reliance.

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

## 📊 11. Evaluation Rubric – Final Presentation

| Criterion | Excellent (95–100) | Satisfactory (85–94) | Basic (75–84) | Insufficient (<75) |
|----------|--------------------|----------------------|----------------|--------------------|
| 🧠 Individual mastery of the topic | Demonstrates complete understanding of the system (data, model, metrics, deployment, and UI). Clear and in-depth explanations. | Good overall understanding with minor inaccuracies. | Partial understanding of the system. | Does not demonstrate understanding of the topic. |
| 🎤 Individual participation | Active, clear, and well-structured participation using appropriate technical language. | Clear participation with moderate depth. | Limited or unclear participation. | Minimal or no participation. |
| ❓ Depth of answers to questions | Answers are analytical, well-justified, and demonstrate critical thinking. | Answers are correct with adequate reasoning. | Partial answers with noticeable gaps. | Unable to answer or answers incorrectly. |
| 🧠 Technical rigor of the model | Strong justification of architecture, hyperparameters, and technical decisions. | Adequate justification with minor gaps. | Superficial justification. | No technical justification. |
| 📊 Results analysis | Deep interpretation of metrics, errors, and model behavior. | Good interpretation with limited depth. | Limited or superficial interpretation. | No meaningful interpretation. |
| 🧪 Experimental validation | Proper data splitting, reproducibility, and model comparison. | Adequate validation with minor issues. | Basic or incomplete validation. | No proper validation. |
| ☁️ Cloud deployment | Fully functional, accessible, robust, and efficient system. | Functional deployment with minor issues. | Partial or unstable deployment. | No functional deployment. |
| 💻 User Interface (UI/UX) | Intuitive, clear, and fully functional interface well integrated with the model. | Functional interface with good usability. | Basic or unclear interface. | No functional interface. |
| 🔗 System integration | Complete end-to-end pipeline working seamlessly. | Functional integration with minor issues. | Partial integration. | No integration between components. |
| ⚖️ Ethical analysis | Deep reflection on bias, risks, and responsible AI use. | Identifies relevant ethical aspects. | Superficial ethical reflection. | No ethical considerations. |
| 🧩 Justification of decisions | All decisions are clearly justified and well supported. | Adequate justification with some weaknesses. | Limited justification. | No justification provided. |
| 📁 Code quality and documentation | Clean, well-organized, and well-documented code with a professional repository. | Well-structured code with basic documentation. | Disorganized or poorly documented code. | Poor or missing code. |
| 📈 Innovation / added value | Includes meaningful enhancements (XAI, model comparison, advanced features). | Includes some additional features. | Minimal innovation. | No added value. |
| 🤖 Use of generative AI | Critical, validated, and improved use of AI tools (🟢). | Appropriate use with partial validation (🟡). | Dependent or uncritical use (🔴/🟡). | Misuse or lack of understanding (🔴). |

---

## 📝 Notes

- Evaluation is **individual**, even though the project is team-based.  
- **Individual questions** will be asked to assess true understanding.  
- A fully functional system (**model + cloud + UI**) is expected.  
- The focus is on **critical thinking, real-world implementation, and responsible AI use**.

---
