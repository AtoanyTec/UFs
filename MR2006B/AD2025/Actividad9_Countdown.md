# Actividad 9: Contador Regresivo con Display 7 Segmentos y Buzzer

## 🎯 Objetivo de la Actividad
En esta actividad implementarán un contador regresivo del 9 al 0 usando un display de 7 segmentos, con la particularidad de que deben programarlo en **ambas plataformas**: el microcontrolador de 4 bits y Arduino. Al llegar a 0, el sistema debe activar un buzzer.

## 📋 Instrucciones de la Actividad

### **Parte 1: Implementación en Microcontrolador de 4 Bits**

**Requisitos:**
- Contador regresivo: 9 → 8 → 7 ... → 0
- Display de 7 segmentos cátodo común
- Tiempo: 1 segundo por dígito
- Al llegar a 0: activar buzzer por 2 segundos
- Reiniciar automáticamente a 9

**Entregables:**
1. **Archivo binario** (.bin) con las instrucciones de lenguaje máquina
2. **Simulación funcional** en el entorno de microcontrolador de 4 bits
3. **Archivo Excel** con:
   - Instrucciones en binario y mnemónicos
   - Explicación de cada sección del código

### **Parte 2: Implementación en Arduino**

**Requisitos:**
- Misma lógica del contador regresivo
- Circuito físico con display de 7 segmentos y buzzer
- Resistencias apropiadas (220Ω para segmentos, 1kΩ para buzzer)

**Entregables:**
1. **Código Arduino** (.ino) debidamente comentado
2. **Circuito físico funcional**
3. **Diagrama esquemático** de conexiones
4. **Video demostrativo** del funcionamiento

## 🔧 Implementación Técnica

### **Diagrama de Conexiones Arduino:**
```
Display 7 segmentos (cátodo común):
a -> pin 2    f -> pin 7
b -> pin 3    g -> pin 8
c -> pin 4    DP -> no conectado
d -> pin 5    Common -> GND
e -> pin 6

Buzzer:
+ -> pin 9 (con resistencia 1kΩ)
- -> GND
```

## 🔍 Preguntas de Evaluación (25 Preguntas)

**Respondan las siguientes preguntas en su reporte:**

### **Preguntas Fundamentales (1-15):**
1. ¿Cómo representaron los dígitos 0-9 en patrones binarios para el display?
2. ¿Qué estrategia usaron para el mapeo de segmentos a bits?
3. ¿Cómo implementaron la temporización de 1 segundo en el micro 4 bits?
4. ¿Qué instrucción en lenguaje máquina equivale a `tone()` en Arduino?
5. ¿Cómo manejan la transición de 0 back to 9 automáticamente?
6. ¿Qué ventajas tiene usar una tabla de búsqueda para los patrones de los dígitos?
7. ¿Cómo optimizarían el uso de memoria para almacenar los patrones?
9. ¿Cómo manejarían un display de ánodo común en cada plataforma?
9. ¿Cómo manejarían un display de cátodo común en cada plataforma?
10. ¿Qué modificaciones harían para hacer el contador ascendente?
11. ¿Qué ocurre si el buzzer se conecta sin resistencia?
12. ¿Cómo manejarían el consumo de energía en ambas implementaciones?

### **Preguntas de Análisis (16-20):**
13. ¿Cómo escalarían este sistema para dos displays contadores?
14. ¿Qué limitaciones de memoria encontraron en el micro 4 bits?
15. ¿Qué estrategias usarían para hacer el código más mantenible?

### **Preguntas Avanzadas (21-25):**
16. ¿Cómo implementarían un modo "configuración" para cambiar el tiempo?
17. ¿Cómo manejarían valores de contador mayores a 9 con displays múltiples?
18. ¿Qué consideraciones de sincronización son críticas entre display y buzzer?
19. ¿Cómo optimizarían para bajo consumo si fuera un dispositivo con batería?

## 📊 Rúbrica de Evaluación

| **Criterio** | **Destacado (95-100)** | **Sólido (85-94)** | **Básico (75-84)** | **Incipiente (0-74)** |
|--------------|-----------------------------------|----------------------------------|-------------------------------|-----------------------------------|
| **Funcionamiento Micro 4 bits** | Contador perfecto, tiempos precisos, buzzer funcional | Funciona con pequeños errores en timing o visualización | Funcionamiento básico con errores | No funciona o funciona incorrectamente |
| **Circuito Arduino** | Montaje perfecto, cableado organizado, componentes correctos | Circuito funcional con menores detalles mejorables | Funciona pero con errores de conexión | Circuito no funciona |
| **Archivos Entregables** | Completos, organizados, excelente documentación | Completos con documentación adecuada | Faltan algunos elementos o documentación básica | Incompletos o mal organizados |
| **Código Arduino** | Bien estructurado, comentado, eficiente y mantenible | Código funcional con comentarios apropiados | Funciona pero falta organización | Código confuso o ineficiente |
| **Implementación Lenguaje Máquina** | Optimizada, lógica eficiente, buen manejo de recursos | Correcta implementación funcional | Implementación básica funcional | Errores en lógica o implementación |
| **Respuestas a Preguntas** | Respuestas completas, análisis profundo, ejemplos concretos | Respuestas correctas con buena comprensión | Respuestas básicas con algunas imprecisiones | Respuestas incompletas o erróneas |
| **Conexión entre Sistemas** | Explica claramente traducciones y diferencias entre plataformas | Buen entendimiento de las diferencias | Comprensión básica de las relaciones | No establece conexiones claras |
| **Calidad de Documentación** | Profesional, clara, completa con diagramas y explicaciones | Documentación adecuada y comprensible | Documentación básica pero funcional | Documentación insuficiente |


## 📅 Fechas de Entrega

- **Entrega de circuito funcional:** 17:00 hrs 09 de octubre 2025 
- **Demostración en clase y quiz oral:** 17:00 hrs 14 de octubre 2025

## 🎯 Criterios de Éxito

- ✅ Contador regresivo 9→0 funcional en ambas plataformas
- ✅ Display muestra dígitos correctamente
- ✅ Buzzer suena al llegar a 0
- ✅ Tiempos precisos (1 segundo/dígito, 2 segundos buzzer)
- ✅ Reinicio automático correcto

**Les estaré observando...¡Demuestren su comprensión de ambos niveles de programación!**
