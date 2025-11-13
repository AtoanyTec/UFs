# Actividad 15 - Control PWM con Potenciómetro (Interfaz Mejorada)

## 1. 🎯 OBJETIVO

Implementar un sistema de control PWM variable con interfaz visual mejorada que muestre en letras grandes el porcentaje del ciclo de trabajo y una barra animada proporcional. Al terminar esta actividad, demostrarás competencias en:

- 📊 Generación de señales PWM
- 🎚️ Lectura de potenciómetro como control analógico
- 📟 Visualización de parámetros en display OLED
- 💡 Control de intensidad luminosa en LED
- 📈 Visualización de señales en osciloscopio
- 📈 Conversión analógico-digital y mapeo de valores

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD

Las/los estudiantes desarrollarán un sistema que genere una señal PWM con ciclo de trabajo variable controlado por un potenciómetro. La interfaz OLED mostrará en tiempo real el ciclo de trabajo, frecuencia y valor del potenciómetro, mientras se controla la intensidad de un LED. Además, deberán de mostrar la señal PWM en un osciloscopio.

## 3. 📦 MATERIAL REQUERIDO
Componentes Electrónicos:
- 🎹 1 MKR WiFi 1010 + Carrier Rev2
- 🎚️ 1 Potenciómetro 10kΩ
- 💡 1 LED externo (diferente al integrado)
- 🔌 1 Resistencia 220Ω para el LED
- 📟 Display OLED integrado
- 🔌 Protoboard y cables

## 4. 🛠️ DESARROLLO DE LA ACTIVIDAD
Especificaciones Técnicas:
```cpp
// REQUERIMIENTOS PRINCIPALES:
// 1. 🎚️ Leer valor analógico del potenciómetro
// 2. 📊 Convertir a ciclo de trabajo (0-100%)
// 3. 💡 Generar señal PWM para controlar LED
// 4. 📈 Visualizar la señal PWM en el osciloscopio
// 4. 📟 Mostrar en OLED: Ciclo de trabajo, Valor ADC, Frecuencia
// 5. 📈 Gráfico de onda PWM simulada
// 6. 🎨 Barra progresiva que muestre el ciclo de trabajo
```


