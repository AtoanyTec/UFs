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
1. Circuito Físico Funcional
  - Montaje correcto del circuito
  - Funcionamiento demostrable

2. Sesión de Preguntas y Respuestas
  - Demostración práctica
  - Respuesta a preguntas

3. Reporte Técnico Breve (2-6 páginas)
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
``cpp
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

void contador() {
  contadorEmergencia++;
  Serial.println("¡EMERGENCIA! - Interrupción prioritaria");
  delay(50);  // Pequeño delay para efecto visual
}

```

