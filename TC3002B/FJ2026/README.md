# 🧠📸 Skin Lesion Classification with CNN (ISIC2019)

## 🚀 Overview

Skin cancer is one of the most common diseases worldwide, and early detection is critical for successful treatment. In recent years, **Artificial Intelligence (AI)** — particularly **Convolutional Neural Networks (CNNs)** — has shown great potential in medical image analysis.

In this project, you will develop a deep learning model capable of classifying skin lesions using the **ISIC 2019 dataset (International Skin Imaging Collaboration)**. This challenge simulates a real-world AI application in healthcare, combining technical skills with critical thinking and ethical awareness.

---

## 🎯 Challenge Description

The goal of this project is to design, train, and evaluate a **CNN-based model** for **skin lesion classification**.

You are expected to:

- 📥 Download and explore the ISIC2019 dataset  
- 🧹 Perform data preprocessing and augmentation  
- 🧠 Design or implement a CNN architecture:
  - From scratch OR
  - Using transfer learning (e.g., ResNet, VGG, EfficientNet, ConvNeXt)  
- ⚙️ Train the model and tune hyperparameters  
- 📊 Evaluate performance using:
  - Accuracy  
  - Precision  
  - Recall  
  - F1-score  
  - Confusion matrix  
- 🔍 Analyze results and identify limitations  

---

## 🗂️ Project Structure (Suggested)
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
│
├── results/
│ ├── metrics/
│ ├── plots/
│ ├── confusion_matrix.png
│
├── models/
│ ├── best_model.pth
│
├── README.md
└── requirements.txt

