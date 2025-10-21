# 🎯 Actividad 12 - Temporizadores

## 1. 🎯 OBJETIVO

Implementar un sistema integrado de monitoreo industrial que demuestre competencia en el uso de:
- 📟 Displays LCD
- 7️⃣ Display de 7 segmentos
- ⏱️ Temporizadores no bloqueantes
- 🔄 Interrupciones por hardware
- ⚡ Control de procesos en tiempo real

## 2. 📝 DESCRIPCIÓN DE LA ACTIVIDAD

Los estudiantes desarrollarán un sistema de monitoreo de producción que simule una línea de manufactura. El sistema controlará automáticamente la producción de piezas a diferentes velocidades, mostrará información en tiempo real mediante displays y permitirá la interacción del usuario mediante botones para ajustar la velocidad de producción. Dos LEDs deberánn de indicar la velocidad de produccción (verde: 1 pieza cada 5 segundos; azul: 1 pieza cada 3 segundo).

## 3. 📦 MATERIAL REQUERIDO
- ⚡ 1 Arduino Uno/Mega
- 📟 1 Display LCD 16x2 con módulo I2C
- 7️⃣ 1 Display de 7 segmentos
- ⚡ Resistencias 220Ω
- ⚡ 1 LED verde y 1 LED azul
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
// 3. 7️⃣ Display 7 segmentos: Incrementar cada 5 segundos
// 4. 🔘 Botón: Cambiar a producción rápida (1 pieza/3 segundos)
// 5. 💡 Indicadores LED del estado del sistema
```
## 6. 📚 50 PREGUNTAS DE ESTUDIO
### 🔰 Conceptos Básicos (9 preguntas)
1. ❓ ¿Qué es un display de 7 segmentos y cómo funciona?
2. ❓ ¿Cuál es la diferencia entre cátodo común y ánodo común?
3. ❓ ¿Cómo se inicializa un display LCD con I2C?
4. ❓ ¿Qué ventajas tiene usar I2C para displays?
5. ❓ ¿Qué es una interrupción por hardware?
6. ❓ ¿Cómo se configuran resistencias pull-up para botones?
7. ❓ ¿Qué significa "volatile" en una variable?
8. ❓ ¿Cómo funciona millis() vs delay()?
9. ❓ ¿Cómo se controla el brillo en displays?

### 💻 Programación y Lógica (3 preguntas)
1. ❓ ¿Cómo implementar temporizadores no bloqueantes?
2. ❓ ¿Cómo manejar múltiples tareas en loop()?
3. ❓ ¿Qué son las funciones de callback?

### 🔌 Electrónica y Circuitos (6 preguntas)
1. ❓ ¿Cómo calcular resistencias para LEDs?
2. ❓ ¿Qué corriente consume un display de 7 segmentos?
3. ❓ ¿Cómo funciona el protocolo I2C?
4. ❓ ¿Qué son las resistencias de pull-up/pull-down?
5. ❓ ¿Cómo medir consumo de energía?
6. ❓ ¿Qué es la latencia en interrupciones?

## 7. ✅ LISTA DE COTEJO PARA EVALUACIÓN
### ⚙️ FUNCIONALIDAD (20 puntos)
- 📟 LCD muestra temporizador funcionando (5 pts)
- 🏭 Contador de piezas se incrementa automáticamente (5 pts)
- 7️⃣ Display 7 segmentos actualiza cada 3 segundos (5 pts)
- 🔘 Botón cambia velocidad de producción (5 pts)
- 💡 LEDs indican estado correctamente (5 pts)

### 💻 CÓDIGO Y PROGRAMACIÓN (20 puntos)
- ⏱️ Usa Timers para temporizadores no bloqueantes (5 pts)
- 🔄 Maneja correctamente interrupciones (5 pts)
- 📝 Código bien estructurado y comentado (5 pts)
- 📛 Variables nombradas apropiadamente (5 pts)

### 🔌 CIRCUITO Y MONTAJE (20 puntos)
- 🔗 Conexiones correctas y seguras (10 pts)
- 📏 Cableado ordenado e identificado (5 pts)
- 📊 Uso apropiado de resistencias (5 pts)

### 📋 DOCUMENTACIÓN Y PRUEBAS (40 puntos)
- 📄 Reporte técnico completo (10 pts)
- 🎯 Respuestas correctas en sesión Q&A (30 pts)

## 🚀 EXTENSIÓN OPCIONAL (Bonus +8 pts)
Implementar características adicionales:
- 🚨 Alarma sonora cuando se alcanzan metas de producción (5 pts)
- 💻 Comunicación serial con PC (monitor serie) (3 pts)

--- 

## みんなさん、がんばってくださいね！👊
Minnna-san, ganbatte kudasai ne!👊

