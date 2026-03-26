# 🧠 Actividad: Configuración de GPU para Deep Learning con PyTorch

## 🎯 Objetivo
Configurar correctamente una GPU para ejecutar modelos de redes neuronales convolucionales utilizando **PyTorch**, ya sea en una computadora personal, en laboratorio, o mediante **Google Colab**.

---

## 🧠 Competencias a desarrollar
- Configuración de entornos de cómputo para IA
- Uso de GPU para aceleración de modelos de deep learning
- Validación de recursos de hardware en proyectos de IA
- Resolución de problemas técnicos

---

## ⚙️ Sugerencias

Si vas a trabajar en las computadoras del laboratorio o en tu computadora personal, se sugiere que utilices anaconda 🐍

---

## ⚙️ Opciones para realizar la actividad

Cada estudiante deberá elegir **UNA** de las siguientes opciones:

---

## 💻 Opción 1: Configuración en computadora personal o de laboratorio

### 🔹 Paso 1: Verificar compatibilidad de GPU
- Confirmar que la computadora tiene GPU (preferentemente NVIDIA)
- Verificar compatibilidad con CUDA

### 🔹 Paso 2: Instalación de dependencias
Instalar:
- Drivers de GPU actualizados
- CUDA Toolkit
- cuDNN
- PyTorch con soporte GPU

Guía oficial:
https://pytorch.org/get-started/locally/

---

### 🔹 Paso 3: Validación en Python

```python
import torch

print("¿CUDA disponible?:", torch.cuda.is_available())
print("Nombre de GPU:", torch.cuda.get_device_name(0) if torch.cuda.is_available() else "No GPU")
```

### 🔹 Paso 4: Prueba de uso de GPU
```python
import torch

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

x = torch.rand(3, 3).to(device)
print("Tensor en:", x.device)
```

## ☁️ Opción 2: Uso de Google Colab

### 🔹 Paso 1: Acceder a Colab

https://colab.research.google.com/

### 🔹 Paso 2: Activar GPU
- Ir a: Entorno de ejecución → Cambiar tipo de entorno de ejecución
- Seleccionar:
  - Hardware accelerator → GPU
 
### 🔹 Paso 3: Validar GPU
```python
import torch

print("¿CUDA disponible?:", torch.cuda.is_available())
print("Nombre de GPU:", torch.cuda.get_device_name(0))
```

### 🔹 Paso 4: Verificar tipo de GPU (opcional)
```python
!nvidia-smi
```

## 📦 Entregables (OBLIGATORIO)

📌 El trabajo es **INDIVIDUAL**

Cada estudiante deberá entregar un documento en formato **PDF o Markdown** que incluya:

### 🔹 Evidencia requerida

- 📸 **Captura de pantalla del código ejecutado** donde se observe:
  - `torch.cuda.is_available()` en `True`
  - Nombre de la GPU

- 📸 **Captura adicional:**
  - En local: evidencia del sistema (ej. administrador de dispositivos, terminal o `nvidia-smi`)
  - En Colab: resultado de `nvidia-smi`

- 🧾 **Explicación breve (máximo 1 cuartilla):**
  - Opción elegida (local o Colab)
  - Problemas encontrados
  - Cómo se resolvieron

---

## ⚠️ Consideraciones importantes

- Si el estudiante cuenta con equipo propio, se recomienda intentar primero la opción local
- Si no cuenta con GPU o presenta problemas técnicos, puede usar Google Colab
- No se aceptarán trabajos sin evidencia visual clara
- Evidencias incompletas o poco claras serán penalizadas

---

## 📊 Rúbrica de evaluación (100 puntos)

| Criterio | Excelente (100-95) | Bueno (94-85) | Suficiente (84-75) | Insuficiente (<75) |
|----------|------------------|---------------|---------------------|-------------------|
| Configuración de GPU | GPU correctamente configurada y validada | GPU funcional con detalles menores | GPU parcialmente funcional | No funciona |
| Evidencia visual | Clara, completa y bien documentada | Clara pero incompleta | Poco clara o parcial | No hay evidencia |
| Código ejecutado | Correcto y funcional | Funciona con errores menores | Funciona parcialmente | No funciona |
| Explicación | Clara, reflexiva y bien estructurada | Clara pero superficial | Limitada | No incluida |
