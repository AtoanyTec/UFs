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

---

**Conexión:**

<img width="538" height="514" alt="image" src="https://github.com/user-attachments/assets/c2f9a95a-7f31-4a5a-8028-6fe106c6e1db" />

---

**Conexión del LCD al micocontrolador de 4 bits**

<img width="556" height="767" alt="image" src="https://github.com/user-attachments/assets/94dcb66b-2d42-447d-be6c-88244bf95ceb" />

---

**Pasos para inicializar el display LCD:**

<img width="357" height="399" alt="image" src="https://github.com/user-attachments/assets/d5148cc5-df3b-4f74-8e23-57d413a17307" />

Entre cada ejecución de la instrucción, encender y apagar el bit E

https://www.youtube.com/watch?v=YCcLnGh9zyQ 

---

**Pasos para escribir un caracter:**

<img width="609" height="190" alt="image" src="https://github.com/user-attachments/assets/9de72b1d-9e53-4239-8549-482d29140170" />

1. Se escriben los 4 bits más significativos correspondientes al caracter
2. Se encienden RS y E
3. Se manda un 1 a RS
4. Se escriben los 4 bits menos significativos correspondientes al carácter
5. Se encienden RS y E
6. Se manda un 1 a RS



#### **Entregables:**
1. **Archivo binario** (.bin) con las instrucciones de lenguaje máquina
2. **Simulación funcional** en el entorno de microcontrolador de 4 bits
3. **Archivo Excel** con:
   - Secuencia de inicialización completa
   - Instrucciones en binario y mnemónicos
   - Mapa de puertos y pines

### **Parte 2: Implementación en Arduino**

**Requisitos:**
- Misma lógica de inicialización sin librerías
- Circuito físico con LCD 16x2
- Mostrar una palabra diferente a "HOLA"
- Control en modo 4 bits del LCD

**Entregables:**
1. **Código Arduino** (.ino) sin librerías, debidamente comentado
2. **Circuito físico funcional**
3. **Reporte técnico** sencillo donde incluyan lo siguiente:
   - Portada
   - Introducción:  descripción breve de un LCD, su importancia y aplicaciones
   - Desarrollo: explicar con un diagrama a bloques el programa del microcontrolador de 4 bits. Incluir el diagrama esquemático de la conexión del circuito en Arduino
   - Resultados: colocar imágenes y liga del video del circuito físico funcional (no hay que explicar nada en el video)
   - Preguntas & Respuestas: Incluir las preguntas y sus respuestas
   - Conclusiones: incluir sus observaciones (hallazgos, aprendizajes) en el desarrollo del sistema en ambas plataformas
   - Referencias
4. **Video demostrativo** del funcionamiento

**Presentación**
1. Realizar una presentación del circuito físico explicando técnicamente lo siguiente:
   - Fucionmiento en el microcontrolador de 4 bits
   - Funcionmiento en Arduino
2. Contestar las preguntas realizadas por el profesor (la evaluación será individual)

## 🎯 Lista de cotejo para evaluación

- ✅ Entregables completos
- ✅ LCD se inicializa correctamente en ambas plataformas
- ✅ Circuito físico funcional
- ✅ Montaje del circuito físico
- ✅ Reporte escrito de calidad
- ✅ Texto de mínimo 4 caracteres visible y estable
- ✅ Código documentado y comprendido
- ✅ Excelene presentación en clase
- ✅ Respuestas correctas a preguntas (individual)



## 🔍 Preguntas de Evaluación (15 Preguntas)

### **Preguntas Fundamentales (1-11):**
1. ¿Por qué es necesaria la secuencia de inicialización específica del LCD?
2. Explique la diferencia entre los pines RS, EN y D4-D7
3. ¿Qué función cumple el pulso en el pin EN?
4. ¿Por qué se envía el byte en dos nibbles?
5. ¿Cómo se diferencia entre enviar un comando y un dato?
6. Explique la secuencia de inicialización en modo 4 bits
7. ¿Cómo manejarían el contraste del LCD en el circuito?
8. ¿Qué modificaciones harían para mostrar el texto en la segunda línea?
9. Explique el funcionamiento del potenciómetro de contraste
10. ¿Cómo manejarían caracteres especiales o personalizados?
11. ¿Qué ventajas tiene el modo 4 bits sobre el modo 8 bits?

### **Preguntas de Análisis (12-15):**
12. Compare la complejidad de implementación entre ambas plataformas
13. ¿Cómo optimizarían el uso de memoria para almacenar strings?
14. ¿Qué limitaciones encontraron en el micro 4 bits para controlar el LCD?
15. ¿Cómo manejarían el scrolling de texto en ambas plataformas?


## 🚀 Desafíos Técnicos

### **Microcontrolador 4 bits:**
- Secuencia de inicialización estricta
- Control de múltiples pines simultáneos

### **Arduino:**
- Implementación eficiente sin librerías

## 📅 Fechas de Entrega

- **Entrega de parte experimental:** 14 de octubre 19:00 hrs
- **Demostración en clase:** 16 de octubre 15:00 hrs

**¡En Esta actividad demostrarás control total sobre el hardware sin dependencia de librerías!**

**Minna-san, ganbatte kudasai ne!!** 👊
