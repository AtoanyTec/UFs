# 🤖⚡ “Aula Inteligente: Ahorro de Energía con Detección de Presencia”


## 1) Contexto 🌎
En muchos salones se quedan **encendidas las luces y el aire acondicionado** aunque no haya nadie, lo que genera **desperdicio de energía**.  
Tu equipo desarrollará un sistema que **detecte presencia** y muestre el estado en una **interfaz (dashboard)** para **activar o desactivar cargas** (simuladas con LEDs).

---

## 2) Objetivo 🎯
Desarrollar un sistema que utilice **sensores PIR** para detectar la presencia de personas en un salón.

### ✅ Si NO se detecta presencia:
- Mostrar en **Arduino IoT Cloud**: **“No hay nadie”**
- Ejecutar una lógica para **apagar automáticamente**:
  - 💡 **Luz** (simulada con **LED 1**)
  - ❄️ **Aire acondicionado** (simulado con **LED 2**)

### ✅ Si SÍ se detecta presencia:
- Mostrar en **Arduino IoT Cloud**: **“Hay personas”**
- **Encender**:
  - 💡 LED 1 (Luz)
  - ❄️ LED 2 (Aire)

---

## 3) Requisitos del proyecto ✅
Tu solución debe ser:

### A) Funcional (se demuestra en vivo) 🧪
- El sistema debe reaccionar correctamente al movimiento/presencia detectada por el/los PIR.
- La interfaz de Arduino IoT Cloud debe reflejar el estado correctamente.

### B) Limpio 🧼
- Cableado ordenado (sin conexiones flojas o peligrosas).
- Componentes firmes, sin “falsos contactos”.

### C) Presentable ✨
- Prototipo con buena estética: etiquetas, organización, claridad visual.
- Demostración clara y fácil de entender.

---

## 4) Materiales sugeridos 🧰 *(ajusta según lo disponible)*
- 1 ESP32
- 1 Sensor **PIR** (mínimo)  
- 2 LEDs (LED 1 = Luz, LED 2 = Aire)
- 2 resistencias (ej. 220Ω) para LEDs
- Protoboard y jumpers
- Cable USB / alimentación

---

## 5) Diseño y lógica del sistema 🧠
### A) Variables mínimas recomendadas
- `presenceDetected` (boolean) → indica si hay presencia
- `statusMessage` (String) → “Hay personas” / “No hay nadie”
- `ledLight` (boolean / pin) → LED 1
- `ledAC` (boolean / pin) → LED 2

### B) Reglas de control (lógica principal)
1. Leer el PIR (HIGH/LOW).
2. Si PIR detecta movimiento/presencia:
   - `statusMessage = "Hay personas"`
   - LED 1 = ON
   - LED 2 = ON
3. Si PIR NO detecta presencia:
   - `statusMessage = "No hay nadie"`
   - LED 1 = OFF
   - LED 2 = OFF

> **Nota importante:** Los PIR pueden tener “ruido” o mantener señal por algunos segundos. Tu equipo debe **razonar** si necesita un pequeño **tiempo de espera** o una **lógica de estabilidad** (esto suma al pensamiento crítico).

---

## 6) Arduino IoT Cloud: Dashboard requerido ☁️📊
Tu dashboard debe incluir, como mínimo:

### Elementos obligatorios
- **Indicador de estado** (texto o label):
  - “Hay personas”
  - “No hay nadie”
- **Indicador booleano** o “status light” para:
  - LED 1 (Luz)
  - LED 2 (Aire)
- (Opcional recomendado) indicador de lectura del PIR (0/1)

### Evidencia esperada
- Debe verse el cambio en tiempo real (o con el refresco normal de IoT Cloud) durante la demostración.

---

## 7) Entregables 📦
### 1) Prototipo físico funcional ✅
- PIR conectado correctamente al Arduino
- LEDs funcionando como simulación de cargas

### 2) Dashboard de Arduino IoT Cloud ✅
- Interfaz clara, con nombres entendibles y orden visual

### 3) Código con calidad ✅
- Comentarios claros
- Variables con nombres entendibles (evitar `x`, `a1`, `var2`)
- Estructura ordenada (lectura → decisión → acción → actualización IoT)

---

## 8) Puntos extra (+5 pts) 🌟
Implementa **2 sensores PIR** para mejorar cobertura y agrega lógica:

- **OR:** si cualquiera detecta → “Hay personas”
- **AND:** solo si ambos detectan → “Hay personas”  
  *(Útil para reducir falsos positivos, pero puede fallar si solo hay movimiento en una zona)*

> Deben justificar por qué eligieron OR o AND (pensamiento crítico).

---

## 9) Criterios de evaluación 🧾
| Criterio | Porcentaje | ¿Qué se evalúa? |
|---|---:|---|
| Funcionamiento | 40% | Detecta presencia y controla LEDs correctamente |
| Arduino IoT Cloud | 20% | Dashboard funcional y actualizado |
| Pensamiento crítico | 20% | Decisiones justificadas (lógica, estabilidad, mejoras) |
| Presentación prototipo | 20% | Limpieza, orden, estética y claridad |

---

## 10) Demostración en vivo 🎥
Durante la demo, el equipo debe:
1. Presentarse (equipo y roles)
2. Explicar el problema y su solución (1–2 min)
3. Mostrar el prototipo y el dashboard
4. Probar 2 escenarios:
   - ✅ Sin presencia → “No hay nadie” + LEDs apagados
   - ✅ Con presencia → “Hay personas” + LEDs encendidos
5. Explicar brevemente:
   - Qué decisiones técnicas tomaron (y por qué)
   - Qué mejorarían en una versión real (luces/AC reales, relés, seguridad, etc.)

---

## 11) Recomendaciones rápidas 💡
- Nombren el LED 1 como **Luz** y el LED 2 como **Aire** desde el inicio.
- Mantengan el cableado ordenado (esto impacta “presentación”).
- Prueben el PIR antes de integrarlo a IoT Cloud.
- Documenten en el código lo que hace cada parte.

---

✅ **Meta final:** Un sistema claro, funcional y presentable que demuestre **detección de presencia + control de cargas simuladas + monitoreo en IoT Cloud**.
```
