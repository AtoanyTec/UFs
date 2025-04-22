# 🚀 Mini Hackathon: "CNN from Scratch en 120 Minutos"  

## **Objetivo**  
Implementar una **red convolucional (CNN)** from Scratch utilizando PyTorch, evaluar su rendimiento, y presentar los resultados en una competencia rápida por equipos

---

## **📝 Insutrucciones**  
### **1. Preparación (10 min)**  
- **Materiales**:  
  - Dataset: MNIST o Fashion-MNIST  
  - Notebook base con código esqueleto (sin arquitecturas definidas).
 
### **2. Desarrollo (60 min)**  
#### **Tareas por equipos**: 
- **Paso 1**: Implementar tu propio modelo
```
#Modelo CNN ejemplo
import torch
import torch.nn as nn
import torch.nn.functional as F

class CNN(nn.Module):
    def __init__(self):
        super(CNN, self).__init__()
        # Capa convolucional (equivalente a Conv2D en Keras)
        self.conv1 = nn.Conv2d(in_channels=1,  # MNIST es 1 canal (blanco/negro)
                              out_channels=32,  # 32 filtros
                              kernel_size=3,    # 3x3
                              stride=1,         # Paso de 1 (default)
                              padding='same')   # Mantiene dimensiones (como en Keras)
        
        # MaxPooling (igual que en Keras)
        self.pool = nn.MaxPool2d(kernel_size=2)  # Reducción a la mitad
        
        # Capa densa final (equivalente a Dense en Keras)
        self.fc = nn.Linear(32 * 14 * 14, 10)   # 14x14 por el pooling, 10 clases

    def forward(self, x):
        # 1. Reshape implícito (PyTorch usa [batch, channels, height, width])
        #    No necesitamos reshape explícito como en Keras
        
        # 2. Aplicar convolución + ReLU
        x = F.relu(self.conv1(x))  # [batch, 32, 28, 28]
        
        # 3. MaxPooling
        x = self.pool(x)           # [batch, 32, 14, 14]
        
        # 4. Flatten (aplanar para la capa densa)
        x = torch.flatten(x, 1)    # [batch, 32*14*14]
        
        # 5. Capa densa final (sin softmax, se usará CrossEntropyLoss)
        x = self.fc(x)             # [batch, 10]
        return x

# Uso del modelo
model = CNN()
print(model)
```

- **Paso 2**: Entrenar el modelo por 10 épocas
- **Paso 3**: Evalua tu modelo con **Classification Report** y con la **Matriz de Confusión**

### **3. Pitch**  
Cada equipo dispondrá de 3 minutos para mostrar:
- Arquitectura propuesta
- Resultados (classification report y matriz de confusion)

## **⚙️ Código Base**


## **📊 Rúbrica de Evaluación**



