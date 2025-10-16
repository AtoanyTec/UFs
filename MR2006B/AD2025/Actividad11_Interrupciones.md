# **Actividad 11 - Interrupciones en Arduino**

## **🎯 Objetivo**

Implementar un sistema de control básico usando interrupciones para comprender su funcionamiento, ventajas y aplicaciones prácticas.

---

## **📋 Descripción de la Actividad**
Proyecto: "Contador de Eventos con Prioridad"

Crea un sistema que muestre un contador hexadecimal ascendente (0-F) y que esté atento a una interrupción de alta prioridad. Cuando se detecte una interrupción, se deberá de incrementar un contador y se deberá de visualizar su valor en el monitor serie; además de hacer parpadear un LED rojo solo una vez. 

---

## **🔧 Materiales Requeridos**

- Arduino Uno/Nano
- 1 push button
- 1 LEDs
- 1 display 7 segmentos
- 2 resistencias de 220Ω
- 1 resistencias de 10kΩ
- Protoboard
- Cables

## **📝 Entregables**
**1. Circuito Físico Funcional**
  - Montaje correcto del circuito
  - Funcionamiento demostrable

**2. Sesión de Preguntas y Respuestas**
  - Demostración práctica
  - Respuesta a preguntas

**3. Reporte Técnico Breve (2-6 páginas)**
  - Explicación del código
  - Análisis de resultados
  - Conclusiones

## **👨‍🏫 Desarrollo de la Actividad**
### **Parte 1: Circuito**
**Esquema de Conexiones:**
```text
Pulsador 1 → Pin 2 (Interrupción 0) + Resistencia pull-up
LED → Pin 13
```

### **Parte 2: Código Base para Implementar**
```cpp
volatile int contadorEmergencia = 0;
unsigned long ultimoTiempo = 0;

void setup() {
  Serial.begin(9600);
  
  // Configurar pines
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);  // LED
  
  // Configurar interrupciones
  attachInterrupt(digitalPinToInterrupt(2), contador, FALLING);
  
  Serial.println("Sistema de Interrupciones Iniciado");
}

void loop() {
  // Tarea principal del sistema (contador hexadecimal ascendente)
  

}

void emergencia() {
  contadorEmergencia++;
  Serial.println("¡EMERGENCIA! - Interrupción prioritaria");
  delay(50);  // Pequeño delay para efecto visual
}

```

## **🔍 50 Preguntas de Estudio**

### **Conceptos Básicos (10)**

1. ¿Qué es una interrupción en microcontroladores?
2. ¿Cuál es la diferencia entre polling y interrupciones?
3. ¿Por qué se considera más eficiente usar interrupciones?
4. Nombra 3 situaciones donde las interrupciones son esenciales
5. ¿Qué significa ISR?
6. ¿Cuántas interrupciones por hardware tiene Arduino Uno?
7. ¿En qué pines específicos están estas interrupciones?
8. ¿Qué ocurre con el programa principal cuando se ejecuta una ISR?
9. ¿Por qué las ISR deben ser cortas?
10. ¿Qué es el contexto de ejecución?

### **Implementación Práctica (14)**

1. ¿Para qué sirve la palabra clave volatile?
2. ¿Qué parámetros recibe attachInterrupt()?
3. Explica los diferentes modos de activación (LOW, CHANGE, RISING, FALLING)
4. ¿Por qué usamos digitalPinToInterrupt()?
5. ¿Qué ocurre si una ISR tarda demasiado tiempo?
6. ¿Cómo se desactivan las interrupciones?
7. ¿Puede una interrupción interrumpir a otra interrupción?
8. ¿Qué funciones evitas usar en una ISR y por qué?
9. ¿Cómo implementarías antirrebote en interrupciones?
10. ¿Qué es la latencia de interrupción?
11. ¿Cómo manejarías múltiples interrupciones?
12. ¿Qué ocurre si presionas dos botones simultáneamente?
13. ¿Cómo optimizarías el código de interrupciones?
14. ¿Cómo debuguear problemas con interrupciones?

### **Análisis y Aplicaciones (14)**

1. Compara ventajas/desventajas de interrupciones vs polling
2. ¿En qué aplicaciones industriales se usan interrupciones?
3. ¿Cómo afectan las interrupciones al consumo energético?
4. ¿Qué son las interrupciones por software?
5. Explica un sistema de alarma usando interrupciones
6. ¿Cómo implementarías un contador de velocidad?
7. Explica cómo usar interrupciones con encoders
8. ¿Qué consideraciones de seguridad hay con interrupciones?
9. ¿Cómo manejar prioridades entre interrupciones?
10. Describe un caso donde NO deberías usar interrupciones
11. ¿Qué son las interrupciones anidadas?
12. ¿Cómo afecta la frecuencia de interrupciones al sistema?
13. ¿Qué es el "interrupt storm"?
14. ¿Cómo probarías la confiabilidad de tu sistema?

### **Problemas y Soluciones (9)**

1. ¿Qué ocurre si olvidas volatile?
2. ¿Cómo solucionarías un contador que no cuenta correctamente?
3. ¿Por qué mi programa se bloquea con interrupciones?
4. ¿Cómo manejar eventos muy frecuentes?
5. ¿Qué hacer si necesitas procesamiento largo en una ISR?
6. ¿Cómo sincronizar datos entre ISR y loop principal?
7. ¿Qué son las condiciones de carrera?
8. ¿Por qué mi LED parpadea irregularmente?
9. ¿Cómo medir el performance de las interrupciones?

## **📊 Lista de Cotejo para Evaluación**

### **Circuito Físico (30 puntos)**
- 5 pts - Conexión correcta de pulsadores con resistencias pull-up
- 5 pts - Conexión correcta de LED con resistencia limitadora
- 5 pts - Organización y limpieza del montaje
- 5 pts - Uso correcto de pines de interrupción (2)
- 5 pts - Alimentación correcta del Arduino
- 5 pts - Circuito funcional y sin cortocircuitos

### **Programación (40 puntos)**
- 10 pts - Uso correcto de attachInterrupt()
- 5 pts - Implementación de volatile en variables compartidas
- 5 pts - ISRs cortas y eficientes
- 5 pts - Manejo correcto de modos de activación
- 5 pts - Comunicación serial para monitoreo
- 5 pts - Código bien comentado y estructurado
- 5 pts - Funcionalidad completa del sistema

### **Reporte Técnico (20 puntos)**
- 5 pts - Explicación clara del fundamento teórico
- 5 pts - Diagrama del circuito incluido
- 5 pts - Análisis de resultados y comportamiento observado
- 5 pts - Conclusiones y aprendizajes identificados

### **Sesión de Preguntas (10 puntos)**
- 5 pts - Comprensión de conceptos teóricos
- 5 pts - Capacidad para explicar y defender su implementación

## **📈 Criterios de Calificación**

- 95-100 puntos: Destacado - Circuito perfecto, código optimizado, comprensión excepcional
- 85-94 puntos: Sólido - Circuito funcional, código correcto, buena comprensión
- 75-84 puntos: Básico - Circuito básico funcionando, comprensión limitada
- 0-74 puntos: Insuficiente - No funciona o comprensión muy limitada

## **💡 Consejos para Estudiantes**
- Prueba por partes: Verifica primero el circuito sin interrupciones
- Usa el monitor serial: Es tu mejor herramienta de debug
- Experimenta: Cambia modos de activación y observa los efectos
- Documenta: Toma notas de lo que observas
- Pregunta: Si algo no funciona, analiza por qué

**Minna-san, ganbatte kudasai ne!** 👊
