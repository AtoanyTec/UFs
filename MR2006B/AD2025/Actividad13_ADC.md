# Actividad 13  - ADC

## 1. 🎯 OBJETIVO
Implementar un sistema de monitoreo de temperatura inteligente que demuestre competencia en:
- 🌡️ Lectura de sensores analógicos (LM35)
- 📟 Visualización en display OLED con interfaz gráfica animada
- 🎨 Creación de elementos visuales dinámicos y atractivos
- 🔄 Uso de interrupciones y temporizadores
- 🚨 Control de alarmas e indicadores visuales/sonoros

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD
Las/los estudiantes desarrollarán un sistema de monitoreo de temperatura que lea valores del sensor LM35 y los muestre en una interfaz gráfica animada en el display OLED. El sistema deberá incluir elementos visuales dinámicos como termómetros animados (con ayuda de la IA), utilizando temporizadores no bloqueantes e interrupciones para un funcionamiento eficiente..

## 3. 📦 MATERIAL REQUERIDO
Componentes Electrónicos:
- 🎹 1 MKR WiFi  1010
- 🌡️ 1 Sensor de temperatura LM35
- 📟 1 Display OLED integrado
- 🔴 1 LED rojo integrado (LED RGB)
- 🟢 1 LED verde integrado (LED RGB)
- 🚨 1 Buzzer integrado
- 🔌 Resistencias: 2x 220Ω, 1x 10kΩ
- 🔌 Protoboard y cables

## 4. 📦 CÓDIGO DE AYUDA
- [Lectura Analógica](https://github.com/AtoanyTec/UFs/blob/main/MR2006B/AD2025/MKRWiFi1010/Codes/LecturaA0.ino)
- [Explore IoT Kit Rev 2](https://docs.arduino.cc/tutorials/mkr-iot-carrier/mkr-iot-carrier-01-technical-reference/)
- [Display OLED](https://github.com/AtoanyTec/UFs/blob/main/MR2006B/AD2025/MKRWiFi1010/Codes/DisplayOLED.ino)

## 5. 📋 ENTREGABLES
**A. 🔌 Circuito Físico Funcional**
- ✅ Montaje correcto según diagrama
- ✅ Funcionamiento demostrable del sistema completo
- ✅ Cableado ordenado y seguro

**B. 🎨 Interfaz Gráfica Animada**
- ✅ Termómetro animado que se llena según la temperatura

**B. ❓ Sesión de Preguntas y Respuestas**
- 🔧 Preguntas técnicas sobre el código, electrónica y conceptos teóricos

**C. 📹 Video**
- 🧍 Grabar un video corto en donde demuestren el sistema funcionando. Se evaluará la integración de elementos visuales y el engagement del video

**D. 📊 Reporte Técnico Breve**
- 📝 Explicación del código implementado
- 🎨 Descripción del diseño de la interfaz gráfica
- 📈 Análisis de resultados y gráficos de temperatura
- 💡 Conclusiones y mejoras propuestas

## 6. 🛠️ DESARROLLO DE LA ACTIVIDAD
**🎯 Especificaciones Técnicas:**
```cpp
// REQUERIMIENTOS PRINCIPALES:
// 1. 🌡️ Leer temperatura con sensor LM35 cada 1 segundo desde A1
// 2. 📟 Mostrar temperatura en OLED con formato "Temp: XX.X°C"
// 3. 🚨 Alarma: TEMP > 25°C → LED rojo integrado parpadeante + buzzer integrado
// 4. 🟢 Normal: TEMP ≤ 25°C → LED verde integrado encendido
// 5. ⏱️ Usar millis() para temporizadores no bloqueantes
// 6. 🎨 Utilizar librerías del Explore IoT Kit para OLED y periféricos
// 7. 🌡️ Termómetro lateral que se llena progresivamente según temperatura
// 8. 🔄 Animación suave del llenado del termómetro

```

## 7. 📚 30 PREGUNTAS DE ESTUDIO
1. ❓ ¿Cómo funciona el sensor LM35 y qué ventajas ofrece?
2. ❓ ¿Qué precisión tiene el LM35 y por qué no necesita calibración externa?
3. ❓ ¿Cómo se convierte el valor analógico a temperatura en el LM35?
4. ❓ ¿Qué rango de temperatura puede medir el LM35 con alimentación de 5V?
5. ❓ ¿Cuál es la relación mV/°C del LM35 y cómo afecta la conversión ADC?
6. ❓ ¿Cómo se conecta el LM35 a la entrada analógica del MKR WiFi 1010?
7. ❓ ¿Qué resolución tiene el ADC del Arduino MKR WiFi 1010?
8. ❓ ¿Cómo funciona el muestreo y la conversión analógico-digital?
9. ❓ ¿Qué es el sampling rate y cómo afecta la precisión de las lecturas?
10. ❓ ¿Cómo se puede filtrar el ruido en las lecturas del LM35?
11. ❓ ¿Cómo inicializar y utilizar el display OLED del Explore IoT Kit?
12. ❓ ¿Qué librerías se necesitan para controlar los periféricos del kit?
13. ❓ ¿Cómo controlar los LEDs RGB integrados en el carrier?
14. ❓ ¿Cómo generar sonidos con el buzzer integrado?
15. ❓ ¿Qué métodos ofrece la clase MKRIoTCarrier para los displays?
16. ❓ ¿Cómo mostrar texto y gráficos en el display OLED?
17. ❓ ¿Qué diferencia hay entre los LEDs integrados y LEDs externos?
18. ❓ ¿Cómo configurar la intensidad del buzzer?
19. ❓ ¿Qué ventajas ofrece el uso del display OLED frente a LCD?
20. ❓ ¿Cómo optimizar el consumo de energía de los periféricos?

## 8. ✅ LISTA DE COTEJO PARA EVALUACIÓN

**🎨 INTERFAZ GRÁFICA (10 puntos nuevos)**
- 🌡️ Termómetro animado que se llena suavemente (10 pts)
    
**⚙️ FUNCIONALIDAD (40 puntos)**
- 🌡️ Lectura correcta de temperatura LM35 desde A1 (10 pts)
- 📟 Display OLED muestra temperatura actualizada cada segundo (10 pts)
- 🔴 LED rojo integrado parpadea cuando temp > 25°C (5 pts)
- 🟢 LED verde integrado encendido cuando temp ≤ 25°C (5 pts)
- 🚨 Buzzer integrado suena en condición de alarma (10 pts)

**💻 CÓDIGO Y PROGRAMACIÓN (30 puntos)**
- ⏱️ Usa millis() para temporizadores no bloqueantes (10 pts)
- 📝 Código bien estructurado y comentado (10 pts)
- 🔧 Conversión correcta analógico-digital del LM35 (5 pts)
- 🎯 Lógica de control implementada correctamente (5 pts)

**🔌 CIRCUITO Y MONTAJE (20 puntos)**
- 🔗 Conexiones correctas del LM35 externo (5 pts)
- 📟 Uso correcto de periféricos integrados del IoT Kit (5 pts)
- 🔌 Cableado ordenado y seguro (10 pts)


