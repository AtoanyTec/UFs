# Actividad 13  - ADC

## 1. 🎯 OBJETIVO
Implementar un sistema de monitoreo de temperatura inteligente que demuestre competencia en:
- 🌡️ Lectura de sensores analógicos (LM35)
- 📟 Visualización en display OLED
- 🔄 Uso de interrupciones y temporizadores
- 🚨 Control de alarmas y indicadores visuales/sonoros

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD
Las/los estudiantes desarrollarán un sistema de monitoreo de temperatura que lea valores del sensor LM35, los muestre en un display LCD y active alarmas cuando se superen umbrales predefinidos. El sistema deberá utilizar temporizadores no bloqueantes e interrupciones para un funcionamiento eficiente.

## 3. 📦 MATERIAL REQUERIDO
Componentes Electrónicos:
- 🎹 1 MKR WiFi  1010
- 🌡️ 1 Sensor de temperatura LM35
- 📟 1 Display OLED (Explore IoT Kit Rev2)
- 🔴 1 LED rojo
- 🟢 1 LED verde
- 🚨 1 Buzzer activo (Explore IoT Kit Rev2)
- 🔌 Resistencias: 2x 220Ω, 1x 10kΩ
- 🔌 Protoboard y cables

## 4. 📦 CÓDIGO BASE
[Código LM35 Base](https://github.com/AtoanyTec/UFs/blob/main/MR2006B/AD2025/C%C3%B3digosArduino/LM35_Base.ino)

## 5. 📋 ENTREGABLES
**A. 🔌 Circuito Físico Funcional**
- ✅ Montaje correcto según diagrama
- ✅ Funcionamiento demostrable del sistema completo
- ✅ Cableado ordenado y seguro

**B. ❓ Sesión de Preguntas y Respuestas**
- 🔧 Preguntas técnicas sobre el código, electrónica y conceptos teóricos

**C. 📹 Video**
- 🧍 Grabar un video corto en donde demuestren el sistema funcionando

**D. 📊 Reporte Técnico Breve**
- 📝 Explicación del código implementado
- 📈 Análisis de resultados y gráficos de temperatura
- 💡 Conclusiones y mejoras propuestas

## 6. 🛠️ DESARROLLO DE LA ACTIVIDAD
**🎯 Especificaciones Técnicas:**
```cpp
// REQUERIMIENTOS PRINCIPALES:
// 1. 🌡️ Leer temperatura con sensor LM35 cada 1 segundo
// 2. 📟 Mostrar temperatura en LCD con formato "Temp: XX.X°C"
// 3. 🚨 Alarma: TEMP > 25°C → LED rojo parpadeante + buzzer
// 4. 🟢 Normal: TEMP ≤ 25°C → LED verde encendido
// 5. ⏱️ Usar millis() para temporizadores no bloqueantes
```

## 7. 📚 30 PREGUNTAS DE ESTUDIO
1. ❓ ¿Cómo funciona el sensor LM35?
2. ❓ ¿Qué precisión tiene el LM35?
3. ❓ ¿Por qué el LM35 no necesita calibración externa?
4. ❓ ¿Cómo se convierte el valor analógico a temperatura?
5. ❓ ¿Qué rango de temperatura puede medir el LM35?
6. ❓ ¿Cuál es la relación mV/°C del LM35?
7. ❓ ¿Cómo se conecta el LM35 a Arduino?
8. ❓ ¿Qué ventajas tiene el LM35 sobre otros sensores?
9. ❓ ¿Qué es el sampling rate y cómo afecta las lecturas?

## 8. ✅ LISTA DE COTEJO PARA EVALUACIÓN
**⚙️ FUNCIONALIDAD (50 puntos)**
- 🌡️ Lectura correcta de temperatura LM35 (15 pts)
- 📟 Display LCD muestra temperatura actualizada (10 pts)
- 🔴 LED rojo parpadea cuando temp > 25°C (10 pts)
- 🟢 LED verde encendido cuando temp ≤ 25°C (5 pts)
- 🚨 Buzzer suena en condición de alarma (10 pts)

**💻 CÓDIGO Y PROGRAMACIÓN (30 puntos)**
- ⏱️ Usa millis() para temporizadores no bloqueantes (10 pts)
- 📝 Código bien estructurado y comentado (10 pts)
- 🔧 Conversión correcta analógico-digital (5 pts)
- 🎯 Lógica de control implementada correctamente (5 pts)

**🔌 CIRCUITO Y MONTAJE (20 puntos)**
- 🔗 Conexiones correctas del LM35 (5 pts)
- 📟 Display LCD conectado properamente (5 pts)
- 🔌 Cableado ordenado y seguro (10 pts)


