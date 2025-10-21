# 🎯 Actividad 12 - Temporizadores

## 1. 🎯 OBJETIVO

Implementar un sistema integrado de monitoreo industrial que demuestre competencia en el uso de:
- 📟 Displays LCD
- 7️⃣ Display de 7 segmentos
- ⏱️ Temporizadores no bloqueantes
- 🔄 Interrupciones por hardware
- ⚡ Control de procesos en tiempo real

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD

Los estudiantes desarrollarán un sistema de monitoreo de producción que simule una línea de manufactura. El sistema controlará automáticamente la producción de piezas a diferentes velocidades, mostrará información en tiempo real mediante displays y permitirá la interacción del usuario mediante botones para ajustar la velocidad de producción.

## 3. 📦 MATERIAL REQUERIDO
- ⚡ 1 Arduino Uno/Mega
- 📟 1 Display LCD 16x2 con módulo I2C
- 7️⃣ 1 Display de 7 segmentos
- ⚡ Resistencias 220Ω
- 🔘 1 Push buttons
- 🎛️ 1 Potenciómetro 10kΩ
- 🚨 1 Buzzer (opcional)
- 🔌 Protoboard y cables

## 4. 📋 ENTREGABLES
### A. 🔌 Circuito Físico Funcional
- ✅ Montaje correcto según diagrama
- ✅ Funcionamiento demostrable
- ✅ Cableado ordenado y seguro

### B. ❓ Sesión de Preguntas y Respuestas
- 🔧 10 preguntas técnicas sobre el código
- 📚 5 preguntas sobre teoría de interrupciones
- 📟 5 preguntas sobre displays

### C. 📊 Reporte Técnico Breve
- 📝 Explicación del código implementado
- 📈 Análisis de resultados obtenidos
- 🔧 Diagrama de blujo del programa
- 💡 Conclusiones y mejoras propuestas

## 5. 🛠️ DESARROLLO DE LA ACTIVIDAD
### 🎯 Especificaciones Técnicas:
```cpp
// REQUERIMIENTOS PRINCIPALES:
// 1. 📟 LCD: Mostrar temporizador y contador de piezas
// 2. 🏭 Producción automática: 1 pieza/5 segundos (modo normal)
// 3. 7️⃣ Display 7 segmentos: Incrementar cada 3 segundos
// 4. 🔘 Botón: Cambiar a producción rápida (1 pieza/3 segundos)
// 5. 💡 Indicadores LED del estado del sistema
```
