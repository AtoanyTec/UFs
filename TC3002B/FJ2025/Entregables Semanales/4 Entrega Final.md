# 📝 INSTRUCCIONES PARA EL TERCER ENTREGABLE: ALGORITMO FINAL

## 🎯 Objetivo  
Desarrollar un sistema de clasificación de lesiones cutáneas con desempeño excepcional (≥95% en todas las métricas) que demuestre:
- Dominio técnico en deep learning 🧠
- Capacidad de comunicación científica 📄
- Rigor metodológico 🔍

## 📦 Componentes Principales  

### 1. **Implementación Técnica** `(50% de calificación)`  
# Requisitos mínimos del notebook
- Arquitectura VGG16 optimizada con:
  - ✅ Fine-tuning estratégico en ≥4 capas
  - ✅ Dropout(0.5) + L2 Regularization
  - ✅ Data Augmentation avanzado (Rotación 30°, Zoom 20%)  


### 2. **Artículo Científico** `(30% de calificación)` 
Estructura requerida:
1. Introducción (Estado del Arte)  
2. Metodología (Diagrama de flujo del modelo)  
3. Resultados (Tabla comparativa con SOTA)  
4. Discusión (Limitaciones y aplicaciones clínicas)

📌 **Obligatorio:**
* 15+ referencias actualizadas (2020-2024)

### 3. **Presentación Oral** `(20% de calificación)`
Estructura requerida
1. Problema Clínico
2. Descripción del Algoritmo (Diagrama a bloques)
3. Resultados
4. Conclusiones

# 📊 Rúbrica de Evaluación - Entregable 4: Algoritmo Final

## 🛠️ Implementación Técnica (50%)

| **Criterio**               | **Excelente (4)** 💎 | **Avanzado (3)** 🔵 | **Básico (2)** 🟡 | **Insuficiente (1)** 🔴 |
|----------------------------|----------------------|---------------------|-------------------|------------------------|
| **Calidad del Código**     | Código modular, documentación completa, optimizado para GPU/TPU | Buenas prácticas, comentarios claros, reutilizable | Código funcional pero poco organizado | Código desestructurado o incompleto |
| **Rendimiento del Modelo** | Supera el 97% en todas las métricas (AUC ≥0.99) | Cumple exactamente el 97% en métricas clave | 90-96% en métricas principales | Por debajo del 90% en alguna métrica |
| **Innovación Técnica**     | Implementa 3+ técnicas avanzadas (CutMix, Attention, etc.) | 2 técnicas innovadoras | 1 técnica estándar | Solo implementación básica |
| **Despliegue**            | Docker + API REST + tests unitarios completos | Docker + API básica | Solo notebook ejecutable | No demostrable |

## 📄 Artículo Científico (30%)

| **Criterio**               | **Excelente (4)** 💎 | **Avanzado (3)** 🔵 | **Básico (2)** 🟡 | **Insuficiente (1)** 🔴 |
|----------------------------|----------------------|---------------------|-------------------|------------------------|
| **Estructura y Formato**   | Perfecta adherencia a IMRaD, gráficos profesionales | Estructura completa, algunos gráficos mejorables | Faltan 1-2 secciones clave | Estructura desorganizada |
| **Profundidad de Análisis**| Benchmark contra 10+ papers, análisis estadístico riguroso | Comparación con 5-7 papers, análisis básico | 3-4 referencias, análisis superficial | Sin análisis comparativo |
| **Originalidad**          | Contribución novedosa validada por expertos | Buena revisión literaria con aportes | Síntesis de información existente | Contenido genérico |
| **Calidad de Referencias** | 20+ referencias actualizadas (Q1), formato perfecto | 15 referencias relevantes | 10 referencias básicas | Menos de 5 referencias |

## 🎤 Presentación Oral (20%)

| **Criterio**               | **Excelente (4)** 💎 | **Avanzado (3)** 🔵 | **Básico (2)** 🟡 | **Insuficiente (1)** 🔴 |
|----------------------------|----------------------|---------------------|-------------------|------------------------|
| **Contenido Técnico**      | Exposición clara y profunda, dominio absoluto | Buen manejo del tema, detalles técnicos precisos | Conceptos generales, algunos errores | Dificultades técnicas evidentes |
| **Diseño Visual**         | Slides profesionales con diagramas interactivos | Buen diseño, gráficos claros | Slides sobrecargados o minimalistas | Diseño pobre o distractivo |
| **Habilidades Comunicativas**| Excelente contacto visual, entusiasmo, timing perfecto | Comunicación efectiva, buen ritmo | Lectura de notas, tiempo irregular | Mala dicción, falta de preparación |
| **Manejo de Preguntas**   | Respuestas expertas con evidencia contundente | Responde adecuadamente la mayoría | Dificultad con preguntas técnicas | No responde preguntas clave |

## 🔢 Sistema de Puntuación

| **Puntaje Total** | **Nivel de Competencia** | **Recomendación** |
|-------------------|--------------------------|-------------------|
| 90-100%          | 💎 Sobresaliente         | Publicación/Implementación inmediata |
| 80-89%           | 🔵 Avanzado              | Pequeños ajustes recomendados |
| 70-79%           | 🟡 Competente            | Revisiones significativas necesarias |
| <70%             | 🔴 Insuficiente          | Requiere reelaboración completa |

## 📌 Ejemplo de Cálculo
```python
# Puntaje hipotético:
tecnico = 4 + 4 + 3 + 3  # 14/16 → 87.5%
articulo = 3 + 4 + 3 + 4  # 14/16 → 87.5%
presentacion = 4 + 3 + 4  # 11/12 → 91.6%
# Ponderado: (50%*87.5) + (30%*87.5) + (20%*91.6) = 88.3% → Nivel Avanzado
