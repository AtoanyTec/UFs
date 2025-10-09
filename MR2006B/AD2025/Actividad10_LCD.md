# Actividad 10: Control de LCD sin Librerías

## 🎯 Objetivo de la Actividad
En esta actividad implementarán el control directo de un display LCD 16x2 sin usar librerías, programando en **ambas plataformas**: el microcontrolador de 4 bits y Arduino. Deberán inicializar el LCD y mostrar una palabra de mínimo 4 caracteres.

## 📋 Instrucciones de la Actividad

### **Parte 1: Implementación en Microcontrolador de 4 Bits**

**Requisitos:**
- Inicializar LCD en modo 4 bits
- Configurar cursor, display y modo de entrada
- Mostrar palabra de mínimo 4 caracteres
- Usar timing preciso según datasheet del LCD

**Conexión**

<img width="538" height="514" alt="image" src="https://github.com/user-attachments/assets/c2f9a95a-7f31-4a5a-8028-6fe106c6e1db" />


**Pasos para inicializar el display LCD**

<img width="357" height="399" alt="image" src="https://github.com/user-attachments/assets/d5148cc5-df3b-4f74-8e23-57d413a17307" />


**Entregables:**
1. **Archivo binario** (.bin) con las instrucciones de lenguaje máquina
2. **Simulación funcional** en el entorno de microcontrolador de 4 bits
3. **Archivo Excel** con:
   - Secuencia de inicialización completa
   - Instrucciones en binario y mnemónicos
   - Timing de cada comando
   - Mapa de puertos y pines

### **Parte 2: Implementación en Arduino**

**Requisitos:**
- Misma lógica de inicialización sin librerías
- Circuito físico con LCD 16x2
- Mostrar palabra diferente a "HOLA"
- Control en modo 4 bits del LCD

**Entregables:**
1. **Código Arduino** (.ino) sin librerías, debidamente comentado
2. **Circuito físico funcional**
3. **Diagrama esquemático** de conexiones
4. **Video demostrativo** del funcionamiento

## 🔧 Implementación Técnica

### **Conexiones LCD 16x2 (Modo 4 bits):**

```
LCD -> Arduino
RS  -> Pin 12
EN  -> Pin 11
D4  -> Pin 5
D5  -> Pin 4
D6  -> Pin 3
D7  -> Pin 2
VSS -> GND
VDD -> 5V
V0  -> Potenciómetro 10k (contraste)
A   -> 5V (backlight)
K   -> GND (backlight)
```

### **Código de Referencia Arduino (sin librerías):**

```cpp
// Definición de pines
const int RS = 12;
const int EN = 11;
const int D4 = 5;
const int D5 = 4;
const int D6 = 3;
const int D7 = 2;

void setup() {
  // Configurar pines como salida
  pinMode(RS, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  
  // Inicializar LCD
  inicializarLCD();
  
  // Mostrar mensaje
  escribirTexto("PASS");
}

void pulsoEnable() {
  digitalWrite(EN, HIGH);
  delayMicroseconds(1);
  digitalWrite(EN, LOW);
  delayMicroseconds(50);
}

void enviarNibble(uint8_t nibble) {
  digitalWrite(D4, (nibble >> 0) & 0x01);
  digitalWrite(D5, (nibble >> 1) & 0x01);
  digitalWrite(D6, (nibble >> 2) & 0x01);
  digitalWrite(D7, (nibble >> 3) & 0x01);
  pulsoEnable();
}

void enviarByte(uint8_t dato, bool esDato) {
  digitalWrite(RS, esDato);
  
  // Enviar nibble alto
  enviarNibble(dato >> 4);
  // Enviar nibble bajo
  enviarNibble(dato & 0x0F);
}

void comandoLCD(uint8_t comando) {
  enviarByte(comando, false);
  if(comando < 4) {
    delayMicroseconds(1520); // Comandos clear y home
  } else {
    delayMicroseconds(40);   // Otros comandos
  }
}

void inicializarLCD() {
  // Esperar inicialización del LCD
  delay(50);
  
  // Secuencia de inicialización en modo 4 bits
  enviarNibble(0x03);
  delayMicroseconds(4100);
  enviarNibble(0x03);
  delayMicroseconds(100);
  enviarNibble(0x03);
  delayMicroseconds(100);
  enviarNibble(0x02); // Cambiar a modo 4 bits
  delayMicroseconds(100);
  
  // Configurar LCD
  comandoLCD(0x28); // 2 lineas, 5x8 puntos
  comandoLCD(0x0C); // Display ON, cursor OFF
  comandoLCD(0x06); // Incrementar cursor, no shift
  comandoLCD(0x01); // Clear display
  delay(2);
}

void escribirCaracter(char c) {
  enviarByte(c, true);
}

void escribirTexto(const char* texto) {
  while(*texto) {
    escribirCaracter(*texto++);
  }
}

void loop() {
  // El mensaje se muestra estáticamente
}
```

## 🔍 Preguntas de Evaluación (25 Preguntas)

### **Preguntas Fundamentales (1-15):**
1. ¿Por qué es necesaria la secuencia de inicialización específica del LCD?
2. Explique la diferencia entre los pines RS, EN y D4-D7
3. ¿Qué función cumple el pulso en el pin EN?
4. ¿Por qué se envía el byte en dos nibbles?
5. ¿Qué significa el comando 0x28 en la inicialización?
6. ¿Cómo se diferencia entre enviar un comando y un dato?
7. ¿Qué tiempo de delay es crítico después del comando clear (0x01)?
8. Explique la secuencia de inicialización en modo 4 bits
9. ¿Cómo manejarían el contraste del LCD en el circuito?
10. ¿Qué ocurre si no se respetan los tiempos de espera del datasheet?
11. ¿Cómo implementarían el cursor parpadeante?
12. ¿Qué modificaciones harían para mostrar el texto en la segunda línea?
13. Explique el funcionamiento del potenciómetro de contraste
14. ¿Cómo manejarían caracteres especiales o personalizados?
15. ¿Qué ventajas tiene el modo 4 bits sobre el modo 8 bits?

### **Preguntas de Análisis (16-20):**
16. Compare la complejidad de implementación entre ambas plataformas
17. ¿Cómo optimizarían el uso de memoria para almacenar strings?
18. ¿Qué limitaciones encontraron en el micro 4 bits para controlar el LCD?
19. ¿Cómo manejarían el scrolling de texto en ambas plataformas?
20. Analice el overhead de funciones en Arduino vs eficiencia en micro 4 bits

### **Preguntas Avanzadas (21-25):**
21. ¿Cómo implementarían una función `printf` personalizada para el LCD?
22. ¿Qué estrategias usarían para manejar múltiples LCD con recursos limitados?
23. ¿Cómo optimizarían el consumo de energía del LCD?
24. ¿Qué consideraciones de timing son críticas para la comunicación con el LCD?
25. ¿Cómo implementarían control del backlight programáticamente?

## 📊 Rúbrica de Evaluación

| **Criterio** | **Nivel 4: Excelente** | **Nivel 3: Competente** | **Nivel 2: Básico** | **Nivel 1: Insuficiente** |
|--------------|------------------------|-------------------------|---------------------|---------------------------|
| **Inicialización LCD** | Secuencia perfecta, timing preciso | Inicialización funcional con pequeños errores | Inicialización básica funciona | No inicializa correctamente |
| **Visualización Texto** | Texto claro, estable, posición correcta | Texto visible con menores imperfecciones | Texto se muestra pero con problemas | No muestra texto o ilegible |
| **Circuito Físico** | Montaje perfecto, cableado organizado | Circuito funcional y ordenado | Conexiones básicas funcionan | Circuito no funciona |
| **Código Arduino** | Optimizado, bien estructurado, comentado | Código funcional y claro | Código funciona pero desorganizado | Código erróneo o incompleto |
| **Implementación Micro 4 bits** | Lógica eficiente, manejo correcto de timing | Implementación funcional completa | Implementación básica funcional | No funciona o incompleta |
| **Documentación** | Completa con diagramas, timing, explicaciones | Documentación adecuada y clara | Documentación básica | Documentación insuficiente |
| **Respuestas Técnicas** | Análisis profundo, ejemplos concretos | Respuestas correctas y comprensivas | Respuestas básicas | Respuestas incompletas |
| **Manejo de Timing** | Timing preciso según datasheet | Timing funcional con pequeñas variaciones | Timing básico funciona | Errores graves de timing |

## 💡 Secuencia de Inicialización Crítica

**Para el microcontrolador de 4 bits:**
```
1. Esperar >40ms después de power-up
2. Enviar 0x03 tres veces con delays específicos
3. Enviar 0x02 para modo 4 bits
4. Comando Function Set: 0x28
5. Comando Display Control: 0x0C
6. Comando Entry Mode: 0x06
7. Clear Display: 0x01
```

## 🚀 Desafíos Técnicos

### **Microcontrolador 4 bits:**
- Manejo preciso de delays microsegundos
- Secuencia de inicialización estricta
- Control de múltiples pines simultáneos
- Gestión de memoria para strings

### **Arduino:**
- Implementación eficiente sin librerías
- Timing no bloqueante (opcional avanzado)
- Manejo de errores en comunicación

## 📅 Fechas de Entrega

- **Entrega de avance:** [Fecha]
- **Entrega final:** [Fecha]
- **Demostración en clase:** [Fecha]

## 🎯 Criterios de Éxito

- ✅ LCD se inicializa correctamente en ambas plataformas
- ✅ Texto de mínimo 4 caracteres visible y estable
- ✅ Timing de comandos respeta datasheet HD44780
- ✅ Código documentado y comprendido
- ✅ Circuito físico funcional

**¡Esta actividad demuestra control total sobre el hardware sin dependencia de librerías!**

**Profesor [Tu Nombre]**
