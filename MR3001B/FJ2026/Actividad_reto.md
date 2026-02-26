# 🤖 Actividad: Robot Móvil con Detección de Marcadores ArUco

## 🎯 Objetivo

Programar un robot móvil para que:

1. Detecte un marcador **ArUco** en tiempo real.  
2. Identifique correctamente el **ID** del marcador.  
3. Ejecute una acción dependiendo del ID detectado:
   - 🟢 **ID = 1 → Girar a la derecha**
   - 🔵 **ID = 2 → Girar a la izquierda**

El sistema debe funcionar de manera autónoma y en tiempo real.

---

# 🧠 Fundamento Teórico

Los marcadores ArUco forman parte de la biblioteca de visión artificial **OpenCV** y permiten:

- Detección robusta de patrones binarios.
- Identificación mediante diccionarios.
- Estimación de pose (opcional en esta práctica).

Se utilizan ampliamente en robótica móvil para navegación basada en visión.

---

# ⚙️ Requerimientos del Sistema

El robot debe integrar:

- Plataforma móvil.
- Cámara USB.
- Procesamiento en:
  - Raspberry Pi
- Control de motores mediante:
  - Arduino + driver (L298N, puente H, etc.).

---

# 💻 Requerimientos de Programación

El programa debe incluir:

## 1️⃣ Captura de video

- Lectura en tiempo real desde la cámara.

## 2️⃣ Detección del marcador

- Detectar el marcador
- Identificación del ID detectado.
- Visualización en pantalla del ID.

## 3️⃣ Lógica de decisión
La lógica mínima requerida es:

```python
if id_detectado == 1:
    girar_derecha()

elif id_detectado == 2:
    girar_izquierda()
```

## 4️⃣ Control de motores
- Giro derecha: rueda izquierda avanza, rueda derecha se detiene o retrocede.
- Giro izquierda: rueda derecha avanza, rueda izquierda se detiene o retrocede.

# 🧪 Condiciones de Prueba

El robot debe:

- Detectar correctamente ambos IDs.
- Ejecutar el giro correspondiente.
- No realizar movimientos si no detecta marcador.
- Mantener funcionamiento estable en condiciones normales de iluminación.

# 🎥 Entregable (Obligatorio)
## 📌 Video (3–5 minutos)

El video debe mostrar:

- Explicación breve del sistema.
- Código funcionando.
- Robot detectando ID 1 y girando a la derecha.
- Robot detectando ID 2 y girando a la izquierda.
- Prueba continua en entorno real.

# 📂 Archivos a Entregar

- Código fuente completo.
- Video


# 📊 Rúbrica de Evaluación  
## 🤖 Práctica: Robot Móvil con Detección de ArUco

---

## 🧮 Ponderación Total: 100%

| Criterio | Excelente (95-100) | Bueno (85-94) | Suficiente (75-84) | Deficiente (<75) | Ponderación |
|-----------|----------------|------------|----------------|----------------|------------|
| **Detección del marcador ArUco** | Detecta ID 1 y 2 de forma estable, rápida y sin errores | Detecta ambos IDs con fallas menores | Detecta solo uno de los IDs o es inestable | No detecta correctamente los marcadores | 20% |
| **Identificación correcta del ID** | Siempre identifica correctamente el ID detectado | 1 error ocasional | Varios errores de identificación | Identificación incorrecta o inconsistente | 15% |
| **Lógica de decisión (condicionales)** | Implementación clara, correcta y estructurada | Funciona correctamente pero con estructura mejorable | Lógica parcialmente correcta | Lógica incorrecta o incompleta | 15% |
| **Control de motores** | Giro preciso, estable y coherente con el ID detectado | Giro funcional con ligeras imprecisiones | Giro ejecutado pero poco estable | No ejecuta la acción correspondiente | 20% |
| **Integración visión–control** | Integración completamente funcional y sincronizada | Funciona con pequeños retrasos | Integración parcial | No existe integración real | 15% |
| **Calidad del código** | Código limpio, comentado y estructurado | Código funcional con pocos comentarios | Código funcional pero desordenado | Código incompleto o con errores críticos | 5% |
| **Video del funcionamiento** | Explicación clara, profesional y demostración completa | Demostración clara pero explicación limitada | Video poco claro | Video incompleto o no entregado | 5% |
| **Documentación técnica** | Diagrama claro y explicación técnica precisa | Documentación adecuada | Documentación básica | No entregada | 5% |

---

  
