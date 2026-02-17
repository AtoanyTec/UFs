# 🔁💡 Práctica 2: Secuencia de 4 LEDs con Control de Dirección

## 🎯 Objetivo de Aprendizaje

Al finalizar esta práctica, el/la estudiante será capaz de:

- Controlar múltiples salidas digitales (LEDs) 🔌  
- Leer entradas digitales mediante botones 🔘  
- Implementar estructuras de control (`if`, `for`) en Arduino 💻  
- Controlar la dirección de una secuencia lógica 🔄  
- Integrar hardware y software en un sistema funcional  

---

## 🧩 Descripción de la Actividad

Diseñar e implementar un sistema con:

- 🔴 4 LEDs  
- 🔘 2 botones  
- 🔌 Resistencias limitadoras de corriente  
- ⚙️ Arduino UNO  

### Funcionamiento esperado

- ✅ Botón 1 → Activa secuencia de LEDs hacia la derecha  
- ✅ Botón 2 → Activa secuencia de LEDs hacia la izquierda  

### Ejemplo de comportamiento

**Secuencia hacia la derecha:**  
LED1 → LED2 → LED3 → LED4  

**Secuencia hacia la izquierda:**  
LED4 → LED3 → LED2 → LED1  

---

## 🔧 Requerimientos Técnicos

El sistema debe cumplir con lo siguiente:

1. Cada LED debe tener su propia resistencia limitadora (220Ω–330Ω).  
2. Los botones deben estar correctamente configurados (resistores pull-down).  
3. El circuito debe estar físicamente armado en protoboard.  
4. El sistema debe funcionar completamente el día de la revisión.  
5. El código debe compilar sin errores.  

⚠️ No se permite entregar únicamente simulación.

---

## 📦 Entregables (OBLIGATORIOS)

### 1️⃣ Circuito Físico Funcionando

El estudiante debe presentar en clase:

- El circuito físicamente armado.
- Demostración en vivo de:
  - Botón 1 → Secuencia hacia la derecha.
  - Botón 2 → Secuencia hacia la izquierda.
- Funcionamiento correcto sin modificar el circuito durante la revisión.

⚠️ Si el circuito no funciona el día de la evaluación, la calificación se verá afectada.

---

### 2️⃣ Código Fuente

Se debe entregar el archivo:
```yaml
Secuencia_LEDs.ino
```

El código debe incluir:

- Declaración clara de pines.
- Configuración correcta en `setup()`.
- Lógica de lectura de botones en `loop()`.
- Comentarios explicativos en las partes principales del programa.
- Correcta indentación.

📌 Formato de entrega:
- Subir archivo `.ino`.
- No se aceptan capturas de pantalla del código.

---

## 📊 Rúbrica de Evaluación

| Criterio | Excelente (95-100) | Bueno (85-94) | Suficiente (75-4) | Insuficiente (<74) |
|-----------|-----------------|------------|-----------------|-------------------|
| Funcionamiento del sistema | Secuencia funciona correctamente en ambos sentidos sin fallos | Funciona en ambos sentidos con fallas menores | Solo funciona en un sentido o con errores frecuentes | No funciona |
| Conexión eléctrica | LEDs y botones correctamente cableados y organizados | Conexiones correctas con pequeños detalles de orden | Conexiones funcionales pero desordenadas | Conexiones incorrectas o incompletas |
| Presentación del circuito físico | Cableado limpio, cables cortados al ras del protoboard, sin uso excesivo de jumpers largos, estética profesional | Orden aceptable, pocos cables largos o desalineados | Cableado funcional pero desordenado y con muchos jumpers largos | Presentación descuidada, cables sueltos o mal colocados |
| Lógica del programa | Uso correcto y eficiente de `if` y `for`, lógica clara | Lógica correcta pero mejorable | Lógica básica con errores menores | Lógica incorrecta o incompleta |
| Calidad del código | Bien comentado, ordenado e indentado | Comentarios parciales | Pocos comentarios | Sin comentarios o código desordenado |

---

## 🚫 No se aceptará

- Código incompleto.
- Circuito que solo funcione parcialmente.
- Entregas únicamente en simulador.
- Entregas fuera de fecha sin autorización previa.

---

## 🎓 Integridad Académica  

🔴 El uso de herramientas de IA está estrictamente prohibido.



