# 🚀 Mini Hackathon: "CNN from Scratch en 120 Minutos"  

## **Objetivo**  
Implementar una **red convolucional (CNN)** from Scratch utilizando PyTorch, evaluar su rendimiento, y presentar los resultados en una competencia rápida por equipos

---

## **📝 Insutrucciones**  
### **1. Preparación (10 min)**  
- **Materiales**:  
  - Dataset: MNIST, Fashion-MNIST y CIFAR10  
  - Notebook base con código esqueleto (sin arquitecturas definidas).
 
### **2. Desarrollo (60 min)**  
#### **Tareas por equipos**: 
- **Paso 1**: Implementar tu propio modelo
- **Paso 2**: Entrenar el modelo por 10 épocas
- **Paso 3**: Evalua tu modelo con **Classification Report** y con la **Matriz de Confusión**

### **3. Pitch**  
Cada equipo dispondrá de 3 minutos para mostrar:
- Arquitectura propuesta
- Resultados (classification report y matriz de confusion)

## **⚙️ Código Base**
```python
import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import datasets, transforms
from sklearn.metrics import classification_report, confusion_matrix

# Data Loading
def load_data(dataset="MNIST", batch_size=64):
    transform = transforms.Compose([
        transforms.ToTensor(),
        transforms.Normalize((0.5,), (0.5,))
    ])
    if dataset == "FashionMNIST":
        train_data = datasets.FashionMNIST(..., transform=transform)
    elif dataset == "CIFAR10":
        train_data = datasets.CIFAR10(..., transform=transform)
    else:
        train_data = datasets.MNIST(..., transform=transform)
    return DataLoader(train_data, batch_size=batch_size, shuffle=True)

# Model Template
class CNN(nn.Module):
    def __init__(self):
        super().__init__()
        self.conv1 = nn.Conv2d(1, 32, 3, padding='same')
        self.pool = nn.MaxPool2d(2)
        self.fc = nn.Linear(32 * 14 * 14, 10)

    def forward(self, x):
        x = self.pool(F.relu(self.conv1(x)))
        x = torch.flatten(x, 1)
        return self.fc(x)

# Training Loop
def train(model, train_loader, epochs=10):
    optimizer = optim.Adam(model.parameters())
    criterion = nn.CrossEntropyLoss()
    for epoch in range(epochs):
        for X, y in train_loader:
            optimizer.zero_grad()
            outputs = model(X)
            loss = criterion(outputs, y)
            loss.backward()
            optimizer.step()

# Evaluation
def evaluate(model, test_loader):
    y_true, y_pred = [], []
    with torch.no_grad():
        for X, y in test_loader:
            y_pred.extend(model(X).argmax(1).numpy())
            y_true.extend(y.numpy())
    print(classification_report(y_true, y_pred))
    print("Confusion Matrix:\n", confusion_matrix(y_true, y_pred))
```

## **📊 Rúbrica de Evaluación**

| **Criterio**         | **Incipiente (0-74 pts)**                                                                 | **Básico (74-85 pts)**                                                             | **Sólido (84-95 pts)**                                                                 | **Destacado (95-100 pts)**                                                                 |
|----------------------|-------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|---------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------|
| **Implementación**   | Modelo CNN incompleto o con errores graves. No ejecuta.                            | Modelo funcional pero sin capas personalizadas (ej: solo una convolución).           | Modelo completo con al menos 2 capas convolucionales y pooling.                       | Arquitectura innovadora (ej: dropout, batchnorm) o ajuste de hiperparámetros.       |
| **Precisión**       | Accuracy < 70% en test (MNIST) o no se evaluó.                                     | Accuracy 70-85% en test.                                                            | Accuracy 85-95% en test.                                                              | Accuracy > 95% o mejora significativa con técnicas avanzadas.                      |
| **Análisis**        | No genera métricas o las presenta incorrectamente.                                 | Muestra classification report o matriz de confusión sin interpretación.             | Reporte completo con análisis breve de errores (ej: clases con bajo recall).           | Análisis profundo (ej: visualización de filtros, overfitting, curvas de aprendizaje).|
| **Presentación**    | Exposición confusa o falta de estructura.                                          | Explica arquitectura y resultados básicos en el tiempo asignado.                    | Presentación clara con justificación de decisiones técnicas.                          | Pitch convincente con storytelling y propuestas de mejora.                          |
| **Trabajo en Equipo** | Un miembro domina el trabajo. Sin división de tareas.                             | Roles definidos pero desiguales.                                                    | Equipo coordinado con contribuciones balanceadas.                                      | Sinergia evidente + documentación colaborativa (ej: comentarios en código).        |
| **Creatividad**     | Modelo idéntico al ejemplo proporcionado.                                          | Pequeñas modificaciones (ej: cambio de kernel size).                                | Mejoras significativas (ej: data augmentation, capas personalizadas).                | Solución fuera de lo estándar (ej: transfer learning en CIFAR-10).                |

### **Puntaje Total**:  
- **0-74 pts**: Logro incipiente (cumple requisitos mínimos).  
- **75-84 pts**: Logro Básico (resultados sólidos).  
- **85-94 pts**: Logro Sólido (excelencia técnica y comunicativa).  
- **95-100 pts**: Nivel Destacado (innovación y dominio excepcional).  

### 🔍 **Notas**:  
- **Bonus**: +5 pts por entregar antes del tiempo límite.  


