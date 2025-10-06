# Actividad 8 - Semáforo

## 🎯 Objetivo de la Actividad

En esta actividad integrarás los conocimientos adquiridos sobre programación en lenguaje máquina de 4 bits con la programación en Arduino. Deberán implementar un sistema de semáforo en **ambas plataformas** y demostrar su comprensión de cómo el código de alto nivel se traduce a instrucciones de bajo nivel.

## 📋 Instrucciones de la Actividad

### **Parte 1: Implementación en Microcontrolador de 4 Bits**

**Requisitos:**
- Programa un semáforo con secuencia: VERDE → AMARILLO → ROJO
- Configura el reloj a 20 Hz
- Tiempos mínimos: Verde (3 segundos), Amarillo (1 segundo), Rojo (3 segundos)
- Usen el conjunto de instrucciones que hemos trabajado en clase

**Entregables:**
1. **Archivo binario** (.bin) con las instrucciones de lenguaje máquina
2. **Simulación funcional** en Proteus del microcontrolador de 4 bits
3. **Archivo Excel** con:
   - Instrucciones en hexadecimal
   - Mnemónicos equivalentes
   - Explicación de cada instrucción
   - Direcciones de memoria utilizadas

### **Parte 2: Implementación en Arduino**

**Requisitos:**
- Misma lógica del semáforo implementada en Arduino Uno
- Circuito físico con 3 LEDs (rojo, amarillo, verde)
- Resistencias para cada LED

**Entregables por equipo:**
1. **Código Arduino** (.ino) debidamente comentado
2. **Circuito físico funcional** que demuestre el funcionamiento
3. **Diagrama esquemático** de las conexiones

## 🔍 Preguntas de Evaluación

**Realiza un reporte y responde las siguientes 20 preguntas:**

1. ¿Cómo representaron los estados del semáforo en los 4 bits del microcontrolador?
2. ¿Qué instrucción en lenguaje máquina equivale a `digitalWrite()` en Arduino?
3. ¿Cómo implementaron los delays temporales en el microcontrolador de 4 bits?
4. ¿Qué ventajas identifican en la programación con Arduino frente al lenguaje máquina?
5. Invetiga qué ventajas existen en la programación en lenguaje máquina
6. ¿Cuántas instrucciones en lenguaje máquina equivalen aproximadamente a una línea de código en Arduino?
7. ¿Cómo optimizarían el uso de memoria en el microcontrolador de 4 bits?
8. Describan la función del registro contador de programa en ambas implementaciones
9. ¿Qué ocurre a nivel de bits cuando cambian el estado de un LED?
10. ¿Cómo manejarían errores en cada tipo de programación?
11. Expliquen el concepto de "abstracción" con ejemplos de esta actividad
12. ¿Qué modificaciones harían en ambas plataformas para agregar un botón de peatón?
13. Escriban el flujo de compilación de Arduino a lenguaje máquina
14. ¿Cómo afecta el ancho de bus (4 bits vs 8 bits) a la programación?
15. ¿Qué ventajas tiene el sistema de pines de Arduino frente a puertos de E/S del microcontroldor de 4 bits?
16. Expliquen cómo funcionan las instrucción JPI/JPC/JPZ en relación con los loops de Arduino
17. Considerando que Arduino ejecuta instrucciones a 16MHz y el microcontrolador de 4 bits a frecuencias mucho menores, ¿cómo calcularían y ajustarían los valores de los delays para lograr tiempos equivalentes?
18. Si tuvieran que escalar este proyecto para controlar 2 semáforos coordinados (por ejemplo, en una intersección), ¿cómo abordarían esta complejidad adicional en cada plataforma?
19. Investiguen y expliquen brevemente qué pasos intermedios ocurren cuando compilan código en Arduino IDE antes de llegar al código máquina que ejecuta el microcontrolador. ¿Qué papel juega el compilador AVR-GCC en este proceso?
20. ¿Cómo implementarían un "modo emergencia" que active el parpadeo simultáneo de todos los LEDs en ambas plataformas?

## 📊 Rúbrica de Evaluación

| **Criterio** | **Destacado (95-100)** | **Sólido (85-94%)** | **Básico (75-84%)** | **Incipiente (0-74%)** |
|--------------|-----------------------------------|----------------------------------|-------------------------------|-----------------------------------|
| **Funcionamiento Microcontrolador 4 bits** | Simulación funciona perfectamente, secuencia correcta y tiempos precisos | Simulación funciona con pequeños errores en tiempos | Secuencia básica funciona pero con errores importantes | No funciona o funciona incorrectamente |
| **Circuito Arduino Físico** | Circuito perfectamente implementado, limpio y organizado | Circuito funcional con pequeñas deficiencias en organización | Circuito funciona pero con errores de conexión | Circuito no funciona o presenta graves errores |
| **Archivos Entregables** | Todos los archivos completos, bien organizados y documentados | Archivos completos pero con alguna deficiencia en documentación | Faltan algunos archivos o documentación incompleta | Archivos incompletos o mal organizados |
| **Calidad Código Arduino** | Código excelentemente comentado, estructurado y eficiente | Código funcional con comentarios adecuados | Código funciona pero con pocos comentarios o desorganizado | Código confuso, sin comentarios o ineficiente |
| **Implementación Lenguaje Máquina** | Implementación optimizada, uso eficiente de memoria e instrucciones | Implementación correcta pero con oportunidades de optimización | Implementación básica funcional | Implementación incorrecta o incompleta |
| **Respuestas a Preguntas** | Respuestas completas, demostrando comprensión profunda de ambos sistemas | Respuestas correctas con comprensión adecuada de conceptos | Respuestas básicas con algunas imprecisiones | Respuestas incompletas o con graves errores conceptuales |
| **Conexión entre Ambos Sistemas** | Explica claramente las relaciones y traducciones entre ambos niveles | Identifica relaciones principales entre ambos sistemas | Relaciones básicamente descritas pero sin profundidad | No establece conexiones claras entre sistemas |
| **Calidad de Documentación** | Documentación profesional, clara y completa | Documentación adecuada y comprensible | Documentación básica pero suficiente | Documentación insuficiente o confusa |

## 📅 Fechas de Entrega

- **Entrega:** 07 de octubre 7pm
- **Demostración en clase y quiz oral:** 09 de octubre  3pm

## 💡 Consejos para el Éxito

1. **Planifiquen primero:** Diseñen el diagrama de flujo antes de programar
2. **Prueben por partes:** Verifiquen cada sección del código por separado
3. **Documenten mientras programan:** Es más fácil que hacerlo al final
4. **Revisen las conexiones físicas:** Un LED al revés puede arruinar el circuito
5. **Practiquen las explicaciones:** Deben entender qué hace cada instrucción
6. 5. **Estudien las preguntas para el quiz oral en clase:** Deben entender qué hace cada instrucción

**¡Éxito en la actividad! Estoy seguro de que demostrarán un excelente entendimiento de estos conceptos fundamentales.**
